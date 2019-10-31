#include <stdio.h>
void ForFun(void) __attribute__ ((constructor));
/**
 * ForFun - prints a string before execute main function
 * Not return
 */
void ForFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
