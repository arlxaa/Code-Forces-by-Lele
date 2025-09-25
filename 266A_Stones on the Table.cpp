#include <stdio.h>
#include <string.h>

int main (){
	int x;
	int y=0;
	
	scanf("%d", &x);
	char batu[x+1];
	scanf("%s", batu);
	
	
	for(int i=0; i<x; i++){
		if (batu[i]==batu[i+1]){
			y++;
		}
	}
	printf("%d", y);
}


