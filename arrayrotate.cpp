#include<stdio.h>
void rotate(int arr[],int r,int n);
void onerotate(int arr[],int d);
int main(){
    int i,n,r;
    scanf("%d%d",&n,&r);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rotate(arr,r,n);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
void rotate(int arr[],int r,int n){
    int i;
    for(i=0;i<r;i++){
        onerotate(arr,n);
    }
}

void onerotate(int arr[],int n){
int i,temp=arr[0];
for(i=0;i<n-1;i++){
    arr[i]=arr[i+1];
}
arr[i]=temp;
}

