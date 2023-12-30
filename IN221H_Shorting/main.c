#include <stdio.h>
#include <stdlib.h>


struct mahasiswa{
    int nim;
    char nama[100],email[100];
};

void inputData(struct mahasiswa list[], int s);
void tampilData(struct mahasiswa list[], int s);
void bsortDesc(struct mahasiswa list[], int s);

int main()
{
    struct mahasiswa data[20];
    int banyak,i,s,search;

    printf("Masukan berapa banyak data mahasiswa : ");
    scanf("%d", &banyak);

    inputData(data, banyak);
    printf("\n\nSelection Short:\n");
    printf("\n\n");
    printf("\n==============================================================\n");
    printf("\nSebelum Sorting");
    tampilData(data, banyak);
    printf("\n==============================================================\n");
    printf("\n\nSesudah sorting");
    printf("\n==============================================================\n");
    bsortDesc(data, banyak);
    tampilData(data, banyak);
    printf("\n==============================================================\n");
    return 0;
}

void inputData(struct mahasiswa list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n\Masukan data ke - #%d", i + 1);

        printf("\nMasukan NIM   : ");
        scanf("%i", &list[i].nim);

        printf("Masukan Nama  : ");
        scanf(" %[^\n]",&list[i].nama);

        printf("Masukan Email : ");
        scanf(" %[^\n]",&list[i].email);
    }
}



void tampilData(struct mahasiswa list[80], int s)
{
    int i,search;

    printf("\n\nNIM\t\tNama\t\tMarks\n");
    for (i = 0; i < s; i++)
    {
        printf("%i\t\t%s\t\t%s\n", list[i].nim, list[i].nama, list[i].email);
    }


}

void bsortDesc(struct mahasiswa list[80], int s)
{
//    672019062 672019063 672019061
//    672019062 672019061 672019063
//    672019061 672019062 672019063
//
//    pengurutan dari terkecil 672019061 672019062 672019063

    int i, j;
    struct mahasiswa temp;

    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].nim > list[j + 1].nim)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}
