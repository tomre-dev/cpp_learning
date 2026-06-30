#include <iostream>

void GenerateHeat()
{
	int a;
	int b = 50;
	for (int i = 0; i < 10000; i++)
	{
		a = b * (b / 5) + b / 3.14 * b / 2 + (b * 8);
		b = a;
	}
}

void shop(int& money, int& n_soup, int& n_water, int& n_iron, int& n_torch)
{
	int article;
	std::cout << "--------------------------SUPERMARKET----------------------------------" << std::endl;
	std::cout << "-1 soup 10$ <a soup made with tomatoes> currently you have: " << n_soup << std::endl;
	std::cout << "-2 water 5$ <simple water> currently you have: " << n_water << std::endl;
	std::cout << "-3 iron 45$ <the best ore you could find!> currently you have: " << n_iron << std::endl;
	std::cout << "-4 torch 20$ <it will let you see in the dark> currently you have: " << n_torch << std::endl;
	std::cout << "-----------------------What are you gonna buy?-------------------------" << std::endl;
	std::cin >> article;

	if (article == 1)
	{
		money -= 10;
		n_soup++;
		std::cout << "you just bought 1 soup";
	}
	else if (article == 2)
	{
		money -= 5;
		n_water++;
		std::cout << "you just bought 1 water";
	}
	else if (article == 3)
	{
		money -= 45;
		n_iron++;
		std::cout << "you just bought 1 iron";
	}
	else if (article == 4)
	{
		money -= 20;
		n_torch++;
		std::cout << "you just bought 1 torch";
	}
	else
	{
		std::cout << "ok you have some problems,just type the number" << std::endl;
		money++;//easter egg
	}
}

void work(int& money)
{
	std::cout << "work is hard?, depends what you do " << std::endl;
	std::cout << "the only job we have is contributing with global warming" << std::endl;
	std::cout << "so we will make your cpu work more and generate heat" << std::endl;

	GenerateHeat();

	std::cout << "done now you earned 25$ nothing is free" << std::endl;

	money += 25;

}

void player()
{
	int money = 100;
	int n_soup = 0;
	int n_water = 0;
	int n_iron = 0;
	int n_torch = 0;
	while (true)
	{
		int choice;
		std::cout << "what are you gonna do this day?" << std::endl;
		std::cout << "-----------------ACTIVITY----------------" << std::endl;
		std::cout << "-1- work <come on its boring>" << std::endl;
		std::cout << "-2- shop <be carefull not to spend all your money>" << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		std::cin >> choice;
		if (choice == 1)
		{
			work(money);
		}
		else if (choice == 2)
		{
			shop(money, n_soup, n_water, n_iron, n_torch);
		}
		else
		{
			std::cout << "pls just be normal" << std::endl;
		}
		std::cout << "You have " << money << "$" << std::endl;
		std::cout << "You have " << n_soup << " soup left" << std::endl;
		std::cout << "You have " << n_water << " water left" << std::endl;
		std::cout << "You have " << n_iron << " iron left" << std::endl;
		std::cout << "You have " << n_torch << " torch left" << std::endl;
	}
}

int main()

{
	player();

}