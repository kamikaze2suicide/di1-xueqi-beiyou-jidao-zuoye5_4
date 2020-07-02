#include <stdio.h>

int getDigit(long long n);

int main(){
	long long n;
	scanf("%lld", &n);
	if(n/10==0){
		printf("The integer %lld has %d digit.", n, getDigit(n));
	}else printf("The integer %lld has %d digits.", n, getDigit(n));
	return 0;
}

int getDigit(long long n){
	if(n / 10 == 0){
		return 1;
	}else return getDigit(n/10)+1;
}
