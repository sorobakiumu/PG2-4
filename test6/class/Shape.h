#pragma once
#include "Vector2.h"

class Shape
{
public:
	Shape(Vector2<float> pos, Vector2<int> size);
	virtual void Draw(float ex = 1.0f, Vector2<float> exCenter = { 0.0,0.0 }, Vector2<int> offset = { 0,0 }, float angle = 0.0f, int color = 0xff0000)=0;
	void Draw(void);
protected:
	Vector2<float> pos_;
	Vector2<int> size_;
};

