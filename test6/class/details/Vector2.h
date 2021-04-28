#pragma once

template<class T>
bool Vector2Temple<T>::operator==(const T val) const
{
	return (x == val && y == val);
}

template<class T>
bool Vector2Temple<T>::operator!=(const T val)const {
	return (x != val && y != val);
}

template<class T>
bool Vector2Temple<T>::operator<=(const T val)const {
	return (x <= val && y <= val);
}

template<class T>
bool Vector2Temple<T>::operator>=(const T val) const {
	return (x >= val && y >= val);
}

template<class T>
bool Vector2Temple<T>::operator>(const T val) const {
	return (x > val && y > val);
}

template<class T>
bool Vector2Temple<T>::operator<(const T val) const {
	return (x < val&& y < val);
}

//î‰ärââéZéq

template<class T>
bool Vector2Temple<T>::operator==(const Vector2Temple val)const {
	return (x == val.x && y == val.y);
}

template<class T>
bool Vector2Temple<T>::operator!=(const Vector2Temple val)const {
	return (x != val.x && y != val.y);
}

template<class T>
bool Vector2Temple<T>::operator<=(const Vector2Temple val)const {
	return (x <= val.x && y <= val.y);
}

template<class T>
bool Vector2Temple<T>::operator>=(const Vector2Temple val)const {
	return (x >= val.x && y >= val.y);
}

template<class T>
bool Vector2Temple<T>::operator>(const Vector2Temple val) const {
	return (x > val.x && y > val.y);
}

template<class T>
bool Vector2Temple<T>::operator<(const Vector2Temple val)const {
	return (x < val.x&& y < val.y);
}


//ë„ì¸ââéZéq

template<class T>
Vector2Temple<T> Vector2Temple<T>::operator=(Vector2Temple<T> pos) {
	x = pos.x;
	y = pos.y;
	return *this;
}

//íPçÄââéZéq vec,vec
template<class T>
Vector2Temple<T> Vector2Temple<T>::operator+(const Vector2Temple& pos)const {
	return Vector2Temple(x + pos.x, y + pos.y);
}

template<class T>
Vector2Temple<T> Vector2Temple<T>::operator-(const Vector2Temple& pos)const {
	return Vector2Temple(x - pos.x, y - pos.y);
}

template<class T>
Vector2Temple<T> Vector2Temple<T>::operator*(const Vector2Temple& pos)const {
	return Vector2Temple(x * pos.x, y * pos.y);
}

template<class T>
Vector2Temple<T> Vector2Temple<T>::operator/(const Vector2Temple& pos)const {
	return Vector2Temple(x / pos.x, y / pos.y);
}

template<class T>
Vector2Temple<T> Vector2Temple<T>::operator%(const Vector2Temple& vec) const {
	if (vec == 0) {
		return(0, 0);
	}
	return (x % vec.x, y % vec.y);
}

template<class T>
Vector2Temple<T>&  Vector2Temple<T>::operator+=(const Vector2Temple& vec) {
	x += vec.x;
	y += vec.y;
	return *this;
}

template<class T>
Vector2Temple<T>&  Vector2Temple<T>::operator-=(const Vector2Temple& vec) {
	x += vec.x;
	y += vec.y;
	return *this;
}

template<class T>
Vector2Temple<T>&  Vector2Temple<T>::operator*=(const Vector2Temple& vec) {
	x += vec.x;
	y += vec.y;
	return *this;
}

template<class T>
Vector2Temple<T>& Vector2Temple<T>::operator/=(const Vector2Temple& vec) {
	if (vec == 0) {
		return(0, 0);
	}
	x /= vec.x;
	y /= vec.y;
	return *this;
}

template<class T>
Vector2Temple<T> & Vector2Temple<T>:: operator%=(const Vector2Temple& vec) {
	if (vec == 0) {
		return(0, 0);
	}
	x %= vec.x;
	y %= vec.y;
	return *this;
}

template<class T>
Vector2Temple<T>&  Vector2Temple<T>::operator+(const Vector2Temple& vec) {
	return *this;
}

template<class T>
Vector2Temple<T>&  Vector2Temple<T>::operator-(const Vector2Temple& vec) {
	return (-x, -y);
}

template<class T>
T&  Vector2Temple<T>::operator[](int j) {
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
template<class T>
Vector2Temple <T> Vector2Temple<T>::operator/(T val) {
	if (this == 0) {
		return(0, 0);
	}
	return Vector2Temple(x / val, y / val);
}

template<class T>
Vector2Temple <T> Vector2Temple<T>::operator*(T val) {
	return Vector2Temple(x * val, y * val);
}

template<class T>
Vector2Temple <T> Vector2Temple<T>::operator+(T val) {
	return Vector2Temple(x + val, y + val);
}

template<class T>
Vector2Temple <T> Vector2Temple<T>::operator-(T val) {
	return Vector2Temple(x / val, y / val);
}
