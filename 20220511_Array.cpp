/* array variable yang menampung tipe data sama 
 urutan data array dimulai dari 0
*/ 

#include <iostream>

using namespace std;

int main()
{
    string nama[7] = {
        "David", 
        "Kabila", 
        "Bryan", 
        "Sydney",
        "Gracia",
        "Keysie",
        "Yoel"
        
    };
    
    for (int i = 0; i<7 ; i++){
    cout<<nama[i]<<endl;
    }
    return 0;
}
