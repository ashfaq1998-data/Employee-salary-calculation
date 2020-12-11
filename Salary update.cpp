#include<iostream>
using namespace std;

class Employee{
	
	public:
		int salary;
		int hrs; //no. of hours of work per day of employee//
	
	
	public:
		void getinfo(int x, int y){
			salary = x;
			hrs = y;
		}
		
		void Addsal(){
			if(salary < 500){
				salary = salary + 10;
			}
		}
		
		void Addwork(){
			
			if(hrs > 6){
				salary = salary + 5; 
			}
		}
};


int main(){
	Employee E;
	int a,b;
	cout << "Enter the current salary of employee" << endl;
	cin >> a;
	
	cout << "Enter number of hours of work per day of employee " <<endl;
	cin >> b;
	
	E.getinfo(a,b);
	E.Addsal();
	E.Addwork();
	
	cout <<"The final update salary of the employee is : " << E.salary << endl;
	
	
}
