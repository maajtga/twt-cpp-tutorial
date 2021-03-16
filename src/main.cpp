#include <iostream>
#include <string>
#include "firstheader.hpp"

using namespace std;

int main() { 
	
	string name;

	cout << "What is your name?: ";
	cin >> name;

	cout << NameFunction(name);
}
