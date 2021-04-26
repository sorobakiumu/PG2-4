#pragma once
#include "Shape.h"

class Vector2;

class Square :
	public Shape
{
public:
	Square(Vector2 pos, Vector2 size);
	void Draw(void);
};

