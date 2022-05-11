//array adalah variabel penyimpanan untuk tipe data sama
//urutan data di array dimulai dari 0 
//ditandai dengan bracket []
//kalau [] berari datanya unlimited, kalau misal [4] berarti datanya hanya 4
#include <iostream>
using namespace std;

int main (){
    string nama[7] = {
        "David",
        "Kabila",
        "Bryan",
        "Sidney",
        "Gracia",
        "Keysie",
        "Yoel"
    };
    for (int i = 0; i<7; i ++){
        cout<<nama[i]<<endl;
    }
    return 0;
}
