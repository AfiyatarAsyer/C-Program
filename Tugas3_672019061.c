#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void bubbleshort(int n[], int baju){
    int a,b,flag;
    for(a = 1; a <= baju; a++){
        for(b = 1; b<=baju; b++){
            if(n[a] < n[b]){
                flag = n[a];
                n[a] = n[b];
                n[b] = flag;
            }
        }
    }
}
void bubbleshort_jerapah(int n[], int jerapah){
    int a,b,flag;
    for(a = 1; a <= jerapah; a++){
        for(b = 1; b<=jerapah; b++){
            if(n[a] > n[b]){
                flag = n[a];
                n[a] = n[b];
                n[b] = flag;
            }
        }
    }
}

void bubbleshort_jerapahindex(int n[], int jerapah, int cari){
    int a,b,flag;
    for(a = 1; a <= jerapah; a++){
        for(b = 1; b<=jerapah; b++){
            if(n[a] > n[b]){
                flag = n[a];
                n[a] = n[b];
                n[b] = flag;
            }
        }
    }
    for(a = 1; a<=jerapah; a++){
        if(n[a] == cari){
            printf("\n Pencarian Index Tinggi : %d = [%d]", a, n[a]);
            printf("\n\n -Pencarian dengan Index bukan tinggi-");
            printf("\n Pencarian Pilihan Index [%d]", n[cari]);

            break;
        }
    }
}
void median(int n[], int baju){
    float median;
    printf("\n");
    if(baju%2==0){
        median =(n[(baju/2)]+n[(baju/2)+1])/2;
        printf("\nHasil = %.1f atau %.1f",median+0.5, median);
    }
    else{
        median = (n[(baju/2)+1]+n[(baju/2)+1])/2;
        printf("\nHasil = %.1f",median);
    }
}

void tampil_baju(int n[], int baju){
    int a;
    printf("\n");
    for (a = 1; a <= baju; a++){
        if(n[a] <= 100)
        printf(" [%d]", n[a]);
    }
}

void tampil_jerapah(int n[], int jerapah){
    int a;
    printf("\n");

    for (a = 1; a <= jerapah; a++){

        if(n[a] <= 100000){
            printf(" [%d]", n[a]);
        }
    }
}

void inputan(int n[], int baju){
    int a;
    printf("\n");
    for(a = 1; a <= baju; a++){
        printf(" Baju ke - %d dengan kualitas: ",a);
        scanf("%d", &n[a]);
    }
}

void inputan_jerapah(int n[], int jerapah){
    int a, batas = 1000;
    printf("\n");
    if(jerapah <= batas){
        for (a = 1; a <= jerapah; a++){
        printf(" Jerapah ke - %d dengan tinggi: ",a);
        scanf("%d", &n[a]);
        }
    }
    else{
        printf("Batasan jumlah melewati melewati");
    }
}

void sequentialsearch(int n[], int jerapah, int cari){
    int a;
    for(a = 1; a<=jerapah; a++){
        if(n[a] == cari){
            printf("\n\n Tinggi jerapah Pak Oky  : %d",n[a]);
            break;
    }
    if(a == jerapah){
    printf("\n\n Tinggi Jerapah pak Oky tidak ditemukan\n");
    }

    }
}

void pilihan1(){
    system("cls");
    int batasan_baju = 100000;
    int n[batasan_baju],baju;
    printf(" Silahkan masukan banyak baju produksi: ");
    scanf("%d", &baju);

    inputan(n,baju);
    tampil_baju(n,baju);
    bubbleshort(n,baju);
    printf("\n\n");
    tampil_baju(n,baju);
    median(n,baju);

}

void pilihan2(){
    system("cls");
    int batasan_jerapah= 1000, cari;
    int n[batasan_jerapah],jerapah;
    printf(" Jumlah Jerapah: ");
    scanf("%d %d",&jerapah, &cari);

    inputan_jerapah(n,jerapah);
    bubbleshort_jerapah(n,jerapah);
    tampil_jerapah(n,jerapah);
    sequentialsearch(n,jerapah,cari);
    bubbleshort_jerapahindex(n,jerapah,cari);
}

int main(){
    int pilih;
    ulang:
    system("cls");
    printf("::::::::::::::::::::::::::::::::::::::::::\n");
    printf(":::         Nama : Afiyatar Asyer      :::\n");
    printf(":::            NIM : 672019061         :::\n");
    printf("::::::::::::::::::::::::::::::::::::::::::\n");
    printf("Pilihan Program:\n");
    printf(" 1. Program Sorting\n");
    printf(" 2. Program Searching\n");
    printf(" 3. Exit\n");

    printf("Masukkan Pilihan Program: ");
    scanf("%d", &pilih);

    switch(pilih){
    case 1 :
        pilihan1();
        getch();
        goto ulang;
        break;
    case 2 :
        pilihan2();
        getch();
        goto ulang;
        break;
    case 3 :
        exit(0);
    default:
        printf("Pilihan tidak tersedia");
        getch();
        goto ulang;
    }
    return 0;
}
