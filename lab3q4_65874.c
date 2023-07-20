#include <stdio.h>
#include <limits.h>
int main(){
int sum = 0;
int count = 0 ;
int num = INT_MAX ;
double avg ;
while(num > 0){
	printf("Enter number : ");
	scanf("%d",&num);
	sum += num;
	count++;
}
count--;
avg = (double)sum/count ;
printf("summation = %d and mean = %f\n",sum,avg);
return 0;
}
