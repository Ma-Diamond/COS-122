#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int i;
	char fileName[100];
	
	cout << "Please enter a name for the file you would like to read: ";
	cin >> fileName;
	
	// Declaring commands
	char lineCommand[100] = "wc -l ";
	char bytesCommand[100] = "wc -c ";
	char wordsCommand[100] = "wc -w ";
	
	// Executing Commands
	i = system(strcat( lineCommand,  fileName ) );
	i = system(strcat( wordsCommand,  fileName ) );
	i = system(strcat( bytesCommand,  fileName ) );

	return 0;
	
}
