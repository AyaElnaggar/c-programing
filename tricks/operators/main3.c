#include <stdio.h>

int main() {
	int a = 1;
	int b = 1;
	printf("b: %d \n", b); /* b: 1 */
	int c = a || --b;
	/*
		note:
		--b will not be implemented. why?
	 		a is true.
			so, there is no need to go over the second operand at all.
			the output is true anyway because of ||.
	 */
	printf("b: %d \n", b); /* b: 1 */
	printf("--b: %d \n", --b); /* --b: 0 */
	printf("--b: %d \n", --b); /* --b: -1 */

	b = 1;
	int d = a-- && --b;
	printf("a= %d, b= %d, c= %d, d= %d", a, b, c, d); // a= 0, b= 0, c= 1, d= 0

	return 0;
}
