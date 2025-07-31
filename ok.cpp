#include<stdio.h>
//int main(){
//	int arr[7]={1,4,6,7,8,9,3};
//	int v;
//	printf("enter value");
//	scanf("%d",&v);
//	int s=sizeof(arr)/sizeof(int);
//	for (int i=0;i<s;i++){
//		if(arr[i]==v){
//			printf("value found");
//		}else{
//			printf("value not found");
//		}
//	}

//int f(int n){
//	if(n<10){
//		return (n);
//	}else{
//		return f(n/10)+(n%10);
//	}
//	
//}
//int main(){
//	int c=f( 120);
//	printf("%d",c);
	
//}
//int binarysearch(int key,int high,int low,int arr[]){
//	 int mid=(low+high)/2;
//	if (key==arr[mid]){
//		return mid;
//	}else if(key>arr[mid]){
//		low=mid+1;
//		return binarysearch(key,high,low,arr);
//	}else{
//	high=mid-1;
//	return binarysearch(key,high,low,arr);
//}
//}
//int main(){
//	int arr[]={1,4,6,7,8,12,34};
//	int low=arr[0];
//	int s=sizeof(arr)/sizeof(int);
//	int high=s-1;
//	
//	int key=12;
//	binarysearch(key,high,low,arr);
//	printf("elment found at index",binarysearch);
//}


