#include <stdio.h>
#include <stdlib.h>

int sumTwo (int a, int b)
{
  int result = a + b;
  return result;
}

int square (int n)
{
  return n*n;
}

int get_max (int x, int y)
{ 
  if (x>y)
   return x;
   
  else
   return y;
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	int n;
	
	a = 3;
	b = 10;
	printf("sumTwo result : %i\n", sumTwo(a,b));
	
	n = 4;
	printf("square result : %i\n", square(n));
	
	printf("get_max result : %i\n", get_max(a,b));
       
	
	system("PAUSE");
	return 0;
}
