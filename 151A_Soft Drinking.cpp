#include <stdio.h>
#include <math.h>


int main (){
	int n, k, l, c, d, p, nl, np;
//	n orang
//	k botol
//	l mililiter per botol
//	c lemon
//	d slices per lemon
//	p gram garam
//	nl mililiter per orang
//	np gram garam
	
	scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
	int lemon = c * d;
	int garam = p/np;
	int minum = k * l / nl;
	int min = lemon;
	
	if (min > garam){
		min = garam;
	}
	
	if (min > minum){
		min = minum;
	}
	
	int hasil = min / n;

	printf("%d", hasil);

	
}






