#include <iostream>

using namespace std;

void main () {
	int i;
   	double number, sum = 0.0;
   	for (i = 1; i <= 10; ++i) {
    	cout << "Enter a n: " << i << endl;
      	cin >> number;
      	// if the user enters a negative number, break the loop
      	if (number < 0.0) {
         	break;
      	}
      	sum += number; // sum = sum + number;
   	}
   	cout << "Sum = " << sum << endl;
}
