#include <stdio.h>
#include <stdlib.h>
FILE *fptr = NULL;
char nama_file[100],tipe[10];

struct mahasiswa{
    char nama_dp[20],nama_bl[20];
    int nim,angkatan;
    float ipk;
};

int main()
{

    int pilih;
    for(int i = 0; pilih != 5; i++){
    system("cls");
    printf("Menu:\n");
    printf("1. Read\n");
    printf("2. Write\n");
    printf("3. Update\n");
    printf("4. Delete\n");
    printf("5.Exit\n");
    printf("Pilih menu: ");scanf("%i",&pilih);
    switch(pilih){
        case 1: read();getch();break;
        case 2: write();getch();break;
        case 3: update();getch();break;
        case 4: delete_funct();getch();break;
        case 5: printf("Sesi Selesai");getch();break;
        default: printf("Pilihan tidak ada");
    }
    }
    return 0;
}

void read(){
    struct mahasiswa input;
    printf("Masukan nama file: ");scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");scanf(" %s", &tipe);
    strcat(nama_file,tipe);
    fptr = fopen(nama_file,"r");
    if(fptr == NULL){
        printf("err: tidak dapat membuat file");
        exit(1);
    }
    printf("Nama Depan\t\tNama Belakang\t\tNIM\t\tAngkatan\t\tIPK\n\n");
    while(fread(&input,sizeof(struct mahasiswa),1,fptr))
        printf("%s\t\t%s\t\t%i\t\t%i\t\t%f\n",input.nama_dp,input.nama_bl,input.nim,
               input.angkatan,input.ipk);

    fclose(fptr);
}
void write(){
    struct mahasiswa input;
    printf("Masukan nama file: ");scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");scanf(" %s", &tipe);
    strcat(nama_file,tipe);
    system("cls");
    fptr = fopen(nama_file,"w");
    if(fptr == NULL){
        printf("err: tidak dapat membuat file");
        exit(1);
    }
    while(1){
        printf("Nama Depan      : ");scanf("%s",input.nama_dp);
        //kondisi stop
        if(strcmp(input.nama_dp, "stop")==0){
            break;
        }
        printf("Nama Belakang   : ");scanf("%s",input.nama_bl);
        printf("NIM             : ");scanf("%i",&input.nim);
        printf("Angkatan        : ");scanf("%i",&input.angkatan);
        printf("IPK             : ");scanf("%f",&input.ipk);
        fwrite(&input, sizeof(struct mahasiswa), 1, fptr);
    }
    fclose(fptr);
}
void update(){
  struct mahasiswa input;
    printf("Masukan nama file: ");scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");scanf(" %s", &tipe);
    strcat(nama_file,tipe);
    system("cls");
    fptr = fopen(nama_file,"a");
    if(fptr == NULL){
        printf("err: tidak dapat membuat file");
        exit(1);
    }
    while(1){
        printf("Nama Depan      : ");scanf("%s",input.nama_dp);
        //kondisi stop
        if(strcmp(input.nama_dp, "stop")==0){
            break;
        }
        printf("Nama Belakang   : ");scanf("%s",input.nama_bl);
        printf("NIM             : ");scanf("%i",&input.nim);
        printf("Angkatan        : ");scanf("%i",&input.angkatan);
        printf("IPK             : ");scanf("%f",&input.ipk);
        fwrite(&input, sizeof(struct mahasiswa), 1, fptr);
    }
    fclose(fptr);

}
void delete_funct(){
    printf("Masukan nama file: ");scanf(" %s", &nama_file);
    printf("Masukan tipe file: ");scanf(" %s", &tipe);
    strcat(nama_file,tipe);
    system("cls");
    if(remove(nama_file)==0){
        printf("File berhasil dihapus");
    }else{printf("File gagal dihapus");}

}
