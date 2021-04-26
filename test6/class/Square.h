#pragma once
#include "Shape.h"

class Square :
	public Shape
{
public:
	Square(Vector2<float> pos, Vector2<int> size);
	//void Draw(void);
	void Draw(float ex = 1.0f, Vector2<float> exCenter = { 0.0,0.0 }, Vector2<int> offset = {0,0}, float angle = 0.0f, int color = 0xff0000, bool line = true);
};

