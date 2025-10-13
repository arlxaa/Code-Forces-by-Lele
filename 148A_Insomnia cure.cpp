#include <stdio.h>

int main (){
	int k, l, m, n, d;
	
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &d);
	
	int counter = 0;
	for (int i = d; i > 0; i--){
		if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
			counter++;
		}
	}
	
	printf("%d", counter);
	
	
}
