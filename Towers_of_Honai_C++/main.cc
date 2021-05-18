/* Outputs a list of moves for a Towers of Hanoi game, given an initial number of disks. 
*/
/* This file's purpose is to call towers(), defined in a separate file.
*/

// Setup
#include <iostream>
#include<string>	
void towers(int n, char from, char to, char aux);
void runtowers(int);

// Main() calls towers(), all else is setups and checks.
int main(int argc, char* argv[]){
	int disknum{3};							// default number of disks
	bool runtowers_q{false};		// run runtowers()? 
	bool isnum_q{false};				// is argv[1] a number? 
	using std::cout;
	using std::string;
	
	if(argc==1){
		// use the default number of disks, answer runtowers_q with a yes
		runtowers_q=true;
	}

	if(argc==2) {
		// checks that the first command line input is a number, if so answer runtowers_q with a yes.
		
		// Setup
		string numdisk_s=argv[1];	// number of disks imputed by user in string form

		// Check
		// looping over a string to check that each character is a digit turns out
		//  to be slightly tricky. Treating it as a C string works fine:
		//// for (int i = 0; i < teststring.length(); i++)		the classic C++ loop
		//// for (int i = 0; teststring[i]; i++)		note the end of string null terminates the loop
		// For-each loop works great:
		//// for(char letter:numdisk_s)			//// for(char& letter:numdisk_s)		char can be replaced with auto			// Making the variable a constant doesn't work, nor dose using the string iterator
		//// for(const char letter:numdisk_s)
		//// for (string::iterator iter=teststring.begin(); iter!=teststring.end(); iter++)  
		//		A dereferenced string iterator is not a char, nor a string. It *acts* like a string
		//		 in most situations, but it's not an array so &iter[0] doesn't return a char, 
		//		 and it's not a char so isdigit chokes when used.
		isnum_q=true;
		for(char& letter:numdisk_s){
			if(!isdigit(letter)){
				isnum_q=false;
			}
		}

		// Answer runtowers_q
		if(isnum_q){
			disknum=stoi(numdisk_s);  // computer would choke long before max int value became an issue
			runtowers_q=true;
		}
		else {
			runtowers_q=false;
		}
	
	}

	if(argc>2) {
		runtowers_q=false;
		cout<<"To may inputs, just a number please"<<std::endl;
	}

	// The point of main()
	if(runtowers_q){
		runtowers(disknum);
	}
	else{
		cout<<"Bad input, try again";
	}
}

// Wrapper for towers(), so I only need care about the number of disks elseware in the code
void runtowers(int n){
	char from='A', to='B', aux='C';
	towers(n, from, to, aux);
}