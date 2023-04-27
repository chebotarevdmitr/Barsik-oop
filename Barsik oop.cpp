#include <iostream>

using namespace std;

class Animal{ 
	public:
	int legs = 4;
	string name = "";
	string type;

	void run() {
		cout << name + " start running \n";
    }

};



int main()
{
	Animal cat = {4 ,"Barsik","kot"};
	cat.run();

   system("pause>0");
}
