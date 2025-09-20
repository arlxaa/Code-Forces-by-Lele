#include <stdio.h>


int main (){
	long long int t, x;
	scanf("%lld", &t);
	
	for (int i = 0; i < t; i++){
		//user input angkany
		scanf("%lld", &x);
		
		//kalau x nya even, dia bakal dibagi terus sama angka 2 sampe x nya jadi odd, dia bakal skip part inii
		while (x%2==0){
			x=x/2;
		}
		
		if (x>1){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
		
		}
}
