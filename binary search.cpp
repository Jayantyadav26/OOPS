#include <iostream>
using namespace std;
int binary_search(int a[],int key,int low ,int high){
 if(low>high){
 	return -1;
 }
 int mid=(low+high)/2;
 if (a[mid]==key){
 	cout<< mid;
 }
 if (key>a[mid]){
 return binary_search(a,key,mid+1,high);
 }
 if(key<a[mid]){
 	return binary_search(a,key,low,mid-1);
	  }




}


int main()
 {//sorting of array
int n;
cout<<"enter number of integer in array: "<< endl;
cin>>n;
int array[n];
cout<< "Enter integers in array: "<<endl;
for (int i=0;i<n;i++) {	
cin>> array[i];
 }
 for(int i=0;i<n-1;i++){
 	int min=i;
 	for(int j=i+1;j<n;j++){
 		if (array[j]<array[min]){              //comparing two elements of an array
 			min=j;
		 }
	 }
	 if (min !=i){
	 	int temp=array[min];           //swaping 
	 	array[min]=array[i];
	 	array[i]=temp;
	 }
 } 
 
 cout<<"sorted array: "<<endl;
 for (int i=0;i<n;i++){
 	cout<< array[i]<<" ";         //output is displayed
 }
 int check;
 cout<<endl<< "enter element to be checked: "<<endl;
 cin>>check;
  cout<<"number is stored in sorted array at index number:"<<endl;
 binary_search(array,check,0,n);

 
 
 return 0;
 
 }