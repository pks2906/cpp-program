#include <stdio.h>
int s[5];
int n = 5;
int top = -1;
void push(int k)
{
    if (top == n - 1)
        printf("stack overflow");
    else
    {
        top = top + 1;
        s[top] = k;
    }
}
int pop()
{
    if (top == -1)
        printf("stack underflow");
    else
        top = top - 1;
    return s[top + 1];
}
int main()
{
    push(10);
    push(20);
    push(30);
    int k = pop();
    printf("%d", k);
    pop();
    push(50);
    push(100);
    push(200);
    k = pop();
    k = pop();
    printf("%d", k);
    printf("%d", s[top]);
}