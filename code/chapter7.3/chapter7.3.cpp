#include "Array.h"
#include <iostream>
using namespace std;

int main() {
	{
		Array<int, 5> a = { 5,4,8,1,-5 };
		for (auto i = 0; i < a.size(); ++i)
			cout << a[i] << " ";
		cout << endl;

		a.selectionSort();

		for (auto i = 0; i < a.size(); ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	{
		Array<int, 5> a = { 5,4,8,1,-5 };
		for (auto i = 0; i < a.size(); ++i)
			cout << a[i] << " ";
		cout << endl;

		a.insertionSort();

		for (auto i = 0; i < a.size(); ++i)
			cout << a[i] << " ";
		cout << endl;
	}
	{
		Array<int, 5> a = { 5,4,8,1,-5 };
		for (auto i = 0; i < a.size(); ++i)
			cout << a[i] << " ";
		cout << endl;

		a.bubbleSort();

		for (auto i = 0; i < a.size(); ++i)
			cout << a[i] << " ";
		cout << endl;
	}

	{
		Array<int, 5> a = { 5,4,8,1,-5 };
		
		a.bubbleSort();

		int key;
		cout << "please input a number:";
		cin >> key;
		int idx = a.binarySearch(key);

		if (idx != -1) 
			cout << idx;
		else 
			cout << "key " << key << " does not exist" << endl;
	}
}