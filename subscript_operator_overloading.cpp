#include<iostream>
using namespace std;


class list_of_items{
	private:
		int arr[5];
	public:
		
    //		 void operator[](int index){
   //	    	 arr[index]=index+1;  //return the reference of the array so value can be assigned where operator is overloaded.
   //		}
		
		
	    int& operator[](int index){
	    	
	    	return arr[index];  //return the reference of the array so value can be assigned where operator is overloaded.
		}
		
		void print_items(){
			
//			for(int i=0;i<5;++i){
//	            cout<<"Elements is: "<<arr[i]<<endl;	
//         	}

        cout<<arr[5]<<" ";
			
		}	
};
int main(){
	list_of_items s1;
	s1.print_items();
//	s1[5];   // same as s1.operator[](5);
//   s1.operator[](5);
	s1.operator[](5)=5;         //returning reference and assigning value 5 to the reference.
//	s1[0]=5;
//	for(int i=0;i<5;i++){
//	 s1[i]=i+1;	
//	}
	
	
	s1.print_items();
	
	
	return 0;
}
