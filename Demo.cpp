#include <iostream>
using namespace std;

class Students {
public:
    int rno;
    string name;
    int age;

    // Method to set details
    void getdetails() {
        name = "Alkesh";
        age = 25;
        rno = 21;
    }
};

int main() {
    Students s; // Create the object

    s.getdetails(); // Set details for this object

    // Display the data
    cout << s.name << "\n" << s.rno<<endl;
    cout << "My age is: "<< s.age <<endl;

    return 0;
}


