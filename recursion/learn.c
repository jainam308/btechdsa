#include<stdio.h>

void f(int count) {
    if (count > 4)  // Base case to stop recursion
        return;
    
    printf("%d\n", count);
    count++;
    f(count);
}

void main() {
    
    f(count);
    return;
}
