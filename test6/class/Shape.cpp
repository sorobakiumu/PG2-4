#include<DxLib.h>
#include "Shape.h"

Shape::Shape(int posx,int posy,int sizex,int sizey)
{
	posx_ = posx;
	posy_ = posy;
	size_x_ = sizex;
	size_y_ = sizey;
}

void Shape::Draw(void)
{
	DrawBox(posx_, posy_, posx_+size_x_,posy_ + size_y_, 0xffaaaa, true);
}
