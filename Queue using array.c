#include<stdio.h>
#define n 5
int queue[n],front=0,rear=0,i,j=1;
void enqueue(){
    if(rear==n)
        printf("Queue is Full\n");
    else{
        printf("enter no%d:",j++);
        scanf("%d",&queue[rear++]);
    }
}
void dequeue(){
    if(front==rear)
    {
        printf("queue is empty\n");
    }
    else{
        printf("deleted element is %d\n",queue[front++]);
    }
}
void display()
{
    if(front==rear)
    printf("queue is  empty\n");
    else{
        printf("\nQueue elements are:\n");
        printf("Front<-");
        for(i=front;i<rear;i++)
        {
            printf("%d",queue[i]);
        }
        printf("<-Rear\n");
    }
}
int main(){
    int ch;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    do{
        printf("\n enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
              enqueue();
              break;
            case 2:
              dequeue();
              break;
            case 3:
              display();
              break;
            case 4:
              printf("operations Exited...");
              break;
            default:
    printf("Invalid choice!please enter valid choice.");
              break;
        }
    }
    while(ch!=4);
    return 0;
}
             
            

    
    
