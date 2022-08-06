#include <iostream>
using namespace std;
int main (){

float ideal, tinggi;
cout<<"\t"<<"PROGRAM MENGHITUNG BERAT BADAN IDEAL\n";
cout<<"Tinggi anda (cm):";
cin>>tinggi;
ideal = (tinggi-100)-(0.1*(tinggi-100));
cout<<"Berat badan ideal anda adalah (kg) :"<<ideal<<endl;

return 0;

}
