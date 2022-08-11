#include "stdio.h"
#include "stdlib.h"

typedef struct node{

  int value;

  struct node *next;
}node;


typedef struct{

  node head;
  
  int len;

} linkedlist;

node *createnode(){

  node *nod =(node *) malloc(sizeof(node));

  return nod;

}

void prepend(linkedlist *l,int value){

node *newnode = createnode();

newnode->value = value;
  if(l->len == 0){
    
    l->head = *newnode;

    l->len++;

}else if (l->len == 1){

    l->head.next = newnode;

    l->len++;
}else{
    
    newnode->next = l->head.next;

    l->head.next = newnode;

    l->len++;



}

}



int main(){

  linkedlist ll;

 prepend(&ll,22);

 prepend(&ll,44);

 prepend(&ll,88);

 printf("%d",ll.head.next->next->value);


}

