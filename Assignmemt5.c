#include<stdio.h>
#include<stdlib.h>
int mergecount(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int count =0;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=L[l+i];
        }
    for(int j=0;j<2;j++){
        R[j]=arr[m+1+j];
        }
        
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k++]=L[i++];
            }
        else{
           arr[k++]=R[j++];
           count+=n1-i;
           }
    }
    while(i<n1){
        arr[k++]=L[i++];
        }
    while(j<n2){
        arr[k++]=R[j++];
      }
    return count;
    }
    
    
    int mergeSortAndCount(int arr[],int l,int r){
        int count=0;
        if(l<r){
            int m=l+(r-l)/2;
            
            count+=mergeSortAndCount(arr,l,m);
            count+=mergeSortAndCount(arr,m+1,r);
            count+=mergecount(arr,l,m,r);
         }
        return count;
    }
    int main(){
       int arr[5]={2,4,1,3,5};
       int result=mergeSortAndCount(arr,0,4);
       printf("The number of inversion pairs is %d\n",result);
       return 0;
       }
