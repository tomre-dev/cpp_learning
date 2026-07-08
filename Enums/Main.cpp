#include <iostream>


enum Life_state : bool
{
	dead = false,//i think i could just use 0 and 1 but its better like this more readable wait false = 0 NULL = 0 ahhaha i could say dead = NULL alive = 1
	alive = true// so bool is only 1byte its better

};

enum Brain_state : int
{
	standing,
	searching_food,
	escaping,
	attacking,
	walking
};

struct Vec3
{
	float x;
	float y;
	float z;

	void Sum(float sx, float sy, float sz)
	{
		x += sx;
		y += sy;
		z += sz;
	}
	void Sub(float sx, float sy, float sz)
	{
		x -= sx;
		y -= sy;
		z -= sz;
	}
	void SumV3(Vec3 vec3)
	{
		x += vec3.x;
		y += vec3.y;
		z += vec3.z;
	}
	void SubV3(Vec3 vec3)
	{
		x -= vec3.x;
		y -= vec3.y;
		z -= vec3.z;
	}
	void Scale(float number)
	{
		x *= number;
		y *= number;
		z *= number;
	}
};


class Entity
{
public:
	Vec3 position = {0,0,0};
	Vec3 speed = { 0,0,0 };
	int strenght = 10;
	int health = 100;
	float hunger = 20;
	char name = 'A';
	bool Is_Fighting = false;

	
	Life_state life_state = alive;
	Brain_state brain_state = standing;

	void Move()
	{
		position.SubV3(speed);
		hunger -= 0.01;
	}
	void Attack(Entity& target)//i remember the referenceeeee !!!
	{
		target.health -= strenght;
		target.Is_Fighting = true;
	}

	void Is_Alive()
	{
		if (health > 0)
		{
			life_state = alive;
		}
		else
		{
			life_state = dead;
		}
	}
	
	void Thinking()
	{
		//so here we will decide a move (brain_state) with the information we have 

		//i coded this number inside the code but know that you can just pass the number like variables to make the enemy more customizable but i will not 
		if (hunger >= 15 && health > 90 && !Is_Fighting)
		{
			brain_state = walking;
		}
		else if (hunger < 10 && !Is_Fighting)
		{
			brain_state = searching_food;
		}
		else if (health < 50 && Is_Fighting )
		{
			brain_state = escaping;
		}
		else if (health >= 50 && Is_Fighting )
		{
			brain_state = attacking;
		}
		else
		{
			brain_state = standing;
		}
		
	}

	void Executing(Entity& target)// here we take the uptaded data and we apply the move that the entity thought
	{
		if (brain_state == standing)
		{
			speed = { 0 , 0 , 0 };
			Move();
		}
		else if (brain_state == searching_food)
		{
			speed = { 0.01 , 0 , 0 };//idk i feel confident if the sheep move like this it will find something!!
			Move();
		}
		else if (brain_state == escaping)
		{
			speed = { 0.01 , 0 , 0.01 };//now she is trying to fly isnt that cool!
			Move();
		}
		else if (brain_state == attacking)
		{
			speed = { 0.01 , 0 , 0.2 };//yeah idk i wanted to move where the target was but its math and i dont want to do that for now it will fly even more
			Move();
			Attack(target);
		}
		else if (brain_state == walking)
		{
			speed = { 0.05 , 0.7 , -0.08 };//ok everyone is flying now she will dig underrr yess
			Move();
		}
	}

	void Update(Entity& target)
	{
		Is_Alive();
		if (life_state == alive)
		{
			Thinking();
			Executing(target);
		}
		
	}


};


int main()
{
	Entity cow;
	Entity sheep;
	while(cow.life_state == alive && sheep.life_state == alive)
	{
		cow.Update(sheep);
		sheep.Update(cow);//yeah there is a better method to do this but i am programming for a wwhile so!! i dont even know how to program well so i will leave this 
	}
}
//i dont even know if this is goung to compile i dont want to find out