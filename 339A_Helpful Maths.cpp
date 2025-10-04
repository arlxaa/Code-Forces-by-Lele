#include <stdio.h>
#include <string.h>

int main (){
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int printed = 0;
	int pjg;
	char kata[101];
	
	scanf("%s", kata);
	pjg = strlen(kata);
	
	for (int i = 0; i < pjg; i++){
		if(kata[i]=='1'){
			x1++;
		} else if(kata[i]=='2'){
			x2++;
		} else if(kata[i]=='3'){
			x3++;
		}
	}
	
	for (int i = 0; i < x1; i++){
		if (printed != 0){
			printf("+");
			printed++;
		}
		printf("1");
		printed++;
	}
	
	for (int i = 0; i < x2; i++){
		if (printed != 0){
			printf("+");
			printed++;
		}
		printf("2");
		printed++;
	}
	
	for (int i = 0; i < x3; i++){
		if (printed != 0){
			printf("+");
			printed++;
		}
		printf("3");
		printed++;
	}
	
	
}




