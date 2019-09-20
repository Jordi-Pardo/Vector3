#ifndef __VECTOR3_H__
#define __VECTOR3_H__
#include <iostream>

using namespace std;
template <class T>
class Vector3
{
public:
	T x, y, z;
public:
	Vector3() : x(0),y(0),z(0) {
	
	};
	Vector3(T x1, T y1) : x(x1), y(y1), z(0){

	};
	Vector3(T x1, T y1, T z1) : x(x1), y(y1), z(z1) {
		

	};

	Vector3<T> operator+(Vector3<T> vec) {
		cout << "Operador de suma" << endl;
		return Vector3<T>(vec.x + x, vec.y + y, vec.z + z);
	}

	Vector3<T> operator-(Vector3<T> vec) {
		cout << "Operador de resta" << endl;
		return Vector3<T>(vec.x - x, vec.y - y, vec.z - z);
	}

	void operator=(Vector3<T> vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}	
	bool operator==(Vector3<T> vec) {
		return (x == vec.x && y == vec.y && z == vec.z) ? true : false;
	}	

	void normalize() {
		float modul;
		modul = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		Vector3<T> unitari;
		unitari.x = x / modul;
		unitari.y = y / modul;
		unitari.z = z / modul;

		cout << "El vector unitari es (" << unitari.x << ", " << unitari.y << ", " << unitari.z << ")" << endl;
			
	}
	void zero() {
		x = 0;
		y = 0;
		z = 0;
	};
	bool is_zero() {
		return (x == 0 && y== 0 && z == 0) ? true : false;
	};
	float distance_to(Vector3<float> vec) {
		return sqrt(pow((vec.x - x), 2) + pow((vec.y - y), 2) + pow((vec.z - z), 2));

	};

	void ShowVector() {
		cout << "(" << x << "," << y << "," << z << ")" << endl;
	}


};



#endif // !__VECTOR3_H__


