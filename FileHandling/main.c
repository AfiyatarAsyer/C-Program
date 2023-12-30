#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    fgets(variabel,panjang int,fptr)

    •	Membuat file baru

    Mode
    •	Membuka file yang ada
    •	Membaca data dari file yang ada

    •	Menulis data ke file
    •	Memindahkan data ke lokasi tertentu pada file
    •	Menutup file

    konsep
    Buka File(Open)
    Proses
    Tutup(Fclose)
*/
void menulis(){
    char str[255];
    //FILE *var_penyimpan
    FILE *fptr; // tipe of variabel deklarasi pointer
    fptr = fopen("DB.txt","wb");
    //fptr = fopen("D://PAMPAKAT/DatabaSe.txt","w");
    printf("Inputan Isi File\n\n");
    //fputs("Hiiii ", fptr);
    for(int i = 0; i < 5;i++){
        //inputan dari user
            fgets(str,sizeof(str),stdin);
        //menulis inputan
            fputs(str,fptr);
        //fprintf(fptr,str);
    }
    printf("File berhasil disimpan");
    fclose(fptr);
}

void membaca(){

    FILE *fptr;
    char baca;
        if((fptr = fopen("DB.txt","r+"))== NULL){
            printf("err: File tidak ditemukan");
            exit(0);
        }

        while((baca=fgetc(fptr))!=EOF){
            putchar(baca);
        }
        fclose(fptr);
}

void write(){
    FILE *fptr = NULL;

    char kar[255];
    //int a = 10;
    //char k = 'a';
    fptr = fopen("Inputan.txt","w");
    if(fptr == NULL){
        printf("err:File tidak dapat dibuat!");
        exit(1);
    }
    printf("Masukan Inputan\n");

    gets(kar);

    //fprintf(fptr,"%i %s %c",a,kar,k);
    for(int i = 0;i != strlen(kar);i++){
        fputc(kar[i],fptr);
    }
    printf("\n");

    fclose(fptr);

}

void read(){

    FILE *fptr=NULL;
    //char kar[50];
    char kar;
    fptr = fopen("Inputan.txt","r");

    if(fptr == NULL){
        printf("File tidak ada");
        exit(1);
    }

    //fgets(kar,50,fptr);
    //printf(" %s",kar);

    printf("\n\n ================================ \n Ini Read Mode\n");
    while(!feof(fptr)){
        kar = getc(fptr);
        printf("%c",kar);
    }

    fclose(fptr);
}

void readplus(){

    FILE *fptr=NULL;
    //char kar[50];
    fptr = fopen("Inputan1.txt","r+");
    if(fptr == NULL){
        printf("File tidak ada");
        exit(1);
    }
    fputc('A',fptr);
    fputs("Afiyatar",fptr);
    fputs("Afiyatar",fptr);
    fclose(fptr);
}

void writeplus(){

    FILE *fptr=NULL;
    char kar[30];
    char ch;
    fptr = fopen("Inputan2.txt","w+");
    if(fptr == NULL){
        printf("File tidak ada");
        exit(1);
    }
    fputs("Jhonsonnn",fptr);
    rewind(fptr);
    while(!feof(fptr)){
        ch = fgetc(fptr);
        //fgets(kar,5,fptr);
        printf("%c",ch);
    }

    fclose(fptr);
//R+   dafadsfasd
/*
    fptr = fopen("Inputan2.txt","r+");
    if(fptr == NULL){
        printf("File tidak ada");
        exit(1);
    }
    fputs("Whyyyyyyy!",fptr);
    rewind(fptr);
    while(!feof(fptr)){
        ch = fgetc(fptr);
        //fgets(kar,5,fptr);
        printf("%c",ch);
    }

    fclose(fptr);
*/
}

void aplush(){
    FILE *fptr=NULL;
    char ch;
    fptr = fopen("Inputan3.txt","a+");
    if(fptr == NULL){
        printf("File tidak ada");
        exit(1);
    }
    fputs("Hiiiiyyaaaa",fptr);
    rewind(fptr);
    while(!feof(fptr)){
        ch = fgetc(fptr);
        printf("%c",ch);
    }

    fclose(fptr);
}

void simple(){
    FILE *fptr;
        fptr = fopen("Simpel.txt","wb+");
        fprintf(fptr,"Halooooo nananananana");
        fclose(fptr);
}

int main()
{
    //menulis();//w
    //simple();
    //membaca();//r
    //write();
    //read();
    //readplus();
    //writeplus();
    aplush();
    return 0;
}


/*
    char data[50];
    int i=0;
    FILE *fp;

   fp=fopen("data.txt", "w");

    for(i=0; i<8; i++)
    {
        printf("Masukkan biodata : ", i+1); fflush(stdin); gets(data);
        fprintf(fp, "%s\n", data);

    }
    fclose(fp);

    printf("\nData berhasil ditulis\n\n");

    int k;
   fp=fopen("data.txt", "a");

        printf("Masukkan : ",k); fflush(stdin); gets(data);
        fprintf(fp, "%s\n", data);
        fclose(fp);

    	printf("\nData berhasil ditulis\n\n");


    int j=1;
    fp=fopen("data.txt", "r");

    while(fgets(data,50,fp)!=NULL) //membaca dan mengulang sampai data habis
    {
        printf(" %s", data);
        j++;
    }
    fclose(fp);

    printf("\nData berhasil dibaca");
    */
