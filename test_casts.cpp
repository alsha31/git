#include <iostream>

int main() {
	int x = 4;
	// 2.7.1 Static cast

	double d = static_cast<double>(x);
	
	// 2.7.2 Reinterpret cast
	
	double dd = 3.14;

    // std::cout << std::hex << reinterpret_cast<int&>(dd);

	// 2.7.3 Const cast
	{
		const int cx = 1;

		int& x = const_cast<int&>(cx); 
		x = 2;
		
		std::cout << cx;
	}

	// 2.7.4 Cstyle cast

	{
		int x = 1;
		double d = (double)(x);
	}
	
	

}
