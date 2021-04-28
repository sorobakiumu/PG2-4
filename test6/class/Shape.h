#pragma once
#include "Vector2.h"

class Shape
{
public:
	Shape(Vector2Temple<float> pos, Vector2Temple<int> size);
	virtual void Draw(float ex = 1.0f, Vector2Temple<float> exCenter = { 0.0,0.0 }, Vector2Temple<int> offset = { 0,0 }, float angle = 0.0f, int color = 0xff0000)=0;
	void Draw(void);
protected:
	Vector2Temple<float> pos_;
	Vector2Temple<int> size_;
};

