#include <stdio.h>


//Binary Search in 2D matrix Using Divide and Conquer Approach



void binary(int arr[],int element,int row,int col){
	int left=0;
	int right=(row*col)-1;
	
	
	int mid=(left+(right-left))/2;
	int mid1 = arr[mid];
    int midRow = mid / col;
    int midCol = mid % col;

	
	
	if(arr[mid1]==element){
	
	
		printf("The element has been found at %d location of the array.",mid1);
		return ;
	
	
	}
	
	
	else if(element>arr[mid1]){
	
	
		left=mid+1;
	
	}
	
	
	else if(element<arr[mid1]){
	
	
		right=mid-1;
	
	}

}


int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int element=7;
    binary(*arr,element,3,4);
    return 0;
}
