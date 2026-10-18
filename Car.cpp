#include <iostream>
#include <string>
using namespace std;
class Car {
    private:
        string make;
        string model;
        int year;
        int currentyear;
    public:
        Car(string make, string model, int year, int currentyear = 2026)
        {
            this->make = make;
            this->model = model;
            this->year = year;
            this->currentyear = currentyear;
        }
        ~Car() {};
        void displayinfo()
        {
            cout<<make<<endl;
            cout<<model<<endl;
            cout<<year<<endl;
        }
        int getCarAge()
		{
        	return currentyear - year;
		}
		bool isSameCar(Car otherCar)
		{
			if (this->year==otherCar.year && this->model==otherCar.model && this->make==otherCar.make)
			return true;
			else
			return false;
		}
};
int main() {
    Car Mine("Toyota", "Corolla", 1999);
    Car His("Toyota", "Corolla", 1999);
    Mine.displayinfo();
    cout<<Mine.getCarAge()<<endl;
    cout<<Mine.isSameCar(His);
    return 0;
}