#include<iostream>
using namespace std;

class Distance{
	private:
		int feet;
		int inches;
	public:
		class inches_error{};
		void setdata(){
			cout<<"Enter the feet ";
			cin>>feet;
				cout<<"Enter the inches ";
			cin>>inches;
		}
		void push(){
			if(inches<0){
				throw inches_error();
			}
			else{
				feet += inches/12;
				inches = inches % 12;
			}
		}
		
		void getdata(){
		cout << "Distance = "
             << feet << " feet "
             << inches << " inches" << endl;
		}
		
};

int main() {
	try{
		Distance Dc;
		Dc.setdata();
		Dc.push();
		Dc.getdata();
	}
	catch(Distance :: inches_error ){
		cout<<" Invalid DATA " <<endl;
	}

    return 0;
}
