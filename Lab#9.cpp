#include<iostream>
using namespace std;


class Base{
	private:
		int secret;
	protected:
	    int protect;
	public:
	    int access;
		Base(){
			secret = 0;
			protect = 0;
			access = 0;
		}		
		
};

class Derived_private : private Base {
	private:
	public:
	       show(){
	       	cout<<endl<<" Derived Private class "<<secret"\t"protect"\t"access<<endl;
		   }	
};

class Derived_protected : protected Base {
	private:
	public:
	      show(){
	       	cout<<endl<<" Derived protected class "<<secret"\t"protect"\t"access<<endl;
		   }	
};

class Derived_public : public Base {
	private:
	public:
	       show(){
	       	cout<<endl<<" Derived public class "<<secret"\t"protect"\t"access<<endl;
		   }	
};

int main (){
	Base b;
	b.show();
    Derived_private p1;
    p1.show();
    Derived_protected p2;
    p2.show();
    Derived_public p3;
    p3.show();
	
	return 0;
}
