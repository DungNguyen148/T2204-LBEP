#include<stdio.h>

int main(){
	int n;
	int i = 1;
	int demuoc=0;
	scanf("%d", &n);
	for( i= 1;i<=n;i++){
		if(n%i==0){
			demuoc++;
		}
	
	}
	if(demuoc==2)
	printf("n la so nguyen to");
	else
	printf("n khong phai la so nguyen to");
	return 0;
}
