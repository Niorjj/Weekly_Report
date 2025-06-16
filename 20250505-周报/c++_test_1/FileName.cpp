#include <iostream>

int main(){
	using namespace std;
	int math[10];
	math[0] = 1;
	int* ptr = &math[0];
	cout << *ptr << "\n";
	cout << ptr << "\n";
	cout << math[0] << "\n";
	cout << "149" << "\n";
	return 0;
}