#include <stdio.h>
#include <math.h>

int main(void) {
	long long int x,y,max,min;
	//input berupa dua bilangan bulat
	scanf("%lld %lld", &x, &y);
	//menentukan nilai maks dan min dari kedua angka
	if(x >= y){
		max = x;
		min = y;
	}
	else if(x < y){
		max = y;
		min = x;
	}
	//mengecek apabila hasil penjumlahan merupakan bilangan genap
	if((x + y) % 2 == 0){
		//mengecek apabila hasil pengurangan (min-max ataupun max-min) merupakan bilangan genap
		if((x - y) % 2 == 0 && (y - x) % 2 == 0){
			//mengecek apabila hasil perkalian kedua bilangan merupakan bilangan genap
			if((x * y) % 2 == 0){
				//mengecek apabila angka maks dibagi min habis dibagi
				if((max % min) == 0){
					printf ("We are soulmates");
				}
				else printf("We are NOT soulmates");
			}
			else printf("We are NOT soulmates");
		}
		else printf("We are NOT soulmates");
	}
	else printf("We are NOT soulmates");
	return 0;
}
