#pragma once

#include <QRect>
#include <QTimer>

class Plate
{
public:
	enum Type
	{
		Type1,
		Type2, 
		//Empty plate == Type0
		Type0
	};

	QTimer* timer;
	int timeout = 0;
	int ID = -1;

	Plate();
	bool IsPlate();

	void SetRect(QRect rect) { this->rect = rect; }
	QRect GetRect() { return rect; }

	void SetType(Type type) { this->type = type; }
	Type GetType() { return type; }

	static int GetPlateNumber() { return 2; }

private:
	QRect rect;
	Type type;
	
};