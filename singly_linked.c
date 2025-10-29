#include<stdio.h>
#include<stdlib.h>
struct node{ 
int data;
struct node*next;
};struct node *head,*newnode,*temp;

struct node create(int data){
struct node* newnode=(struct node*)malloc(sizeof(struct node));  
newnode->data=data;
newnode->next=NULL;
if(head==NULL){
    head=temp=newnode;
}
else {
     temp->next=newnode;
     temp=newnode; 
}
}
void display (){
   temp=head;
   while (temp != NULL)
   {
      printf("%d ->",temp->data);
      temp=temp->next; 
   }
    
}
void count (){
   int c=0;
   temp=head;
   while (temp != NULL)
   {
      c++;
      temp=temp->next; 
   }
    printf("the number of nodes is %d",c);
}
void delete() {
    struct node* toDelete;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    toDelete = head;
    head = head->next; 
    
    if (head == NULL) {
        temp = NULL;
    }

    printf("Deleted first node with value: %d\n", toDelete->data);
    free(toDelete);
}
int main()
{
    int choice,value;
    while(1){
        printf("\nlinked list \n");
        printf("1. create \n");
        printf("2. display \n");
        printf("3. count \n");
        printf("4. delete \n");
        printf("5. exit \n");
        printf("\n enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("enter the value to insert");
               scanf("%d",&value);
               create(value);
            break;
        case 2:display();
               break;
        case 3:count();
               break;
        case 4:delete();
               break;
        case 5:delete();
               break;       
        default:printf("enter a valid choice");
            break;
        }
    }
}

