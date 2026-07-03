#include<iostream>
#include<fstream>
using namespace std; 


// ager line ko read kerna hy to getline likho ja
// ager simple read kerna hy to normla read file .

int main(){
	int a = 10;
	int b = 20;
	float c =5.20;
	char ch = 'G';
	string abc = "hy! there ";
	string  dfv = " what is u name ";
	
	ofstream file_in("student.txt");
	
	file_in<<a<<endl;
	file_in<<b<<endl;
	file_in<<c<<endl;
	file_in<<ch<<endl;
	file_in<<abc<<endl;
	file_in<<dfv<<endl;
	file_in.close();
	
	
	ifstream file_out("student.txt");

	file_out>>a;
	file_out>>b;
	file_out>>c;
	file_out>>ch;
		
	file_out.ignore();
	
	getline(file_out,abc);
	getline(file_out,dfv);

		
	cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << ch << endl;
	cout<<abc<<endl;
	cout<<dfv<<endl;
	
	file_out.close();
	
	return 0;
	
}

