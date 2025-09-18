#include <stdio.h>

void swapvalue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("inside swapvalue - a: %d, b: %d\n", a, b);

}

int main(){
    int a,b ;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapvalue - a: %d, b: %d\n", a, b);
    swapvalue(a, b);
    printf("After swapvalue - a: %d, b: %d\n", a, b);

    return 0;
}
