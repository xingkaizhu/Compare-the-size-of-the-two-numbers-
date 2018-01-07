#include <stdio.h>
int hexcmp(int m,int n);
int main(){
	int a,b;

	scanf("%x%x",&a,&b);
hexcmp(a,b);
	

	return 0;	
	
}
int hexcmp(int m,int n){

	if(m>n)
printf("1");
	else if(m<n) 
printf("-1");
	else printf("0");
	return 0;
	
	
	
	
}
