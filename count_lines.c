#include <stdio.h>// header file 
//problem statement : to count the no. of lines in a file
//usage : gcc count_lines.c 
// to run : ./a.out
#define file 100  
void main() 
{ 
FILE *fp;//file pointer contains the information of file
int count = 1; //initialize the count value as 1
char filename[file];
char c; 
printf("Enter file name: "); 
scanf("%s", filename); //scan the file to be counted
fp = fopen(filename, "r");//open the file in the directory 
if (fp == NULL) 
{ 
printf("Could not open file %s", filename); 
} 
for (c = getc(fp); c != EOF; c = getc(fp)) 
if (c == '\n') 
count = count + 1; //the count will increase untill the end of line(space)
fclose(fp); //end the count and print in next step
printf("The file %s has %d lines\n ", filename, count); 
} 
