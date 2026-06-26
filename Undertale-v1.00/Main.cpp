#include <iostream>
#include <cstdlib> 

int game_update();
int player_turn();
int monster_turn();
void Log_options();

int main()
{
	system("chcp 65001 > nul");
	game_update();
	return 0;
}

int game_update()
{
	int player_health = 100;
	int monster_health = 72;

	while (monster_health > 0 && player_health > 0)
	{
		int player_damage = player_turn();
		monster_health -= player_damage;
		
		std::cout << "\nPlayer hp: " << player_health << " Monster hp: " << monster_health << "\n\n";

		
		if (monster_health <= 0) break;

		int monster_damage = monster_turn();
		player_health -= monster_damage;
		std::cout << "\nPlayer hp: " << player_health << " Monster hp: " << monster_health << "\n\n";
	}

	std::cout << "\n======================================================\n";
	std::cout << "The Player hp: " << player_health << " | The Monster hp: " << monster_health << "\n";
	std::cout << "So figure it out who won i dont have to tell you anything.\n";
	std::cout << "===============congratulations to the monster he surerely win====================\n";

	return 0;
}

int player_turn()
{
	int choice;
	Log_options();
	std::cout << "Choose an action???";
	std::cin >> choice;

	if (choice == 1)
	{
		std::cout << "\n[Bitch] ok you attacked the monster do you feel ok?? just think about your life" << std::endl;
		return 15;
	}
	else if (choice == 2)
	{
		std::cout << "\n[Bitch] your word made the monster happy but you no\ni dont think a guy like you has a happy life\nyou sitting on a chair playing this stupid game\nyou should find a job or start programming your minigame like this" << std::endl;
		return -3;
	}
	else if (choice == 3)
	{
		std::cout << "\n[Bitch] your awful" << std::endl;
		std::cout << "the monster is crying.what do you feel happy??you should be ashamed of yourself" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "\n[Bitch] why did you press this i dindt finish to code it its to late bye\nthe monster didnt want to see you by the way" << std::endl;
		return 0;
	}
}

int monster_turn()
{
	int choice = rand() % 3 + 1;

	if (choice == 1)
	{
		std::cout << "[Monster]:: the monster attacked you!" << std::endl;
		return 12;
	}
	else if (choice == 2)
	{
		std::cout << "[Monster]:: the monster complimented you!" << std::endl;
		return -2;
	}
	else if (choice == 3)
	{
		std::cout << "[Monster]:: the monster insulted you!" << std::endl;
		return 2;
	}
	else
	{
		
		std::cout << "CRAZY ANOMALY" << std::endl;
		std::cout << "a cosmic ray flipped a binary bit" << std::endl;
		return 0;
	}
}

void Log_options()
{
	std::cout << "┌────────────────┬────────────────┐\n";
	std::cout << "│ 1 - Fight      │ 2 - Threat     │\n";
	std::cout << "├────────────────┼────────────────┤\n";
	std::cout << "│ 3 - Compliment │ 4 - Mercy      │\n";
	std::cout << "└────────────────┴────────────────┘\n";
}