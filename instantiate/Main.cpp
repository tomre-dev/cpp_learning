#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String N_name;
public:
	Entity() : N_name("Unknown") {}
	Entity(const String& name) :  N_name(name) {}

	const String& GetName() const { return N_name;  }
};



int main()
{
	int a = 2;
	int* b = new int[268435456];


	Entity* technoblade = new Entity();

	//its just like easy i understand very weel but i think  in the future it willbe worse
	//ok if you wanna fry your computer even more we can use array like this

	Entity* entity_array = new Entity[101];

	//thats cool and then every array like even if we use heap will be in a whole row so this 50 entityes will be al togheter in memory!


	//malloc will take a size 
	malloc(50);

	//so watch this its practicaly the same but new also call the constructor
	Entity* one = new Entity();
	Entity* two = (Entity*)malloc(sizeof(Entity));

	delete technoblade;
	delete[] entity_array;
	delete one;
	delete two;
}