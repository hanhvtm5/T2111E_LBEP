#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int i=1,s=0;
	while(n%i==0 && i<=n){
		// Yes
		s= s+i;
		i++;
		printf("uoc cua n la:%d\n",i);
	}
	// No
	printf("Tong cua cac uoc:%d",s);
	    
}
