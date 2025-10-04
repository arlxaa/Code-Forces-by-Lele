#include <stdio.h>
#include <String.h>

int main (){
	int pjg;
	int x=0;
	char kata[20];
	
	scanf("%s", kata);
	pjg = strlen(kata);
	
	for (int i = 0; i < pjg; i++){
		if(kata[i] == '4' || kata[i] == '7'){
			x++;
		}
	}
	
	if (x == 4 || x == 7){
		printf("YES");
	} else {
		printf("NO");
	}
	
}


