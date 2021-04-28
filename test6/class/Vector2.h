#pragma once

template<class T>
class Vector2Temple
{
public:
	//Vector2();
	//Vector2(T x, T y);

	T x;
	T y;

	//��r���Z�q
	bool operator==(const T val)const;
	bool operator!=(const T val)const;
	bool operator<=(const T val)const;
	bool operator>=(const T val) const;
	bool operator>(const T val) const;
	bool operator<(const T val) const;

	//��r���Z�q
	bool operator==(const Vector2Temple val)const;
	bool operator!=(const Vector2Temple val)const;
	bool operator<=(const Vector2Temple val)const;
	bool operator>=(const Vector2Temple val)const;
	bool operator>(const Vector2Temple val) const;
	bool operator<(const Vector2Temple val)const;


	//������Z�q
	Vector2Temple operator=(Vector2Temple<T> pos);

	//�P�����Z�q vec,vec
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
	//�P�����Z�q vec,T
	Vector2Temple operator/(T val);
	Vector2Temple operator*(T val);
	Vector2Temple operator+(T val);
	Vector2Temple operator-(T val);
};

using InVec2 = Vector2Temple<int>;

#include "details/Vector2.h"
