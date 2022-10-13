
#include<iostream>
using namespace std;


class Room {

	int Height,Width;

	public:



	void getRoomSize() const{

  

//    cout<<"\n getter is Called"<<endl;
    cout<<"Height :" <<Height<<endl;
    cout<<"Width :"  <<Width<<endl;

	}
	

    void setRoomSize(int height,int width){

    this-> Height = height;
    this-> Width = width;

//    cout<<"\n setter is Called"<<endl;
    

	}



};

int main() {

   Room obj1;
   obj1.setRoomSize(10,20);
   obj1.getRoomSize();


//cin.get();

   return 0;
}
