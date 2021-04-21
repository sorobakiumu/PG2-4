#pragma once
class Shape
{
public:
	Shape(int posx, int posy, int sizex, int sizey);
	void Draw(void);
protected:
	int posx_;
	int posy_;
	int size_x_;
	int size_y_;
};

