#include <istream>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/*
C++ Session 3 Homework
1. Compile, execute, and test the programs in this chapter.

#include <iostream>

int main() {
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;

	// build the message that we intended to write
	const std::string greeting = "Hello, " + name + "!";

	// build the second and fourth line of the output
	cnst std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	// build the first and fifth lines of the output
	const std::string first(second.size(), '*');

	// write it all
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}

2. Are the following definitions valid? Why or why not?

	const std::string hello = "Hello";
	const std::string message = hello + ", world" + "!";
	
	yes strings can be concatenate

3. Are the following definitions valid? Why or why not?
	
	see question 2
	
	const std::string exclam = "!";
	const std::string message = "Hello" + ", world" + exclam;

4. Is the following program valid? If so, what does it do? If not, why not?

no its gunna brick missing } 

#include <iostream>

int main() {
	{ const std::string s = "a string";
	  std::cout << s << std::endl;
	{ const std::string s = "another string";
	  std::cout << s << std::endl; }
	return 0;
}

5. What about this one? What if we change }} to };} in the third line
from the end? that should twerek
#include <iostream>

int main()
{
	{ const std::string s = "a string";
	  std::cout << s << std::endl;
	{ const std::string s = "another string";
	  std::cout << s << std::endl; }}
	return 0;
}

6. What does the following program do if, when it asks you for input,
you type two names (for example, Samuel Beckett)? Predict the behavior
before running the program, then try it. 
It prints the full name, nah dog it brooked, gotta use getline

#include <iostream>

int main()
{
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello. " << name
	          << std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name
	          << "; nice to meet you too!" << std::endl;
	return 0;
}

*/


void question1()
{
	cout << "Please enter your first name: ";
	string name;
	cin >> name;

	// build the message that we intended to write
	const string greeting = "Hello, " + name + "!";

	// build the second and fourth line of the output
	const string spaces(greeting.size(), ' ');
	const string second = "* " + spaces + " *";

	// build the first and fifth lines of the output
	const string first(second.size(), '*');

	// write it all
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *" << endl;
	cout << second << endl;
	cout << first << endl;
}

void question6() {
	cout << "What is your name? ";
	char name[100];
	cin.getline(name,sizeof(name));
	cout << "Hello. " << name
		<< endl << "And what is yours? ";
	cin.getline(name, sizeof(name));
	cout << "Hello, " << name
		<< "; nice to meet you too!" << endl;
}


int main() {
	
	question6();

	cout << "Press enter to continue..." << endl;
	cin.get();
}