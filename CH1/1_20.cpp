#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() 
{
	Sales_item item;
	cout << "Please input item's ISBN, num and price: " << endl;
	while(cin >> item){
		cout << item << endl;
	}
	return 0;
}
