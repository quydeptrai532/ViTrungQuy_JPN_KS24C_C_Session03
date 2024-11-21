#include<stdio.h>

int main(){
	int a,b;
	float s;
    printf("nhap vao do dai canh cua tam giac\n");
    scanf("%d",&a);
    printf("nhap vao chieu cao cua tam giac\n");
    scanf("%d",&b);
    s=(float)(a*b)/2;
    printf("dien tich cua tam giac la %f",s);
    return 0;
}
