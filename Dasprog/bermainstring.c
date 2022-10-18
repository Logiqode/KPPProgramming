#include <stdio.h>
#include <string.h>
 
 /* 
 contoh input :
 4
 abcde
 contoh output :
 eabcd
 */
 
int main(){
	char str[100005];
    int gerak;
    //input berupa jumlah perpindahan
    scanf("%d", &gerak);
    //input berupa sebuah string 
    scanf("%s", str);
 
    gerak = gerak % strlen(str);
    //menentukan berapa huruf yang perlu pindah (jika gerak > strlen, maka akan kembali ke posisi awal)
 
    for(int i = gerak; i < strlen(str) + gerak; i++){
        if(i == strlen(str)){
            i = 0;
        }
        printf("%c", str[i]);
        if(i == gerak - 1){
            break;
        }
    }
 
    return 0;
}

