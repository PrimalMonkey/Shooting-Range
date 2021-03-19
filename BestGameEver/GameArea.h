#pragma once

#include <QtWidgets>
#include <QtMultimedia>
#include <QtSvg>
#include <QTimer>

#include "ui_GameArea.h"
#include "Plate.h"

class GameArea : public QLabel
{
	Q_OBJECT

public:
	GameArea(QWidget* parent = Q_NULLPTR);
	void SetScore(int value) { score = value; }
	int GetScore() { return score; }

protected:
	void mousePressEvent(QMouseEvent* e);

signals:
	void scoreChanged(int value);

private:
	Ui::GameArea ui;

	QVector<Plate> plates;
	int plateSize = 80;
	double plateGapPercent = 0.08;
	int plateGap = plateSize * plateGapPercent;
	QTimer timer;
	void updateGameArea();
	int timerTick = 3;
	QImage SvgToImage(QString& fileName);
	QImage background;
	QList<QImage> textures;
	Plate* selectedPlate = nullptr;
	Plate* secondSelectedPlate = nullptr;
	bool isFirstSelected = false;
	QTimer deleteTimer;
	void plateSet(int ID);
	int ID = 0;
	QTimer plateTimer;
	QList<QSound*> sounds;
	int score = 0;
	int areaGap = 5; //25
	int prevScore = 0;
	QRect scoreRect = QRect(areaGap, areaGap, 150, 100); //150 100
	QPen framePen = QPen(QColor(255, 255, 255, 160), 4);
	QBrush frameBrush = QBrush(QColor(160, 160, 255, 64));
};