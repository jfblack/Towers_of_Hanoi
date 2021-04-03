/* Towers of Hanoi function for Math61. Gives instructions on what order
to move disks for moving Hanoi tower. Function inspired by function found
on page 481 of Java Software Solutions: Foundations of Program Design by 
John Lewis and William Loftus (this is a horrible book, my 2 cent review).
	Jeremy F. Black Sat Apr 21 08:52:46 PDT 2001

*/

#include <iostream.h>


void towers( int n, char from, char to, char aux)
{
	static int count = 0;
	
	if( n == 1)
		cout<<++count<<"  Move a disk form "<<from<<" to "<<to<<endl;
		
	else
	{
		towers( n-1, from, aux, to);
		cout<<++count<<"  Move a disk form "<<from<<" to "<<to<<endl;
		towers(n-1, aux, to, from);
	}
	
}// function close