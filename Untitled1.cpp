#include<stdio.h>

void sort(int arr[], int n){
   for(int i=0;i<n;i++){
   	    for(int j=2;j+1<5;j++){
   	   	    if(arr[j]>arr[j+1]){
   	   	        int t= arr[j];
   	   	        arr[j]=arr[j+1];
   	   	        arr[j+1]= t;
   	   	    }
		 }  
   }	
}

void sortPair(int arr[], int s,int e){
   for(int i=s;i<e;i++){
   	    for(int j=s;j+1<e;j++){
   	   	    if(arr[j]>arr[j+1]){
   	   	        int t= arr[j];
   	   	        arr[j]=arr[j+1];
   	   	        arr[j+1]= t;
   	   	    }
		    }  
   }	
}
int main(){
	int arr[]= { 7, 3, 9, 2, 8, 4};
	int n= sizeof(arr)/sizeof(int);
	int r=2;
	
 for(int s=0; s<n;s=s+r)
  sortPair(arr, s, s=r);
  
  for(int i=0;i<n;i++)
    printf("%d", arr[i]);
	
	return 0;
}


