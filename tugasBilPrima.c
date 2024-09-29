#include <stdio.h>

// Note: bil prima adalah bilangan yang habis dibagi satu atau bilangan itu sendiri
int main(){
    int a, prima;

    printf("Masukan nilai: ");
    scanf("%d", &a);
    prima = 0; // set prima checker ke nol

    //operasi cek
    if (a <= 1){ // bil negatif bukan prima
        printf("Bukan Prima\n");
    } else {
        for (int i = 1; i <= a; i++){ // loop modulo dari range 1 hingga a
            if (a % i == 0) {
                prima++; // jumlah modulo 0
            }
        }
        //debug
        //printf("%d\n", prima);
        if (prima == 2){ // sesuai dengan definisi
            printf("Prima\n");
        }
        else {
            printf("Bukan Prima\n");
        }
    }
    return 0;
}