#include <iostream>
using namespace std;


double half(double quantity)
{
	return quantity * quantity;
}




int main() {
  double number, result;

cout << endl << "Enter a number to square:" << endl;
	cin >> number;
cout << endl << endl;

result = half(number);

cout << "The square is " << result;

}