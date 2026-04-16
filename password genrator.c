#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;
    
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    
    printf("🔐 Password Generator\n");
    printf("Enter password length: ");
    scanf("%d", &length);

    srand(time(0));

    printf("\nGenerated Password: ");

    for (int i = 0; i < length; i++) {
        int index = rand() % (sizeof(charset) - 1);
        printf("%c", charset[index]);
    }

    printf("\n");

    return 0;
}