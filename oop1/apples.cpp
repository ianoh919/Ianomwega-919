#include <iostream>
using namespace std;
int main ()
{
	int greenapple =31;
	int redapple = 26;
	int johncost;
	int anncost;
	int petercost;
	
	//apples bought
	int johngreen=36,petergreen=41,anngreen=6;
	//apples bought
	int johnred=13,peterred=16,annred=21;
	
	johncost = (greenapple * johngreen)+(redapple*johnred);
	petercost = (greenapple * petergreen) + (redapple*peterred);
	anncost = (greenapple * anngreen)+(annred*redapple);
	
	cout << "john will pay = "<< johncost <<endl;
	
	cout << "ann will pay = " << anncost << endl;
	
	cout << "peter will pay = " << petercost << endl;
	
	return 0;	
}
