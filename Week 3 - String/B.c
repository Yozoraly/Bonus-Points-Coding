// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    int a;
    char kata[1000],copy[1000];
    
    scanf ("%d", &a);

    for (int i = 1; i <= a ; i++){
        scanf ("%s", kata);
        int length = strlen(kata);
        strcpy(copy,kata);
        for (int j = 0; j < length/2 ; j++){
        char temp = copy[j];
        copy[j] = copy[strlen(kata) - j - 1];
        copy[strlen(kata) - j - 1] = temp;
        }
        if (strcmp(kata,copy)==0){
        printf ("Case #%d: Yay, it's a palindrome\n", i);
    } else  printf ("Case #%d: Nah, it's not a palindrome\n", i);
    }

    return 0;
}