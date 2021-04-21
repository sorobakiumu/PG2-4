#pragma once
#include "Shape.h"
class Square :
	public Shape
{
public:
	Square(int posx, int posy, int sizex, int sizey);
	void Draw(void);
};

