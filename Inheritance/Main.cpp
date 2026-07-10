#include <iostream>


class Entity
{
public:
	float X;
	float Y;


	void Move(float x , float y)
	{
		X = x;
		Y = y;
	}
};

class Player : Entity
{
	const char* name;

	void PrintName()
	{
	std::cout << name << std::endl;
	}

};

int main()
{

}