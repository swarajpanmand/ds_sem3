#include <stdio.h>
#include <stdlib.h>

int josephus(int *a[], int n, int index, int k){
    if(n==1){
        return a[0];
    }
    index = (index + k)% n;
    for (int i = index; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    return josephus(a,n,index,k);
}


int main(){
    int n = 17;
    int  k =2;
    k--;
    int index =0;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    printf("The chosen place is %d\n", josephus(a,n,index,k));
}