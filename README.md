# DiscreteMath.h
c 이산수학 라이브러리

# 함수
아래 모든 함수는 오류 시 -1 반환
* ## fact(int num)
입력받은 자연수의 팩토리얼 값을 계산하여 반환
* ## pmt(int n, int r)
n개에서 r개 만큼 중복없이 나열
* ## pdt(int n, int r)
n개에서 r개 만큼 중복을 허용해서 나열   
주의: 컴파일 때 -lm 키워드를 붙여야 함
* ## cmb(int n, int r)
n개에서 r개를 선택하는 경우의 수 
