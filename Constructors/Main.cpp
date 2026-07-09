#include <iostream>


class Player
{
public:
	float x ;
	float y ;

	Player()
	{
		std::cout << "constructed entity " << std::endl;
		x = 0.0f;
		y = 0.0f;
	}

	Player(float nx,float ny)
	{
		std::cout << "constructed entity " << std::endl;
		x = nx;
		y = ny;
	}

	~Player()
	{
		std::cout << "destrutted entity " << std::endl;

	}

	void Print()
	{
		std::cout << " X " << x << " Y " << y << std::endl;
	}

};


void Function()/// we use a function because at the end we destroy it automaticaly
{
	Player Dream;
	Dream.Print();
}

int main()
{
	
	Function();


}