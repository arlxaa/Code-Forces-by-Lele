#include <stdio.h>



int main (){
	int t;
	long long int x, y, a, moves;
	
	scanf("%lld", &t);
	
	for (int i = 0; i<t; i++){
		scanf("%lld %lld", &x, &y);
		
		if (x%y==0){
			printf("0\n");
		} else{
			a = x%y;
			moves = y-a;
			printf("%lld\n", moves);
		}

		}
		
		
		
	}
	
	
	




