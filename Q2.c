#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;


void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = ch;
    }
}


char pop() {
    if (top == -1) {
        return '\0';  
    } else {
        return stack[top--];
    }
}


int isBalanced(char exp[]) {
    int i;
    char ch;

    for (i = 0; i < strlen(exp); i++) {
        ch = exp[i];

       
        if (ch == '(') {
            push(ch);
        }
        
        else if (ch == ')') {
            if (top == -1) {
                return 0; 
            }
            pop();
        }
    }

    
    if (top == -1)
        return 1;
    else
        return 0;
}

int main() {
    char exp[MAX];

    printf("Enter expression: ");
    scanf("%s", exp);

    if (isBalanced(exp))
        printf("Balanced Expression\n");
    else
        printf("Unbalanced Expression\n");

    return 0;
}