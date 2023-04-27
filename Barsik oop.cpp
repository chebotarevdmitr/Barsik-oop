#include <iostream>
#include <string>

using namespace std;

class Animal{ 
	//  1  public:
	int legs = 4;
	string name = "";
	string type;

	// 1 void run() {
	// 1 cout << name + " start running \n";
    //    }
	// 
    //set funkziya izmenyet pole harakteristiku givotnogo
  public:
	void set_legs(int new_legs) {
		if (new_legs >= 0 && new_legs <= 1000) {
			legs = new_legs;
		}
	}
	string get_legs() {
		return to_string(legs) + " nogi ";

	}
};



int main()
{
	// 1 Animal cat = {4 ,"Barsik","kot"};
	// 1 cat.run();

	Animal cat ;
	cat.set_legs(-1);
	cout << cat.get_legs();
	
   system("pause>0");
}
