#include <stdio.h>

// Fungsi rekursif untuk menjelajahi "pohon biner"
// dan mencetak jumlah (sum) dari akar hingga ke setiap daun
void tree(int arr[], int index, int C, int sum) {
    // Basis: jika indeks melebihi jumlah node, hentikan rekursi
    if (index > C) return;

    // Tambahkan nilai node saat ini ke total sum
    sum += arr[index];

    // Hitung indeks anak kiri dan kanan
    int left = 2 * index;
    int right = 2 * index + 1;

    // Jika node ini adalah daun (tidak punya anak kiri maupun kanan)
    if (left > C && right > C) {
        // Cetak total sum dari akar ke daun ini
        printf("%d\n", sum);
        return;
    }

    // Rekursi ke anak kiri dan kanan
    tree(arr, left, C, sum);
    tree(arr, right, C, sum);
}

int main() {
    int N;  // jumlah test case
    int C;  // jumlah node dalam pohon
    scanf("%d", &N); // input banyak test case

    int x[100]; // array untuk menyimpan nilai tiap node (gunakan indeks mulai dari 1)

    // Proses setiap test case
    for (int i = 1; i <= N; i++) {
        scanf("%d", &C); // input jumlah node

        // input nilai setiap node
        for (int j = 1; j <= C; j++) {
            scanf("%d", &x[j]);
        }

        // cetak nomor kasus
        printf("Case #%d:\n", i);

        // panggil fungsi tree mulai dari akar (indeks 1) dengan sum awal = 0
        tree(x, 1, C, 0);
    }
}
