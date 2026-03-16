#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char **argv){
	if(argc !=3)return 1;
	long long n = atoll(argv[1]), m= atoll(argv[2]), sum= 0, i;
	for (i =0; i<n ; i++, sum++);
	for (i=0; i<m ; i++, sum++);
	printf("%lld\n",sum);
	return 0;
}
