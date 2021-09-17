#include<stdio.h>
int count_bit(int);
int main(){
	int num;
	printf("Enter the num\n");
	scanf("%d",&num);
	printf("%d is %s \n",num,(count_bit(num)>1)?"not power of 2":"power of 2");

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
