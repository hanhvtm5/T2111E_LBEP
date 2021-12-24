#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	if(n>0){
		int i=1;
		float s= 0;
		while(i<=n){
		s= s+ (float)1/i;
			i++;
		}
		printf("Tong s la:%f\n",s);
	}else{
		printf("Error");
	}
}
