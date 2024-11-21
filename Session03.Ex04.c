#include <stdio.h>

int main()
{
	float a,b,c,sum,ave;
	printf("nhap diem toan van anh \n");
	scanf("%f %f %f",&a,&b,&c);
	sum=a+b+c;
	ave=sum/3;
	printf("Tong diem la %2f",sum);
	printf("Diem trung binh la %2f",ave);
	return 0;
}
