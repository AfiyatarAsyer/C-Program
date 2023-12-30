#include <stdio.h>
#include <stdlib.h>

//FileHandling
//CRUD

// FILE *nama_variabel;

/*
    membuka fopen
    proses "mode"
    menutup fclose
*/
FILE *fptr = NULL;
char kar, nama_file[100], tipe[10];

void read();
void write();
void append();
void delete_func();


int main()
{
    int pilih;
    do{
        system("cls");
        printf("Program CRUD:\n");
        printf("1. Read File\n");
        printf("2. Write File\n");
        printf("3. Update File\n");
        printf("4. Delete File\n");
        printf("5. exit\n");
        printf("Pilihan\n");
        scanf("%i",&pilih);
        switch(pilih){
            case 1: system("cls");read();break;
            case 2: system("cls");write();break;
            case 3: system("cls");append();break;
            case 4: system("cls");delete_func();break;
            case 5: printf("Sesi Selesai");break;
            default: printf("Pilihan tidak ada");
        }
    }while(pilih != 5);
    return 0;
}

void read(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    printf("Masukan tipe File: ");
    scanf("%s", &tipe);
    // fptr = fopen("Coba123.txt","r");

    printf("\n\n");
    system("cls");
    printf("Mode Baca: \n");

    //menggabungkan
    /*
    nama_file = "Coba";
    tipe = ".txt";
    coba + .txt
    nama_file = coba.txt
    */
    strcat(nama_file,tipe);
    char baca;
    fptr = fopen (nama_file,"r");
    if(fptr == NULL){
        printf("err: Tidak ada File!");
    }
    while((baca = fgetc(fptr))!=EOF){
        putchar(baca);
    }
    fclose(fptr);
    getch();

}
void write(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    printf("Masukan tipe File: ");
    scanf("%s", &tipe);
    // fptr = fopen("Coba123.txt","r");
    printf("\n\n");
    system("cls");
    printf("Mode Tulis: \n");
    strcat(nama_file,tipe);
    fptr = fopen (nama_file,"w");
    char str[255];
    if(fptr == NULL){
        printf("err: File tidak dapat dibuat!");
    }
    printf("masukan inputan: \n");
    for(int i = 0; i < 5;i++){
        //inputan user
        fgets(str,sizeof(str),stdin);
        //proses memasukan string ke file
        fputs(str,fptr);
    }
    printf("File Berhasil dibuat\n");
    fclose(fptr);
    getch();

}
void append(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    printf("Masukan tipe File: ");
    scanf("%s", &tipe);
    // fptr = fopen("Coba123.txt","r");
    printf("\n\n");
    system("cls");
    printf("Mode Tulis: \n");
    strcat(nama_file,tipe);
    fptr = fopen (nama_file,"a");
    char str[255];
    if(fptr == NULL){
        printf("err: File tidak dapat dibuat!");
    }
    printf("masukan inputan: \n");
    for(int i = 0; i < 5;i++){
        //inputan user
        fgets(str,sizeof(str),stdin);
        //proses memasukan string ke file
        fputs(str,fptr);
    }
    printf("File Berhasil dibuat\n");
    fclose(fptr);
    getch();
}
void delete_func(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    printf("Masukan tipe File: ");
    scanf("%s", &tipe);
    // fptr = fopen("Coba123.txt","r");
    strcat(nama_file,tipe);
    printf("\n\n");
    if(remove(nama_file) == 0){
        printf("File berhasil dihapus");
    }else{
        printf("File gagal dihapus");
    }
    getch();
}




