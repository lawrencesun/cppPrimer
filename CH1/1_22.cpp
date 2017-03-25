#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() 
{
	Sales_item total;
	cout << "Please input item's ISBN, num and price: " << endl;
	if(cin >> total){
		Sales_item curItem;
		while(cin >> curItem){
			if(curItem.isbn() == total.isbn()){
				total += curItem;
			} else {
				cout << total << endl;
				total = curItem;
			}	
		}
		cout << total << endl;
	} else {
		cerr << "No data." << endl;
		return -1;
	}
	return 0;
}
