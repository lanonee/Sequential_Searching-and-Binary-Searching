#include<stdio.h>
//SEQUIENTIAL SEARCHING
void main (){
	int n, i, cari, data[10], jumlah = 0;
	printf("mau input berapa data : ");
	scanf("%d",&n);
	printf("masukkan %d integer(s)\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&data[i]);
	}
	printf("cari angka berapa? ");
	scanf("%d",&cari);
	for(i=0;i<n;i++){
		if(data[i]==cari){
			printf("%d ketemu, dan tersimpan di lokasi atau indeks ke %d \n", cari, i+1);
			jumlah++;
		}
	}
	if (jumlah==0)
		printf("angka %d tidak ditemukan", cari);
	else
		printf("angka %d ditemukan sebanyak %d kali dalam array", cari, jumlah);
}