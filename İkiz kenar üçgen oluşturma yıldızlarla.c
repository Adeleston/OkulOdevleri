#include <stdio.h>

int main() {
    int bosluk = 5; //buradaki sayının bir fazlası kadar büyüklükte üçgen oluşturur.
    int yildiz = 1; // en tepede kaç tane yıldız olması gerektiğini söyler.
    
    for(int i = bosluk; i >= 0; i--) {
        for(int j = i; j > 0; j--) {
            printf(" ");
        }
        
        for(int j = 0; j < yildiz; j++) {
            printf("*");
        }
        yildiz += 2;
        printf("\n");
    }
    return 0;
}