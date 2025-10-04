#include <Stdio.h>
#include <String.h>
#include <ctype.h>

int main (){
	char x[101];
	int y;
	int a = 0;
	int b = 0;
	scanf("%s", x);
	y = strlen(x);
	
	for (int i = 0; i < y; i++){
		if (isupper(x[i])){
			a++;
		} else {
			b++;
		}
		
	}
	
	
	if (a <= b){
		for (int i = 0; i<y; i++){
		x[i] = tolower(x[i]);	
	} } else {
		for (int i = 0; i<y; i++){
		x[i]= toupper(x[i]);
	}
	}
	printf("%s", x);
	
	
	
}




