#include<stdio.h>
#define N 5
 int stack[N];
 int top=0;
 
 void push()
 {
 	int x;
 	printf("Enter the value you want to enter into the Stack: ");
 	scanf("%d",&x);
 	
 	if (top==N)
 	    printf("\nOverflow!!!");
    else
	    {
	     printf("Enter the value you want to enter into the Stack: ");
 	     scanf("%d",&x);
		 stack[top]=x;
		 top++;	
		}
    printf("\nPosition of Stack Pointer: %d",top);			   
 }
 
 void pop()
 {
 	int y;
 	if (top==0)
 	   printf("\nUnderflow!!!");
 	else
	    {
	 	 y=stack[top-1];
	 	 top--;
	 	 printf("\nPopped item: %d",y);
		} 
    printf("\nPosition of Stack Pointer: %d",top);		  
 }
 
 void peek()
 {
 	if(top==0)
 	  printf("\nStack is empty!!!");
 	else
	   {
	    printf("\nTop most element of the stack is: %d",stack[top-1]);	
	   }  
	printf("\nPosition of Stack Pointer: %d",top);   
 }
 
 void display()
 {
 	int i;
 	printf("\nThe elements of stack are as follows: ");	
 	for(i=top-1;i>=0;i--)
 	{
 	 printf("\n%d",stack[i]);	
	}
	printf("\nPosition of Stack Pointer: %d",top);
 }
 
 int main()
 {
 	int choice;
 	
 	
 	do
 	{
 	 printf("\n\n\n****Stack has 5 address spaces***\nChoices of Operation--\n1.Push\n2.Pop\n3.Peek\n4.Display \nEnter your choice: ");
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
	
	return 0;
	      
 }
