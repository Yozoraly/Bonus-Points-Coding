#include <stdio.h>

struct family {
    char bapak[101];
    char emak[101];
    int sodkan;
};

struct student {
    char kodmaha[101];
    char namaha[101];
    char gendermaha[101];
    struct family fam;
};

struct lecturer {
    char koded[101];
    char namad[101];
    char genderd[101];
    int nummaha;
    struct student mhs[101]; 
};

int main() {
    int N;
    scanf("%d", &N);

    struct lecturer info[101];

    for (int i = 0; i < N; i++) {
        scanf("%s", info[i].koded);
        scanf("%s", info[i].namad);
        scanf("%s", info[i].genderd);
        scanf("%d", &info[i].nummaha);

        for (int j = 0; j < info[i].nummaha; j++) {
            scanf("%s", info[i].mhs[j].kodmaha);
            scanf("%s", info[i].mhs[j].namaha);
            scanf("%s", info[i].mhs[j].gendermaha);
            scanf("%s", info[i].mhs[j].fam.bapak);
            scanf("%s", info[i].mhs[j].fam.emak);
            scanf("%d", &info[i].mhs[j].fam.sodkan);
        }
    }

    int Q;
    scanf("%d", &Q);
    Q--;

    printf("Kode Dosen: %s\n", info[Q].koded);
    printf("Nama Dosen: %s\n", info[Q].namad);
    printf("Gender Dosen: %s\n", info[Q].genderd);
    printf("Jumlah Mahasiswa: %d\n", info[Q].nummaha);

    for (int j = 0; j < info[Q].nummaha; j++) {
        printf("Kode Mahasiswa: %s\n", info[Q].mhs[j].kodmaha);
        printf("Nama Mahasiswa: %s\n", info[Q].mhs[j].namaha);
        printf("Gender Mahasiswa: %s\n", info[Q].mhs[j].gendermaha);
        printf("Nama Ayah: %s\n", info[Q].mhs[j].fam.bapak);
        printf("Nama Ibu: %s\n", info[Q].mhs[j].fam.emak);
        printf("Jumlah Saudara Kandung: %d\n", info[Q].mhs[j].fam.sodkan);
    }

    return 0;
}

