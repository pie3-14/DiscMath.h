#include <math.h>
#include "combinatorics.h";

// 오류 발생 시 -1 반환

// 팩토리얼
long long int fact(int num) {
	long long int result = 1;
	long long int i = 0;

	//0! = 1
	if (num == 0) { 
		result = 1;
		return result;
	}
	
	//매개변수가 음수라면
	if ( num < 0) {
		return -1;
	}
	for (i = 1; i <= num; i++) {
			result *= i; // 팩토리얼 계산 
	}
	return result;
}

// 순열
long long int pmt(int n, int r) {
	if (n == 0 || r == 0) {
		return -1;
	}
	if ( n < r ) {
		return -1;
	}
	if ( n < 0 || r < 0 ) {
		return -1;
	}
	long long int result = fact(n) / fact(n-r);
       	return result;
}

// 중복순열
long long int pdt(int n, int r) {
	if ( n == 0 || r == 0) {
		return -1;
	}
	if (n < r ) {
		return -1;
	}
	if ( n < 0 || r < 0 ) {
		return -1;
	}
	unsigned long int result = pow(n, r);
	return result;
}

// 조합
long long int cmb(int n, int r) {
	if ( n == 0 || r == 0 ) {
		return -1;
	}
        if ( n < r) {
		return -1;
	}
	if ( n < 0 || r < 0 ) {
		return -1;
	}
	long long int result = pmt(n, r)/ fact(r);
	return result;
}
