#include <iostream>
using namespace std ;

// Function to calculate the area of a rectangle
int main(){

	double  l , b ;
	cout<<"Enter length : "<<endl;
	cin >>l;
	cout<<"Enter breadth "<<endl ;
	cin >>b ;
	if(l > 0 || b > 0){
		cout<<"Invalid cannot be negative "<<endl;
		return 0;}
// Calcualting the area

	cout<< "The area of given rectangle "<<l*b<<endl ;

return 0 ;
}
