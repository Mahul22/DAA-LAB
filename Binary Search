#include <stdio.h>


//Binary Search Using Divide and Conquer Approach



void binary(int arr[],int element,int left,int right){
	
	
	int mid=(left+(right-left))/2;
	
	
	if(arr[mid]==element){
	
	
		printf("The element has been found at %d location of the array.",mid);
		return;
	
	
	}
	
	
	else if(element>arr[mid]){
	
	
		binary(arr,element,mid+1,right);
	
	}
	
	
	else if(element<arr[mid]){
	
	
		binary(arr,element,left,mid-1);
	
	}

}


int main(){

	int arr[4]={12,20,23,49};

	int x=23;

	binary(arr,x,0,4);
	return 0;
}
