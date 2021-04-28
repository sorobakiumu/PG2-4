#pragma once

template<class T>
class Vector2Temple
{
public:
	//Vector2();
	//Vector2(T x, T y);

	T x;
	T y;

	//î‰ärââéZéq
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

	//î‰ärââéZéq
	bool operator==(const Vector2Temple val)const {
		return (x == val.x && y == val.y);
	}
	bool operator!=(const Vector2Temple val)const {
		return (x != val.x && y != val.y);
	}
	bool operator<=(const Vector2Temple val)const {
		return (x <= val.x && y <= val.y);
	}
	bool operator>=(const Vector2Temple val)const {
		return (x >= val.x && y >= val.y);
	}
	bool operator>(const Vector2Temple val) const {
		return (x > val.x && y > val.y);
	}
	bool operator<(const Vector2Temple val)const {
		return (x < val.x && y < val.y);
	}
	//bool operator||(const T val)const {
	//	return (x || val.x&& y || val.y);
	//}
	//bool operato&&(const T val)const {
	//	return (x && val.x&& y && val.y);
	//}


	//ë„ì¸ââéZéq
	Vector2Temple operator=(Vector2Temple<T> pos) {
		x = pos.x;
		y = pos.y;
		return *this;
	}

	//íPçÄââéZéq vec,vec
	Vector2Temple operator+(const Vector2Temple& pos)const {
		return Vector2Temple(x + pos.x, y + pos.y);
	}
	Vector2Temple operator-(const Vector2Temple& pos)const {
		return Vector2Temple(x - pos.x, y - pos.y);
	}
	Vector2Temple operator*(const Vector2Temple& pos)const {
		return Vector2Temple(x * pos.x, y * pos.y);
	}
	Vector2Temple operator/(const Vector2Temple& pos)const {
		return Vector2Temple(x / pos.x, y / pos.y);
	}
	Vector2Temple operator%(const Vector2Temple& vec) const{
		if (vec == 0) {
			return(0, 0);
		}
		return (x % vec.x, y % vec.y);
	}
	Vector2Temple& operator+=(const Vector2Temple& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2Temple& operator-=(const Vector2Temple& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2Temple& operator*=(const Vector2Temple& vec) {
		x += vec.x;
		y += vec.y;
		return *this;
	}
	Vector2Temple& operator/=(const Vector2Temple& vec) {
		if (vec == 0) {
			return(0, 0);
		}
		x /= vec.x;
		y /= vec.y;
		return *this;
	}
	Vector2Temple& operator%=(const Vector2Temple& vec) {
		if (vec == 0) {
			return(0, 0);
		}
		x %= vec.x;
		y %= vec.y;
		return *this;
	}
	Vector2Temple& operator+(const Vector2Temple& vec) {
		return *this;
	}
	Vector2Temple& operator-(const Vector2Temple& vec) {
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
	//íPçÄââéZéq vec,T
	Vector2Temple operator/(T val) {
		if (this==0) {
			return(0, 0);
		}
		return Vector2Temple(x / val, y / val);
	}
	Vector2Temple operator*(T val) {
		return Vector2Temple(x * val, y * val);
	}
	Vector2Temple operator+(T val) {
		return Vector2Temple(x + val, y + val);
	}
	Vector2Temple operator-(T val)	{
		return Vector2Temple(x / val, y / val);
	}
};


