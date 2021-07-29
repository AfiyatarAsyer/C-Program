#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

void kombinasi_kata(){
    system("cls");
    int bawah, atas;
    char satu[20], dua[20];
    printf(":::::Program Kombinasi Kata:::::\n");
    printf("Masukkan Batas Awal        : ");
    scanf("%d", &bawah);

    printf("Masukkan Batas Akhir       : ");
    scanf("%d", &atas);

    printf("Masukkan Kalimat Pertama   : ");
    scanf("%s", &satu);

    printf("Masukkan Kalimat Kedua     : ");
    scanf("%s", &dua);
    printf("Hasil Kalimat: \n");
    printf("---------------------------------------------\n");
    for(int a = bawah; a<=atas; a++){
        if(a%2==0){
            printf("%s ", dua);
        }
        if(a%2==1){printf("%s ", satu);}
        }
    printf("\n---------------------------------------------");
    printf("\nTekan apa saja pada keyboard untuk kembali kehalaman utama");
    getch();
}


void ketupat(){
    system("cls");
    printf(":::::Program Belah Ketupat:::::\n");
    int tinggi_ketupat, z = 1, i, j, k;
    char karakter1, karakter2;
    printf("Masukkan Angka            : ");scanf("%d", &tinggi_ketupat);

    printf("Masukkan Karakter Ganjil  : ");
    scanf(" %c",&karakter2);

    printf("Masukkan Karakter Genap   : ");
    scanf(" %c",&karakter1);

    for(i = 1; i <= tinggi_ketupat; i++){
        for(j = tinggi_ketupat-1; j >= i; j--){
            printf("  ");
        }
        for(k = 1; k <= z; k++){
             if(k%2==0){
                printf(" %c", karakter1);
            }
            else{printf(" %c", karakter2);}

        }
            z+=2;
        printf("\n");
    }

    int tinggi = tinggi_ketupat;
    int lebar= tinggi*2-1;
    int jarak= tinggi-1;
    for(i = tinggi; i >= 1; i--){
        for(j = jarak; j >= i-1; j--){
            printf("  ");
        }
        for(k = 2; k <= lebar-1; k++){
             if(k%2==0){
                printf(" %c", karakter2);
            }
            else{printf(" %c", karakter1);}

        }
        lebar-=2;
        printf("\n");
    }
    printf("\nTekan apa saja pada keyboard untuk kembali kehalaman utama");
    getch();
}


int main(){
    int atas;
    Atas:
    system("cls");
    printf("::::::::::::::::::::::::::: ");
    printf("\n::  Nama: Afiyatar Asyer :: ");
    printf("\n::  NIM : 672019061      :: ");
    printf("\n::::::::::::::::::::::::::: ");sleep(1);
    printf("\n====Halaman Utama=====\n");
    printf("\nProgram yang tersedia:\n");
    printf("1. Kombinasi Kata\n");
    printf("2. Belah Ketupat\n");
    printf("3. Exit\n");
    printf("Masukkan Pilihan Anda: ");
    scanf("%d", &atas);
    switch(atas){
    case 1:
        kombinasi_kata();
    break;
    case 2:
        ketupat();
    break;
    case 3:
        exit(0);
    break;
    default:
        printf("\n::::::::::::::::::::Inputan tidak ada::::::::::::::::::::");
        printf("\nTekan apa saja pada keyboard untuk kembali kehalaman utama");
        getch();
    }
    goto Atas;

    return 0;
}
