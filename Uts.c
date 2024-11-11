#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Stack
int stack[MAX], top = -1;
void push(int data) { if (top < MAX - 1) stack[++top] = data; else printf("Overflow\n"); }
int pop() { return (top == -1) ? (printf("Underflow\n"), -1) : stack[top--]; }
void displayStack() { for (int i = top; i >= 0; i--) printf("%d ", stack[i]); printf("\n"); }

int main() {
    push(10); push(20); push(30); printf("Stack: "); displayStack(); printf("Popped: %d\n", pop()); displayStack();

    return 0;
}
