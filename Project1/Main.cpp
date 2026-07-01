#include <iostream>

#define LOG(x,y) std::cout << x << y << std::endl;



class Player
{
public:
	int name = 0;
	int x = 0;
	int y = 0;
	int strenght = 10;
	int health =  100;
	int defense = 1;
public:
	void Attack(Player& target)
	{
		target.health -= strenght * target.defense;
		std::cout << name << " punched " << target.name << " and now the health of " << target.name << " is " << target.health;
	}
	void LogAll()
	{
		LOG(name,"  is its name!")
		LOG(x," x");
		LOG(y," y");
		LOG(strenght," strenght");
		LOG(health," health");
		LOG(defense," defense");
	}
};



int main()
{
	Player Tommaso;
	Player ElonMusk;
	ElonMusk.LogAll();
	Tommaso.LogAll();
	while (Tommaso.health > 0 and ElonMusk.health > 0)
	{
		Tommaso.Attack(ElonMusk);
		ElonMusk.Attack(Tommaso);
	}
	
	
	

}