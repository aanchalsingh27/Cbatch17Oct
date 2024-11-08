#include <stdio.h>

void printAlphabetTriangle(int n) {
    for (int row=0;row<n;row++) {
        for (int col=0;col<n-row-1;col++) {
            printf(" ");
        }
        for (int col=0;col<=row;col++) {
            printf("%c",'A'+col);
        }
        for (int col=row-1;col>=0;col--) {
            printf("%c",'A'+col);
        }
        printf("\n");
    }
}

void printNumberTriangle(int n) {
    for (int row=0; row<n;row++) {
        for (int col=0;col<n-row-1;col++) {
            printf(" ");
        }
        for (int col=0;col<=row;col++) {
            printf("%d",col+1);
        }
        for (int col=row-1;col>=0;col--) {
            printf("%d",col+1);
        }
        printf("\n");
    }
}

int main() {
    int n=5;

    printf("\nAlphabet Triangle:\n");
    printAlphabetTriangle(n);

    printf("\nNumber Triangle:\n");
    printNumberTriangle(n);

    return 0;
}

    