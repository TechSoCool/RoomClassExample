#include<iostream>
using namespace std;

class RoomClass {
	private:
		double length;
		double width;
		double height;

	public: // function to initalize private variables

		void intiData(double len, double wid, double hgt) // define constructor
		{
			length = len;
			width = wid;
			height = hgt;
		}

		double calculateArea() {
			return length * width;

		}
		double calculateVolume() {
			return length * width* height;
		}
};

int main() {
	//create object of roomclass
	RoomClass roomobjects;

		// assign values

		roomobjects.intiData(42.7, 30.6, 19.2);
	// calculate
	cout << "Area of Room: " << roomobjects.calculateArea() << endl;
	cout << "Volume of Rooom: " << roomobjects.calculateVolume() << endl;

	return 0;
}