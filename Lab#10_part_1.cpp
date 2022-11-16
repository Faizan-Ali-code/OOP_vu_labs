#include<iostream>
using namespace std;

class Plainbox{
	
		public:
	void	display(){
			cout<<"Display function of Plain box"<<endl;
		}
		
};

class Lunchbox:public Plainbox{
	
	public:
	 void	display(){
			cout<<"Display function of Lunch box"<<endl;
		}
};

class Giftbox:public Plainbox{
	
	public:
		  void	display(){
			cout<<"Display function of Gift box"<<endl;
		}
};

int main(){
	Plainbox *p1 = new Lunchbox();
	Plainbox *p2 = new Giftbox();
	Lunchbox L;
	Giftbox G;
	
//	Plainbox *p1;
//	Lunchbox L1;
//	p1 = & L1;
	
//	p = new Lunchbox;
//	p = new Giftbox;
	
	p1->display();
	p2->display();
	
	
//	L.display();
//	G.display();
	return 0;
}
