#pragma once
#include "Vector2.h"

class Shape
{
public:
	Shape(Vector2<float> pos, Vector2<int> size);
	void Draw(void);
protected:
	Vector2<float> pos_;
	Vector2<int> size_;
};

