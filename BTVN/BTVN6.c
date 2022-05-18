#include<stdio.h>

int main(){
	int S=0;
	int i =1;
	int n;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		S+=i;
	}
	printf("Tong day so la %d", S);
}
