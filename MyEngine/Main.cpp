#include "IdkEngine.h"
#include <iostream>

class Entity : public Object
{
public:

	int health = 100;
	int strenght = 10;

	void Damage(Entity& target)
	{
		target.health -= strenght;
	}

};


int main()
{
	
	Entity Pikachu;
	Entity Haunter;

	Pikachu.transform.position.Change(0, 0, 0);
	Haunter.transform.position.Change(9, 0, 0);

	Pikachu.form.radius = 0.5f;
	Haunter.form.radius = 0.5f;

	Pikachu.rigidbody.velocity.speed.Change(0.5, 0, 0);


	while (Haunter.health > 0 && Pikachu.health > 0)
	{
		Pikachu.transform.position.Sum(Pikachu.rigidbody.velocity.speed);

		if (IsColliding(Pikachu, Haunter))
		{
			Pikachu.health -= Haunter.strenght;
			Haunter.health -= Pikachu.strenght;
		}


		std::cout << Pikachu.health << " and Haunter " << Haunter.health << std::endl;

		if (Pikachu.transform.position.X  > 15)
		{
			Pikachu.rigidbody.velocity.speed.Change(-0.5, 0, 0);
		}

	
		std::cin.get();




	}
}