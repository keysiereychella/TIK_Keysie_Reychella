//array adalah variabel penyimpanan untuk tipe data sama
//urutan data di array dimulai dari 0 
//ditandai dengan bracket []
#include <iostream>
using namespace std;

int main (){
    string nama[] = {
        "David",
        "Kabila",
        "Bryan",
        "Sidney"
    };
    for (int i = 0; i<4; i ++){
        cout<<nama[i]<<endl;
    }
    return 0;
}
