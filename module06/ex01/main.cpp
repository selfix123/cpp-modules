#include <cstdint>
#include <iostream>

struct Data{
	char c;
	int nb;
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data *>(raw));
}

int main(){
	Data *a = new Data;
	Data *b;
	a->c = 'a';
	a->nb = 9;
	uintptr_t allo;

	allo = serialize(a);
	b = deserialize(allo);

	std::cout << b->nb << " " << b->c<< std::endl;
	delete a;
}