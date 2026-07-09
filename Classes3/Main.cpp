#include <iostream>


class Player
{
public:
	float x;
	float y;
	int hp;
	std::string name;

	void Teleport(float nx, float ny)
	{
		x = nx;
		y = ny;
	}

};

int main()
{
	int money;
	Player Technoblade;

	Technoblade.name = "Technoblade";
	Technoblade.Teleport(0, 0);
	Technoblade.Teleport(4, 9);


}