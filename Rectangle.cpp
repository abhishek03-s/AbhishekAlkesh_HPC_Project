#include<iostream>

using namespace std;

class Rectangle{
private:
 int l;
 int w;
public:
double getcalculate(){

l = 20;
w = 22;

double area= l*w;
return area;

   }

   
double getpermiter(){

l = 20;
w = 22;

double per = 2*(l*w);
return per;

   }
};


int main(){
Rectangle d;

double area= d.getcalculate();
cout << "area: "<< area <<endl;


double per = d.getpermiter();
cout << "per: "<< per <<endl;


return 0;

}