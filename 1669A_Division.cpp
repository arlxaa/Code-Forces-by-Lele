#include <stdio.h>


int main (){
	long long int x, y;
	scanf("%lld", &y);
	for (int i = 0; i < y; i++){
	scanf("%lld", &x);
		if (x<=1399){
			printf("Division 4\n");
		} else if (x<=1599){
			printf("Division 3\n");
		} else if (x<=1899){
			printf("Division 2\n");
		} else {
			printf("Division 1\n");
		}
	}
}
