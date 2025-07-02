#include<stdio.h>
//find area
int main () {
    int area , radius, l , w , base , height , a , b , side;
    printf("enter that which shap area you want to find from (1-5): ");//circle = 1,rectangle = 2,squre = 3,triangle = 4,trapezoid = 5
    scanf("%d",&area);
    if (area == 1){
        printf("enter radius = ");
        scanf("%d",&radius);
    }
    else if (area == 2) {
        printf("enter l = ");
        scanf("%d",&l);
        
        printf("enter w = ");
        scanf("%d",&w);
    }
    else if (area == 3) {
        printf("Enter the side of Squre = ");
        scanf("%d",&side);
    }
    else if (area == 4) {
        printf("Enter the Base value : ");
        scanf("%d",&base);

        printf("Enter the Hight value : ");
        scanf("%d",&height);
    }
    else if (area == 5) {
        printf("Enter base 1 a = ");
        scanf("%d",&a);

        printf("Enter base 2 b = ");
        scanf("%d",&b);

        printf("Enter Height = ");
        scanf("%d",&height);
    }
    else {
        printf("the number is not valid");
    }
    switch (area) {
        case 1 :printf("area of Circle is = %f \n",3.14*radius*radius);
                break;
        case 2 :printf("area of Rectangke is = %d \n",l*w);
                break;
        case 3 :printf("area of Squre is = %d \n",side*side);
                break;
        case 4 :printf("area of Triangle is = %f \n",0.5 * base * height);
                break;
        case 5 :printf("area of Trapezoid is = %f \n", 0.5*(a+b)*height);
                break;
        default :printf("the value is incorrect");
    }
    return 0;
}