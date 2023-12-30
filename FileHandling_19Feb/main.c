#include <stdio.h>
#include <stdlib.h>

FILE *fptr = NULL; //Ini deklarasi variabel
char kar, nama_file[100], tipe[10];
// CRUD dari bahasa C
// consol
/*
    - Membuka : fopen fopen("Namafile+tipefile","r");
    - proses  : mode
    - menutup : fclose fclose (fptr);

    "r"
    "w"
    "a"
*/

void read();
void write();
void append();
void delete_fun();

int main()
{
    int pilih;
    do{
        system("cls");
        printf("Program CRUD: \n");
        printf("1. Read File\n");
        printf("2. Write File\n");
        printf("3. Update File\n");
        printf("4. Delete File\n");
        printf("5. Exit\n");
        printf("Pilih: \n");
        scanf("%i",&pilih);
        switch(pilih){
        case 1: read(); break;
        case 2: write(); break;
        case 3: append(); break;
        case 4: delete_fun(); break;
        case 5: printf("Sesi Selesai"); break;
        default: printf("Pilihan tidak ada");
        }
    }
    while(pilih != 5);

    return 0;
}

void read(){
    system("cls");
    printf("Masukan nama file: ");
    scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");
    scanf(" %s", &tipe);
    system("cls");
    printf("Mode Baca:\n");
    //strcat(value1,value2);
    //value1 = value1 + value2
    strcat(nama_file,tipe);
    char baca;
    fptr = fopen(nama_file,"r");
    if(fptr == NULL){
        printf("err: Tidak ada file!");
        getch();
    }

    while((baca = fgetc(fptr))!=EOF){
        putchar(baca);
        //alternatif
        //fgets = mengambil string
        //fprintf = menampilkan ke file
        //fscanf = mengambil string
    }
    fclose(fptr);
    getch();

}
void write(){
    system("cls");
    printf("Masukan nama file: ");
    scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");
    scanf(" %s", &tipe);
    system("cls");
    printf("Mode Baca:\n");
    //strcat(value1,value2);
    //value1 = value1 + value2
    strcat(nama_file,tipe);
    fptr = fopen(nama_file,"w");
    system("cls");
    printf("Mode Tulis:\n");
    char str[255];

    if(fptr == NULL){
        printf("err: Tidak dapat membuat file!");
        getch();
    }
    printf("Masukan Inputan: \n");
    for(int i = 0; i <= 5; i++){
        //inutan user
        fgets(str,sizeof(str),stdin);
        //menulis inputan
        fputs(str,fptr);

    }
    fclose(fptr);
    printf("File berhasil di buat");
    getch();
}
void append(){
    system("cls");
    printf("Masukan nama file: ");
    scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");
    scanf(" %s", &tipe);
    system("cls");
    printf("Mode Baca:\n");
    //strcat(value1,value2);
    //value1 = value1 + value2
    strcat(nama_file,tipe);
    fptr = fopen(nama_file,"a");
    system("cls");
    printf("Mode Tulis:\n");
    char str[255];

    if(fptr == NULL){
        printf("err: Tidak dapat membuat file!");
        getch();
    }
    printf("Masukan Inputan: \n");
    for(int i = 0; i <= 5; i++){
        //inutan user
        fgets(str,sizeof(str),stdin);
        //menulis inputan
        fputs(str,fptr);

    }
    fclose(fptr);
    printf("File berhasil di buat");
    getch();


}
void delete_fun(){
    system("cls");
    printf("Masukan nama file: ");
    scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");
    scanf(" %s", &tipe);
    system("cls");
    printf("Mode Baca:\n");
    //strcat(value1,value2);
    //value1 = value1 + value2
    strcat(nama_file,tipe);

    if(remove(nama_file) == 0){
        printf("File berhasil dihapus");
    }else{
        printf("File gagal dihapus");
    }
    getch();
}




