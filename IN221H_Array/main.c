#include <stdio.h>
#include <stdlib.h>
#define ISI 5
/*

Array | Larik = struktur data untuk menyimpan
variabel dengan tipe data yang sama

kenapa harus ada array untuk memudahkan kita dalam membuat banyak value dalam
satu variabel



*/
void array_3d(){
    char kelas = 'A', nama[5][4][20];
    /*{"Fanny", "Bane", "Jhonson", "Tigreal",
                    "Fanny1", "Bane1", "Jhonson1", "Tigreal1",
                    "Fanny2", "Bane2", "Jhonson2", "Tigreal2",
                    "Fanny3", "Bane3", "Jhonson3", "Tigreal3",
                    "Fanny4", "Bane4", "Jhonson4", "Tigreal4",
            };
            for(int i = 0; i < 5;i++){
                printf("Kelas %c:\n",kelas);
                for(int j = 0; j < 4;j++){
                    printf("%4i. %s \n",j+1,nama[i][j]);
                }
                printf("\n");
                ++kelas;
            }
            */

            //=====================

            /*
            for(int i = 0; i < 5;i++){
                printf("Kelas %c:\n",kelas);
                for(int j = 0; j < 4;j++){
                    scanf("%s \n",&nama[i][j]);
                }
                printf("\n");
                ++kelas;
            }
            kelas = 'A';
            for(int i = 0; i < 5;i++){
                printf("Kelas %c:\n",kelas);
                for(int j = 0; j < 4;j++){
                    printf("%4i. %s \n",j+1,nama[i][j]);
                }
                printf("\n");
                ++kelas;
            }
            */
}

void io_data();
void posisi_arr();
void penjumlahan_arr();
int main()
{
    /*
    int maks,n;
    printf("Masukan panjang array: ");
    scanf("%i",&maks);
    int min,max,arr[maks],isi,isi1,nilai[maks],nilai1[maks][maks];
    */
    int isi1;
    do{
    system("cls");
    //printf("Array: ");scanf("%i",&isi1);
    printf("Menu:\n\n1. Isi data dan tampilkan\n");
    printf("2. Mencari posisi array\n");
    printf("Masukan pilihan: ");scanf("%i",&isi1);

    switch(isi1){
        case 1:
            system("cls");
            printf("-Program Array 1D-\n\n");

            //contoh array kosong
            /*nilai[0] = 1;
            nilai[1] = 4;
            nilai[2] = 7;
            nilai[3] = 12;
            nilai[4] = 11;

            printf("%i\n",nilai[0]);
            printf("%i\n",nilai[1]);
            printf("%i\n",nilai[2]);
            printf("%i\n",nilai[3]);
            printf("%i\n",nilai[4]);
            */
            //======
            /*
            for(int i = 0; i < maks;i++){
                printf("Masukan nilai ke %i : ",i+1);scanf("%i",&nilai[i]);
            }
            for(int i = 0; i < maks;i++){
                printf("Nilai ke %i = %i \n",i,nilai[i]);
            }
            */
            io_data();
            getch();
            break;
        case 2:
            system("cls");
            //printf("-Program Array 2D-\n\n");
    /*
            nilai1[0][0] = 1;
            nilai1[0][1] = 4;
            nilai1[0][2] = 7;

            nilai1[1][0] = 1;
            nilai1[1][1] = 4;
            nilai1[1][2] = 7;

            nilai1[2][0] = 1;
            nilai1[2][1] = 12;
            nilai1[2][2] = 11;

            printf("%2i  %2i  %2i\n",nilai1[0][0],nilai1[0][1],nilai1[0][2]);
            printf("%2i  %2i  %2i\n",nilai1[1][0],nilai1[1][1],nilai1[1][2]);
            printf("%2i  %2i  %2i\n",nilai1[2][0],nilai1[2][1],nilai1[2][2]);
     */

    /*
            for(int i = 0; i < maks; i++){
                for(int j = 0; j < maks; j++){
                    printf("Masukan nilai ke [%i][%i] : ",i,j);scanf("%i",&nilai1[i][j]);
                }
                printf("\n");
            }

            for(int i = 0; i < maks; i++){
                for(int j = 0; j < maks; j++){
                    printf(" [%i] ",nilai1[i][j]);
                }
                printf("\n");
            }
     */

            posisi_arr();
            getch();
            break;
        case 3:
            //array_3d();
            system("cls");
            penjumlahan_arr();
            getch();
            break;
        case 4:
            break;
        default: printf("pilihan Tidak ada");
    }
    }
    while( isi1 != 4);
    exit(1);
    return 0;
}

void io_data(){
    int jumlah;
    printf("\n\nMasukan jumlah inputan = ");
    scanf("%d",&jumlah);
    float bhs,mtk,pemrog,rata[jumlah];
    char string[16][16];
    printf("============================================================================\n");
    printf("No.\t\tNama Mahasiswa\tBAHASA\tMATEMATIKA\tDIGITAL\n");
    printf("============================================================================\n");
    for(int i = 0; i < jumlah;i++){
        printf("%2d\t\t",i+1);
        scanf("%s %f %f %f",&string[i],&bhs,&mtk,&pemrog);
        rata[i]=(bhs+mtk+pemrog)/3;
        }
    printf("Berhasil ditambahkan");
    getch();
    system("cls");
    printf("===================================================\n");
    printf("No\t\tNama Mahasiswa\t\tRata rata\n");
    printf("===================================================\n");

    for(int i=0;i < jumlah; i++){
        printf("%2d\t\t%s\t\t\t%g\n",i+1,string[i],rata[i]);
    }
}

void posisi_arr(){

    int num[]={10,2,15,20,34,56,86},panjang;
    panjang = sizeof(num)/sizeof(*num);
    printf("Panjang %i\n",panjang);
    for(int i = 0; i < panjang;i++){
        printf("%4i ",num[i]);
    }
    int cari,pos=-1,i;
    printf("\n\nMasukan angka yang akan dicari letaknya: ");
    scanf("%d",&cari);

    for (i=0;i<7;i++)
    {
        if(cari==num[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos== -1)
        printf("Tidak ada angka %i ",cari);
    else
        printf("Nilai %i berada pada posisi %i",cari,pos);
}


void penjumlahan_arr(){
    int baris,kolom,banyak_baris,banyak_kolom;
    int A[10][10],B[10][10],C[10][10];
    printf("Masukan banyak Baris dan Kolom: ");
    scanf("%d %d",&banyak_baris,&banyak_kolom);
    // Scan Element for A matrix
    printf("Masukan elemen dari matriks A: \n");
    for(baris=0; baris < banyak_baris; baris++){
        for(kolom=0;kolom < banyak_baris; kolom++){
            printf("A [%d][%d] : ",baris,kolom);
            scanf("%d", &A[baris][kolom]);
        }
        printf("\n");
    }
    printf("\n\n Masukan elemen dari matriks B: \n");
    for(baris = 0; baris < banyak_baris; baris++){
        for(kolom = 0; kolom < banyak_kolom; kolom++){
            printf("B [%d][%d] : ",baris,kolom);
            scanf("%d", &B[baris][kolom]);
        }
        printf("\n");
    }
       // printing A matrix
    printf("A = ");
    for (baris = 0; baris < banyak_baris; baris++){
        printf("\t");
        for(kolom = 0; kolom < banyak_kolom; kolom++){
            printf("%d ",A[baris][kolom]);
        }
         printf("\n");
    }
    // printing B matrix
    printf("\n B=");
    for (baris = 0; baris < banyak_baris; baris++){
        printf("\t");
        for(kolom = 0; kolom < banyak_baris; kolom++){
            printf("%d ",B[baris][kolom]);
        }
         printf("\n");
    }
    //ADDition A+B
    for(baris = 0; baris < banyak_baris; baris++){
        for(kolom = 0; kolom < banyak_kolom; kolom++){
            C[baris][kolom] = A[baris][kolom] - B[baris][kolom];
        }
    }
    // printing C matrix
    printf("\n A+B ");
    for (baris = 0; baris < banyak_baris; baris++){
        printf("\t");
        for(kolom = 0; kolom < banyak_kolom; kolom++){
            printf("%d ",C[baris][kolom]);
        }
         printf("\n");
}
}
