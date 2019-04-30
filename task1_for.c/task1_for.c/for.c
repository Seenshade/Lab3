#include <math.h>
double summ(int n) {
	double sum=0;
	for (int i = 0; i < n; i++) {
		sum = sum + pow(-1, i)*(i + 1) / (pow(i, 3) + 2);
	}
	return sum;
}