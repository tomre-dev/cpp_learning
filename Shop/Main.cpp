#include <iostream>


void TellArticles()
{
	std::cout << "Welcome to the shop,here is what i sell!" << std::endl;
	std::cout << "1 - sword - 60 coin" << std::endl;
	std::cout << "2 - water - 5 coin" << std::endl;
	std::cout << "3 - nuclear reactor - 90 coin" << std::endl;
	std::cout << "4 - drugs - Free" << std::endl;
}

void shop(int* ptr_money, int* ptr_number_of_drugs, int* ptr_number_of_nuclear_reactor, int* ptr_number_of_sword, int* ptr_number_of_water)
{
	TellArticles();
	int article;
	std::cout << "what you wanna buy? ";
	std::cin >> article;
	

	if (article == 1)
	{
		std::cout << "you bought article number " << article;
		*ptr_money -= 60;
		*ptr_number_of_sword +=1;
	}
	else if (article == 2)
	{
		std::cout << "you bought article number " << article;
		*ptr_money -= 5;
		*ptr_number_of_water += 1;
	}
	else if (article == 3)
	{
		std::cout << "you bought article number " << article;
		*ptr_money -= 90;
		*ptr_number_of_nuclear_reactor += 1;
	}
	else if (article == 4)
	{
		std::cout << "you bought article number " << article;
		*ptr_number_of_drugs +=1;
	}
	else
	{
		std::cout << "you wasted my time i will take 2 dollar ";
		*ptr_money -= 2;

	}
}


void player()
{
	int money = 100;
	int* ptr_money = &money;

	int number_of_drugs = 0;
	int* ptr_number_of_drugs = &number_of_drugs;

	int number_of_nuclear_reactor = 0;
	int* ptr_number_of_nuclear_reactor = &number_of_nuclear_reactor;

	int number_of_water = 0;
	int* ptr_number_of_water = &number_of_water;

	int number_of_sword = 0;
	int* ptr_number_of_sword = &number_of_sword;

	shop(ptr_money , ptr_number_of_drugs , ptr_number_of_nuclear_reactor , ptr_number_of_sword , ptr_number_of_water);
}


int main()
{
	player();
}