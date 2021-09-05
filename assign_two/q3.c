#include<stdio.h>
#define N 5
 int stack[N];
 int top=-1;
 
 int push()
 {
 	int x;
 	
 	
 	if (top==N-1)
 	    printf("\nOverflow!!!");
    else
	    {
	     printf("Enter the value you want to enter into the Stack: ");
 	     scanf("%d",&x);	
	     top++;
		 stack[top]=x;	
		}
    
	printf("\nPosition of Stack Pointer: %d",top);		
    return 0;			   
 }
 
 int pop()
 {
 	int y;
 	if (top==-1)
 	   printf("\nUnderflow!!!");
 	else
	    {
	 	 y=stack[top];
	 	 top--;
	 	 printf("\nPopped item: %d",y);
		} 
	
	printf("\nPosition of Stack Pointer: %d",top);	
    return 0;		  
 }
 
 int peek()
 {
 	if(top==-1)
 	  printf("\nStack is empty!!!");
 	else
	   {
	    printf("\nTop most element of the stack is: %d",stack[top]);	
	   }  
	
	printf("\nPosition of Stack Pointer: %d",top);   
	return 0;   
 }
 
 int display()
 {
 	int i;
 	printf("\nThe elements of stack are as follows: ");	
 	for(i=top;i>=0;i--)
 	{
 	 printf("\n%d",stack[i]);	
	}
	
	printf("\nPosition of Stack Pointer: %d",top);
	return 0;
 }
 
 int main()
 {
 	int choice;
 	
 	
 	do
 	{
 	 printf("\n\n\n****Stack has 5 address spaces***\nChoices of Operation--\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Press 0 to get out! \nEnter your choice: ");
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
