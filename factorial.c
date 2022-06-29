#include <stdio.h>

// 팩토리얼
double factorial(int num) {
	int result = 1;
	int i = 0;

	for (i = 1; i <= num; i++) {
		result *= i; // 팩토리얼 계산 
	}

	return result;
}
