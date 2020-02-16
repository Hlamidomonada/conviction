#include<iostream>

int main()
{
	printHello();
	q_on();
	printGoodbye();
	return 0;
}
void q_on()
{
std::cout << "Are you ok?";
std::cout<< std::endl<< "Press "1" if Yes and "0" if No";
std::cin >> ans;
std::cout << (ans? "Great!": "Oh,may be you shold take a rest"); 
}

void printGoodbye()
{
	std::cout << "Goodbye!";
}

void printHello() {
	std::cout << "Hello!";
}
void print()
{
std::cout << "(??• ? •?) ";
}