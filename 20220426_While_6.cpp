#include <iostream>

using namespace std;
int main(){
    //menambahkan batas bawah
    //menambahkan batas atas
    //namun batas bawah tidak boleh lebih dari batas atas
    int batasbawah, batasatas;
    string keterangan;
    cout<<"Masukkan Batas Bawah = ";cin>>batasbawah;
    cout<<"Masukkan Batas Atas = ";cin>>batasatas;
    
    if (batasbawah < batasatas){
        while (batasbawah++ <batasatas){
        cout<<"Data ke - "<<batasbawah<<endl;
         }
    }
    else {
        cout<<"Batas Bawah Tidak Boleh Lebih dari Batas Atas";
    }
    
    return 0;
}
