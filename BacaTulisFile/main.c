#include <stdio.h>
#include <stdlib.h>
/*
    1. membuka
    2. proses membaca
    3. menutup
*/

//read "r"
/*
    FILE *fptr
    proses buka file
    fopen
    proses membaca
    fclose
*/

void read(){
    FILE *fptr;
        char kar;
        if((fptr=fopen("Database.doc", "r"))== NULL){

            printf("err: File tidak ditemukan\n");
            exit(0);
        }
        while((kar=fgetc(fptr)) != EOF){
            putchar(kar);
        }
        fclose(fptr);

}

//read "w"
/*
    FILE *fptr
    proses buat file
    fopen
    proses menulis
    fclose
*/

void write(){
    char text[255];
    FILE *fptr;

    fptr=fopen("Database.doc","w");
    printf("Masukan Data:\n");

    for(int i = 0; i < 5;i++){
        //pengambilan dari input user
        fgets(text, sizeof(text),stdin);
        fputs(text,fptr);
    }
    printf("File berhasil di simpan");
    fclose(fptr);
}

int main(){
write();
read();
return 0;
}
