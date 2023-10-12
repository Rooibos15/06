#include <stdio.h>
#include <stdlib.h>

void func1(void)
{
  int x;
  printf("func1 x is at %p\n", &x);	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	printf("mian x is at %p\n", &x);
	func1();
       
	
	system("PAUSE");
	return 0;
}
