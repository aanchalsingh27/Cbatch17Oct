A1.
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num){
    if(num<=1)
    return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        return false;
    }
    return true;
}

int main() {
    int n,count=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Output\n");
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)) {
            printf("%d=%d+%d\n", n,i,n-i);
            count++;
        }
    }
    if (count>0){
        printf("NoofWays=%d\n",count);
    }
    else{
        printf("NoofWays=-1\n");
    }

    return 0;
}

A2.
#include <stdio.h>
#include <math.h>

 int findNthNumber(int n) {
    int result=0;
    int base=1;
    int digits[]={1,4,6,9};
    while (n>0) {
        result+=digits[(n-1)%4]*base;
        n=(n-1)/4;
        base*=10;
    }

    return result;
}

int main() {
    int T,N;
    printf("Enter the number of test cases: ");
    scanf("%d",&T);
    while (T--) {
        printf("Enter the value of N: ");
        scanf("%d",&N);

        int nthNumber = findNthNumber(N);
        int numDigits = (int)log10(nthNumber)+1;
	  printf("The number of digits in the %dth number is: %d\n",N,numDigits);
    }

    return 0;
}
 
A3.
#include <stdio.h>
#include <math.h>

int findNthPrimeDigitNumber(int n) {
    int result=0;
    int base=1;
    int primes[]={2,3,5,7};
    while (n>0) {
        result+=primes[(n-1)%4]*base;
        n=(n-1)/4;
        base*=10;
    }

    return result;
}

int main() {
    int T, N;
    printf("Enter the number of test cases: ");
    scanf("%d",&T);
    while (T--) {
        printf("Enter the value of N: ");
        scanf("%d",&N);

        int nthNumber=findNthPrimeDigitNumber(N);
	  printf("The %dth number made of prime digits is: %d\n",N,nthNumber);
    }

    return 0;
}


A4.
#include <stdio.h>
void reverse(int arr[],int start,int end){
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void rotateEveryK(int arr[],int n,int k){
    for(int i=0;i<n;i+=k) {
        int end= (i+k-1<n) ? i+k-1 : n-1;
        reverse(arr,i,end);
    }
}

int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;

    rotateEveryK(arr,n,k);

    printf("Rotated array: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}

A5.
#include <stdio.h>

void printAlphabetTriangle(int n) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<n-i-1;j++) {
            printf(" ");
        }
        for (int j=0;j<=i;j++) {
            printf("%c",'A'+j);
        }
        for (int j=i-1;j>=0;j--) {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}

void printNumberTriangle(int n) {
    for (int i=0; i<n;i++) {
        for (int j=0;j<n-i-1;j++) {
            printf(" ");
        }
        for (int j=0;j<=i;j++) {
            printf("%d",j+1);
        }
        for (int j=i-1;j>=0;j--) {
            printf("%d",j+1);
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
