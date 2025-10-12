#include <stdio.h>

int main (){
	int t, a, b;
	int max = 0;
	int skrg = 0;
	
	scanf ("%d", &t);
	
	for (int tc = 0 ; tc < t ; tc++){
		scanf("%d %d", &a, &b);
		skrg = skrg - a + b;
		
		if (max < skrg){
			max = skrg;
		}
	}
	
	printf("%d\n", max);
}
