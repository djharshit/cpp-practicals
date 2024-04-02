#include <stdio.h>
 
int main()
{
    float fh,cl;
    int c;
    printf("\n1: Fahrenheit to Celsius."); 
    printf("\n2: Celsius to Fahrenheit.");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&c);
 
    if(c ==1){
     printf("\nEnter temperature in Fahrenheit: ");
     scanf("%f",&fh);
     cl= (fh - 32) / 1.8;
     printf("Temperature in Celsius: %.2f",cl);
    }
    else if(c ==2){
     printf("\nEnter temperature in Celsius: ");
      scanf("%f",&cl);
      fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
    else{
     printf("\nInvalid Choice !!!");
    }
    return 0;
}