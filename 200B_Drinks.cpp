#include <stdio.h>

int main (){
	int n, x;
	
	scanf("%d", &n);
	
	double total = 0.00;
	
	for (int i = 0; i < n ; i++){
		scanf("%d", &x);
		total += x;
	}
	
	double average = total/n;
	
	printf("%.12f\n", average);
	
}
