//simpson's 1/3 formula
#include<stdio.h>
#include<math.h>
float f(int x){
int a=pow(x,2);
int y=sqrt(1-a);
return y;
}
main(){
float x[20],y[20],h,a,b;
int i;
float n,j,s,o,e,sum=0;
a=0;
b=1;
n=6;
s=0;
o=0;
e=0;
h=(b-a)/n;
for(i=0;i<n;i++){
x[i]=a+i*h;
y[i]=f(x[i]);
if(i%2==0 && i!=0 && i!=(n-1))
e+y[i];
if(i%2!=0 && i!=0 && i!=(n-1)){
o+=y[i];
}
if(i==0 || i==(n-1)){
s+=y[i];
}}
sum=(h*(s+4*o+2*e)/3);
printf("sum= %f",sum);}
