// Классы,//управление доступом,//конструкторы/деструкторы, //перегрузка операторов, 
#include <iostream>
using namespace std;
#include <string>
#include "virtual_gun.h"
#include <list>
#include <iterator>
#include "students.h"




// добавление в контейнейр в файле school








int main() 
{    
	setlocale(LC_ALL, "ru");


	Big_gun gun1; 	//оружие (virtual_gun)
	Students player1 =  Students("а", "бэ"); // создаем человека
	player1.Shoot(&gun1); // стреляем
	player1.Save();















	/*Students *player2;
	list <int> *School;

	School->push_back(5);*/



	
	

	

	return 0;
}









