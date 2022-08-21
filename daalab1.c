#include<stdio.h>
int iterativeBinarySearch(int array[],int start_index,int end_index,int element){
	while(start_index<=end_index){
		int middle=start_index+(end_index-start_index)/2;
		if(array[middle]==element)
			return middle;
		if(array[middle]<element)
			start_index=middle+1;
		else
			end_index=middle-1;
	}
	return -1;
}
int main(void)
{
	int array[]={1,33,45,54,66,87,99};
	int element=99;
	int n=7;
	int found_index=iterativeBinarySearch(array , 0 , n-1 , element);
	if(found_index == -1){
		printf("element not found.");
	}
	else{
		printf("element found at index:%d",found_index);
	}
	return 0;
}