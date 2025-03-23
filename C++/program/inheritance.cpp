#include <iostream>
using namespace std;

class vehicle
{
public:
  string brand;
  //method to display the brand 
  void showBrand(){
    cout << "Brand: "<< brand << endl;
  }
};

//derived class inhertining from vehicle (single inheritance)
class Car : public vehicle{
  public:
  string model;
  //method to display the model
  void showModel(){
    cout << "Model: " << model << endl;
  }
};

int main(){
  //object of the derived class
  Car mycar;
  //set values for the inherited and new properties
  mycar.brand = "Toyota";//inherited from vehicle class
  mycar.model = "Fortuner";//specific to car class
  //access the methods from both base and derived class 
  mycar.showBrand();
  mycar.showModel();
  return 0;
}
