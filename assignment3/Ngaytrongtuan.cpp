#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	
	if(n>=2){
		// Yes
		if(n<8){
			// Yes
			printf("Day la thu:%d",n);
		}else{
			// No
			if(n==8){
				// Yes
				printf("Day la chu nhat");
			}else{
				// No
				printf("Khong phai ngay trong tuan");
			}
		}
	}else{
		// No
		printf("Khong phai ngay trong tuan");
	}
}
