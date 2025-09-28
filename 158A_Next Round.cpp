#include <stdio.h>
#include <string.h>

int main (){
	int n, k;
	// n jumlah peserta
	// k itu urutan buat dpt skor abdul
	
	int skor[51];
	// nyimpen skor sebanyak 51 kali
	
	int skorabdul;
	// skor abdul didapet dari skor ke k
	
	int count = 0;
	// kalo ada yang skor diatas abdul, countnya nanti nambah
	
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++){
		scanf("%d", &skor[i]);
		// baca skornya sebanyak n
	}
	skorabdul = skor[k-1];
	// dapetin skor abdul
	
	for (int j=0; j < n; j++){
		if (skor[j]>=skorabdul && skor[j]>0){
			// kalo skor peserta lain lebih besar sama dengan 0 dan juga positif
			count++;
			// countnya nambah
		}
	}
	printf("%d", count);
	
}





