#include <iostream>
#include <string>

class Entity
{
public:
	virtual std::string GetName()
	{
		return "Entity";
	}
};

class Player : public Entity
{
private:
	std::string N_name;
public:
	Player(const std::string& name)
		: N_name(name) {}

	std::string GetName() override 
	{
		return N_name;
	}
};


void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}

int main() 
{
	Entity* e = new Entity;
	std::cout << e->GetName() << std::endl;
	PrintName(e);



	Player* p = new Player("Tommaso");
	std::cout << p->GetName() << std::endl;
	PrintName(p);

	


}