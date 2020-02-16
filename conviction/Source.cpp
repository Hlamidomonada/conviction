#include<iostream>

int main()
{
	std::cout << "Text #1"<< std::endl;
	std::cout << "Text #2"<< std::endl;

	return 0;
}
void q_on( bool ans )
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
