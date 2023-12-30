#include <stdio.h>
#include <stdlib.h>
FILE *fptr = NULL;
char baca;
struct data{
    char nama_br[100];
    int jumlah;
    float harga;
}barang[];

int main()
{

    char nama[25];
    int nim,input,pilih;

    printf("Masukan nama: ");scanf("%[^\n]",&nama);
    printf("Masukan NIM : ");scanf("%i",&nim);
    printf("Input banyak data barang: ");scanf("%i",&input);
    struct data barang[input];
    printf("Masukan data barang: \n");
    for(int i = 0; i < input; i++){
        printf("\n\nBarang ke - %i\n",i+1);
        printf("Nama barang     : ");scanf(" %[^\n]",&barang[i].nama_br);
        printf("Banyak barang   : ");scanf("%i",&barang[i].jumlah);
        printf("Harga barang    : ");scanf("%f",&barang[i].harga);
    }

    for(int i = 0; pilih != 4;i++){
    system("cls");
    printf("============================================================\n");
    printf("                %s\n",nama);
    printf("                %i\n",nim);
    printf("============================================================\n");
    printf("Menu:\n\n1. Tampilkan barang\n2. Simpan data barang\n3. Baca data barang\n4. Exit\n");
    printf("============================================================\n");
    printf("Pilih menu: ");scanf("%i",&pilih);
    switch(pilih){
    case 1:
        system("cls");
            for(int i = 0; i < input; i++){
                printf("\n\nBarang ke - %i\n",i+1);
                printf("Nama barang     : %s\n",barang[i].nama_br);
                printf("Banyak barang   : %i\n",barang[i].jumlah);
                printf("Harga barang    : %.2f\n",barang[i].harga);
            }
        getch();
        break;
    case 2:
        system("cls");
        fptr = fopen ("Data.txt","w");
        if (fptr == NULL){
        printf("\nerror: tidak dapat membuat file\n\n");
        }
        for(int i = 0; i < input; i++){
        fprintf(fptr,"Barang ke-%i\n",i+1);
        fprintf(fptr,"Nama Barang       : %s",barang[i].nama_br);
        fprintf(fptr,"\nBanyak Barang   :%i",barang[i].jumlah);
        fprintf(fptr,"\nHarga Barang    :%.2f\n\n",barang[i].harga);
        }
        fclose(fptr);
        printf("Data Berhasil Dibuat");
        getch();
        break;
    case 3:
        system("cls");
                if (fptr == NULL){
        printf("\nerror: tidak dapat membuat file\n\n");
        }
        fptr = fopen ("Data.txt","r");
        while((baca=fgetc(fptr))!=EOF){
            putchar(baca);
        }
        fclose(fptr);
        getch();
        break;
    case 4: exit(0);
    default: printf("Pilihan tidak ada");
    }
}
}
