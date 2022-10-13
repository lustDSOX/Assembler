#include "Header.h"
#include "Ass.h"

main() {
	printf("%d", CompareTwo_C(2, 2));
}


int Sum_C(int a, int b) {
	return a + b;
}
int Subtract_C(int a, int b) {
	return a - b;
}
int Devide_C(int a, int b) {
	return a / b;
}
int Mult_C(int a, int b) {
	return a * b;
}
int CompareTwo_C(int a, int b) {
	if (a > b)
		return 1;
	if(a<b)
		return 2;
	if (a == b)
		return 0;
}
int CompareThree_C(int, int, int);
int Remainder_C(int, int);
int* Swap_C(int*, int, int);
