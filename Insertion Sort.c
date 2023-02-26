#include <math.h>
#include <stdio.h>
void sort(int a[],int n){
    int i,k,j;
    for(i=1;i<n;i++){
        k=a[i];
        j=i-1;
        while(j>=0&&a[j]>k){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
}
void array(int a[],int n){
    int i;
    for(i=0;i<n;i++){
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
    array(a,n);
    return 0;
}
