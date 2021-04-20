#include<DxLib.h>
#include "Shape.h"

Shape::Shape()
{
}

void Shape::Draw(void)
{
	DrawBox(posx_, posy_, size_x_, size_y_, 0xffaaaa, true);
}
