#include<stdio.h>
#include<ctype.h>
char infix[30],postfix[30];
int top=-1;
char stack[30];

void push(char symbol)
{
stack[++top]=symbol;
}

char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}
int eval_postfix()
{
int i,symbol,op1,op2;
while((symbol=postfix[i++])!='\0')
{
if(isalnum(symbol))
{
push(symbol);
}

else
{
op2=pop();
op1=pop();
}
switch(symbol)
{
case '+':push(op1+op2);
	break;
case '-':push(op1-op2);
	break;
case '*':push(op1*op2);
	break;
case '/':if(op2!=0)
	{
        push(op1/op2);
        }
	break;
case '^':push(op1^op2);
	break;
}
return(pop());
}
}


void main()
{
int result;
printf("Enter the postfix expression\n");
scanf("%s",postfix);
result=eval_postfix();
printf("Result=%d\n",result);
}	


