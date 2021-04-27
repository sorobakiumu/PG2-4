#pragma once

template<typename T>
class Vector2
{
public:
	//Vector2();
	//Vector2(T x, T y);

	T x;
	T y;
	Vector2 operator=(Vector2<T> pos) {
		x = pos.x;
		y = pos.y;
		return Vector2(x, y);
	};
	Vector2 operator+(const Vector2<T> pos)const {
		x += pos.x;
		y += pos.y;
		return Vector2(x, y);
	};
	Vector2 operator-(const Vector2<T> pos)const {
		x -= pos.x;
		y -= pos.y;
		return Vector2(x, y);
	};
	Vector2 operator*(const Vector2<T> pos)const {
		x *= pos.x;
		y *= pos.y;
		return Vector2(x, y);
	};
	Vector2 operator/(const Vector2<T> pos)const {
		x /= pos.x;
		y /= pos.y;
		return Vector2(x, y);
	};
	Vector2 operator/(T val) {
		x /= val;
		y /= val;
		return Vector2(x, y);
	};
};
 