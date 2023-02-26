#include<stdio.h>
void q(int a[25],int f,int l){
   int i, j, p, t;
   if(f<l){
      p=f;
      i=f;
      j=l;
      while(i<j){
         while(a[i]<=a[p]&&i<l){
             i++;
         }
         while(a[j]>a[p]){
             j--;
         }
         if(i<j){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
         }
      }
      t=a[p];
      a[p]=a[j];
      a[j]=t;
      q(a,f,j-1);
      q(a,j+1,l);
   }
}
int main(){
   int i,n, a[25];
   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);
   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   q(a,0,n-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++){
       printf(" %d",a[i]);
   }
   return 0;
}
