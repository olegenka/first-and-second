#pragma once
#include <iostream>
using namespace std;


class Gun {

public:
	virtual void shoot()
	{
		std::cout << "bang" << std::endl;

	}



};

class Big_gun : public Gun {
public:
	virtual void shoot()
	{

		std::cout << "big_bang" << std::endl;

	}

};




