#include <stdio.h>

int main (){
	int t, a, b, c;
	int x = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d %d %d", &a, &b, &c);
		if (a+b+c>=2){
			x+= 1;
		} else {
			x+=0;
		}
		
	}
	printf("%d\n", x);
}
