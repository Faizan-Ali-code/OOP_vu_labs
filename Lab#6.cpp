
#include<iostream>
using namespace std;


class Circle {
	
	int radius;
	
	public:
		
//	Circle(){
//	
//    radius = 0;
//    cout<<"\nDefault Constructor is Called"<<endl;
//    cout<<"Radius :"<<radius<<endl;
//	}
	
   void	setData(int r=0){

    radius = r;
    cout<<"Setter function is Called"<<endl;
    

	}
	
	void getData(){

    cout<<"Getter function is Called"<<endl;
    cout<<"Radius :" <<radius<<endl;
   
	}
	
	Circle operator+(Circle const &obj){      //definition of + binary operator overloading.
		Circle temp;
		temp.radius = this->radius + obj.radius;
		return temp;
	}
	
   
};

int main() {

   Circle obj1,obj2,obj3;
   obj1.setData(23);
   
   obj3 = obj1 + obj2;    //overloading + binary operator.
   obj3.getData();       //get data of obj3, rather obj3 is not set to any value.
   


   return 0;
}
