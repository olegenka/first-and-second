#pragma once
#include <fstream>
#include <iostream>
using namespace std;
#include <string>
#include <io.h>


int N = 3;

int file_size(string p) {
	ifstream file;
	file.open(p, fstream::in);
	int size = 0;
	if (!file.is_open())
	{
		std::cout << "can't open file for first read" << std::endl;
	}
	else
	{
		file.seekg(0, std::ios::end);
		size = file.tellg();
		file.close();
		
	}
	return size;
}


int* mass = new int[N];

void sort_file()
{
	for (int i = 0; i < N; i++)
	{
		string name = "sort\\" + to_string(i + 1) + ".txt";
		mass[i] = file_size(name);
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (mass[i] > mass[j])
			{
				int t = mass[i];
				mass[i] = mass[j];
				mass[j] = t;

			}


		}
	}

	for (int i = 0; i < N; i++)
	{
		std::cout << mass[i] << std::endl;
	}
	

}








