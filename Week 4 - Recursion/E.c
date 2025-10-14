// Online C compiler to run C program online
#include <stdio.h>

// Fungsi rekursif untuk menghitung nilai berdasarkan aturan tertentu
int formula(int N) {
    int result;

    // Basis rekursi: jika N == 1, langsung kembalikan 1
    if (N == 1) {
        return 1;
    } 
    // Jika N genap, panggil rekursi dengan N dibagi 2
    else if (N % 2 == 0) {
        result = formula(N / 2);
    } 
    // Jika N ganjil (selain 1), hitung dengan formula(N-1) + formula(N+1)
    else {
        result = formula(N - 1) + formula(N + 1);
    }

    return result; // Kembalikan hasil perhitungan
}

int main() {
    int A;      // Jumlah test case
    int N;      // Nilai input untuk setiap test case
    int result; // Hasil dari fungsi formula()

    // Baca jumlah test case
    scanf("%d", &A);

    // Loop untuk setiap test case
    for (int i = 1; i <= A; i++) {
        scanf("%d", &N);               // Baca nilai N
        result = formula(N);           // Panggil fungsi rekursif
        printf("Case #%d: %d\n", i, result);  // Cetak hasil
    }

    return 0;
}
