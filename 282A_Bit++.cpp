#include <stdio.h>
#include <string.h>

int main (){
	int t;
	int x=0;
	char y[4];
	scanf("%d", &t);
	
	for (int i = 0; i<t; i++){
		scanf("%s", y);
		
		if (y[1]=='+'){
			x+=1;
		} else if (y[1]=='-'){
			x-=1;
		}
		
	}
	printf("%d", x);

}
