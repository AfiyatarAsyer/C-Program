#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void problema(){
int angka, undian;
    scanf("%d",&angka);
    scanf("%d",&undian);
    int data[angka], a;
    for(a = 0; a <angka; a++){
        scanf("%d", &data[a]);
        data[a] = undian - data[a];
        if(data[a] < -1){data[a] = data[a] * -1;}
    }
    int i,x,j;
    j = 200000 ;
    for (i = 0 ; i <= angka ; i++){
        if (data[i] <= j){
            j = data[i];
        } else{
            data[i] = j;
            x = data[i] ;
            j = x;
        }

}
 printf("Hasil Pemenang: %d ",undian-j);
}


void problemb(){
    int data[10], input, masuk, a, b, tambah=0, c, nilai, ukuran, data_murni=0;
    float jumlah, jum, tambah1, masuk1, data1[10], hasil;
    char persen = '%';
    scanf("%d", &input);
    for(a = 0; a < input; a++){
     scanf("%d", &masuk);

    for(b = 0; b < masuk; b++){
     scanf("%d", &data[b]);
     tambah = tambah + data[b];
     tambah1 = tambah;
     masuk1 = masuk;
        }
     jumlah = (tambah1/masuk1);
     for(c = 0; c < masuk; c++){
        if(data[c] > jumlah){
            data[c] = data[c]/data[c];
            data_murni = data_murni + data[c];

        }
     }
     hasil = (data_murni/masuk1)*100;

     printf("Nilai diatas rata-rata: [%.3f%c]\n", hasil, persen);
    printf("\n");
    tambah1 = 0;
    tambah = 0;
    data_murni= 0;
    hasil = hasil*0;
    }

}





int main(){
    int pilih, a;

    Ulang:
    system("cls");
    printf("::::::::::::::::::::::::::::\n");
    printf("::  Nama: Afiyatar Asyer  ::\n");
    printf("::    NIM : 672019061     ::\n");
    printf("::::::::::::::::::::::::::::\n\n");
    printf("---- Elegant Competitive Programing ---\n");
    printf("1. Problem A : Undian Berhadiah\n");
    printf("2. Problem B : Di atas Rata-rata\n");
    printf("Pilih Problem: ");
    scanf("%d",&pilih);

    switch(pilih){

case 1:
    problema();
    getch();
    break;
case 2:
    problemb();
    getch();
    break;
default:
    printf("Inputan tidak ada");
    }
    goto Ulang;
    return 0;
}
