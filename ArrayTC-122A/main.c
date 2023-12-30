#include <stdio.h>
#include <stdlib.h>

//Array (struktur data) yang digunakan untuk menyimpan data yang tipenya sama
//int[5];
void array(){
    int tinggi[5]={123,167,180,170,190};
    int panjang = sizeof(tinggi)/sizeof(*tinggi);
    int jum = 0;

    for(int a = 0;a < panjang;a++){
        printf("%i. Tinggi = %i\n",a,tinggi[a]);
        jum += tinggi[a];
    }
    float rerata = (float)jum/(float)panjang;
    printf("Rerata tinggi badan: %f",rerata);

}

int main()
{
    array();
    return 0;
}
