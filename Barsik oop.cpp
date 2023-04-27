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
    //сетер функция изменяющая характеристику животного
  public:
	  // 1й -способ записи конструктора

	 /* Animal(int legs, string name, string type) {
		this-> legs = legs;
		this-> name = name;
		this-> type = type;
		//this-> указатель на объект ,владеющий функцией
	  }
	 */

	  //2й -способ записи конструктора

	  Animal(int legs, string name, string type) : legs(legs), name(name), type(type) {
		  cout << "Vizvan konstruktor ot 3h parametrov";
	  }

    //сеттер закомичен

	/*void set_legs(int new_legs) {
		if (new_legs >= 0 && new_legs <= 1000) {
			legs = new_legs;
		}
	}
	*/
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
