#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    string keterangan;
    
    cout<<"Masukkan Nilai Tugas: ";cin>>a;
    if (a > 100){
        keterangan = "Nilai Tidak Boleh Lebih Dari 100";
        cout<<keterangan<<endl;
        return 0;
    }
     
     
     
    cout<<"Masukkan Nilai UTS: ";cin>>b;
    if (b > 100){
        keterangan = "Nilai Tidak Boleh Lebih Dari 100";
        cout<<keterangan<<endl;
        return 0;
    }
     
    
     
    cout<<"Masukkan Nilai UAS: ";cin>>c;
    if (c > 100){
        keterangan = "Nilai Tidak Boleh Lebih Dari 100";  
        cout<<keterangan<<endl;
        return 0;
    }
     
    
    if (a <= 100 || b <=100 || c <= 100){
        d= a * 0.3 + b * 0.3 + c * 0.4;
    cout<<d<<endl;
    
    }
    
    return 0;
}
