#include<stdio.h> 
#include<stdlib.h> 
void beginsert(int); 
struct node
{
int data;
struct node *next; 
};
void insert_beginning(int item, struct node* start)
{
struct node *ptr = (struct node *)malloc(sizeof(struct node *)); 
if(ptr == NULL)
{
printf("\nOVERFLOW\n"); 
}
else {
ptr->data = item; ptr->next = start; 
start = ptr;
printf("\nNode inserted\n"); }
}
struct node *start;
void display(struct node * start) {
struct node *temp=start; 
while(temp!=NULL)
{
printf("%d", temp->data); }
temp=temp->next; 
}
int main (){
int choice,item; 
struct node * start;
do
{
printf("\nEnter the item which you want to insert?\n"); 
scanf("%d",&item);
insert_beginning(item, start);
printf("\nPress 0 to insert more ?\n"); 
scanf("%d",&choice);
}while(choice == 0);

display(start);
}

