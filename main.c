#include <stdio.h>
void f(void);
int main(int argc, const char *argv[])
{
	printf("hello\n");
        f();
	return 0;
}


void f(int)
{
printf("hello wang\n");
}
