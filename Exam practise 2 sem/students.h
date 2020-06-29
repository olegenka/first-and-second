#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "virtual_gun.h"
#include <list>
#include <fstream>



int school_popularity = 0;

class Students {
	// Имя студента
public:
	string name;
	float score;
	int ID;
	string last_name;
	int marks[5]{ 5,5,5,5,4 };


	void Shoot(Gun* gun) // способность
	{

		gun->shoot();

	}

	int sum(int* B, int cout = 5)
	{
		int su = 0;
		for (int i = 0; i < cout; i++)
			su = su + B[i];
		return(su);
	}

	template <class T> float Get_score(T* B, T cout = 5) // шаблон функции
	{
		double sc = static_cast <double>(sum(B, cout)) / cout;
		return sc;

	}

	Students(string name1 = "no_name", string lastname1 = "no_lastname") // - конструктор
	{
		name = name1;
		last_name = lastname1;
		school_popularity++;
		score = Get_score(marks);
		ID = school_popularity;



	}

	~Students() // деструктор конфликтует со всем чем можно 
	{
		cout << "kill student" << endl;
		school_popularity--;
	}

	void Save() { //функция сохраняет данные студента в файл

		ofstream file;
		file.open("schol.txt", ofstream::app);

		if (!file.is_open())
		{

			cout << "can't open file for write " << endl;
		}
		else
		{
			cout << "open file for write" << endl;
			file.write((char*)this, sizeof(Students));
			file.close();
		}

		

	}

	void Read_first_and_coppy()  //чтение первого из файла - выдает ошибку но работает (?)
	{
		ifstream file;
		file.open("schol.txt" , fstream::in);

		if (!file.is_open())
		{
			cout << "can't open file for first read" << endl;
		}
		else
		{
			cout << "open file for first read " << endl;
			file.read((char*)this, sizeof(Students));
			file.close();
		}


	
	}

	void Print()
	{
		cout << name << " " << last_name << " " << ID << endl;


	}

	

};

void Read_all() //чтение всех из файла - выдает ошибку но работает (?)
{
	ifstream fil;
	fil.open("schol.txt", fstream::in);

	if (!fil.is_open())
	{
		cout << "can't open file for read all" << endl;
	}
	else
	{
		cout << "open file for read all" << endl;
		Students human;
		while (fil.read((char*)&human, sizeof(Students)))
		{
			human.Print();
		}	
		fil.close();
	}



};

