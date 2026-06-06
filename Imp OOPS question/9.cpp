// Create a matrix using your RegNo digits and perform addition. 

#include<iostream>
using namespace std;

class Matrix{
	private : int m[3][3];
	public : 
	void set_data(){
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++)
				cin>>m[i][j];

		}
	}
	
	Matrix add(Matrix ma){
		Matrix temp;
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++)
				temp.m[i][j] = m[i][j] + ma.m[i][j]; 
 		}
 		return temp;
	}
	
	void display(){
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++)
			cout<<m[i][j]<<"  \t ";
			cout<<endl;
		}
		cout<<endl;
	}
	
};

int main(){
	Matrix mt1,mt2, mt3;
	mt1.set_data();
	mt2.set_data();
	mt3 = mt1.add(mt2);
	mt3.display();
	
	return 0;
}
