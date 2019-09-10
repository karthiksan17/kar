#include <stdio.h> 
#include <stdlib.h> 
  
struct Node 
{ 
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x)
  {
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    if(head!=NULL)
      temp->next=head;
    head=temp;
}
void print()
{
 struct Node* temp=head;
 printf("enter list:");

 while(temp!=NULL)
  {
   printf("%d",temp->data);
   temp=temp->next;
}
printf("\n");
}
  
int main() 
{ 
    struct Node* head = NULL;
    int n,i,x;
    printf("enter numbers\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
     printf("enter number\n");
     scanf("%d",&x);
     insert(x);
     print();
}
   
  
    return 0; 
}
