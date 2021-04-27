#pragma once
#include "Shape.h"

class Square :
	public Shape
{
public:
	Square(Vector2<float> pos, Vector2<int> size);
	//void Draw(void);
	/// <summary>
	/// �`��
	/// </summary>
	/// <param name="ex">�g�嗦</param>
	/// <param name="exCenter">�g��̒��S���W</param>
	/// <param name="offset">�}�`�����炷</param>
	/// <param name="angle">�p�x</param>
	/// <param name="color">�F</param>
	void Draw(float ex = 1.0f, Vector2<float> exCenter = { 0.0,0.0 }, Vector2<int> offset = {0,0}, float angle = 0.0f, int color = 0xff0000);
};

