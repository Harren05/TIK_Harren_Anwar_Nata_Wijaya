#include <iostream>

using namespace std;

int main (){
  int angka[5][4] = {
/* [5] braket pertama untuk baris (5 baris) dan [4] kedua untuk kolom (4 kolom) */

    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
    {17, 18, 19, 20},(
  };
  for (int i = 0; i<5; i++){
      for (int j = 0 ; j<4; j++)
    {
      cout<<angka[i][j]<<" ";
    }
    cout<<endl;
 }
    return 0
    
}
