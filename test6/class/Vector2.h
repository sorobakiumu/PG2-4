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
	bool operator==(const T val)const;
	bool operator!=(const T val)const;
	bool operator<=(const T val)const;
	bool operator>=(const T val) const;
	bool operator>(const T val) const;
	bool operator<(const T val) const;

	//î‰ärââéZéq
	bool operator==(const Vector2Temple val)const;
	bool operator!=(const Vector2Temple val)const;
	bool operator<=(const Vector2Temple val)const;
	bool operator>=(const Vector2Temple val)const;
	bool operator>(const Vector2Temple val) const;
	bool operator<(const Vector2Temple val)const;


	//ë„ì¸ââéZéq
	Vector2Temple operator=(Vector2Temple<T> pos);

	//íPçÄââéZéq vec,vec
	Vector2Temple operator+(const Vector2Temple& pos)const;
	Vector2Temple operator-(const Vector2Temple& pos)const;
	Vector2Temple operator*(const Vector2Temple& pos)const;
	Vector2Temple operator/(const Vector2Temple& pos)const;
	Vector2Temple operator%(const Vector2Temple& vec) const;
	Vector2Temple& operator+=(const Vector2Temple& vec);
	Vector2Temple& operator-=(const Vector2Temple& vec);
	Vector2Temple& operator*=(const Vector2Temple& vec);
	Vector2Temple& operator/=(const Vector2Temple& vec);
	Vector2Temple& operator%=(const Vector2Temple& vec);
	Vector2Temple& operator+(const Vector2Temple& vec);
	Vector2Temple& operator-(const Vector2Temple& vec);
	T& operator[](int j);
	//íPçÄââéZéq vec,T
	Vector2Temple operator/(T val);
	Vector2Temple operator*(T val);
	Vector2Temple operator+(T val);
	Vector2Temple operator-(T val);
};

using InVec2 = Vector2Temple<int>;

#include "details/Vector2.h"
