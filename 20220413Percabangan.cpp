#include <iostream>
using namespace std;

int main(){
     /*
     jika nilai dengan sisa bagi (%) = 0, bilangan genap
     jika bukan, bilangan ganjil
     */
    int nilai;
    cout<<"Masukkan Nilai = ";cin>>nilai;
    if (nilai % 2 == 0){
        cout<<"Bilangan Genap";
    }
    else{
        cout<<"Bilangan Ganjil";
    }
}





#include <iostream>
using namespace std;

int main(){
     /*
     jika nilai >=90 sangat memuaskan
     jika nilai >=80 memuaskan
     jika nilai >=75 cukup
     Jika nilai <75 tidak lulus
     jika nilai tidak boleh > 100 dan < 0 keterangan diluar jangkauan.
     */
    int nilai;
    cout<<"Masukkan Nilai = ";cin>>nilai;
    if (nilai < 0){
        cout<<"Kekurangan";
    }
    else if (nilai > 100){
        cout<<"Kelebihan";
    }
    else if (nilai >= 90){
        cout<<"sangat memuaskan";
    }
    else if (nilai >= 80){
        cout<<"memuaskan";
    }
    else if (nilai < 75){
        cout<<"Tidak Lulus";
    }
    else if (nilai >= 75){
        cout<<"cukup";
    }
    
}





#include <iostream>
using namespace std;

int main(){
     /*
     jika nilai >=90 sangat memuaskan
     jika nilai >=80 memuaskan
     jika nilai >=75 cukup
     Jika nilai <75 tidak lulus
     jika nilai tidak boleh > 100 dan < 0 keterangan diluar jangkauan.
     */
     /* operator logika:
     || (atau), Jika salah satu benar cth a dan b. jika a atau b benar maka hasilnya benar
     && (dan), harus kedua keduanya benar, baru benar
     */
     
    int nilai;
    cout<<"Masukkan Nilai = ";cin>>nilai;
    if ( nilai > 100 || nilai < 0){
        cout<<"diluar jangkauan";
    }
    else if (nilai >= 90){
        cout<<"sangat memuaskan";
    }
    else if (nilai >= 80){
        cout<<"memuaskan";
    }
    else if (nilai >= 75){
        cout<<"cukup";
    }
    else{
        cout<<"Tidak Lulus";
    }
    
}





#include <iostream>
using namespace std;

int main(){
     /*
     jika nilai >=90 sangat memuaskan
     jika nilai >=80 memuaskan
     jika nilai >=75 cukup
     Jika nilai <75 tidak lulus
     jika nilai tidak boleh > 100 dan < 0 keterangan diluar jangkauan.
     */
     /* operator logika:
     || (atau), Jika salah satu benar cth a dan b. jika a atau b benar maka hasilnya benar
     && (dan), harus kedua keduanya benar, baru benar
     */
     
    int nilai;
    string keterangan;
    cout<<"Masukkan Nilai = ";cin>>nilai;
    if ( nilai > 100 || nilai < 0){
        keterangan = "diluar jangkauan";
    }
    else if (nilai >= 90){
        keterangan = "sangat memuaskan";
    }
    else if (nilai >= 80){
        keterangan = "memuaskan";
    }
    else if (nilai >= 75){
        keterangan = "cukup";
    }
    else{
        keterangan = "Tidak Lulus";
    }
    
    cout<<keterangan;
}

