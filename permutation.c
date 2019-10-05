#include<stdio.h>
//problem statement : to find permutation
//usage : gcc permutation.c 
// to run : ./a.out
void main()
{
int f=1,n,r,p,i,b=1; 
printf("enter n and r ");
scanf("%d ",&n);
scanf("%d",&r);
for(i=n;i>1;i--)//it makes the factorial of n and decrement i value by 1
{
f*=i;//this line represent n!
}
for(i=(n-r);i>1;i--)//it makes the factorial of n-r and decrement i value by 1
{
b*=i;//this line represent (n-r)!
}
p=f/b;//this line represent the formula n!/(n-r)!
printf("number of permutations are %d ",p);//then open the terminal and use gcc command followed by the file name eg.gcc per.c 
}
