#include<stdio.h>
int main(){
int n;
printf("Enter no.:");
scanf("%d",&n);
if(n==0)
printf("You entered value as zero");
else if(n>0)
printf("You entered positive number");
else
printf("You entered negative number");
return 0;
}
