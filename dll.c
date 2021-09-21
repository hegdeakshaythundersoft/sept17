/*Write a program to insert an elements 1,10,2...using double link list
6. Pseudo code for reverse of link list(sll or dll)
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct s{
    int member;
    struct s *next;
    struct s *prev;
    
}node;
node *first=NULL,*last=NULL;
int main();
int y;
void create(){
    
    int pos,data;
    char c;
    printf("Press 'Y' to continue and 'N' to quit entry\n");
    while((c=getchar())=='Y'){
        printf("Enter the node position 1-first 0-last \n");
        scanf("%d",&pos);
        printf("Enter the element\n");
        scanf("%d",&data);
        if(pos==1){
            node *new=(node*)malloc(sizeof(node));
            new->member=data;
            new->next=NULL;
            new->prev=NULL;
            first=last=new;
        }
        else if(pos==0){
            node *new=(node*)malloc(sizeof(node));
            new->member=data;
            new->next=NULL;
            new->prev=last;
            last->next=new;
            last=new;
        }
        else{
            node *temp=first;
            while(pos>=3){//if 2 --2=1 temp->2nd --1=0
            temp=temp->next;
            pos--;
            }
            node *new=(node*)malloc(sizeof(node));
            new->member=data;
            new->next=temp->next;
            temp->next=new;
            new->prev=temp;
        }
    
    
    	create();
    }
    
	return;
	   
}

void display(){
    
    node *temp=first;
    while(temp!=NULL){
    printf("%d\t",temp->member);
    temp=temp->next;
    }
 
}

int main(){
	
    create();
    display();
   
    
    
    return 0;
}
