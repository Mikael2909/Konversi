
#include<iostream>
#include <conio.h>
using namespace std;
int decToHexa(int n)
{ 
    int i = 0;
    char hexaDeciNum[100];
    while(n!=0)
    { 
        int temp  = 0;
        temp = n % 16;
       
        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
               n = n/16;
    }
    for(int j=i-1; j>=0; j--)
        cout << hexaDeciNum[j];
}
int baru(int n){

    cout << "----------------------------------------------------------\n";
    cout << "  Program C++ Konversi Bilangan Desimal Ke HeksaDesimal \n";
      
    cout << "----------------------------------------------------------\n";

cout<<"  Masukkan bilangan desimal :";cin>>n;
cout<<"  bilangan heksa nya adalah = ";   
    decToHexa(n);
    return 0;
}
int hex(){
     int hexa;
       cout << "----------------------------------------------------------\n";
    cout << "  Program C++ Konversi Bilangan HeksaDesimal ke Desimal \n";
      
    cout << "----------------------------------------------------------\n";
  printf("masukkan bilangan heksa:");
  scanf("%x",&hexa);
  printf("bilangan desimalnya adalah %d \n",hexa);
  return 0;
}

int main(){ 
    
    int b,n;
   
 cout << "----------------------------------------------------------\n";
    cout << "  Program C++ Konversi Bilangan Desimal Ke HeksaDesimal dan sebaliknya \n"; 
      cout << "  1. Desimal Ke heksa \n"; 
        cout << "  2. heksa ke desimal \n"; 
        cout<<"  Pilih Menu :";
        cin>>b;
        if (b==1){
            baru(n);
        }
        if(b==2){
            hex();
        }
         
}
         


