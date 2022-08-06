#include <iostream>
using namespace std;
struct buku{
    string judul_buku;
    string pengarang;
    int tahun_terbit;
    int jumlah_halaman;
    int harga_buku;
};
buku mybooks;
int main(){
    mybooks.judul_buku = "The Abominable Bride";
    mybooks.pengarang = "Sir Arthur Conan Doyle";
    mybooks.tahun_terbit = 2017;
    mybooks.jumlah_halaman = 567;
    mybooks.harga_buku = 325000;

    cout<<"Salah satu koleksi buku saya :"<<endl;
    cout<<"Judul :" <<mybooks.pengarang<<endl;
    cout<<"Pengarang :" <<mybooks.pengarang<<endl;
    cout<<"Tahun terbit :" <<mybooks.tahun_terbit<<endl;
    cout<<"Jumlah halaman :" <<mybooks.jumlah_halaman<<endl;
    cout<<"Harga :" <<mybooks.harga_buku<<endl;
    return 0;
}
