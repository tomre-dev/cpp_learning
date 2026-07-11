#include <iostream>
#include <string>


struct Vec3
{
	float x, y, z;

	Vec3()
		: x(10), y(11), z(12) {
	}
};

int main()
{
	//this are allocations

	//stack
	//int value = 5;

	////heap
	//int* hvalue = new int;
	////dereference
	//*hvalue = 5;


	//ok ora allocation di un array ancora non lo conossco 

	//stack allocation
	//int array[5];//ha detto 5 elements vmq si lo vedo in futuro

	//okay ora heap allocation
	//int* harray = new int[5];


	//ok ora un vector 3 che quello lo conosco bene 

	//stack allocation
	//Vec3 position;

	//heap allocation
	//Vec3* position = new Vec3;
	//ha detto anche che si mette delle parentesi cosi
	//	Vec3* position = new Vec3();

	// ora diamo delle value

	{
		int value = 5;
		int array[5];
		array[0] = 1;
		array[1] = 2;
		array[2] = 3;
		array[3] = 4;
		array[4] = 5;
		Vec3 position;
	}

	int* hvalue = new int;
	*hvalue = 5;



	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;

	Vec3* hposition = new Vec3;

	delete hvalue;
	delete[] harray;//he have a different delete idk why i think you can put a number here if you dont wanna delete the entire array and i think im right
	delete hposition;




}