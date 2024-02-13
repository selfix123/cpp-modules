#include <exception>
#include <iostream>

class Base{
	public:
		virtual ~Base() {};
};

class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

void randomize(){
	std::srand(static_cast<unsigned int>(std::time(NULL)));
}

Base * generate(void){
	int nb = std::rand() % 3;

	switch (nb) {
		case 0:
			std::cout << "A is the chosen one" << std::endl;
			return (new A);
			break;
		case 1:
			std::cout << "B is the chosen one" << std::endl;
			return (new B);
		default:
			std::cout << "C is the chosen one" << std::endl;
			return (new C);
			break;
	}
}

void identify(Base* p){
	A *aPtr = dynamic_cast<A*>(p);
	B *bPtr = dynamic_cast<B*>(p);
	C *cPtr = dynamic_cast<C*>(p);
	if (aPtr != NULL)
		std::cout << "A" << std::endl;
	else if (bPtr != NULL)
		std::cout << "B" << std::endl;
	else if (cPtr != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	} catch (std::exception &e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(std::exception &e){}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	} catch (std::exception &e) {}
}

int main(){
	randomize();
	Base *ptr1 = generate();
	identify(ptr1);
	Base *ptr2 = NULL;
	identify(*ptr2);
	delete ptr1;
	delete ptr2;
	return (0);
}
