#pragma once

template<typename T>

class Vector2
{
public:
	//Vector2();
	//Vector2(T x, T y);

	T x;
	T y;
	void operator=(Vector2<T> pos) {
		x = pos.x;
		y = pos.y;
	};
};
 