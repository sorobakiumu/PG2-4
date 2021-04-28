#pragma once
#include "Shape.h"

class Square :
	public Shape
{
public:
	Square(Vector2Temple<float> pos, Vector2Temple<int> size);
	//void Draw(void);
	/// <summary>
	/// •`‰æ
	/// </summary>
	/// <param name="ex">Šg‘å—¦</param>
	/// <param name="exCenter">Šg‘å‚Ì’†SÀ•W</param>
	/// <param name="offset">}Œ`‚ğ‚¸‚ç‚·</param>
	/// <param name="angle">Šp“x</param>
	/// <param name="color">F</param>
	void Draw(float ex = 1.0f, Vector2Temple<float> exCenter = { 0.0,0.0 }, Vector2Temple<int> offset = {0,0}, float angle = 0.0f, int color = 0xff0000);
};

