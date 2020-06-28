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
	// Фамилия
	std::string last_name;
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



	int ID; //id студента


	Students(string name = "no_name", string lastname = "no_lastname" ) // без описания равно 0 - конструктор
	{
		name = "no_name";
		last_name = "no_lastname";
		school_popularity++;
        score = Get_score(marks); 
		ID = school_popularity;
		
	}

	~Students() // деструктор
	{
		cout << "kill student";
		school_popularity--;
	}
    private: float average_ball;
			
    
};





int main() 
{    
	
	// студенты
	Students *new_people = new Students("имя" , "фамилия" ); // создадим пустого студента
	std::cout << school_popularity << std::endl;
	std::cout << new_people->score << std::endl;
	list <Students> spisok;
	spisok.insert(spisok.end(), new_people);
    Big_gun gun1;
	Player player1;
	player1.Shoot(&gun1);
	delete new_people; // и принесем в жертву 

	//оружие (virtual_gun)
	
	

	

	return 0;
}









