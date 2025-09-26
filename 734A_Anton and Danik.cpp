#include <stdio.h>
#include <string.h>

int main (){
	int x, brpbnyk;
	int danik = 0;
	int anton = 0;
	
	scanf("%d", &x);
	
	char kata[x+1];
	scanf("%s", kata);
	
	brpbnyk = strlen(kata);

	for (int i = 0; i < brpbnyk; i++){
		if (kata[i]=='A') {
			anton++;	
		} else if (kata[i]=='D'){
			danik++;
		}
	}
	if (danik > anton){
		printf("Danik");
	} else if (danik < anton){
		printf("Anton");
	} else {
		printf("Friendship");
	}

}



