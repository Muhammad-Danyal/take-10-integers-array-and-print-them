#include<iostream>

using namespace std;
int main() {

	int arr[10];
	for (int i = 0; i <= 9; i++) {
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
		cout << i <<endl;
	}
	
	return 0;

}