#include <iostream>
#include <string>

#include "GOLConfig.h"

using namespace std;

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		cout << "Conway's Game of Life!" << endl;
		cout << argv[0] << " Version " 
			 << GOL_VERSION_MAJOR << "."
			 << GOL_VERSION_MINOR << "." 
			 << GOL_VERSION_PATCH <<endl;
		return 1;
	}

	for(int i = 1; i < argc; i++)
	{
		if(static_cast<string>(argv[i]).compare("-i") == 0)
		{
			cout << "i flag set" << endl;
		}
		else
		{
			cout << "no i flag" << endl;
		}
		
	}
	return 0;
}
