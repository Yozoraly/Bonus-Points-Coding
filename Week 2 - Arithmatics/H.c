#include <stdio.h>
int main (){
    float a,b,c;
    scanf ("%f %f %f", &a,&b,&c);
    float totalDmg = a * 0.2 + b * 0.3 + c * 0.5;
    printf ("%.2f\n", totalDmg);
}
