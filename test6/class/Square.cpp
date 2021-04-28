#include<DxLib.h>
#include<math.h>
#include "Square.h"
#include"Vector2.h"

Square::Square(Vector2Temple<float> pos, Vector2Temple<int> size):Shape(pos,size)
{
}

//void Square::Draw(void)
//{
//	DrawBox(pos_.x, pos_.y, pos_.x + size_.x, pos_.y + size_.y, 0xffaaaa, true);
//}

Vector2Temple<float> Rotation(Vector2Temple<float> pos,float angle) {

	angle = angle / (3.1415 / 180);
	Vector2Temple<float> ret;
	ret.x = pos.x * cos(angle) - pos.y * sin(angle);
	ret.y = pos.x * sin(angle) + pos.y * cos(angle);
	return ret;
}


void Square::Draw(float ex, Vector2Temple<float> exCenter, Vector2Temple<int> offset, float angle, int color)
{	
	for (float x = pos_.x + exCenter.x * size_.x; x < pos_.x + exCenter.x * size_.x + size_.x*ex; x++) {
		for (float y = pos_.y + exCenter.y * size_.y; y < pos_.y + exCenter.y * size_.y + size_.y * ex; y++) {
			Vector2Temple<float> tmp;
			Vector2Temple<float> tmpOffset;
			tmpOffset.x = pos_.x + size_.x / 2;
			tmpOffset.y = pos_.y + size_.y / 2;
			tmp = Rotation(Vector2Temple<float>(x - tmpOffset.x, y - tmpOffset.y), angle);
			DrawPixel(tmp.x + offset.x+tmpOffset.x, tmp.y + offset.y+tmpOffset.y, color);
		}
	}
}
