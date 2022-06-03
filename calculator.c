#include <stdio.h>

int add(a, b)
{
    return a + b;
}
int sub(a, b)
{
    return a - b;
}
int mul(a, b)
{
    return a * b;
}
int div(a, b)
{
    return a / b;
}

int main()
{
    char op;
    int n1, n2,sum,sub1,mul1,div1;
    printf("Please select the operation: (+,-,*,/) & press q to quit: \n");
    scanf("%c", &op);
    printf("Enter the 1st number: \n");
    scanf("%d", &n1);
    printf("Enter the 2nd number: \n");
    scanf("%d", &n2);
    switch (op)
    {
    case '+':
        sum = add(n1, n2);
        printf("The Sum is =%d\n", sum);
        break;
    case '-':
        sub1 = sub(n1, n2);
        printf("The Sub is =%d\n", sub1);
        break;
    case '*':
        mul1 = mul(n1, n2);
        printf("The mul is =%d\n", mul1);
        break;
    case '/':
        div1 = div(n1, n2);
        printf("The div is =%d\n", div1);
        break;
    default:
        printf("Wrong Opertaion! Please choose a correct Operation");
        break;
    }

    return 0;
}

// while (1)
//     {
//         char o;
//         int n1,n2;
//         int sum,sub1;
//         printf("Please select the operation: (+,-,*,/) & press q to quit: \n");
//         scanf("%c",&o);
//         if(o=='q'){
//             goto end;
//         }
//         else{

//             printf("Enter the 1st number: \n");
//             scanf("%d", &n1 );
//             printf("Enter the 2nd number: \n");
//             scanf("%d",&n2);
//             if(o=='+'){
//                 sum = add(n1,n2);
//                 printf("The Sum is =%d\n",sum);
//             }
//             else if(o=='-'){
//                 sub1 = sub(n1,n2);
//                 printf("The Sub is =%d\n",sub1);
//             }
//         }

//     }


