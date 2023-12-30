#include <stdio.h>

void bintang(int n){
    int i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n;j++){
            if(j == i || j == n-i+1 || i == n/2+1|| j == n/2+1){
            printf("* ");
            }else{printf(" ");}
        }
        printf("\n");
    }
}

int main(){
    bintang(7);
}
