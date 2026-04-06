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
        printf("Stack Underflow\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int main() {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    
    for (i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

   
    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }

    return 0;
}