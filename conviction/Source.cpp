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
std::cout << "Are you ok?\n\ YES/NO";
std::cin >> ans;
}
void printGoodbye()
{
	std::cout << "Goodbye!";
}

void printHello() {
	std::cout << "Hello!";
}
