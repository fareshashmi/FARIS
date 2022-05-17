
#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int number;
	struct node *next;
	
	
};

typedef struct node node;

int main(){
	
	
	int value,EvenNumber=0,OddNumber=0; 
	node *thead,*p,*chead,*q;
	
	while(1){
		
		printf("Enter a number:");
		scanf("%d",&value);
		
		if(value == -1) break;
		
		if(value%2==0){ 
			
			if(EvenNumber==0){
			
				thead=(node*)malloc(sizeof(node));
				p=thead;
	
			}else{
			
				p->next=(node*)malloc(sizeof(node));
				p=p->next;			
			}
		
			p->number=value;
			EvenNumber++;
			p->next=NULL;
						
		}else{ 
			
			if(OddNumber==0){
			
				chead=(node*)malloc(sizeof(node));
				q=chead;
	
			}else{
			
				q->next=(node*)malloc(sizeof(node));
				q=q->next;			
			}
		
			q->number=value;
			OddNumber++;
			q->next=NULL;
					
		}
	
	}
	
	p->next=chead; 
	
	p=thead;
	
	while(p!=NULL){ 
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}

