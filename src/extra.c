#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i = 1;
	int summeK = 0;
	int summeK2 = 0;

	printf("  n | n*n  | s(n) |  q(n)\n"
			"----+------+------+-------\n");

	for (; i < 11; i++) {
		summeK += i;
		summeK2 += i * i;
		printf("%3i |%4i  |%5i |%5i\n", i, i*i, summeK, summeK2);
		/*printf("%3i |", i);
		printf("%4i  |", i*i);
		printf("%5i |", summeK);
		printf("%5i \n", summeK2);*/
	}
}
