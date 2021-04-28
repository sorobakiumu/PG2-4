#pragma once

template<typename T>
class Vector2
{
public:
	//Vector2();
	//Vector2(T x, T y);

	T x;
	T y;

	//��r���Z�q
	bool operator==(const T val)const {
		return (x == val && y == val);
	}
	bool operator!=(const T val)const {
		return (x != val && y != val);
	}
	bool operator<=(const T val)const {
		return (x <= val && y <= val);
	}
	bool operator>=(const T val) const {
		return (x >= val && y >= val);
	}
	bool operator>(const T val) const {
		return (x > val && y > val);
	}
	bool operator<(const T val) const {
		return (x < val&& y < val);
	}

	//��r���Z�q
	bool operator==(const Vector2 val)const {
		return (x == val.x && y == val.y);
	}
	bool operator!=(const Vector2 val)const {
		return (x != val.x && y != val.y);
	}
	bool operator<=(const Vector2 val)const {
		return (x <= val.x && y <= val.y);
	}
	bool operator>=(const Vector2 val)const {
		return (x >= val.x && y >= val.y);
	}
	bool operator>(const Vector2 val) const {
		return (x > val.x && y > val.y);
	}
	bool operator<(const Vector2 val)const {
		return (x < val.x && y < val.y);
	}
	//bool operator||(const T val)const {
	//	return (x || val.x&& y || val.y);
	//}
	//bool operato&&(const T val)const {
	//	return (x && val.x&& y && val.y);
	//}


	//������Z�q
	Vector2 operator=(Vector2<T> pos) {
		x = pos.x;
		y = pos.y;
		return *this;
	}

	//�P�����Z�q vec,vec
	Vector2 operator+(const Vector2<T>& pos)const {
		return Vector2(x + pos.x, y + pos.y);
	}
	Vector2 operator-(const Vector2<T>& pos)const {
		return Vector2(x - pos.x, y - pos.y);
	}
	Vector2 operator*(const Vector2<T>& pos)const {
		return Vector2(x * pos.x, y * pos.y);
	}
	Vector2 operator/(const Vector2<T>& pos)const {
		return Vector2(x / pos.x, y / pos.y);
	}
	Vector2& operator%(const Vector2& vec) {
		if (vec == 0) {
			return(0, 0);
		}
		return (x % vec.x, y % vec.y);
	}
	Vector2& operator+=(const Vector2& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2& operator-=(const Vector2& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2& operator*=(const Vector2& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2& operator/=(const Vector2& vec) {
		if (vec == 0) {
			return(0, 0);
		}
		x /= vec.x;
		y /= vec.y;
		return *this;
	}
	Vector2& operator%=(const Vector2& vec) {
		if (vec == 0) {
			return(0, 0);
		}
		x %= vec.x;
		y %= vec.y;
		return *this;
	}
	Vector2& operator+(const Vector2& vec) {
		return *this;
	}
	Vector2& operator-(const Vector2& vec) {
		return (-x, -y);
	}
	T& operator[](int j) {
		switch (j)
		{
		case 0:
			return x;
		case 1:
			return y;
		default:
			return x;
		}
	}
	//�P�����Z�q vec,T
	Vector2 operator/(T val) {
		if (this==0) {
			return(0, 0);
		}
		return Vector2(x / val, y / val);
	}
	Vector2 operator*(T val) {
		return Vector2(x * val, y * val);
	}
	Vector2 operator+(T val) {
		return Vector2(x + val, y + val);
	}
	Vector2 operator-(T val) {
		return Vector2(x / val, y / val);
	}
};
 