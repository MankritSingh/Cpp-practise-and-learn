#include <iostream>
using namespace std;
void printarr(int [],int);
int* productArr(int[],int,int[],int);

int main() {
	int size1,size2;
	int* answer=nullptr;
	cout<<"Welcome to Matrix Cross Product Program"<<endl;
    cout<<"Enter the size of the two arrays"<<endl;
    cin>>size1>>size2;
    int arr1[size1];
    int arr2[size2];
    cout<<"Enter the values of first Array"<<endl;
    for(int i=0;i<size1;i++)
        cin>>arr1[i];
    cout<<"Enter the values of second Array"<<endl;
    for(int i=0;i<size2;i++)
        cin>>arr2[i];
        
    answer=productArr(arr1,size1,arr2,size2);
    printarr(answer,(size1*size2));
	return 0;
}

int* productArr(int arr1[],int size1,int arr2[],int size2)
{
    int* arrNew=nullptr;
    int sizeCounter=0;
    arrNew=new int[(size1*size2)];
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            arrNew[sizeCounter]=arr1[i]*arr2[j];
            sizeCounter++;
        }
    }
    return arrNew;
}

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
}
