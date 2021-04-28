#include<DxLib.h>
#include "Shape.h"
#include "Vector2.h"

Shape::Shape(Vector2Temple<float> pos, Vector2Temple<int> size)
{
	pos_ = pos;
	size_ = size;
}

void Shape::Draw(void)
{
	DrawBox(pos_.x, pos_.y, pos_.x+size_.x,pos_.y + size_.y, 0xffffff, true);
}
