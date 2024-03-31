#include  <iostream>
using namespace std;  // New insertion
int main(){
	int n;
	cout << "Enter number ";
	cin >> n;
	if(n == 0 || n<0){
		cout<<"Invalid choice"<<endl;
		return 0 ;}
	int fact= 1 ;
	for(int i=1; i<=n;i++){
		fact = fact * i;
	}
	cout<< fact<<endl;
return 1;
}
