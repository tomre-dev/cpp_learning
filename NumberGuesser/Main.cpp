#include <cstdlib>
#include <ctime>
#include <iostream>


int NumberGenerator()
{ 
srand(time(0));
int secretnumber = rand() % 100 + 1;
return secretnumber;
}

int main()
{
	int secretnumber = NumberGenerator();

	int guess;
	int remaining_guess = 8;

	while (remaining_guess != 0)
	{ 
	std::cout << "choose a number 1-100 ";
	std::cin >> guess;

	if (secretnumber == guess)
	{
		std::cout << "You won the number was " << secretnumber << " and you guessed it " << std::endl;
		break;
	}
	else if (secretnumber < guess)
	{
		std::cout << "the guess is to hight " << std::endl;
	}
	else
	{
		std::cout << "the guess is to low " << std::endl;
	}
	remaining_guess--;
	std::cout << "you have " << remaining_guess << " remaining guesses " << std::endl;
	}


}



