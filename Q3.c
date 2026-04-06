#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    int arr[MAX], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    push(arr[0]);

    for(i = 1; i < n; i++) {
        while(top != -1 && stack[top] < arr[i]) {
            printf("%d -> %d\n", pop(), arr[i]);
        }
        push(arr[i]);
    }

    while(top != -1) {
        printf("%d -> -1\n", pop());
    }

    return 0;
}