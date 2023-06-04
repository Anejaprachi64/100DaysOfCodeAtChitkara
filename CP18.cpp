#include <stdio.h>

int main(void) {
	int t,a,b,c,d;
	scanf("%d \n",&t);
	while(t--)
	{
	    scanf("%d %d %d %d \n",&a,&b,&c,&d);
	    if(a==c || b==d)
	       printf("YES \n");
	     else
             printf("NO \n");
	}
	return 0;
}
