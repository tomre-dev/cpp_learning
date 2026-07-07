#include <iostream>



class Player
{
public:
	char name = 'A';
	int x = 0;
	int y = 0;
	int z = 0;

private:
	int strenght = 25;
	int hp = 100;


private:
	void TakeDamage(int damage)
	{
		if (damage > 0)
		{
			hp -= damage;
		}
	}
	void Damage(Player& target, int damage)
	{
		target.TakeDamage(damage);
	}
public:
	int TellHealth()
	{
		return hp;
	}
public:
	void Attack(Player& target)
	{
		if (target.x == x && target.y == y && target.z == z)
		{
			Damage(target, strenght);
		}
	}
	void Shoot(Player& target)
	{
		int cordinates_x = 0;
		int cordinates_y = 0;
		int cordinates_z = 0;
		std::cout << "------CORDINATES TO LAUNCH THE MISSILE:------" << std::endl;
		std::cout << "------CORDINATES X: " << std::endl;
		std::cin >> x;
		std::cout << "------CORDINATES Y: " << std::endl;
		std::cin >> y;
		std::cout << "------CORDINATES Z: " << std::endl;
		std::cin >> z;

		if (target.x == cordinates_x && target.y == cordinates_y && target.z == cordinates_z)
		{
			Damage(target, 10);
		}
	}
	void Move()
	{
		int input = 0;
		std::cout << "Where you wanna move " << std::endl;
		std::cout << " 1 - Right " << std::endl;
		std::cout << " 2 - Left " << std::endl;
		std::cout << " 3 - up " << std::endl;
		std::cout << " 4 - down " << std::endl;
		std::cout << " 5 - upstairs " << std::endl;
		std::cout << " 6 - downstairs " << std::endl;
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
		else if (input == 5)
		{
			z++;
		}
		else if (input == 6)
		{
			z--;
		}
	}
	void take_input(Player& target)
	{
		int input = 0;
		std::cout << name << " what are you going to do? " << std::endl;
		std::cout << " 1 - Attack - " << std::endl;
		std::cout << " 2 - Shoot - " << std::endl;
		std::cout << " 3 - Move - " << std::endl;
		std::cin >> input;

		if (input == 1)
		{
			Attack(target);
		}
		if (input == 2)
		{
			Shoot(target);
		}
		if (input == 3)
		{
			Move();
		}

	}


};



int main()
{
	Player player1;
	Player player2;
	std::cout << "-----------NAMES-----------" << std::endl;

	std::cout << "what is the name of the first PLAYER.. " << std::endl;
	std::cin >> player1.name;

	std::cout << "what is the name of the second PLAYER.. " << std::endl;
	std::cin >> player2.name;

	std::cout << "-------------------------" << std::endl;
	while (player1.TellHealth() > 0 and player2.TellHealth() > 0)

	{

		player1.take_input(player2);

		if (not (player2.TellHealth() > 0))
		{
			break;
		}

		player2.take_input(player1);

		std::cout << "-------------------------" << std::endl;



	}

	std::cout << "--------FINISH----------" << std::endl;


}