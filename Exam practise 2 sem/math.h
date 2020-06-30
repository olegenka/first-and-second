#pragma once
#include <iostream>

using namespace std;

// Определение шаблонной функции.

template <class X> void Swap(X& a, X& b)
{
	X buf = a;
	a = b;
	b = buf;


}

template <class T> string sum(T a, T b)
{
	
	string summ;
	summ = a + b;
	return summ;
}