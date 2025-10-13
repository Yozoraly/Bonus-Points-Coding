// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    int a;
    char kata[1000];
    
    scanf ("%d", &a);

    for (int i = 1; i <= a ; i++){
        scanf ("%s", kata);
        int length = strlen(kata);
        for (int j = 0; j < length/2 ; j++){
        char temp = kata[j];
        kata[j] = kata[strlen(kata) - j - 1];
        kata[strlen(kata) - j - 1] = temp;
        }
        printf ("Case #%d : %s\n", i, kata);
    }

    return 0;
}