#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int i=1;
	
	while(i<n){
		// Yes
		int j=1,count=0;
		while(j<=i){
			//yes
			if(i%j==0){
				// Yes
				count++;
			}
			j++;
			if(count==2){
				printf("SNT:%d\n",i);
			}
			i++;
	}
	}
}
