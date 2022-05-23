#include<stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Nhap mang :");
	for(int i = 0; i< n; i++){
		scanf("%d",&arr[i]);
	}

	int sum = 0, dem = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] %2 !=0){
			sum += arr[i];
			dem++;
				}
			}if (dem ==0)
		printf("Khong co so le");
			else{
			}
	printf("Trung binh cong : %f",(float)sum/dem);

}
	

