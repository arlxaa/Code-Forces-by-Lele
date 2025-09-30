#include <stdio.h>

int main (){
	int x1, x2, x3, a, jarak;
	
	scanf("%d %d %d", &x1, &x2, &x3);
	if (x1>x2){
		a = x1;
		x1 = x2;
		x2 = a;
	}
	if (x2>x3){
		a = x2;
		x2 = x3;
		x3 = a;
	} 
	if (x1>x2){
		a = x1;
		x1 = x2;
		x2 = a;
	}
	
	jarak = x3 - x1;
	printf("%d", jarak);
	
}


