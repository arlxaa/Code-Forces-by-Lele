#include <stdio.h>
#include <stdlib.h>


int main (){
	int angka, row, column, iMoves, jMoves, total;
	
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			scanf("%d", &angka);
			if (angka == 1){
				row = i;
				column = j;
			}
		}
	}
	
	iMoves = abs(row - 3);
	jMoves = abs(column - 3);
	total =  iMoves + jMoves;
	
	printf("%d", total);
	
}





