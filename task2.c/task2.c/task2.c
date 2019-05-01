#include <stdio.h>
#include "cycles_h.h"

void main(void) {
	double eps;
	printf("Input eps: ");
	scanf("%Lf", &eps);
	printf("Result summ2_for: %Lf\n", summ2_for(eps));
	printf("Result summ2_while: %Lf\n", summ2_while(eps));
	printf("Result summ2_dowhile: %Lf\n", summ2_dowhile(eps));
	system("pause");
}