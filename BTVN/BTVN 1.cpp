#include<stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen N :");
	scanf("%d", &n);
	int i = 1;
	while (i<n){
		if(i%2!=0){
			printf("%d \n", i);
		}
		i++;
	}
}
