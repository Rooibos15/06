#include <stdio.h>
#include <stdlib.h>


void square1 (int a)
{
  a = a*a;
}

int square2 ( int n)
{ 
  return (n*n);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 2;
	int n = 2;
	
	square1(a);
	printf("a = %i\n", a);
	
	n = square2(n);
	printf("a = %i\n", n);
	
	
	system("PAUSE");
	return 0;
}
