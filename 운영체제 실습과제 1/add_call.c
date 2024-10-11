#include <stdio.h>

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main(void) {
    int var1 = 1;
    int var2 = 2;
    int var3;
    var3 = add(var1, var2);
    printf("%d\n", var3);
    return 0;
}