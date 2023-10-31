#include<iostream>
using namespace std;

struct People {
    string name;
    int age;
    double height;
};

int main() {
    
    // user input an array of People using a for loop
    const int size = 3;
    People people[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter name, age, and height for person " << i+1 << ":" << endl;
        cin >> people[i].name >> people[i].age >> people[i].height;
    }
    
    // user input an array of People using a for each loop
    const int size2 = 2;
    People people2[size2];
    for (auto &person : people2) {
        cout << "Enter name, age, and height for a person:" << endl;
        cin >> person.name >> person.age >> person.height;
    }
    
    //using for loop
    for (int i = 0; i < size; i++) {
        cout << "Name: "<<people[i].name << " " << "Age: "<< people[i].age << " " << "Height: "<< people[i].height << endl;
    }
    // using for each loop
    for (auto &person : people2) {
        cout <<"Name: "<< person.name << " " <<"Age: "<< person.age << " " << "Height: "<< person.height << endl;
    }
    
    return 0;
}
