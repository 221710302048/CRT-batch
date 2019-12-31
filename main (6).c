#include <stdio.h>
void main()
{
int a,b;
char op;
scanf("%d%d",&a,&b);
scanf("%c",&op);
switch(op)
{
    case '+':printf("%d",a+b);
             break;
    case '-':printf("%d",a-b);
             break;
    case '*':printf("%d",a*b);
             break;
    case '/':printf("%d",a/b);
             break;
    case '%':printf("%d",a%b);
             break;
    case '\n':printf("hello");
              break;
default:printf("invalid input");
}
}
