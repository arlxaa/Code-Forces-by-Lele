#include <stdio.h>

int main (){
	int a, b;
	int x=0;
	scanf("%d %d", &a, &b);
	
	while (a<=b){
		a *= 3;
		b *= 2;
		x++;
	}
	
	printf("%d", x);
}



