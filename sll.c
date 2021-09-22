#include<stdio.h>
#include<stdlib.h>
typedef struct s{
    int member;
    struct s *next;
    
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
            first=last=new;
        }
        else if(pos==0){
            node *new=(node*)malloc(sizeof(node));
            new->member=data;
            new->next=NULL;
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
void rev(){

	node *temp=first,*buff=first->next,*puff;
	printf("%d\t%d\n",tempf->member,temps->next->member);
	while(temp!=NULL){
		puff=buff->next;
		buff->next=temp;
		temp=puff;
	
	}

	temp=last;
	last=first;
	first=temp;

	}
	





int main(){
	//node **ptr=first;
    create();
    display();
   rev();
    display();
    //swap(ptr);
    
    return 0;
}
