#include <stdio.h> // library C
#include <conio.h> // library untuk getch()

int main() {
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World\n"); // menampilkan Hello World

    printf("Masukkan nama : ");
    // scanf("%s", &nama);
    gets(nama);     //*  gets = get string

    printf("Masukkan NIM : ");
    scanf("%d", &nim); // %d untuk input int

    printf("Masukkan KOM : ");
    scanf(" %c", &kom); // %c untuk input char

    printf("Masukkan IP : ");
    scanf("%f", &ip); // %f untuk input bilangan real

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    puts(nama);     //* puts = put string

    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.3f\n", ip);

    printf("Press any button to continue...");
    getch(); // klik tombol apapun untuk mengakhiri program

    return 0;
}