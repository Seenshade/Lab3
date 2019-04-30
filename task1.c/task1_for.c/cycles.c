#include <math.h>
double summ_for(int n) {
	double sum=0;
	for (int i = 0; i < n; i++) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
	}
	return sum;
}
double summ_while(int n) {
	double sum = 0;
	int i = 0;
	while (i < n) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i = i + 1;
	}
	return sum;
}
double summ_dowhile(int n) {
	double sum = 0;
	int i = 0;
	do {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
		i = i + 1;
	} while (i<n);
	return sum;
}