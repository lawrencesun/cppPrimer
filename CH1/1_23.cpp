#include <iostream>
#include "Sales_item.h"
using namespace std;

int main() 
{
	Sales_item curItem, nextItem;
	if(cin >> curItem){
		int count = 1;
		while(cin >> nextItem){
			if(nextItem.isbn() == curItem.isbn()){
				++ count;
			} else {
				cout << curItem << " occurs " << count << " times." << endl;
				count = 1;
				curItem = nextItem;
			}	
		}
		cout << curItem << " occurs " << count << " times." << endl;
	} else {
		cerr << "No data." << endl;
		return -1;
	}
	return 0;
}
