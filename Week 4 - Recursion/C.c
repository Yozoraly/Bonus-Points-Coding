#include <stdio.h>

// Fungsi rekursif untuk menjelajahi "pohon" dan mencetak jumlah (sum) dari akar ke setiap daun
void tree(int arr[], int index, int C, int sum) {
    if (index > C) return;  
    // Basis: jika indeks melebihi jumlah elemen, hentikan rekursi

    sum += arr[index]; 
    // Tambahkan nilai node saat ini ke total sum

    int left = 2 * index;       // indeks anak kiri
    int right = 2 * index + 1;  // indeks anak kanan

    // Jika node ini adalah daun (tidak punya anak kiri maupun kanan)
    if (left > C && right > C) {
        printf("%d\n", sum);  // cetak total sum dari akar ke daun ini
        return;
    }

    // Rekursi ke anak kiri dan kanan
    tree(arr, left, C, sum);
    tree(arr, right, C, sum);
}

// Fungsi rekursif untuk membaca array dari input
void readArray(int arr[], int index, int C) {
    if (index > C) return;  // berhenti jika sudah mencapai akhir
    scanf("%d", &arr[index]);
    readArray(arr, index + 1, C); // lanjut baca elemen berikutnya
}

// Fungsi untuk menangani setiap kasus uji
void solveCase(int caseNum, int totalCases) {
    if (caseNum > totalCases) return; // jika semua kasus sudah diproses, berhenti

    int C; // jumlah node dalam pohon
    scanf("%d", &C);
    int arr[105]; // array untuk menyimpan nilai node (gunakan indeks mulai dari 1)

    // Baca semua nilai node ke dalam array
    readArray(arr, 1, C);

    // Cetak nomor kasus
    printf("Case #%d:\n", caseNum);

    // Panggil fungsi tree untuk mencetak semua jumlah akar-ke-daun
    tree(arr, 1, C, 0);

    // Rekursif untuk memproses kasus berikutnya
    solveCase(caseNum + 1, totalCases);
}

int main() {
    int T; // jumlah test case
    scanf("%d", &T);
    solveCase(1, T); // mulai dari kasus pertama
    return 0;
}
