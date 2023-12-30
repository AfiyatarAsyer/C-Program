#include <stdio.h>
#include <string.h>
#define MAX 5

//Deklarasi struck
struct queue{
    char data[255];
}vaksin[MAX];//banyak data struck

int head, tail;

void inisialisasi();
int isEmpty();
int isFull();
void Enqueue();
void Dequeue();
void clear();
void display();
int cekNIM(char NIM[]);
int menu();



int main(){
    int input;
    inisialisasi();
    for(int i =0; input != 4;i++){
        input = menu();
        switch(input){
        case 1: Enqueue(); getch();break;
        case 2: Dequeue(); getch();break;
        case 3: clear(); getch();break;
        case 4: printf("Program Selesai");getch();exit(0);break;
        default: printf("Pilihan tidak ada!");getch();break;

        }
    }

}

void inisialisasi(){
    head = -1;//deklarasi inisialisasi
    tail = -1;//deklarasi inisialisasi

}

int isEmpty(){
    return tail == -1;//fungsi cek kosong?
}

int isFull(){
    return tail == MAX -1;//fungsi cek penuh?
}

void Enqueue(){//insert data
    if(isFull() == 0){
        char input[25];
        printf("\nNIM: ");
        fflush(stdin);
        gets(input);
        if(cekNIM(input) == 1){
            if(isEmpty() == 1){
                head = tail = 0;
                strcpy(vaksin[head].data, input);
            }
            else{
                tail++;
                strcpy(vaksin[tail].data, input);
            }
            printf("NIM valid!\n\n");
        }
        else{
            printf("NIM invalid!\n\n");
        }
    }
    else {
        printf("Antrian penuh!\n\n");
    }
}

void Dequeue(){//delet data
    if(isEmpty() == 0){
        printf("\nNIM %s telah divaksin!.\n\n",vaksin[head].data);
        for(int i = head; i < tail; i++){
            strcpy(vaksin[i].data,vaksin[i+1].data);
        }
        tail--;
    }
    else{
        printf("Antrian kosong!\n\n");
    }
}

void clear(){//kosongkan data
    head = tail = -1;
    printf("Antrian dikosongkan!\n\n");
}

void display(){//tampilkan data
    if(isEmpty()==0){
        for(int i = head; i <= tail; i++){
            printf("\n || %s ||",vaksin[i].data);
            if(i == 0)
                printf("Sedang divaksin!");
        }
    }
    else{
        printf("Antrian kosong!");
    }
}

int cekNIM(char NIM[]){
    int i;
    for(int a = 0; a < strlen(NIM);a++){
        if(NIM[a] != ' '){
            i++;
        }
    }
    if(i == 9){
        return 1;
    }
    else{
        return 0;
    }
}

int menu(){
    int i;
    system("cls");
    printf("Program: \n");
    display();
    printf("\nMenu: \n");
    printf("1. Masukan Antrian \n");
    printf("2. Keluarkan Antrian \n");
    printf("3. Kosongkan Antrian \n");
    printf("4. Exit \n");
    printf("Input pilihan menu: ");scanf("%i",&i);
    return i;

}
