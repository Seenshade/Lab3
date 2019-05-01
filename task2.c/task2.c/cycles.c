#include <math.h>
double summ2_for(double eps) {
	double sum=0;
	for (int i=0; fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) >= eps;i++) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
	}
	return sum;
}
double summ2_while(double eps) {
	double sum=0;
	int i=0;
	while (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) >= eps) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i++;
	}
	return sum;
}
double summ2_dowhile(double eps) {
	double sum = 0;
	int i = 0;
	do{
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i++;
	} while (fabs(pow(-1, i)*(i + 1) / (pow(i, 3) + 2)) >= eps);
	return sum;
}