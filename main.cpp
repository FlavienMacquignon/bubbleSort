#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int array [10];
	int i=0;
	bool sorted =false;
	cout << "hello World!" << endl; 	
	for (int k=0; k<10; k++)
	{
		array [k] = rand()%100;
		cout << array[k]<<endl;
	}
	do {

		if (array [i]>array [i+1])
		{ int temp=0;
		temp= array[i];
		array[i]=array[i+1];
		array[i+1]=temp;
		cout << array[i]<<endl;
		}
		else { sorted==true;}
		i++;
	}while (!sorted);
	for (int k=0; k<10; k++)
	{
	cout << array[k]<<endl;

	}
}
