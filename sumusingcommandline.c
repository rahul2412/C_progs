#include<stdio.h>
int main(int argc,char *argv[])
{
int i,sum=0;
printf("sum is");
for(i=0;i<argc;i++)
{
sum=sum+atoi(argv[i]);}
}
