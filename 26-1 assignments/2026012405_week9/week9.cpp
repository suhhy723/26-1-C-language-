#include <stdio.h>

#define MAXSIZE 3

int stack[MAXSIZE];
int top = -1;

int isfull() {
    return top == MAXSIZE - 1;
}

void push(int val) {
    if (isfull()) {
        printf("stack is full\n");
        return;
    }
    top++;
    stack[top] = val;
    printf("index:%d, storing value:%d\n", top, val);
}

int pop() {
    if (top == -1) {
        printf("stack is empty\n");
        return -1;
    }
    int val = stack[top];
    printf("from index%d, loaded value:%d\n", top, val);
    top--;
    return val;
}

int main() {
    push(3); 
    push(5); 
    pop();    
    push(9);  
    push(1); 
    push(7);

    return 0;
}