#include <iostream>



int main()
{
	//game_update
	
	
	



	//game_Log

	return 0;
}


int game_update()
{
	player_turn;

	monster_turn;

}


int game_Log()
{


}


int player_turn()
{
	int choice;
	Log_options();
	std::cin >> choice;
	if (choice == 1)
	{
		int attack_damage = rand() % 6 + 15;
		return 1, attack_damage;
	}
	else if (choice == 2)
	{
		return 2, 0;
	}
	else if (choice == 3)
	{
		return 3, 0;
	}
	else if (choice == 4)
	{
		return 4, 0;
		std::cout << "why did you press this i dindt finish to code it its to late bye";
		std::cin.get();
	}

}

int monster_turn()
{


}

void Log_options()
{
	std::cout << "┌────────────────┬────────────────┐\n";
	std::cout << "│ 1 - Fight      │ 2 - treath     │\n";
	std::cout << "├────────────────┼────────────────┤\n";
	std::cout << "│ 3 - compliment │ 4 - Mercy      │\n";
	std::cout << "└────────────────┴────────────────┘\n";
}