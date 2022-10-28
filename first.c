//write a program which maintain a linear search also perform the traversing ,searching insertion and deletion 
#include<stdio.h>
#include<stdlib.h>
struct node{
int info; 
struct node *link;
};
int traversing ();
int linearsearch();
int dlete();
int insert();
int main()
{
  struct node *start=NULL;
  struct node *temp=NULL;
  temp=(struct node*)malloc(sizeof(struct node));
  int value;
  printf("enter the value");
  scanf("%d",&value);
  temp-> info =value;
  temp-> link =NULL;
  start=temp;
  temp=(struct node*)malloc(sizeof(struct node));
  
  printf("enter the value");
  scanf("%d",&value);
  
  temp->info=value;
  temp-> link =start;
  struct node *ptr=NULL;
  start=temp;
  ptr=start;
  printf("start-->");
  while(ptr!=NULL){
  printf("%d -> ",ptr->info);
  ptr=ptr->link;}
  printf("X");
return 0;
}
