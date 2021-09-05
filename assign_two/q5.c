#include<stdio.h>

#define N 5
int queue[N];
int end=-1;
int front=-1;

void push()
{
	int x;

	if(end==N-1)
	    printf("\nOverflow!!!");
	else if (front==-1 && end==-1)
	{
		front=end=0;
		printf("\nEnter the element to be added to queue: ");
	    scanf("%d",&x);
		queue[end]=x;
		printf("\nFront Pointer: %d",front);
		printf("\nRear Pointer: %d",end);
	}    
	else
	{
		end++;
		printf("\nEnter the element to be added to queue: ");
	    scanf("%d",&x);
		queue[end]=x;
		printf("\nFront Pointer: %d",front);
		printf("\nRear Pointer: %d",end);
	}
}

void pop()
{
	if(front==-1 && end==-1)
	    printf("\nUnderflow!!!");
	else if (front==end)
	{ 
	    printf("\nDeleted data: %d",queue[front]);
	    front=-1;
		end=-1;	
		printf("\nFront Pointer: %d",front);
		printf("\nRear Pointer: %d",end);
	}  
	else
	{
		printf("\nDeleted element: %d",queue[front]);
		front++;
		printf("\nFront Pointer: %d",front);
		printf("\nRear Pointer: %d",end);
	}  
}

void display()
{
	int i;
	
	if (front==-1 && end==-1)
	    printf("\nQueue is empty!!!");
	else
	{ 
	printf("\nThe elements present in the Queue are as follows: ");
	    for(i=front;i<=end;i++)
	        printf("\n%d",queue[i]);
	}    
}

void peek()
{
	if (front==-1 && end==-1)
	    printf("\nQueue is empty!!!");
	else
	{
	
	    printf("\nThe data at the front of Queue: %d",queue[front]);
        printf("\nFront Pointer: %d",front);
		printf("\nRear Pointer: %d",end);	    
    }
}

void main()
{
   	int choice;
 	
 	
 	do
 	{
 	 printf("\n\n\n****Queue has 5 address spaces***\nChoices of Operation--\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Press 0 to get out! \nEnter your choice: ");
	 scanf("%d",&choice);
	 
	 switch(choice)
	 {
	 	case 1: push();
	 	        break;
	 	case 2: pop();
	 	        break;
	    case 3: peek();
	 	        break;
		case 4: display();
	 	        break;
	    default: printf("\nInvalid Choice!!!");
	 	       			 		 			         
	 }	
	}
	
	while (choice!=0);
	
	getch();	
}
