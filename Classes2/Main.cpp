#include <iostream>




class Player
{
public:
	float x;
	float y;
	int hp;
	std::string name;

	void Move(int nx, int ny)
	{
		x = nx;
		y = ny;
	}
	void Tellposition()
	{
		std::cout << " X: " << x << " Y: " << y << std::endl;
	}
};


int main()
{
	Player Technoblade;
	Technoblade.x = 10;
	Technoblade.y = 10;

	Technoblade.Tellposition();

	Technoblade.Move(929, -739);

	Technoblade.Tellposition();

	Technoblade.Move(0, 0);

	Technoblade.Tellposition();


}



