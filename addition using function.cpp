#include <iostream>
using namespace std;
void myfunction(int x, int y){
	cout<< (x+y);
	}

int main(){
int x;
int y;
cout<< "enter a number: ";
cin >> x;
cout<< "enter a number: ";
cin >> y;
myfunction(x,y);
return 0;
}