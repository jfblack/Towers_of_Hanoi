#include <iostream>
#include <cctype>
#include <string>

 

using namespace std;

int main(int argc, char* argv[]) {
	//if (isdigit(argv[1]&)) {
	//	cout << "Yep, is a diget " << argv[1];}
	//else {
	//	cout << "Nope, it's not a diget " << argv[1];}

	int testnum = '1';
	if (isdigit(testnum)) {
		cout << "Yep, is a diget " << testnum <<"\r";
	}
	else {
		cout << "Nope, it's not a diget " << testnum << "\r";
	}

	cout << "\r";


	// I have found three ways to loop through a string one 
	// charachter at a time.
	//// for (int i = 0; i < teststring0.length(); i++)
	//// for (int i = 0; teststring1[i]; i++)
	// The one I use, below, is the most C++ way to do it.
	//// for (string::iterator iter = teststring2.begin(); iter != teststring2.end(); iter++)
	string teststring2 = "orange";
	for (string::iterator iter = teststring2.begin(); iter != teststring2.end(); iter++) {
		cout << " " << *iter;
	}

	string teststring0 = "yellow";
	for (unsigned int i = 0; i < teststring0.length(); i++) {
		cout << " " << teststring0[i];
	}

	cout << "\n";

	string teststring1 = "blue";
	for (int i = 0; teststring1[i]; i++) {
		cout << " " << teststring1[i];
	}

	cout << "\n";
	
	cout << "\nHello!" << " World!" <<"\nIt's nice to see you!"<<endl;

	string text="8Hell";
	cout<<isdigit(text.front())<<endl;

	cout<<stoi("7")<<endl;
	//cout<<type(typeid('s').name());

	cout<<typeid(*text.begin()).name()<<endl;

}