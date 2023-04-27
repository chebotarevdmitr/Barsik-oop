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
	  Animal(int legs_ , string name_ , string type_) {
		  legs = legs_;
		  name = name_;
		  type = type_;
	  }
	void set_legs(int new_legs) {
		if (new_legs >= 0 && new_legs <= 1000) {
			legs = new_legs;
		}
	}
	string get_all() {
		return to_string(legs) + " nogi "  + name + "   " + type;

	}
};



int main()
{
	// 1 Animal cat = {4 ,"Barsik","kot"};
	// 1 cat.run();

	// 2 Animal cat ;
	// 2 cat.set_legs(-1);
	// 2 cout << cat.get_legs(); 

	Animal cat(4, "Barsik", "kot");
	cout << cat.get_all();
   system("pause>0");
}
