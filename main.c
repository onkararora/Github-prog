#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node
{
int data;
struct node* next;
};
struct node* head=NULL;
void enter()
{
    int num;
    struct node*ptr;
    scanf("%d" ,&num);
    ptr= (struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {

        head=ptr;
        head->data=num;
        head->next=NULL;
        count++;
        return;
    }

    ptr->data=num;
    ptr->next=head;
    count++;
    head=ptr;

    }
    void enteratend()
    {
        int num;
        struct node*ptr, *t;
     scanf("%d" ,&num);
    ptr= (struct node*)malloc(sizeof(struct node));
     if(head==NULL)
    {

        head=ptr;//Linked first, entered later
        head->data=num;
        head->next=NULL;
        count++;
        return;
    }
    t=head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=ptr;
    ptr->data=num;
    ptr->next=NULL;
    count++;
    }
void enteratnth()
    {
        int num,pos;
        struct node*ptr, *t;
     scanf("%d" ,&num);
     scanf("%d", &pos);
     t=head;
     int i=1;
     while(t->next!=NULL)
     {
        printf("coming\n %d",i);
    i++;
    if(i==pos)
    {
        ptr->next=t->next;
        t=ptr;
        printf("coming outer\n %d",i);
        return;
            }

        t=t->next;
         }
    }
  void display() {
   struct node *t;

   t = head;

   if (t == NULL) {
      printf("Linked list is empty.\n");
      printf("No. of elements= %d",count);
      return;
   }

   while (t->next != NULL) {
      printf("%d\n", t->data);
      t = t->next;
   }
   printf("%d\n", t->data);
   printf("No. of elements= %d",count);

}


int main()
{
int n;

while(1){
        scanf("%d",&n);

        switch(n){
    case 1:
        enter();
    break;
    case 2:display();
    break;
    case 3: enteratend();
    break;
    case 4: enteratnth();
    break;
}
}
    return 0;
}
