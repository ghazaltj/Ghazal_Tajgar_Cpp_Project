#include <iostream>
#include "Device.h"


int main() 
{
	Poly circle(1);     // base object with radius 1
	Poly square(4, 1);  // base object with 4 sides and distance from center equal to 1

	Device cylinder(&circle, 1, 2);    // creating a simple object with parameters base, height snd density respectivly
	Device cube(&square, 1, 2); 

	Device device;  // creating an empty main device which can hold other devices
	Device d1;      // creating sub-devices
	Device d2;

	d1.add(&cylinder);   // adding cylinder to first sub-device
	d2.add(&cube);     
	d2.add(&cylinder);

	device.add(&d1); 
	device.add(&d2);
	device.add(&cylinder);

	std::cout << "Total mass of the main device: " << device.mass() << std::endl;
	std::cout << "Total volume of the main device: " << device.volume() << std::endl;
	std::cout << "Total surface of the main device: " << device.surface() << std::endl;

	return 0;
}