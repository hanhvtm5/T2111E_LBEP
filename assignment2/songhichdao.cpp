#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int m=0;
	int sd= n%10;
	m=  m*10 + sd;
	n= n%10;
	
	if(n>0){
		sd= n%10;
		m=m*10 + sd;
		n=n%10; 
		if(n>0){
			sd= n%10;
		    m=m*10 + sd;
		    n=n%10; 
		    if(n>0){
		    	sd= n%10;
		        m=m*10 + sd;
		        n=n%10; 
			}else{
				printf("So nghich dao:%d\n",m);
			}
		}else{
			printf("So nghich dao:%d\n",m);
		}
	}else{
		printf("So nghich dao:%d\n",m);
	}
	
}
