#include <stdio.h>
#include <stdlib.h>
typedef struct node1{
int id;
char name[10];
char branch[5];
int sem;
int ph;
struct node1 *next;
}node;
node *head,*temp,*p;
void create();
void display();
void insertf();//insert at front
void insertb();//insert at end
void read();//reading
void delf();//delete at front
void delb();//delete at end
void stack();//stack demonstration
void queue();//queue demonstration
int main()
{
 int n,i,ch;
    do
    {
        printf("_____MENU_____\n");
        printf("1.Create\n2.Display\n3.Insertion at front\n4.Insertion at end\n5.Deletion at front\n6.Deletion at end\n7.stack demostration\n8.Queue demostration");
        printf("Enter your choice\n");
        scanf("%d",&ch);
            switch(ch)
            {
               case 1:printf("Enter the no. of nodes you need\n");
                      scanf("%d",&n);
                        for(i=0;i<n;i++)
                        {
                            printf("Enter the details of %d student\n",i+1);
                           create();
                        }
                       break;
               case 2: display();
                       break;
               case 3: insertf();
                       break;
               case 4: insertb();
                       break;
               case 5: delf();
                       break;
               case 6: delb();
                       break;
               case 7: stack();
                       break;
               case 8: queue();
                       break;
               default: printf("Invalid choice \n");


            }

    }while(ch!=9);
 return 0;
}

void create()
{

        if(head=='\0')
        {
            temp=(node*)malloc(sizeof(node));
            read();
            head=temp;
            temp->next='\0';
            p=head;
        }
        else
        {
            temp=(node*)malloc(sizeof(node));
            read();
            p->next=temp;
            temp->next='\0';
            p=temp;
        }


}

void display()
{
    node *temp1;
    temp1=head;
        while(temp1!='\0')
        {
            printf("student id %d\n",temp1->id);
            printf("Enter name %s\n",temp1->name);
            printf("Enter sem %d\n",temp1->sem);
            printf("Enter branch %s\n",temp1->branch);
            printf("Enter ph %d\n",temp->ph);
            temp1=temp1->next;
        }
}

void insertf()
{
            temp=(node*)malloc(sizeof(node));
            read();
            temp->next=head;
            head=temp;

}

void insertb()
{
    node *temp1;
    temp1=head;
        while(temp1->next!='\0')
        {
            temp1=temp1->next;
        }
    temp=(node*)malloc(sizeof(node));
    read();
    temp1->next=temp;
    temp->next='\0';
}

void read()
{

            printf("Enter student id\n");
            scanf("%d",&temp->id);
            printf("Enter name\n");
            scanf("%s",temp->name);
            printf("Enter sem\n");
            scanf("%d",&temp->sem);
            printf("Enter branch\n");
            scanf("%s",temp->branch);
            printf("Enter ph\n");
            scanf("%d",&temp->ph);
return;
}

void delf()
{
    node *temp1;
    temp1=head;
    head=temp1->next;
    free(temp1);
}

void delb()
{
    node *temp1,*temp2;
    temp1=temp2=head;
    temp1=temp1->next;
        while(temp1->next!='\0')
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
     temp2->next='\0';
     free(temp1);

}

void stack()
{   int ch;
    printf("STACK OPERATIONS\n1.Insert at end\n2.Delete at end\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insertb();
                break;
        case 2: delb();
                break;
        default: printf("Invalid choice\n");

    }

}

void queue()
{
    int ch;
    printf("Queue Operations\n1.Insert at end\n2.Delete at front\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: insertb();
                break;
        case 2: delf();
                break;
        default: printf("Invalid choice\n");
    }

}
