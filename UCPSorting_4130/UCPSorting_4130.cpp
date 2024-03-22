
#include <iostream>
using namespace std;

void selectionSort(int hanun[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_index = i;
    for (int j = i + 1; j < n; j++) {
      if (hanun[j] < hanun[min_index]) {
          min_index = j;
      }
    }
      swap(hanun[min_index], hanun[i]);
  }
  cout << "Array setelah sortir:" << endl;

  for (int i = 0; 1 <= n - 1; i++) {
      cout << hanun[i] << 
  }

}


// 1. sebelum membandingkan serta menukar elemen elemen, kita perlu membagi 2 subdaftar, untuk pensortir dan tidak disortir.
// setelah itu taruh yang elemen pertama di posisi pensortir. bandingkan dengan elemen yang ke dua. jika setelah dibandingkan 
// elemen tersebut berisi angka lebih kecil dari element pertama, maka akan ditempatkan di paling kiri. jika setelah dibandingkan 
// angka tersebut ternyata lebih besar maka akan di taruh di posisi paling kanan. begitu seterusnya sampai elemen yang akan di bandingkan habis.
// 
// 2. komputer akan mencari didalam array tersebut mana angka yang paling kecil, setelah menemukannya maka akan di swap ke index 0 jika memenuhi 
// syarat yaitu angka lebih kecil dari index 0. jika angka ternyata lebih besar maka tidak akan di swap dan tetap berada di posisi semula.
// 
// 3. dilihat dari jumlah index nya, lalu jumlah index akan dikurangi 1 dan hasilnya itu adalah jumlah langkah yang harus dilakukan