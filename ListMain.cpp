#include <iostream>
#include "List.h"


int main(int argc, char** argv) {
	
	List<int> ls ;
	
	ls.Add(4);
	ls.Add(6);
	ls.Add(8);
	ls.Add(2);
	ls.Add(54);
	
	
	ls.Print();
	
	return 0;
}
