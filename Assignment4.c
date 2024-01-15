#include<stdio.h>
void bitonic(int arr[],int n){
    for(int i=0;i<7;i++){
        if(arr[i]>arr[i+1]){
            printf("The bitonic number is %d.\n",arr[i]);
            return;
            
            }
        else{
            
            i++;
        }
 }
 }
int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
       }
       
    bitonic(arr,5);
    return 0;
}
