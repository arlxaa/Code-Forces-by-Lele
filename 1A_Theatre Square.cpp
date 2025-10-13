#include <stdio.h>
#include <math.h>

int main (){
	double n, m, a;
	scanf("%lf %lf %lf", &n, &m, &a);
	long long int x = ceil(n/a);
	long long int y = ceil(m/a);
	printf("%lld", x*y);
}
