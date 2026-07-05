#include <iostream>



class Player
{
public:
	char name = 'A';// i initialized because if i didnt it was an error so yes
	int hp = 100;
	int strenght = 15;
	int x = 0;
	int y = 0;
public:

	void Attack(Player& target)
	{
		if (target.x == x && target.y == y)
		{
			target.hp -= strenght;
			std::cout << name << " Attacked " << target.name << " and hit him with a " << strenght << " hp punch" << std::endl;
		}
		else
		{
			std::cout << name << " Tried to attack " << target.name << " but he was to far" << std::endl;
		}
	}

	void Move()
	{
		int input = 0;
		std::cout << "Where you wanna move " << std::endl;
		std::cout << " 1 - Right ->" << std::endl;
		std::cout << " 2 - Left  <- " << std::endl;
		std::cout << " 3 - up " << std::endl;
		std::cout << " 4 - down " << std::endl;
		std::cin >> input;

		if (input == 1)
		{
			x++;
		}
		else if (input == 2)
		{
			x--;
		}
		else if (input == 3)
		{
			y++;
		}
		else if (input == 4)
		{
			y--;
		}

		std::cout << name << " Moved To " << " X " << x << " Y " << y << std::endl;
	}

	void TellStats()
	{
		std::cout << "--------------STATS------------------" << std::endl;
		std::cout << "NAME: " << name << std::endl;
		std::cout << "HP: " << hp << std::endl;
		std::cout << "STRENGHT: " << strenght << std::endl;
		std::cout << "X: " << x << std::endl;
		std::cout << "Y: " << y << std::endl;
		std::cout << "-------------------------------------" << std::endl;

	}

	void take_input(Player& target)
	{
		int input = 0;
		std::cout << name << " what are you going to do? " << std::endl;
		std::cout << " 1 - Attack - " << std::endl;
		std::cout << " 2 - Move - " << std::endl;
		std::cin >> input;
		if (input == 1)
		{
			Attack(target);
		}
		if (input == 2)
		{
			

		}

	}


};






int main()
{
	Player player1;
	Player player2;
	
	std::cout << "what is the name of the first PLAYER.. " << std::endl;
	std::cin >> player1.name;

	std::cout << "what is the name of the second PLAYER.. " << std::endl;
	std::cin >> player2.name;

	std::cout << "-------------------------" << std::endl;
	while (player1.hp > 0 and player2.hp > 0)
	
	{
		std::cout << "---------ACTION-----------" << std::endl;

		player1.take_input(player2);

		if (not (player2.hp > 0))
		{
			break;
		}

		player2.take_input(player1);

		std::cout << "---------STASTS-----------" << std::endl;

		player1.TellStats();
		player2.TellStats();
	}

	std::cout << "--------FINISH----------" << std::endl;


}