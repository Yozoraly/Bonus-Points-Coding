#include <stdio.h>

int main (){
    long long N, damage, totaldmg=0, bonusdmg;
    scanf ("%d", &N);
    for (int i=1; i <= N; i++){
    damage = 100 + 50*(i-1); //harus i-1 bukan 50*N-50 biar dia nge count progress dari for loop
    //jadi first dmg karena 100 + 0 jadi 100, 2nd hit 100 + 50 = 150 dst
    totaldmg += damage; 
    }
    printf ("%lld\n", totaldmg);
    // long long N; // 1<= N <= 1000000,
    // long long dmg,bonus,total;
    // scanf ("%lld", &N);
    // dmg = 100*N;
    // bonus = 50*(N * (N-1)/2); // ngitung bonus damage jadinya 50 * (2 * (2-1)/2 = 50)
    // total = dmg + bonus;
    // printf ("%lld\n",total);
}