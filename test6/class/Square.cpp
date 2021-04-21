#include<DxLib.h>
#include "Square.h"

Square::Square(int posx, int posy, int sizex, int sizey):Shape(posx,posy,sizex,sizey)
{

}

void Square::Draw(void)
{
	DrawBox(posx_, posy_, posx_ + size_x_, posy_ + size_y_, 0xaaffaa, true);
}
