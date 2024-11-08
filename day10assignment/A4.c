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

void rotateK(int arr[],int n,int k){
    for(int i=0;i<n;i+=k) {
        int end= (i+k-1<n) ? i+k-1 : n-1;
        reverse(arr,i,end);
    }
}

int main() {
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;

    rotateK(arr,n,k);

    printf("Rotated array: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}