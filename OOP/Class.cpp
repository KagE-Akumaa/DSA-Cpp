#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
std::vector<int> v;

class Product {
private:
	int id;
	int mrp;
	int sellingPrice;
	char name[100];
public:
	// constructor
	Product() {
		cout << "this is a constructor" << endl;
	}
	// constructor overloading
	// this set the current object to the id , mrp and sellingprice
	Product(int id, char *n, int mrp, int sellingPrice) {
		this->id = id;
		strcpy(name, n);
		this->mrp = mrp;
		this->sellingPrice = sellingPrice;
	}
	// setters
	void setMrp(int price) {
		mrp = price;
	}
	void setSellingPrice(int price) {
		if (price > mrp)
			sellingPrice = mrp;
		else
			sellingPrice = price;
	}
	// getters
	int getMrp() {
		return mrp;
	}
	int getSellingPrice() {
		return sellingPrice;
	}


};

int main() {
	//Product car;
	// car.setMrp(100);
	// car.setSellingPrice(20);
	// car.mrp = 1500000;
	// car.sellingPrice = 20000000;
	// cout << sizeof(car) << endl;
	// cout << "The mrp of the car is " << car.mrp << endl;
	// cout << "The selling Price of the car is " << car.sellingPrice << endl;
	Product car(1500, "JEEP", 500000, 450000);
	cout << "The mrp and selling price of JEEP is " << car.getMrp() << " " << car.getSellingPrice() << endl;
}