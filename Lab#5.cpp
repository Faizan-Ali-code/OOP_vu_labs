
#include<iostream>
using namespace std;


class Pyramid {

	static int pcount;

	public:
		
	 Pyramid(){
    cout<<"\n Pyramid constructor Called"<<endl;
	 pcount++;
	}

	
	static void get_pcount(){
	cout<<"\nTotal Objects: "<<pcount<<endl;
	}

    ~Pyramid(){
    pcount--;
    cout<<"\n Pyramid destructor Called"<<endl;

	}
	
	



};

int Pyramid::pcount = 0;


int main() {

    Pyramid *ptr = new Pyramid;
    Pyramid *ptr1 = new Pyramid;
    Pyramid *ptr2 = new Pyramid;

    ptr->get_pcount();

   delete ptr;
   delete ptr1;
   ptr->get_pcount();
   //delete ptr2;
   
//cin.get();

   return 0;
}
