#include <stdio.h>

int main (){
	int t, x;
	int y = 0;
	
	scanf("%d", &t);
	
	for (int tc = 0 ; tc < t; tc++){
		scanf("%d", &x);
		if (x == 1) y = 1;
	}
	
	if (y==1){
		printf("HARD");
	} else {
		printf("EASY");
	}
	
	
}
