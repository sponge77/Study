#include <iostream>
using namespace std;
int main(){
	int i;
	int *p = new int[5];
	
	for(i=0;i<5;i++)
	p[i] = i;
	
	for(i=0;i<5;i++)
		cout<<p[i]<<" ";
	cout<<endl;
	
	delete [] p;
	 
	return 0;
}
