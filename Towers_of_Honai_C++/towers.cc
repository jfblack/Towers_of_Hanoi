/* Towers of Honai fuction for Math61. Gives instruions on what order
to move disks for monig hnoi tower. Fuction inspired by fuction found
on page 481 of Java Software Solutions: Foundations of Prgram Design by John Lewis and William Loftus (this is a horbbel book, my 2 cent reviwe).
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