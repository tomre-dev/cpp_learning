#include <iostream>

int main()
{
    double number = 0;
    std::cout << "What is the number? tell me sir ";
    std::cin >> number;

    double guess = number / 2.0; 

    for (int i = 0; i < 10; i++)
    {
        guess = (guess + (number / guess)) / 2.0; 
    }

    std::cout << "The square roootttt is beautifull: " << guess << std::endl;
    return 0;
}