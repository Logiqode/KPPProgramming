#include <stdio.h>
#include <math.h>

//Sn aritmatika pangkat 3 dari 1^3 sampai n^3

int main(void) {
long long ip, a, op;
scanf("%lld", &ip);
op = pow(((ip + pow(ip,2)) / 2), 2);
printf("%lld", op);
	return 0;
}

