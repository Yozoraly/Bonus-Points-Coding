#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char a[101]; 
    scanf("%[^\n]", a);
    printf("Halo %s\n", a);
	return 0;
}