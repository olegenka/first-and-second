// Классы,//управление доступом,//конструкторы/деструкторы, //перегрузка операторов, 
#include <iostream>
using namespace std;
#include <string>
#include "virtual_gun.h"
#include <list>
#include <iterator>



int school_popularity = 0;



class Students{
	// Имя студента
	public: 
    string name;
    float score;
	int ID; //id студента
	// Фамилия
	string last_name;
	// Пять промежуточных оценок студента
	int marks[5]{ 5,5,5,5,4 };
	// Итоговая оценка за семестр
	int sum(int *B, int cout=5) 
	{
		int su = 0;
		for (int i = 0; i < cout; i++) 
		su = su + B[i];
		return(su); 
	}
	

	template <class T> float Get_score (T *B , T cout = 5)
	{
		 //std::cout << "sum(B,cout)" << sum(B, cout) << std::endl;
		 double sc = static_cast <double>(sum(B, cout)) / cout;
		 //std::cout << "sc" << sc << std::endl;
		 return sc;
		
	}



	Students(string name1 = "no_name", string lastname1 = "no_lastname" ) //  - конструктор
	{
		name = name1;
		last_name = lastname1;
		school_popularity++;
        score = Get_score(marks); 
		ID = school_popularity;
		
	}

	~Students() // деструктор
	{
		cout << "kill student" << endl;
		school_popularity--;
	}

			
    
};





int main() 
{    
	
	// студенты
	Students new_people = Students("name" , "surname" ); // создадим пустого студента
	std::cout << school_popularity << std::endl;
	std::cout << new_people.score << std::endl;
	std::cout << new_people.name << std::endl;


	Students newest = Students("I", "B");



	list <Students> School;
	School.insert(School.end(), newest);



    Big_gun gun1; 	//оружие (virtual_gun)
	Player player1;
	player1.Shoot(&gun1);


	//delete &new_people; // и принесем в жертву 


	
	

	

	return 0;
}









