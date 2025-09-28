#include <stdio.h>

int main (){
	int t, x, y;
	int count = 0;
	
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf ("%d %d", &x, &y);
		if (y-x >= 2){
			count++;
		}
	} 
	printf("%d", count);
}

