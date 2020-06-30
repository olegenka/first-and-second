#pragma once
#include <iostream>
#include <string.h>
#include <string>
using namespace std;


template <class T> string FindString(T d) //используется запретная магия
{
	string s = to_string(d);
	return s;

};



string Int_to_string(int x)
{
		int d;
		string s = "";
		char c = 0;
		while (x != 0)
		{
			d = x % 10;
			x = x / 10;
			c = (char)(d + 48);
			s = c + s;
		}

		return s;

};


string Double_to_String(double x)
{
	string need_s = "";
	int lim = 0;
	int y = x;
	string s = "";

	while (y < x)
	{
		x = x * 10;
		y = x;
		lim++;
	}
	s = Int_to_string(y);
	lim = s.length() - lim;
	for (int i =0 ; i < lim; i++)
	{
		need_s = need_s + s[i];

	}
	need_s = need_s + ".";
	for (int i = lim; i < s.length(); i++)
	{
		need_s = need_s + s[i];

	}


	











	return need_s;
};