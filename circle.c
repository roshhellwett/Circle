#include<stdio.h>
int main()
{
    int var;
    float rad;
    float area;
    float peri;
    const float pie = 3.14159;

    printf("This code is to find area and perimeter of circle \n");
    printf("Please choose 1 || 2 \n");
    printf("1. Area \n");
    printf("2. Perimeter \n");

    scanf("%d" ,&var);

    switch(var)
    {
    case 1:
        {
            printf("Please enter the radius of circle \n");
            scanf("%f", &rad);
            area = pie*(rad*rad);
            printf("Area of circle ia %f\n", area);
            break;
        }
    case 2:
        {
            printf("Please enter the radius of circle \n");
            scanf("%f", &rad);
            peri = 2*pie*rad;
            printf("Perimeter of circle ia %f\n", peri);
            break;
        }
    default:
        printf("Wrong Choice");
    }

    return(0);
}
