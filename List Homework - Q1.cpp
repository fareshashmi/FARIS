#include<stdio.h>
#include<stdlib.h>
struct node{
	
	int number;
	struct node *next;
	
	
};

typedef struct node node;

int main(){
	
	
	int value,OddNumber=0,EvenNumber=0; 
	node *thead,*p,*chead,*q;
	
	while(1){
		
		printf("Enter a number:/t");
		scanf("%d",&value);
		
		if(value == -1) break;
		
		if(value%2!=0){ //Bu blokta tek say�lar� ba�a ekleme i�lemi ger�ekle�ir.
			
			if(OddNumber==0){
			
				thead=(node*)malloc(sizeof(node));
				p=thead;
	
			}else{
			
				p->next=(node*)malloc(sizeof(node));
				p=p->next;			
			}
		
			p->number=value;
			OddNumber++;
			p->next=NULL;
						
		}else{ 
			
			if(EvenNumber==0){
			
				chead=(node*)malloc(sizeof(node));
				q=chead;
	
			}else{
			
				q->next=(node*)malloc(sizeof(node));
				q=q->next;			
			}
		
			q->number=value;
			EvenNumber++;
			q->next=NULL;
					
		}
	
	}
	
	p->next=chead; // Bu sat�rda, tek say�lar listesinin sonuna cift sayilar listesi eklenmi� olur.
	
	p=thead;
	
	while(p!=NULL){ //Bu d�ng�n�n i�erisinde de en son yazd�rma i�lemi ger�ekle�ir.
		
		printf("%d  ",p->number);
		
		p=p->next;
		
	}
	
return 0;	
}
