#include <stdio.h>
#include <string.h>
#include <ctype.h>


void CaesarCipher(char arr[], int shift) {
    for (int i = 0; arr[i] != '\0'; i++) {
        char ch = arr[i];

        if (isupper(ch)) {
            arr[i] = (ch - 'A' + shift) % 26 + 'A';
        }

        else if (islower(ch)) {
            arr[i] = (ch - 'a' + shift) % 26 + 'a';
        }
    }
}

int main() {
    char arr[100];
    int shift;

    printf("Masukkan teks: ");
    scanf("%[^\n]", arr);

    printf("Masukkan pergeseran (shift): ");
    scanf("%d", &shift);
    shift %= 26;

    CaesarCipher(text, shift);
    printf("Hasil enkripsi: %s\n", text);

    return 0;
}
