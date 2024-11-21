#include <stdio.h>
#define PI 3.14159 

int main() {
    float bankinh, chuvi, dientich;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &bankinh);
    chuvi = 2 * PI * bankinh; 
    dientich = PI * bankinh * bankinh;    
    printf("Chu vi hinh tron: %.2f\n", chuvi);
    printf("Dien tich hinh tron: %.2f\n", dientich);
    return 0;
}
