#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void increment(int& ptr)
{
	ptr++;
}



int main()
{
	int a = 5;
	increment(a);
	LOG(a);
}   

