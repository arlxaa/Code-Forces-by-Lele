#include <Stdio.h>

int main (){
	int t;
	scanf("%d", &t);
	char s[4];
	for (int tc = 0; tc < t; tc++){
		scanf("%s", s);
		if ((s[0] == 'y' || s[0] == 'Y') &&(s[1] == 'e' || s[1] == 'E') &&(s[2]=='s'||s[2]=='S')){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	
}


