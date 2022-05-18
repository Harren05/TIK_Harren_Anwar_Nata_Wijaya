#include <iostream>

using namespace std;

int
main ()
{
  int pilihan;
  float nilai;

  cout << "Konversi Satuan Panjang" << endl;
  cout << "1. km = hm" << endl;
  cout << "2. km = dam" << endl;
  cout << "3. km = m" << endl;
  cout << "4. km = dm" << endl;
  cout << "5. km = cm" << endl;
  cout << "6. km = mm" << endl;
  cout << "7. hm = km" << endl;
  cout << "8. hm = dam" << endl;
  cout << "9. hm = m" << endl;
  cout << "10. hm = dm" << endl;
  cout << "11. hm = cm" << endl;
  cout << "12. hm = mm" << endl;
  cout << "13. dam = km" << endl;
  cout << "14. dam = hm" << endl;
  cout << "15. dam = m" << endl;
  cout << "16. dam = dm" << endl;
  cout << "17. dam = cm" << endl;
  cout << "18. dam = mm" << endl;
  cout << "19. m = km" << endl;
  cout << "20. m = hm" << endl;
  cout << "21. m = dam" << endl;
  cout << "22. m = dm" << endl;
  cout << "23. m = cm" << endl;
  cout << "24. m = mm" << endl;
  cout << "25. dm = km" << endl;
  cout << "26. dm = hm" << endl;
  cout << "27. dm = dam" << endl;
  cout << "28. dm = m" << endl;
  cout << "29. dm = cm" << endl;
  cout << "30. dm = mm" << endl;
  cout << "31. cm = km" << endl;
  cout << "32. cm = hm" << endl;
  cout << "33. cm = dam" << endl;
  cout << "34. cm = m" << endl;
  cout << "35. cm = dm" << endl;
  cout << "36. cm = mm" << endl;
  cout << "37. mm = km" << endl;
  cout << "38. mm = hm" << endl;
  cout << "39. mm = dam" << endl;
  cout << "40. mm = m" << endl;
  cout << "41. mm = dm" << endl;
  cout << "42. mm = cm" << endl;
 


  cout << "Masukkan Nilai = ";cin >> nilai;
  cout << "Silahkan Pilih = ";cin >> pilihan;
  if (pilihan == 1){
      cout << nilai << "km" << "=" << nilai * 10 << "hm" << endl;
    }
    else if (pilihan == 2){
      cout << nilai << "km" << "=" << nilai * 100 << "dam" << endl;
    }
    else if (pilihan == 3){
      cout << nilai << "km" << "=" << nilai * 1000 << "m" << endl;
    }
    else if (pilihan == 4){
      cout << nilai << "km" << "=" << nilai * 100000 << "dm" << endl;
    }
    else if (pilihan == 5){
      cout << nilai << "km" << "=" << nilai * 1000000 << "cm" << endl;
    }
    else if (pilihan == 6){
      cout << nilai << "km" << "=" << nilai * 10000000 << "mm" << endl;
    }
    else if (pilihan == 7){
      cout << nilai << "hm" << "=" << nilai * 0.1 << "km" << endl;
    }
    else if (pilihan == 8){
      cout << nilai << "hm" << "=" << nilai * 10 << "dam" << endl;
    }
    else if (pilihan == 9){
      cout << nilai << "hm" << "=" << nilai * 100 << "m" << endl;
    }
    else if (pilihan == 10){
      cout << nilai << "hm" << "=" << nilai * 1000 << "dm" << endl;
    }
    else if (pilihan == 11){
      cout << nilai << "hm" << "=" << nilai * 10000 << "cm" << endl;
    }
    else if (pilihan == 12){
      cout << nilai << "hm" << "=" << nilai * 100000 << "mm" << endl;
    }
    else if (pilihan == 13){
      cout << nilai << "dam" << "=" << nilai * 0.01 << "km" << endl;
    }
    else if (pilihan == 14){
      cout << nilai << "dam" << "=" << nilai * 0.1 << "hm" << endl;
    }
    else if (pilihan == 15){
      cout << nilai << "dam" << "=" << nilai * 10 << "m" << endl;
    }
    else if (pilihan == 16){
      cout << nilai << "dam" << "=" << nilai * 100 << "dm" << endl;
    }
    else if (pilihan == 17){
      cout << nilai << "dam" << "=" << nilai * 1000 << "cm" << endl;
    }
    else if (pilihan == 18){
      cout << nilai << "dam" << "=" << nilai * 10000 << "mm" << endl;
    }
    else if (pilihan == 19){
      cout << nilai << "m" << "=" << nilai * 0.001 << "km" << endl;
    }
    else if (pilihan == 20){
      cout << nilai << "m" << "=" << nilai * 0.01 << "hm" << endl;
    }
    else if (pilihan == 21){
      cout << nilai << "m" << "=" << nilai * 0.1 << "dam" << endl;
    }
    else if (pilihan == 22){
      cout << nilai << "m" << "=" << nilai * 10 << "dm" << endl;
    }
    else if (pilihan == 23){
      cout << nilai << "m" << "=" << nilai * 100 << "cm" << endl;
    }
    else if (pilihan == 24){
      cout << nilai << "m" << "=" << nilai * 1000 << "mm" << endl;
    }
    else if (pilihan == 25){
      cout << nilai << "dm" << "=" << nilai * 0.0001 << "km" << endl;
    }
    else if (pilihan == 26){
      cout << nilai << "dm" << "=" << nilai * 0.001 << "hm" << endl;
    }
    else if (pilihan == 27){
      cout << nilai << "dm" << "=" << nilai * 0.01 << "dam" << endl;
    }
    else if (pilihan == 28){
      cout << nilai << "dm" << "=" << nilai * 0.1 << "m" << endl;
    }
    else if (pilihan == 29){
      cout << nilai << "dm" << "=" << nilai * 10 << "cm" << endl;
    }
    else if (pilihan == 30){
      cout << nilai << "dm" << "=" << nilai * 100 << "mm" << endl;
    }
    else if (pilihan == 31){
      cout << nilai << "cm" << "=" << nilai * 0.00001 << "km" << endl;
    }
    else if (pilihan == 32){
      cout << nilai << "cm" << "=" << nilai * 0.0001 << "hm" << endl;
    }
    else if (pilihan == 33){
      cout << nilai << "cm" << "=" << nilai * 0.001 << "dam" << endl;
    }
    else if (pilihan == 34){
      cout << nilai << "cm" << "=" << nilai * 0.01 << "m" << endl;
    }
    else if (pilihan == 35){
      cout << nilai << "cm" << "=" << nilai * 0.1 << "dm" << endl;
    }
    else if (pilihan == 36){
      cout << nilai << "cm" << "=" << nilai * 10 << "mm" << endl;
    }
    else if (pilihan == 37){
      cout << nilai << "mm" << "=" << nilai * 0.000001 << "km" << endl;
    }
    else if (pilihan == 38){
      cout << nilai << "mm" << "=" << nilai * 0.00001 << "hm" << endl;
    }
    else if (pilihan == 39){
      cout << nilai << "mm" << "=" << nilai * 0.0001 << "dam" << endl;
    }
    else if (pilihan == 40){
      cout << nilai << "mm" << "=" << nilai * 0.001 << "m" << endl;
    }
    else if (pilihan == 41){
      cout << nilai << "mm" << "=" << nilai * 0.01 << "dm" << endl;
    }
    else if (pilihan == 42){
      cout << nilai << "mm" << "=" << nilai * 0.1 << "cm" << endl;
    }
    
   return 0;
}   
    
