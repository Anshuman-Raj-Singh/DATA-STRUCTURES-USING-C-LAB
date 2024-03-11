#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("\nenter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array elements are:");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    int arr2[100],m;
    m=(n*2);
    printf("\nthe size of the second array is:%d\n",m);
    for(i=1;i<=m-1;i++){
        printf("0 ");
        if(i==(m-1)){
            printf(" %d",arr[n-1]);
        }
    }
    return 0;
}
