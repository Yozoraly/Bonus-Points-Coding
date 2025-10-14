// Online C compiler to run C program online
#include <stdio.h>

// Variabel global untuk menghitung berapa kali fungsi dipanggil
// dengan nilai N yang merupakan kelipatan 3.
int count = 0;

// Fungsi rekursif untuk menghitung nilai F(N)
int formula(int N) {
    int result;  // variabel untuk menyimpan hasil sementara

    // ---- BASE CASE ----
    // Jika N = 0, nilai F(0) = 1
    if (N == 0)
        return 1;

    // Jika N = 1, nilai F(1) = 2
    if (N == 1)
        return 2;

    // ---- ATURAN KHUSUS ----
    // Jika N adalah kelipatan 5, maka gunakan rumus F(N) = N * 2
    if (N % 5 == 0) {
        result = N * 2;
    } 
    // ---- RUMUS UMUM ----
    // Jika bukan kelipatan 5, gunakan rumus dari soal:
    // F(N) = F(N-1) + F(N-2) + 2*N - 2
    else {
        result = formula(N - 1) + formula(N - 2) + 2 * N - 2;
    }

    // ---- COUNTER UNTUK KELIPATAN 3 ----
    // Setelah nilai F(N) dihitung, cek apakah N adalah kelipatan 3.
    // Jika iya, tambahkan count sebanyak 1.
    if (N % 3 == 0) {
        count++;
    }

    // Kembalikan hasil perhitungan F(N)
    return result;
}

int main() {
    int A;        // jumlah test case
    int N;        // nilai N untuk setiap test case
    int result;   // menyimpan hasil dari formula(N)

    // Membaca jumlah test case
    scanf("%d", &A);

    // Loop sebanyak jumlah test case
    for (int i = 1; i <= A; i++) {
        // Reset counter sebelum menghitung test case berikutnya
        count = 0;

        // Membaca nilai N dari input
        scanf("%d", &N);

        // Memanggil fungsi formula() untuk menghitung F(N)
        result = formula(N);

        // Menampilkan hasil dalam format yang diminta
        // Case #i: hasil_nilai total_pemanggilan_kelipatan_3
        printf("Case #%d: %d %d\n", i, result, count);
    }

    return 0;
}

