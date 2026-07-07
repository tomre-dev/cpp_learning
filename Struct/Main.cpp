float sqrt(float number)//gently taken by my atomic calculator that i made its not perfect but its something
{
	float guess = number / 2.0;

	for (int i = 0; i < 10; i++)
	{
		guess = (guess + (number / guess)) / 2.0;
	}

	return guess;
}

struct Vect2
{
	float x;// i use float because its faster then double i dont think its that big of a deal in a game, i think it will be more smooth like this
	float y;

	void Sum(float sx, float sy)
	{
		x += sx;
		y += sy;
	}
	void Sub(float sx, float sy)
	{
		x -= sx;
		y -= sy;
	}
	void SumV2(Vect2 vect2)
	{
		x += vect2.x;
		y += vect2.y;
	}
	void SubV2(Vect2 vect2)
	{
		x -= vect2.x;
		y -= vect2.y;
	}
	void Scale(float number)
	{
		x *= number;
		y *= number;
	}
	float Length()
	{
		return sqrt(x * x + y * y);
	}
};


struct Vect3
{
	float x;// i also use float here 
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
	void SumV3(Vect3 vect3)
	{
		x += vect3.x;
		y += vect3.y;
		z += vect3.z;
	}
	void SubV3(Vect3 vect3)
	{
		x -= vect3.x;
		y -= vect3.y;
		z -= vect3.z;
	}
	void Scale(float number)
	{
		x *= number;
		y *= number;
		z *= number;
	}
	float Length()
	{
		return sqrt(x * x + y * y + z * z);// i presume its like this idk i only knew the first one 2d but i never tried with 3 i just dont know i think its okay like this 
	}
};


// now i will create a player with 3dimensionaly data lets see if i can idk how to do this but i will try
// i learned that private its just something to write code it doesnt affect like cheat ecc in my game remeneber that i did i tried to do something like that because i thought it was more secure but no

class Player
{
public:
	//variables
	Vect3 position;
	char name = 'A';
	//functions
	void Move(Vect3 new_vect3)
	{
		position = new_vect3;
	}


};