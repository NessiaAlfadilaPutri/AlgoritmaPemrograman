#include<iostream>
using namespace std;
int main(){
    float celcius, reamur, fahrenheit, kelvin;
    int pilih;

    cout<<"\t"<<"PROGRAM KONVERSI SUHU "<<endl;

    cout<<"Masukkan pilihan :";
    cin>>pilih;

    if(pilih == 1){
    cout<<"Masukkan suhu dalam fahrenheit :";
    cin>>fahrenheit;
    cout<<"Konversi dalam celcius :"<<(fahrenheit-32)*5/9;
    }
    if(pilih == 2){
    cout<<"Masukkan suhu dalam kelvin :";
    cin>>kelvin;
    cout<<"Konversi suhu dalam celcius :"<<(kelvin-273.15);
    }
    if(pilih == 3){
    cout<<"Masukkan suhu dalam reamur :";
    cin>>reamur;
    cout<<"Konversi suhu dalam celcius :"<<(reamur*5/4);
    }

    return 0;
}

