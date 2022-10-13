
#include<iostream>
using namespace std;


class Room {
	
	int Height,Width;
	
	public:
		
	Room(){
	
    Height = 0;
    Width = 0;
    
    cout<<"\nDefault Constructor is Called"<<endl;
    cout<<"Height :" <<Height<<endl;
    cout<<"Width :"  <<Width<<endl;

	}
	
	Room(int height){

    Height = height;
    Width = 0;

    cout<<"\nOne argument Constructor is Called"<<endl;
    cout<<"Height :" <<Height<<endl;
    cout<<"Width :"  <<Width<<endl;

	}
	
		Room(int height,int width){

    Height = height;
    Width = width;

    cout<<"\nTwo argument Constructor is Called"<<endl;
    cout<<"Height :" <<Height<<endl;
    cout<<"Width :"  <<Width<<endl;

	}
	
	
   
};

int main() {

   Room obj1;
   Room obj2(10);
   Room obj3(10,20);


//cin.get();

   return 0;
}
