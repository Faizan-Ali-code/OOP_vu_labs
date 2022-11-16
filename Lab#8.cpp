#include<iostream>
using namespace std;


class planet{
	private:
	public:
	       planet(){
	       	cout<<endl<<" Planet constructor is called "<<endl;
		   }	
};

class inner_planet: public planet {
	private:
	public:
	       inner_planet(){
	       	cout<<endl<<" Inner Planet constructor is called "<<endl;
		   }	
};

class outer_planet: public planet {
	private:
	public:
	       outer_planet(){
	       	cout<<endl<<" Outer Planet constructor is called "<<endl;
		   }	
};

int main (){
	planet p;
	inner_planet ip;
	outer_planet op;
	
	return 0;
}
