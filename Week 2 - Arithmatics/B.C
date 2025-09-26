#include <stdio.h>

int main (){
    double price, disc, calc;
    scanf ("%lf %lf", &price, &disc);
    calc = ((price - disc)/price)*100; //logika mat nya begini ga boleh lain emang tai emang
    printf ("%.2lf%%\n", calc ); //.2 buat .00 dblkg angka %%buat nunjukin persen
}