#include <stdio.h>
#include <stdlib.h>

int factorial (int a)
{ 
  int i;
  int res = 1;
  
  for (i=1; i<a+1; i++)
	  res = res*i;
	  return res;
}

int combination(int n, int r)
{
	int div1, div2;
	
	div1 = factorial(n);
	div2 = factorial(n-r) * factorial(r);
	
	return (div1/div2);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int r;
	int div1, div2;
	int result;
	
	printf("n : ");
	scanf("%d", &n);
	printf("r : ");
	scanf("%d", &r);
	
    result = combination(n, r);
    printf("result is %i\n", result);
	
	system("PAUSE");
	return 0;
}
