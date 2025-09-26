#include <stdio.h>

int main() {
    char A[101];
    scanf ("%100[^\n]", A);
    printf("#include <stdio.h>\n");
    printf("int main()\n");
    printf("{\n");
    printf("    printf(\"%%s\\n\",\"%s\");\n", A);
    printf("    return 0;\n");
    printf("}\n");
    return 0;
}
    