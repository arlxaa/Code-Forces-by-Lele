#include <stdio.h>
#include <string.h>

int main (){
	int x;
	// x itu panjang stringnya
	
	char a[110], b[110];
	//a itu baris pertama yang diinput
	//b itu baris kedua yang diinput
	scanf("%s", a);
	scanf("%s", b);
	// input baris pertama dan kedua
	
	x = strlen(a);
	// x diisi panjang a nya
	
	for (int i = 0; i < x; i++){
		
		
		if (a[i]==b[i]){
			printf("0");
			// kalau sama, print 0
			
		} else {
			printf("1");
			// kalau beda, print 1
		
		}
	}
	printf("\n");
}
