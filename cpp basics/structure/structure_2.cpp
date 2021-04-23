#include <iostream>
using namespace std;
struct person
{
    char name[50];
    int age;
    float salary;
};
void display(person);
int main()
{
    person p1;
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    display(p1);

    return 0;

}

void display(person p1)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

}
