#include <stdio.h>

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        goto error;

    printf("you entered a vaild number: %d\n", num);
    return 0;

    error:
        printf("error: negative numbers not allowed. \n");
        return 1;
}
