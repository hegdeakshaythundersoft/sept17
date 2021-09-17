#include<stdio.h>
int count_bit(int);
int main(){
	int num;
	printf("Enter the num\n");
	scanf("%d",&num);
	printf("%d has %d setbits\n",num,count_bit(num));

}
int count_bit(int a){
	int count=0;
	while(a){
	if(a&1)
	count++;
	a>>=1;
	}
	return count;


}
