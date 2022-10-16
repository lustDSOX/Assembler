#include "Header.h"
#include "Ass.h"

main() {
	clock_t start, end;
	start = clock();

	Sum(2, 2);
	Subtract(2, 2);
	Devide(2, 2);
	Mult(2, 2);
	CompareTwo(2, 2);
	CompareThree(2, 2, 2);
	Remainder(2, 2);
	int* a = malloc(sizeof(int)*5);
	for (size_t i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	Swap(a, 3, 0);
	ShowArray(a, 5);
	
	end = clock();
	printf("start = %d  end = %d\n", start,end);
	printf("time_ass = %d\n\n", end - start);

	start = clock();
	Sum_C(2, 2);
	Subtract_C(2, 2);
	Devide_C(2, 2);
	Mult_C(2, 2);
	CompareTwo_C(2, 2);
	CompareThree_C(2, 2, 2);
	Remainder_C(2, 2);
	int* b = malloc(sizeof(int) * 5);
	for (size_t i = 0; i < 5; i++)
	{
		b[i] = i;
	}
	Swap_C(b, 3, 0);
	ShowArray(b, 5);
	end = clock();
	printf("start = %d  end = %d\n", start, end);
	printf("time_C= %d\n", end - start);
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
int CompareThree_C(int a, int b, int c) {
	if (a > b || a > c)
		return 1;
	if (b > a || b > c)
		return 2;
	if (c > b || c > a)
		return 3;
	if (a == b || a == c)
		return 0;
};
int Remainder_C(int a, int b) {
	return a % b;
}
int* Swap_C(int* a, int i, int _i) {
	int n = a[i];
	a[i] = _i;
	a[_i] = n;
}
