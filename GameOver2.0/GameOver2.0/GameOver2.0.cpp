//You Better have word wrap on ;)
//Name space is like an area code. but when you use "using" it makes everything local, so you don't need an area code anymore. Don't use this when using multiple librarys as there can be multiple objects with the same name, there is however a better method demonstrated in Game Over 3.0 for situations like this. :)
// Game Over 2.0 - covers employing a "using" directive. useful when using doezens of objects without needing to type std:: or whatever namespace everytime, 
#include <iostream>
using namespace std;

int main()
{
	cout << "Game Over 2.0" << endl;
	return 0;
}