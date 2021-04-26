#include<DxLib.h>
#include "Square.h"
#include"Vector2.h"

Square::Square(Vector2 pos, Vector2 size):Shape(pos,size)
{

}

void Square::Draw(void)
{
	DrawBox(pos_.x, pos_.y, pos_.x + size_.x, pos_.y + size_.y, 0xaaffaa, true);
}
