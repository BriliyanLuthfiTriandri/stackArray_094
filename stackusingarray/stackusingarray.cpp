#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;
public:
	//constructor
	StackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "enter the element : ";
		cin >> element;
		if (top == 4) { //step 1
			cout << "Number of data excedeed the list." << endl;
			return;
		}

		top++; //step 2
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << " ditambahkan(pushed)" << endl;


	}

	void pop() {
		if (empty()) { //step 1
			cout << "\nStack is empty. Cannot pop." << endl; //1.a
			return; //1.b
		}

	}
};
