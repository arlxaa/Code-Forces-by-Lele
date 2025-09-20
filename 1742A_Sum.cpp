#include <stdio.h>


int main (){
	int t, a, b, c, x;
	
	// x = 1 artinya benar
	
	//test case
	scanf("%d", &t);
	for (int i = 0; i <t; i++){
		scanf("%d %d %d", &a, &b, &c);
		if (a + b == c){
			printf("YES\n");
		} else if (a + c == b){
			printf("YES\n");
		} else if (b + c == a){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
		
	}
		
}
