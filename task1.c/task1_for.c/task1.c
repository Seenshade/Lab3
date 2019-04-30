#include "cycles_h.h"
#include <stdio.h>
//Вариант 2

void main(void) {
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	printf("Result: %f\n", summ_for(n));
	printf("Result: %f\n", summ_while(n));
	printf("Result: %f\n", summ_dowhile(n));
	system("pause");
}