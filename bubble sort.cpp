#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of elements of an array: "<<endl;
cin>> n;
int array[n];
cout<<"Enter integers in array:" <<endl;
for (int i=0;i<n;i++){
	cin>> array[i];
}
for(int i=0;i<n-1;i++){               //bubble sort
	for(int j=0;j<(n-i-1);j++){
		if (array[j]>array[j+1]){     //comparison of adjacent element
			int temp=array[j+1];      //swapping of element
			array[j+1]=array[j];
			array[j]=temp;
		}
	}
}
cout<< "sorted array: ";
for(int i=0;i<n;i++){
	cout<< array[i]<<" ";
}
return 0;
}