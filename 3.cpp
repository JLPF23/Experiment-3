#include<iostream>

using namespace std;

int main()
{
	char array[100];
	int size;
	
	cout<<"Enter array size: ";
	cin>>size;
	
	cout<<"Enter characters: "<<endl;
	for(int x = 0; x < size; x++)
	{
		cin >> array[x];
	}
	
	
	for(int x = size-1; x >= 0; x--)
	{
		
		cout<<"'"<<array[x]<<"', ";
	}
	cout<<sizeof(array);
return 0;
}
