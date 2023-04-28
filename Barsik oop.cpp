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

    //статическая переменная
	  static int numAnimal;

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
		  ++numAnimal;
		  cout << "Vizvan konstruktor ot 3h parametrov \n";
	  }
	 

     //3й -способ по умолчанию 
	  Animal() {
		  ++numAnimal;
		cout << "Vizvan konstruktor umolchaniu \n";
	  }
	    
	  // -4 конструктор копирования
	  /*конструктор копирования позволяет получать идентичный объект конструктор копирования должен получать входным параметром константную ссылку (&)
	   на обект того же класса Если в классе есть динамическое выделение памяти то обязательно в ручную прописывается конструктор копирования
	  */ 

	  Animal(Animal& other) : legs(other.legs), name(other.name), type(other.type) {
		  ++numAnimal;
		  cout << "vizvan konstruktor kopirovaniya \n";
	  }
	  

    //сеттер закомичен

	/* void set_legs(int new_legs) {
		if (new_legs >= 0 && new_legs <= 1000) {
			legs = new_legs;
		}
	}
	*/
	string get_all() {
		return to_string(legs) + " nogi "  + name + "   " + type;

	}
	~Animal() {
		cout << "Vizvan destruktor \n";
	}

};

  int Animal::numAnimal = 0;

int main()
{
	
	cout << Animal::numAnimal << endl;
	Animal cat;
	cout << Animal::numAnimal << endl;




	// 1 Animal cat = {4 ,"Barsik","kot"};
	// 1 cat.run();

	// 2 Animal cat ;
	// 2 cat.set_legs(-1);
	// 2 cout << cat.get_legs(); 

	// 3 Animal cat(4, "Barsik", "kot");
	// 3 Animal cat2(cat);
	// 3 cout << cat2.get_all() << endl;


  // system("pause>0");
	return 0;
}
