//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int array[100], search, c, n;
//    printf("Masukan banyak data\n");
//    scanf("%d", &n);
//    printf("Masukan %i data:\n", n);
//
//    for (c = 0; c < n; c++)
//        scanf("%d", &array[c]);
//
//    printf("Masukan data yang akan dicari\n");
//    scanf("%d", &search);
//
//    for (c = 0; c < n; c++){
//        if (array[c] == search){
//            printf("Data %d berada pada posisi %d\n", search, c+1);
//            break;
//        }
//    }
//    if (c == n)
//        printf("Data %d tidak ada\n", search);
//
//    return 0;
//}


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
//    section(data,banyak);
    printf("\n\n");
    printf("\n==============================================================\n");
    printf("\nSebelum Sorting");
    tampilData(data, banyak);
    printf("\n==============================================================\n");    printf("\n\nSesudah sorting");
    printf("\n==============================================================\n");
    bsortDesc(data, banyak);
    tampilData(data, banyak);
    printf("\n==============================================================\n");

//    printf("Masukan data yang akan dicari\n");
//    scanf("%d", &search);
//
//    for (i = 0; i < s; i++){
//        if (data[i].nim == search){
//            printf("Data %d berada pada posisi %d\n", search, i+1);
//            break;
//            }
//        }
//    if (i == s)
//        printf("Data %d tidak ada\n", search);
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

//
//void section(struct mahasiswa list[80], int s){
//    int i,j, position,swap;
//    for (i = 0; i < s; i++) {
//      position = i;
//      for (int j = i + 1; j < s; j++) {
//         if (list[position].nim > list[j].nim)
//            position = j;
//      }
//      if (position != i) {
//         swap = list[i].nim;
//         list[i].nim = list[position].nim;
//         list[position].nim = swap;
//      }
//
//    }
//    for (i = 0; i < s; i++)
//        printf(" %d\t\t", list[i].nim);
//        printf("\n %s\t\t", list[i].nama);
//        printf("\n %s\t\t", list[i].email);
//}



