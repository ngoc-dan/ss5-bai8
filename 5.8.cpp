#include <stdio.h>
int main(){
	int a,b;
	
	printf("nhap so a : ");
	scanf("%d",&a);
	printf("nhap so b : ");
	scanf("%d",&b);
	int max=a > b ? a : b;
	for(int i = max;i >=1;i++){
		if((i % a == 0) && (i%b==0)){
			printf("%d",i);
			break;
		}
	}
	
	return 0;
}
