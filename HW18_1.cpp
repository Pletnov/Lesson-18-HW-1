#include <iostream>
#include "Employee.h"
#include "Date.h"
using namespace std;
int main() {
	const int Size = 5;
	Emloyee arr[Size]{
		{"Pupkin", 1995, "Programmer", 10000.0, "Higher"},
		{"Shevchenko", 2000, "Auditor", 8000.0, "Medium"},
		{"Ukrainka", 1960, "Manager", 5000.0, "Higher"},
		{"Lishenko", 2005, "Physicist", 3000.0, "Medium special"},
		{"Kirichenko", 1950, "Accountant", 6000.0, "Higher"}
	};
	Date now;
	now.getNowDate();
	int currentYear = now.year;
	int count = 0;
	cout << "Employees older than 60 years:\n\n";
	for (int i = 0; i < Size; i++) {
		int age = currentYear - arr[i].year_of_birth;
		if (age > 60) {
			count++;
			cout << "Last name: " << arr[i].last_name << endl;
			cout << "Year of birth: " << arr[i].year_of_birth << endl;
			cout << "Position: " << arr[i].position << endl;
			cout << "Salary: " << arr[i].salary << endl;
			cout << "Education: " << arr[i].education << endl;
			cout << "Age: " << age << "\n\n";
		}
	}
	cout << "Total number of employees over 60: " << count << endl;
	return 0;
}