// Классы,//управление доступом,//конструкторы/деструкторы, //перегрузка операторов, 
#include <iostream>
using namespace std;
#include <string>
class Students {
	// Имя студента
	public: string name;
	// Фамилия
	std::string last_name;
	// Пять промежуточных оценок студента
	int scores[5];
	// Итоговая оценка за семестр
	Students(int t=0) // без описания равно 0
	{
		average_ball = t;
	}
	Students(double t) // перегрузка
	{
		average_ball = t;
	}
	~Students() // деструктор
	{
		cout << "kill yourself";
	}
    private: float average_ball;
			
    
};
int main() // создадим пустого студента и принесем в жертву Коровкину
{    
	Students Students1;
	delete &Students1;
}









