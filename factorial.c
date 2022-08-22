#include <math.h>

// 쓸모없는 걸 만드는 중일 수도 있다 ㅎ 

// 팩토리얼
long long int factorial(int num) {
	long long int result = 1;
	long long int i = 0;

	if (num == 0) {
		result = 1;
		return result;
	}
	
	if ( num < 0) {
		return NULL;
	}
	for (i = 1; i <= num; i++) {
			result *= i; // 팩토리얼 계산 
	}
	return result;
}

// 순열
long long int permutation(int n, int r) {
	if (n == 0 || r == 0) {
		return NULL;
	}
	if ( n < r ) {
		return 0;
	}
	if ( n < 0 || r < 0 ) {
		return NULL;
	}
	long long int result = factorial(n) / factorial(n-r);
       	return result;
}

// 중복순열
long long int product(int n, int r) {
	if ( n == 0 || r == 0) {
		return NULL;
	}
	if (n < r ) {
		return 0;
	}
	if ( n < 0 || r < 0 ) {
		return 0;
	}
	unsigned long int result = pow(n, r);
	return result;
}

// 조합
long long int combination(int n, int r) {
	if ( n == 0 || r == 0 ) {
		return NULL;
	}
        if ( n < r) {
		return 0;
	}
	if ( n < 0 || r < 0 ) {
		return NULL;
	}
	long long int result = permutation(n, r)/ factorial(r);
	return result;
}
