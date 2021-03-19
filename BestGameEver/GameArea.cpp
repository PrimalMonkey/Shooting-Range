#include "GameArea.h"

GameArea::GameArea(QWidget* parent)
	: QLabel(parent)
{
	ui.setupUi(this);
    
	qsrand(0);

    background = QImage(":/BestGameEver/Resources/Background.jfif").scaled(1100, 780);
    textures << SvgToImage(QString(":/BestGameEver/Resources/shooting-target (2).svg"));
    textures << SvgToImage(QString(":/BestGameEver/Resources/explosion.svg"));

    sounds << new QSound(":/BestGameEver/Resources/Shoot.wav");
    sounds << new QSound(":/BestGameEver/Resources/Hit.wav");

    
    for (int i = 0; i < 5; i++)
    {
        plateSet(i);
    }
    ID = 5;

    connect(&plateTimer, &QTimer::timeout, this, [=]
        {
            plateSet(ID);
            ID++;
        });
    plateTimer.start(1000);

    connect(&timer, &QTimer::timeout, this, &GameArea::updateGameArea);
    timer.start(timerTick);
}

void GameArea::mousePressEvent(QMouseEvent* e)
{
        QPoint pos = e->pos();
        int x = pos.x();
        int y = pos.y();
        if (e->button() == Qt::LeftButton)
        {
            for (int i = 0; i < plates.size(); i++)
            {
                if (plates[i].GetRect().contains(x, y))
                {
                    sounds[1]->play();
                    plates.remove(i);
                    score += 100;
                    emit scoreChanged(score);
                    break;
                }
            }
           sounds[0]->play();
        }
}

void GameArea::updateGameArea()
{
    QPixmap pixmap(background.width(), background.height());
    pixmap.fill(Qt::white);
    QPainter p(&pixmap);
    p.drawImage(QPoint(0, 0), background);

    for (int i = 0; i < plates.size(); i++)
    {
        p.drawImage(plates[i].GetRect(), textures[0]);
    }

    //There is drow score SUDA SMOTRI
    p.translate(-3, -3);
    p.setPen(framePen);
    p.setBrush(frameBrush);
    p.drawRect(scoreRect);
    p.translate(scoreRect.topLeft());
    p.setFont(QFont("Arial", 30));
    p.setPen(QPen(Qt::white));
    p.drawText(10, 60, QString::number(score));

    setPixmap(pixmap);
}

QImage GameArea::SvgToImage(QString& fileName)
{
    QSvgRenderer r(fileName);
    QImage image(plateSize - plateGap * 2, plateSize - plateGap * 2, QImage::Format_ARGB32);
    image.fill(Qt::transparent);
    QPainter p(&image);
    r.render(&p, QRectF(0, 0, plateSize - plateGap * 2, plateSize - plateGap * 2));
    return image;
}

void GameArea::plateSet(int ID)
{
    int x = qrand() % background.width();
    int y = qrand() % background.height();
    Plate plate;
    if (x > 155 && y > 105)
        plate.SetRect(QRect(x, y, plateSize - plateGap * 2, plateSize - plateGap * 2));
    plate.ID = ID;
    plates << plate;
    QTimer* timer = new QTimer;
    timer->setSingleShot(true);
    timer->setProperty("ID", ID);
    plate.timer = timer;
    connect(timer, &QTimer::timeout, this, [=]() mutable
        {
            int timerID = timer->property("ID").toInt();
            for (int i = 0; i < plates.size(); i++)
            {
                if (plates[i].ID == timerID)
                    plates.remove(i);
            }
        });
    timer->start(qrand() % 8000 + 1000);
}