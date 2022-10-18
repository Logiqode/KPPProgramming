#include <stdio.h>

int main(void) {
	int L1,L2,L3,L4,op;
	//input dalam angka biner
	scanf("%d %d %d %d", &L1, &L2, &L3, &L4);
	//konversi biner ke desimal
	op = L1 * 8 + L2 * 4 + L3 * 2 + L4 * 1;
	//output kondisi 0-9
	if(op == 0)printf("1 1 1 1 1 1 0 ");
	else if(op == 1)printf("0 1 1 0 0 0 0");
	else if(op == 2)printf("1 1 0 1 1 0 1");
	else if(op == 3)printf("1 1 1 1 0 0 1");	
	else if(op == 4)printf("0 1 1 0 0 1 1");
	else if(op == 5)printf("1 0 1 1 0 1 1");
	else if(op == 6)printf("1 0 1 1 1 1 1");
	else if(op == 7)printf("1 1 1 0 0 0 0");
	else if(op == 8)printf("1 1 1 1 1 1 1");
	else if(op == 9)printf("1 1 1 1 0 1 1");
	else printf("1 1 1 1 1 1 0 ");
	return 0;
}
