#include <stdio.h>
struct data{
	char name[101];
	char ID[101];
	char age[101];
	char pos[101];
	char birth[101];
	char dob[101];
	char hs[101];
	char nos[101];
	char h[101];
	char rek[101];
};
int main(){
struct data info[1001];
int N;
scanf ("%d", &N);
int i;
for (i = 0; i < N; i++){
scanf("%s", info[i].name);
scanf("%s", info[i].ID);
scanf("%s", info[i].age);
scanf("%s", info[i].pos);
scanf("%s", info[i].birth);
scanf("%s", info[i].dob);
scanf(" %[^\n]", info[i].hs);
scanf("%s", info[i].nos);
scanf("%s", info[i].h);
scanf("%s", info[i].rek);
}
for (i = 0; i < N; i++){
printf ("Mahasiswa ke-%d:\n", i + 1);
printf("Nama: %s\n", info[i].name);
printf("NIM: %s\n", info[i].ID);
printf("Umur: %s\n", info[i].age);
printf("Kode Pos: %s\n", info[i].pos);
printf("Tempat Lahir: %s\n", info[i].birth);
printf("Tanggal Lahir: %s\n", info[i].dob);
printf("Almamater SMA: %s\n", info[i].hs);
printf("Jumlah Saudara Kandung: %s\n", info[i].nos);
printf("Tinggi Badan: %s\n", info[i].h);
printf("NOMOR REKENING: %s\n", info[i].rek);
}
}
