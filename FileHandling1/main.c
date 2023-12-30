#include <stdio.h>
#include <stdlib.h>
// 2
FILE *fptr = NULL;
char kar, nama_file[100],tipe[10];

//4
void read();
void write();
void update();
void delet_fung();
void menu();

int main()
{
    int pilih;
    do{
        system("cls");
        printf("Program CRUD: \n");
        printf("1. Read File\n");
        printf("2. Write File\n");
        printf("3. Update File\n");
        printf("4. Delet File\n");
        printf("5. Exit\n");
        printf("Pilihan: ");
        scanf("%i",&pilih);
        switch(pilih){
            case 1: read(nama_file); break;
            case 2: write(nama_file); break;
            case 3: update(nama_file);break;
            case 4: delet_fung(nama_file);break;
            case 5: printf("\nSesi Selesai\n");break;
            default:printf("Input tidak ada");
        }
    }
    while(pilih != 5);

    return 0;
}



void read(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    printf("Masukan Tipe File: ");
    scanf("%s", &tipe);
    // CONTOH : fptr = fopen(strcat(nama_file,".txt"),"w");
    printf("\n\n");
    system("cls");
    printf("Mode Baca:\n");
    strcat(nama_file,tipe);
    char baca;
    fptr = fopen(nama_file,"r");
    if(fptr == NULL){
        printf("err: Tidak ada file!");
    }

    while((baca=fgetc(fptr))!=EOF){
        putchar(baca);
    }
    fclose(fptr);
    getch();

}

void write(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    //strcat(nama_file,".txt");
    //fptr = fopen(nama_file,"w");
    printf("Masukan Tipe File: ");
    scanf("%s", &tipe);
    strcat(nama_file,tipe);
    fptr = fopen(nama_file,"w");
    printf("\n\n");
    system("cls");
    printf("Mode Tulis:\n");
    char str[255];

    if(fptr == NULL){
        printf("err: File tidak dapat dibuat");
        getch();
    }
    //mena,pilkan di konsol
    printf("Masukan Inputan: \n");
    for(int i = 0; i <= 5; i++){
        //inputan user ke file
        fgets(str,sizeof(str),stdin);
        //menulis inputan
        fputs(str,fptr);
    }
    printf("File berhasil dibuat\n");
    fclose(fptr);
    getch();

}

void update(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    //strcat(nama_file,".txt");
    //fptr = fopen(nama_file,"w");
    printf("Masukan Tipe File: ");
    scanf("%s", &tipe);
    strcat(nama_file,tipe);
    fptr = fopen(nama_file,"a");
    printf("\n\n");
    system("cls");
    printf("Mode Tulis:\n");
    char str[255];

    if(fptr == NULL){
        printf("err: File tidak dapat dibuat");
        getch();
    }
    //mena,pilkan di konsol
    printf("Masukan Inputan: \n");
    for(int i = 0; i <= 5; i++){
        //inputan user ke file
        fgets(str,sizeof(str),stdin);
        //menulis inputan
        fputs(str,fptr);
    }
    printf("File berhasil dibuat\n");
    fclose(fptr);
    getch();
}

void delet_fung(){
    printf("Masukan Nama File: ");
    scanf("%s", &nama_file);
    //strcat(nama_file,".txt");
    //fptr = fopen(nama_file,"w");
    printf("Masukan Tipe File: ");
    scanf("%s", &tipe);
    strcat(nama_file,tipe);

    if(remove(nama_file) == 0){
        printf("File berhasil dihapus");
    }
    else{
        printf("File gagal dihapus");
    }
    getch();
}
