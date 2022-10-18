#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/*
Terdapat sebuah gudang yang akan disimpan batu-batuan, apabila terdapat dua buah batu yang sejenis tepat bersebelahan, maka kedua batu tersebut akan self destruct
tentukan nilai kerugian dari batu dimana (nilai tabel ascii * 1000) untuk setiap batu yang self destruct. 
*/

long long int i;
int main() {
//sum awal dimulai dari nol
	char ipstr[1000005], sisa[1000005]; 
	int idx=0; 
	int pjg, hasil;
	long long int rugi=0; 
	
	//scan input
	scanf("%s", ipstr); 
	
	//menentukan huruf pertama pada string dimulai dari nol
	sisa[0]= ipstr[0]; 
	pjg = strlen(ipstr); //menentukan panjang string saat ini
	
	//mengecek apabila huruf kedua string = huruf pertama string
	for (i=1; i<pjg; i++){
		if (sisa[idx] == ipstr[i]){
			
			rugi += 2000 * sisa[idx]; //menghitung kerugian batu yang self destruct
			idx--; 
		}
		else {
			//mengecek index berikutnya
			idx++; 
			sisa[idx]= ipstr[i]; 	//menyyiapkan perbandingan idx sisa dengan i + 1 input string
		}
	}
	
	//jumlah index string sisa + 1 karena pengisian string dimnulai dari nol
	hasil = idx + 1;
	
	//mengecek apabila ada batu yang self destruct atau tidak
	if(hasil == pjg){ 
		printf("Di gudang tersisa %d batu\nWah, Jotaro Joemama tidak jadi dipecat", pjg); 
	}
	else {
		printf("Di gudang tersisa %d batu\nTotal Kerugian: %lld Dolar Imbu", hasil, rugi);
	}
return 0;
}

