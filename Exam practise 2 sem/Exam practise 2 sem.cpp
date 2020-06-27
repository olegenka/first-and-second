// Классы,//управление доступом,//конструкторы/деструкторы, //перегрузка операторов, 
#include <iostream>
using namespace std;
#include <string>

int school_popularity = 0;

class Students{
	// Имя студента
	public: 
         string name;
	// Фамилия
	std::string last_name;
	// Пять промежуточных оценок студента
	int marks[5]{ 0,0,0,0,0 };
	// Итоговая оценка за семестр
	float End_score(int marks[])
	{
		float t = 0;
		for (int i = 0; i < 5; i++)
		{
			t = t + marks[i];
		}
		return t/5;
	}

	int ID; //id студента


	Students(string name = "no_name", string lastname = "no_lastname" ) // без описания равно 0 - конструктор
	{
		name = "no_name";
		last_name = "no_lastname";
		school_popularity++;
		float score = End_score(marks);
		ID = school_popularity;
	}

	~Students() // деструктор
	{
		cout << "kill student";
		school_popularity--;
	}
    private: float average_ball;
			
    
};


//template <typename T>
//T best_student(Students study_people [], int number)
//{
//  
//}


int main() // создадим пустого студента и принесем в жертву 
{    

	Students *new_people = new Students("имя" , "фамилия" );
	std::cout << school_popularity << std::endl;
	delete new_people;


	return 0;
}









