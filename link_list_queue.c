/*Code to impliment queue through link list.*/
#include<stdio.h>
#include<stdlib.h>
struct link_list
{
int num;
struct link_list *next;
};
       typedef struct link_list Node;
       
       Node* push_queue(Node* list)
       {
             Node* temp=(Node*)malloc(sizeof(Node));
             scanf("%d",&temp->num);
             temp->next=list;
             return temp;
             }
       
       void pop_queue(Node* list)
       {
             Node*prev=list;
             while(list->next!=0)
             {
             prev=list;
             list=list->next;
             }
             printf("%d\n",list->num);
             prev->next=0;
             free(list);
             }
             
       void display(Node *list)
       {
            while(list!=0)
            {
            printf("%d \n",list->num);
            list=list->next;
            }
            getch();
       }
       
       main()
       {
             int choice;
             Node* first=0;
             while(choice!=-1)
             {
             printf("Enter the choice: 1 to push, 2 to pop, 3 to display, -1 to exit -->");
             scanf("%d",&choice);
             switch (choice)
             {
                    case 1: printf("Enter the number to be pushed.");
                            first=push_queue(first);
                            break;
                    case 2: printf("The data poped out is : ");
                            pop_queue(first);
                            break;
                    case 3: printf("The complete stack is:\n");
                            display(first);
                            break;
                    default: printf("Wrong choice!!! Please re-enter.\n");
                    }
             }
              
             }
