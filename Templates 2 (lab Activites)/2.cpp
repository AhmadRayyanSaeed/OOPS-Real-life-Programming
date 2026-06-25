#include<iostream>
using namespace std;

template <typename T>
class Student{
	public:
		T name;
		T department;
		float cgpa;
	
		Student(T n, float c, T d)
		{
			name = n;
			cgpa = c;
			department = d;
		}

		void display()
		{
			cout<<"Name: " <<name <<endl;
			cout<<"CGPA: " <<cgpa <<endl;
			cout<<"Department: " <<department<<endl;
		}
};

int main()
{
	Student<string> s("Arham", 3.65, "Cuber Security");
	
	Student<string> sh("JAWAD", 3.75, "AI");
	s.display();
	sh.display();

	return 0;
}
