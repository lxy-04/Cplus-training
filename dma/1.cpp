#include <iostream>
#include <cstring>
#include "dma.h"

using namespace std;

int main(void)
{
    Basedma shirt("Protabelly", 8);
	cout << "Displaying baseDMA object: " << endl;
	cout << shirt;
	cout << "----------------------------" << endl;

	Lacksdma ballon("red", "Blimpo", 4);
	cout << "Displaying lacksDMA object: " << endl;
	cout << ballon;
	cout << "----------------------------" << endl;

	Lacksdma ballon2(ballon);
	cout << "Result of lacksDMA copy: " << endl;
	cout << ballon2;
	cout << "----------------------------" << endl;

	Hasdma map("Keys", "Mercator", 5);
	cout << "Displaying hasDMA object: " << endl;
	cout << map << endl;
	cout << "----------------------------" << endl;

	// call operator funciton:
//	hasDMA map2;
//	map2 = map;

	//call copy construct function:
	Hasdma map2 = map;
	cout << "Result of hasDMA copy: " << endl;
	cout << map2;
    return 0;
}