#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("Simple Calculator\n");
    printf("1.ADDITION\n2. SUBSTRACTION\n3. MULTIPLICATON\n4. DIVISION\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    switch(choice){
        case 1:
        printf("Result=%d\n",a+b);
        break;
        case 2:
        printf("Result=%d\n",a-b);
        break;
        case 3:
        printf("Result=%d\n",a*b);
        break;
        case 4:
        if(b !=0)
        printf("Result=%.2f\n",(float)a/b);
        else
        printf("Error! Division by zero.\n");
        break;
        default:
        printf("In valid choice!\n");
    }
    return 0;
}