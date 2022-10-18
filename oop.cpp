#include <iostream>

// Classes and structures, incapsulation.

// 3.1 Idea of OOP, class and struct, incapsulation.

class C {
  private:
	int x = 0;
	std::string s;
	double d = 0.0;
	
	void add_and_print(int a);

  public:
	void add_and_print(double a){
		std::cout << x + a + 1 << '\n';
	}
};

void C::add_and_print(int a){
	std::cout << x + a << '\n';
}

int main(){
	C c;
	std::cout << sizeof(c) << '\n';

	c.add_and_print(1.0);

}
