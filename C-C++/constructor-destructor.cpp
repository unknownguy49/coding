#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() 
	{ 
		cout<<"Default Constructor\n"; 
	} // Default
    MyClass(int x) { cout << "Parameterized Constructor\n"; } // Parameterized
    MyClass(const MyClass &obj) { cout << "Copy Constructor\n"; } // Copy
    ~MyClass() { cout << "Destructor\n"; } // Destructor
};

int main() {
    MyClass a; // Default constructor
    MyClass b(10); // Parameterized constructor
    MyClass c = a; // Copy constructor
}
