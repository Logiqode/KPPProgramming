#include <stdio.h>
#include <math.h>

int main (){
	char X1,X2,X3;
	int angka;
	//input baris pertama dalam bentuk 3 huruf
	scanf ("%c%c%c", &X1, &X2, &X3);
	//input baris kedua berupa sebuah angka dari 1-31
	scanf ("%d", &angka);
	
	//mengubah huruf menjadi nilai angkanya pada tabel ASCII
	int h1,h2,h3;
	h1 = X1;
	h2 = X2;
	h3 = X3;
	
	//cek apabila hasil penjumlahan bilangan menghasilkan huruf besar atau huruf kecil di tabel ASCII
	if (h1 + angka >= 65 && h1 + angka <= 90 || h1 + angka >= 97 && h1 + angka <= 122)  {
		if (h2 + angka >= 65 && h2 + angka <= 90 || h2 + angka >= 97 && h2 + angka <= 122) {
			if (h3 + angka >= 65 && h3 + angka <= 90 || h3 + angka >= 97 && h3 + angka <= 122) {
				h1 = h1 + angka;
				h2 = h2 + angka;
				h3 = h3 + angka;
				//hasil output apabila ketiga huruf setelah ditambahkan angka input masih berupa sebuah huruf
				printf ("Putri Ada Di Ruangan %c%c%c Raja!", h1, h2, h3);
			}
			else printf ("SALAH KASTIL NIH!");
	}
		else printf ("SALAH KASTIL NIH!");
}
	else printf ("SALAH KASTIL NIH!");
	
	return 0;
}
