#include <stdio.h>
#include <string.h>

int main (){
	
	int x;
	int index[26] = {0};
	char kata[110];
	int counter = 0;
	
	scanf("%s", kata);
	
	x = strlen(kata);
	
	for (int i = 0 ; i < x ; i++){
		index[kata[i] - 'a']++;
	}
	
	for (int i = 0 ; i < 26 ; i++){
		if (index[i] > 0){
			counter++;
		}
	}
	if (counter%2 == 0){
		printf("CHAT WITH HER!\n");
	} else{
		printf("IGNORE HIM!\n");
	}
}

