#include <stdio.h>
#include <stdlib.h>

/*
Membuka file -> fopen(fptr)

menulis
membaca
update
proses

menutu file -> fclose (fptr)
*/




//write();
//update();
//delete_fung();

FILE *fptr = NULL;
char kar, nama_file[100], tipe[100];

int main()
{
    int pilih;
    do{
        printf("Program CRUD: \n");
        printf("1. Read File \n");
        printf("2. Write File \n");
        printf("3. Update File \n");
        printf("4. Delet File\n");
        printf("5. exit \n");
        printf("Pilih Inputan: ");scanf("%i",&pilih);
        switch(pilih){
            case 1: readmode();system("cls");break;
            case 2: write();system("cls");break;
            case 3: update();system("cls");break;
            case 4: delete_fung();system("cls");break;
            case 5: printf("\nSesi Selesai\n");break;
            default: printf("Inputan tidak ada");getch();//akan melanjutkan program ketika user input karakter di keyboard
        }


    }
    while(pilih != 5);
    return 0;
}


void readmode(){
    system("cls");
  printf("Masukan nama file: ");
  scanf("%s",&nama_file);
  printf("Masukan tipe file: ");
  scanf("%s",&tipe);
  strcat(nama_file,tipe);
  char baca;
  system("cls");
  printf("Mode Baca");
  printf("\n\n");
  //fptr = fopen("123.txt","r");
  fptr = fopen(nama_file,"r");
  if(fptr == NULL){
    printf("\nerr: File tidak ada");
  }

  while((baca = fgetc(fptr))!=EOF){
    putchar(baca);
  }
  fclose(fptr);
  getch();
}

void write(){
  system("cls");
  printf("Masukan nama file: ");
  scanf("%s",&nama_file);
  printf("Masukan tipe file: ");
  scanf("%s",&tipe);
  strcat(nama_file,tipe);
  char str[255];
  system("cls");
  printf("Mode Menulis");
  printf("\n\n");
  //fptr = fopen("123.txt","r");
  fptr = fopen(nama_file,"w");
  if(fptr == NULL){
    printf("\nerr: File tidak dapat dibuat");
    getch();
  }
  printf("Masukan Inputan\n");
  for(int i = 0; i < 5; i++){
        //inputan user
    fgets(str,sizeof(str),stdin);
    //inputan user dimasukan ke .txt
    fputs(str,fptr);
  }
  printf("File berhasil dibuat\n");
  fclose(fptr);
  getch();

}
void update(){
system("cls");
  printf("Masukan nama file: ");
  scanf("%s",&nama_file);
  printf("Masukan tipe file: ");
  scanf("%s",&tipe);
  strcat(nama_file,tipe);
  char str[255];
  system("cls");
  printf("Mode Menulis");
  printf("\n\n");
  //fptr = fopen("123.txt","r");
  fptr = fopen(nama_file,"a");
  if(fptr == NULL){
    printf("\nerr: File tidak dapat dibuat");
    getch();
  }
  printf("Masukan Inputan\n");
  for(int i = 0; i < 5; i++){
        //inputan user
    fgets(str,sizeof(str),stdin);
    //inputan user dimasukan ke .txt
    fputs(str,fptr);
  }
  printf("File berhasil dibuat\n");
  fclose(fptr);
  getch();
}
void delete_fung(){
    system("cls");
  printf("Masukan nama file: ");
  scanf("%s",&nama_file);
  printf("Masukan tipe file: ");
  scanf("%s",&tipe);
  strcat(nama_file,tipe);

  if(remove(nama_file) == 0){
    printf("File berhasil dihapus");
  }else{
    printf("File gagal dihapus");
  }

}
