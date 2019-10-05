#include<stdio.h>//convert farenheit to celsius
//problem statement : to find the celsius value for given farenheit value
//usage : gcc faren_to_celsius.c 
// to run : ./a.out
void main()
{
int a,c;
printf("enter the farenheit value");
scanf("%d",&a);//enter the farenheit value
c=(a-32)*0.5556;//formula to convert farenheit to celsius
printf("%d",c);//print celsius value
}//then open the terminal and use gcc command followed by the file name eg.gcc far.c 
