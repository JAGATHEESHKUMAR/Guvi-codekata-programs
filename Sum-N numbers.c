#include<stdio.h>
int main(){
int sum=0,n,i,a[100];
printf("Enter limit of numbers:");
scanf("%d",&n);
if(n>0){
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}}
for(i=0;i<n;i++){
sum=sum+a[i];}
prinf("Sum is %d",sum);
return 0;
}
