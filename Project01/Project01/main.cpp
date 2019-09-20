#include "Vector3.h"
#include <iostream>
using namespace std;

void main() {
	Vector3<float> vec(2, 4);
	Vector3<float> vec2(3, 5);
	Vector3<float> vec3(0,0,0);
	
	
	//Suma Vectores
	vec = vec2 + vec;
	vec.ShowVector();

	//Resta Vectores
	vec2 = vec - vec2;
	vec2.ShowVector();

	//Comparacion
	bool check;
	check = (vec == vec2);
	check == 1 ? cout << "Igual" << endl : cout << "Distinto" << endl;

	vec = vec2;
	check = (vec == vec2);
	check == 1 ? cout << "Igual" <<endl : cout << "Distinto" << endl;

	//IsZero
	check = vec.is_zero();
	check == 1 ? cout << "Es zero: " : cout << "No es zero: ";
	vec.ShowVector();	
	
	//IsZero and Zero
	vec.zero();
	check = vec.is_zero();
	check == 1 ? cout << "Es zero: " : cout << "No es zero: ";
	vec.ShowVector();

	//Normalize
	vec2.normalize();
	vec2.ShowVector();

	//Distance
	float distance = vec.distance_to(vec2);
	cout << "Distance: " << distance << endl;
	
}