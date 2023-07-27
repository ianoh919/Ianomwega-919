#include <iostream>
using namespace std;

class Apples
{
	public:
		int redapple = 26;
		int greenapple =31;
		int johncost;
		int anncost;
		int petercost;
		//apples bought
		int johngreen=36,petergreen=41,anngreen=6;
		//apples bought
		int johnred=13,peterred=16,annred=21;
	
};

int main ()
{
	Apples cost;
	
	cost.johncost = (cost.greenapple * cost.johngreen)+(cost.redapple*cost.johnred);
	cost.petercost = (cost.greenapple * cost.petergreen) + (cost.redapple*cost.peterred);
	cost.anncost = (cost.greenapple * cost.anngreen)+(cost.annred*cost.redapple);
	
	cout << "john will pay = "<< cost.johncost <<endl;
	
	cout << "ann will pay = " << cost.anncost << endl;
	
	cout << "peter will pay = " << cost.petercost << endl;
	
	return 0;
}
