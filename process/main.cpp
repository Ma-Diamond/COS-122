#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
	cout << "------------------------" << endl;
	cout << "This is the beggining of the program" << endl;
	int counter = 0;
	int * pointer = &counter;
	pid_t  parentId = fork();
	
	if(parentId == 0)
	{
		for(int i = 0; i < 5; i++)
		{
			counter++;
			cout << "Child Process: " << counter << endl;
		}
	}
	else if(parentId > 0)
	{
		for(int i = 0; i < 5; i++)
		{
			*pointer++;
			cout << "Parent Process: " << counter << endl;
		}
		
	}
	
	cout << "------------------------" << endl;
	cout << "This is the end of the program " << endl;
	
	return 0;
	
}
