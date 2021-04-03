/* Main function to run towers of Hanoi function.
	Jeremy F. Black Math 61 Sat Apr 21 08:58:46 PDT 2001
*/

void towers(int, char, char, char);

int main()
{
	int n = 3;
	char from = 'A', to = 'B', aux = 'C';
	
	towers(n, from, to, aux);

	return 0;
	
}// main close