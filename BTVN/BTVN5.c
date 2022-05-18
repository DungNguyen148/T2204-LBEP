#include<stdio.h>

int main(){
	int n;
	int tongcacuoc=0;
	int i = 1;
	scanf("%d", &n);
	for(i; i<n;i++){
		if(n%i==0){
			tongcacuoc+=i;
		}
	}
	if(tongcacuoc==n){
	printf("N la so hoan hao");
	}else{
		printf("N khong phai la so hoan hao");
	}
}
