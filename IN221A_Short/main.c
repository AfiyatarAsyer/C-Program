#include <stdio.h>
#include <stdlib.h>
//Array
int angka[10] ={3,5,1,7,2,100,70,50,10,43};
//mencari panjang array: 40/4 = 10
int len = sizeof(angka)/sizeof(*angka);

//Shorting -> pengurutan

//Besar ke kecil -> ascending
//Kecil ke besar -> descending

void bubbleShort(){
//    - algoritma yang paling tua
//    - Menukarkan secara berpasangan
    int i, j,temp;
//  mengulang sebanyak data
    for(i = 0; i < len - 1; i++){
        for(j = 0; j < (len - 1 - i);j++){
//                cek kondisi
            if(angka[j] < angka[j+1]){
                 temp = angka[j];
                 angka[j] = angka[j+1];
                 angka[j+1] = temp;

            }
        }
    }
}
void selectionShort(){
//  mencari nilai/data terendah, diurutkan berdasar
    int i,j,posisi,temp;
//    ini perulangan sebanyak data
    for(i = 0; i < len - 1; i++){
//        nilai dari posisi indeks -> i
        posisi = i;
        for(j = i+1; j < len; j++){
//          kondisi dari pencarian nilai atau data terkecil?
            if(angka[posisi] > angka[j]){
                posisi = j;
            }
        }
//        kondisi untuk membuat datanya urut
        if(posisi != i){
            temp = angka[i];
            angka[i] = angka[posisi];
            angka[posisi] = temp;
        }
    }
}
void insertionShort(){
//  kayak main kartu urutkan ambil dan taruh
    int i,j,temp;
//    mengulang sebanyak data
    for(i = 1; i < len; i++){
//            nilai j = i
        j = i;
//        kondisi terpenuhi?
        while(j > 0 && (angka[j-1] > angka[j])){
//            tampungan sementar
            temp = angka[j];
//            indeks ke j disimpan sebagi indeks j-1
            angka[j] = angka[j-1];
//            indeks ke j-1 = temp
            angka[j-1] = temp;
            j--;
        }
    }
}
void display(){
    int i;
    for(i = 0; i < len; i++){
        printf("Angka ke - %i adalah : %i\n",i+1,angka[i]);
    }
}

int main()
{
//    printf("Ini nilai len: %i",len);
    printf("Ini sebelum di short\n");
    display();
//    proses algoritma short
//    bubbleShort();
    selectionShort();
//    insertionShort();
    printf("\nIni sesudah di short\n");
    display();
    return 0;
}
//
//algoritma pengurutan itu bisa berbeda ->
//pengurutan dengan algoritma mana yang cepat
//
//pengurutannya -> mengurutkan dari besar ke kecil atau
//dari kecil ke besar
