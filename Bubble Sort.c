#include <stdio.h>
void swap(int* x,int* y){
    int t=*x;
    *x=*y;
    *y=t;
}
void sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
void array(int a[], int s){
    int i;
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[60],i,n;
    printf("Enter the no. of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    printf("Sorted array:\n");
    array(a,n);
    return 0;
}
