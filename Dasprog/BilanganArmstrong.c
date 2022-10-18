#include <stdio.h>
#include <math.h>

int main(void) {
	int input,R3,P3,S3;
	int R,P,S;
	scanf("%d", &input);
	
	if(input / 100 >= 1){//jika input 100-999
		R = trunc(input / 100);
		P = trunc(input % 100 / 10);
		S = input % 100;
		S = S % 10;
		
		R3 = R * R * R;
		P3 = P * P * P;
		S3 = S * S * S;
		if(R3 + P3 + S3 == input)
		{printf("Merupakan Bilangan Armstrong");}
		else{printf("Bukan Merupakan Bilangan Armstrong");}
	}
		
		
	else if(input / 100 >= 0.1){ //jika input 10-99
		R = 0;
		P = trunc(input / 10);
		S = input % 10;
		
		R3 = R * R * R;
		P3 = P * P;
		S3 = S * S;
		
		if(R3 + P3 + S3 == input)
		{printf("Merupakan Bilangan Armstrong");}
		else{printf("Bukan Merupakan Bilangan Armstrong");}
	}
	
	else{
		R = 0;
		P = 0;
		S = input;
		
		R3 = R;
		P3 = P;
		S3 = S;
		if(R3 + P3 + S3 == input)
		{printf("Merupakan Bilangan Armstrong");}
		else{printf("Bukan Merupakan Bilangan Armstrong");}
		
	}
	
	return 0;
}
