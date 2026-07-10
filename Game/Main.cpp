#include <iostream>


//before you judge this was only an experiment  i used two class that are the same jsut to experiment

struct Vec3
{
	float x;
	float y;
	float z;

	Vec3(float nx , float ny , float nz)
	{
		x = nx;
		y = ny;
		z = nz;
	}
	Vec3()
	{
		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}
	~Vec3()
	{
		std::cout << "Vec3 destructed" << std::endl;
	}

	void Sum(float nx , float ny , float nz)
	{
		x += nx;
		y += ny;
		z += nz;
	}
	void Sum(Vec3& vec3)//we pass the real one we spend less time instead of creating a copy and passing it &
	{
		x += vec3.x;
		y += vec3.y;
		z += vec3.z;
	}
	void Sub(float nx , float ny , float nz)
	{
		x -= nx;
		y -= ny;
		z -= nz;
	}
	void Sub(Vec3& vec3)//we pass the real one we spend less time instead of creating a copy and passing it &
	{
		x -= vec3.x;
		y -= vec3.y;
		z -= vec3.z;
	}
	void Change(float nx, float ny, float nz)
	{
		x = nx;
		y = ny;
		z = nz;
	}
	void Change(Vec3& vec3)
	{
		x = vec3.x;
		y = vec3.y;
		z = vec3.z;
	}
};

struct Health
{
private: // to protect and mantain this structure
	short hp;//we use less  memory more convinient
	short minhp;
	short maxhp;
public:
	Health()
	{
		hp = 20;
		minhp = 0;
		maxhp = 20;
	}

	Health(short nhp , short nminhp , short nmaxhp )
	{
		hp = nhp;
		minhp = nminhp;
		maxhp = nmaxhp;
	}

	~Health()
	{
		std::cout << "Health destructed" << std::endl;
	}

	void Log()
	{
		std::cout << " HP: " << hp << std::endl;
	}

	void Damage(short damage)
	{
		hp -= damage;
		if (hp > maxhp)
		{
			hp = maxhp;
		}
		else if (hp < minhp)
		{
			hp = minhp;
		}
	}
	void Heal(short heal)
	{
		hp += heal;
		if (hp > maxhp)
		{
			hp = maxhp;
		}
		else if (hp < minhp)
		{
			hp = minhp;
		}
	}
};

struct Strenght
{
	short strenght;

	Strenght()
	{
		strenght = 10;
	}
	Strenght(short n)
	{
		strenght = n;
	}
	~Strenght()
	{
		std::cout << "Strenght destructed" << std::endl;
	}

	void Add(short n)
	{
		strenght += n;
	}
	void Dec(short n)
	{
		strenght -= n;
	}
};

class Player
{
public:
	Vec3 position;
	Health health;
	Strenght strenght;

	void Attack(Enemy& target)
	{
		target.health.Damage(strenght.strenght);
	}
	void Attack(Player& target)
	{
		target.health.Damage(strenght.strenght);
	}
	void Move(float x , float y , float z)
	{
		position.Change(x, y, z);
	}
	void Move(Vec3 nposition)
	{
		position.Change(nposition);
	}
	
};

class Enemy
{
public:
	Vec3 position;
	Health health;
	Strenght strenght;
	void Attack(Enemy& target)
	{
		target.health.Damage(strenght.strenght);
	}
	void Attack(Player& target)
	{
		target.health.Damage(strenght.strenght);
	}
	void Move(float x, float y, float z)
	{
		position.Change(x, y, z);
	}
	void Move(Vec3 nposition)
	{
		position.Change(nposition);
	}

};

int main()
{
	Player Elonmusk;
	Player Zhang_Wei;

	Enemy Pikachu;
	Enemy ChineseHaunter;//pokemon

	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
	Elonmusk.Attack(Elonmusk);
}