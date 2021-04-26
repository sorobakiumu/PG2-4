#include<DxLib.h>
#include<math.h>
#include "Square.h"
#include"Vector2.h"

Square::Square(Vector2<float> pos, Vector2<int> size):Shape(pos,size)
{
}

//void Square::Draw(void)
//{
//	DrawBox(pos_.x, pos_.y, pos_.x + size_.x, pos_.y + size_.y, 0xffaaaa, true);
//}

Vector2<float> Rotation(Vector2<float> pos,float angle) {

	angle = angle / (3.1415 / 180);
	Vector2<float> ret;
	ret.x = pos.x * cos(angle) - pos.y * sin(angle);
	ret.y = pos.x * sin(angle) + pos.y * cos(angle);
	return ret;
}

void Square::Draw(float ex, Vector2<float> exCenter, Vector2<int> offset, float angle, int color , bool line)
{
	//DrawBox(pos_.x + exCenter.x / 2.0 * size_.x+offset.x,
	//	pos_.y + exCenter.y / 2.0 * size_.y + offset.y,
	//	pos_.x + exCenter.x / 2.0 * size_.x + size_.x * ex + offset.x,
	//	pos_.y + exCenter.y / 2.0 * size_.y + size_.y * ex + offset.y,
	//	color, line);
	

	for (float x = pos_.x + exCenter.x * size_.x; x < pos_.x + exCenter.x * size_.x + size_.x*ex; x++) {
		for (float y = pos_.y + exCenter.y * size_.y; y < pos_.y + exCenter.y * size_.y + size_.y * ex; y++) {
			Vector2<float> tmp;
			Vector2<float> tmpOffset;
			tmpOffset.x = pos_.x + size_.x/2;
			tmpOffset.y = pos_.y + size_.y/2;
			tmp.x = Rotation(Vector2<float>( x - tmpOffset.x,y - tmpOffset.y),angle).x;
			tmp.y = Rotation(Vector2<float>( x - tmpOffset.x,y - tmpOffset.y),angle).y;
			DrawPixel(tmp.x + offset.x+tmpOffset.x, tmp.y + offset.y+tmpOffset.y, color);
		}
	}
}
