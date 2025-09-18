#include <stdio.h>

int main (){
	int k, w, n, borrow;
	int total = 0;
	scanf("%d %d %d", &k, &n, &w);
	//k = price
	//n = uang
	//w = brp banyak pisangnya
	for (int i = 1; i <= w; i++){
		total += i * k;
	}
	borrow = total - n;
	if (borrow < 0){
		borrow = 0;
	}
	
	printf("%d", borrow);
}
