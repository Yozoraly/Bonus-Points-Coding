#include <stdio.h>

int main(){
    double a,b;
    double pers;
    scanf ("%lf %lf", &a, &b);
    pers = 100 / (a/b);
    printf ("%.4lf%%\n", pers);
}