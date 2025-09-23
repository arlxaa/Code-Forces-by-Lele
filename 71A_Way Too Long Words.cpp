#include <stdio.h>
#include <string.h>

int main (){
	int x;
	int y = 0;
	char n[1001];
	scanf("%s", n);
	x = strlen(n);
	for (int i=0; i<x; i++){
		if (n[i]== '4' || n[i]== '7'){
			y++;
		}
	}
	if (y == 4 || y == 7){
		printf("YES\n");
	} else {
		printf("NO\n");
		}
}
