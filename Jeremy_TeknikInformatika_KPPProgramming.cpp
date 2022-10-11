// NAMA     : JEREMY JAMES
// NRP      : 5025221139
// JURUSAN  : TEKNIK INFORMATIKA

#include<iostream>
#include<cmath>

#define g 10 //Gravitasi = 10 m / s^2
#define pi 3.1415 //pi = 3.1415

using namespace std;

int main() {
    int v0,jarak,loss;	//kecepatan awal, jarak, loss
    float vtan;			//kecepatan tangensial

    cin >> v0;
    
    if (v0 >= 1 && v0 <= 10){
    		v0 = v0 - 1;
    		loss = 1;
      }
      
    else if (v0 >= 11 && v0 <=20){
        v0 = v0 - 3;
        loss = 3;
      }
      
    else{
    	v0 = v0 - 5;
        loss = 5;
      }

    jarak = pow(v0,2) * sin(90 * pi / 180) / g;
    vtan = loss + sqrt((jarak * g) / sin(90 * pi / 180));
    
    
    cout<<jarak<<" "<<vtan<<endl;
    return 0;
}
