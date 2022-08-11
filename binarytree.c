#include "stdio.h"
#include "stdlib.h"

typedef struct node {

  int value ;

  struct node *left;

  struct node *right;

} node ;


node *createnode(){

  node *nod = (node*) malloc(sizeof(node));

 
  return nod;

}

void insert(int value , node *bt){

  node *node = createnode();

  node->left= NULL;
  node->right = NULL;


  node->value = value;

  if(bt->value == 0){

    *bt = *node;

    return;
    
  }
else if(value > bt->value){
      
      if(bt->right == NULL){
	
	bt->right = node;
	
	}else{

	insert(value,bt->right);
        

   }
}else if(value <  bt->value){
      if(bt->left == NULL){
	
	bt->left = node;
	
	}else{

	insert(value,bt->left);
        }
      

  }else{
    
    printf("already in the tree");

  }



}



int main(void){

  node bt;

  bt.value = 0;

  insert(20,&bt);

  insert(55,&bt);

  insert(13,&bt);

  insert(58,&bt);

  printf("%d\n",bt.value);

  printf("%d\n",bt.right->value);

  printf("%d\n",bt.left->value);

  printf("%d\n",bt.right->right->value);

return 0;

}



