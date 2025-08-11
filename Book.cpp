#include<iostream>
using namespace std;


class Book{
public:
    string title;
    string author;
    float price;
    int pages;


void setBookInfo(){

   title = "title";
    author = "author";
    price = 2000;
    pages = 100;

}

void displayBook(){
cout <<"Title Of Book: "<< title <<endl;
cout <<"Book Of Author: "<< author <<endl;
cout <<"Book Of Price: "<< price <<endl;
cout <<"Book Of Pages: "<< pages <<endl;
}

void applyDiscount(float percentage){

    price -= price*(percentage/100);
    cout<<"After Discout Of Book\n"<< price <<endl;


}

bool isexpensive(){
    return price > 500;
}


};

int main(){

    Book b;

    b.setBookInfo();
    b.displayBook();

    b.applyDiscount(25);
    

    if(b.isexpensive()){
          cout<<"its is expensive"<<endl;
    } else {
        cout<<"it is not  expensive"<<endl;
    }

return 0;
}