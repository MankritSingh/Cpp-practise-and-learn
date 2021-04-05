#include <iostream>
using namespace std;

int main() {
	int* ptr;
	ptr=new int; //allocating memory to single variable
	cout<<ptr<<endl;
	*ptr=10;
	cout<<ptr<<endl; //printing ptr will give location of the alloted memory(doesnt change on gigivng value)
	cout<<*ptr<<endl; //dereference to assing or access value
	delete ptr; //delete the alloted memory
	cout<<"Dynamic allocation of array"<<endl;
	int* ptrarr=new int[10]; //used to assign memory for array
	for(int i=0;i<10;i++)
	    ptrarr[i]=i;
	for(int i=0;i<10;i++)
	    cout<<ptrarr[i]<<endl;
	delete[] ptrarr;//delete the allo memory for array
	cout<<ptrarr<<ptr;//when we print we see they are still pointing to the memory location 
	//as the pointer is just pointing to the memory location.the memory has been freed.
	return 0;
}
