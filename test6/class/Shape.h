#pragma once
#include "Vector2.h"

class Shape
{
public:
	Shape(Vector2 pos, Vector2 size);
	void Draw(void);
protected:
	Vector2 pos_;
	Vector2 size_;
};

