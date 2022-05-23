#include <stdio.h>
#include <conio.h>
#define max 50

void nhapmang(int a[],int &n)
{
    printf("nhap so luong phan tu n :");
    scanf("%d", &n);
    for ( int i=0;i<n;i++)
    {
            printf("nhap phan tu thu %d:",i);
            scanf("%d",& a[i]);
    }
}
void xuatmang(int a[], int n)
{
        printf("noi dung cua mang la: \n");
        for(int i=0;i<n;i++)
      {
        printf("%d", a[i]);
      printf("\n");
      }
}
    void  timkiem(int a[], int n)
    {
        int i,x,sl=0;
        printf("nhap x\n");
        scanf("%d",&x);
      for(i=0;i<n;i++)
      {
                if(a[i]== x)
            {
                    printf("vi tri can tim %d \n",i);
              sl++;
            }
      }
      if(sl==0)
      printf("Khong co phan tu nao \n");



}
    int main()
    {
        int b[max],n,i;
        nhapmang(b,n);
        xuatmang(b,n);
        timkiem(b,n);


} 
