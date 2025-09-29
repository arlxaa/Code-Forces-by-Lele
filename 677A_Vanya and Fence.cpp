#include <stdio.h>

int main (){
	int x, y, a;
	int width = 0;
	
	scanf("%d %d", &x, &y);
	for (int i=1; i<=x; i++){
		scanf("%d", &a);
		if (a > y){
			width += 2;
		} else{
			width ++;
		}
	}
	printf("%d", width);
	
}






