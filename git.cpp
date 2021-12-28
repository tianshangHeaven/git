#include<stdio.h>
int plus(int x, int y) {
	return x + y;
}
int main()
{
	__asm
	{
		mov eax, eax
	}
	plus(1, 2);
	//	getchar();
	//	printf("µÚÒ»¿Î\n");
	//	getchar();
	return 0;


}