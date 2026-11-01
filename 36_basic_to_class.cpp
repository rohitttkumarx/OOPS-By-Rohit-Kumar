#include<iostream>
#include<string>
using namespace std;
class student{
	private:
	int marks;
	string grade;
	public:
	student(int m){
		marks=m;
		if(marks >= 90)
				grade = "A+";
			else if(marks >= 80)
				grade = "A";
			else if(marks >= 70)
				grade = "B";
			else if(marks >= 60)
				grade = "C";
			else
				grade = "Fail";
		}

		void display()
		{
			cout << "\n----- Student Result -----" << endl;
			cout << "Marks: " << marks << endl;
			cout << "Grade: " << grade << endl;
		}
};

int main()
{
	int marks;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	cout << "Enter Student Marks: ";
	cin >> marks;

	student s = marks;

	s.display();

	return 0;
}