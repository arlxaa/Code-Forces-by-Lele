#include <stdio.h>
#include <ctype.h>


int main (){
	char y[1000];
	
	scanf("%s", y);
	
	y[0] = toupper(y[0]);
	
	printf("%s", y);
	
	
}





