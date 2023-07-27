#include <iostream>
using namespace std;

class Apples
{
	public:
		int redapple = 26;
		int greenapple =31;
		
		//apples bought
		int johngreen=36,petergreen=41,anngreen=6;
		//apples bought
		int johnred=13,peterred=16,annred=21;
		// direct assignment
		int johncost = (greenapple * johngreen)+(redapple*johnred);
		int petercost = (greenapple * petergreen) + (redapple*peterred);
		int anncost = (greenapple * anngreen)+(annred*redapple);
	
};

int main ()
{
	//instance of class
	Apples cost;
	// calling class objects
	cout << "john will pay = "<< cost.johncost <<endl;
	
	cout << "ann will pay = " << cost.anncost << endl;
	
	cout << "peter will pay = " << cost.petercost << endl;
	
	return 0;
}
