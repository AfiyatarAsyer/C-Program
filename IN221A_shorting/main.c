#include <stdio.h>
#include <stdlib.h>

int angka[10] = {3,5,1,7,2,100,70,50,10,43};
int len = sizeof(angka) / sizeof(*angka);
//int len = sizeof(angka) / sizeof(*int);
// SORTING -> Pengurutan

//ascending = kecil ke besar
//descending = besar ke kecil

void bubbleSort(){
    /*
        1. Bubble Sort
        - Algoritma sorting paling tua
        - Bertukar (secara berpasangan) tiap iterasi
    */
    int i, j, temp;
    for(i = 0; i < len - 1; i++){
        for(j = 0; j < (len - 1 - i); j++){
            //proses penukaran
            if(angka[j] > angka[j+1]){
                temp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = temp;
            }
        }
    }
}

void selectionSort(){
    /*
        2. Selection Sort
        - Cari posisi nilai terendah, taruh secara berurutan
    */
    int i, j, posisi, temp;
//    perulangan sebanyak data
    for(i = 0; i < len-1; i++){
//     posisi dari indeks ke -> i
        posisi = i;

        //cari posisi nilai terendah
        for(j = i+1; j < len; j++){
//    Kondisi dari pencarian nilai terendah terpenuhi?
            if(angka[posisi] > angka[j]){
//                    kalau terpenuhi
                posisi = j;
            }
        }

        //proses naruh berurutan
        if(posisi != i){
//                temp -> nilai tampung
            temp = angka[i];
//                    taruh nilai indeks ke ?
            angka[i] = angka[posisi];
//          masukan nilai indeks posisidari temp
            angka[posisi] = temp;
        }
    }
}

//3. Insertion Sort
void insertionSort(){
    /*
        3. Insertion Sort
        - Kayak main kartu, ambil, taruh (bandingkan sama data sebelum)
    */
    int i, j, temp;

    for(i = 1; i < len ; i++){
        //ambil posisi ke i
        j = i;
//        kodisi terpenuhi?
        while(j > 0 && (angka[j-1] > angka[j])){
            temp = angka[j];
            angka[j] = angka[j-1];
            angka[j-1] = temp;
//            decrement
            j--;
        }
    }

}

void displayArray(){
    int i;
    for(i = 0; i < len; i++){
        printf("Angka ke - %i adalah %i\n", i+1, angka[i]);
    }
}

int main()
{
    printf("Sebelum di sorting\n");
    displayArray();

    //proses sorting
//    bubbleSort();
//    selectionSort();
//    insertionSort();

    printf("Sesudah di sorting\n");
    displayArray();
    printf("Ini value dari len : %i",len);
    return 0;
}
