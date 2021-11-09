// Admission- 147683
// CAT 1- Question 1
//9th November 

#include <iostream>
using namespace std;

//A simple program to calculate the area and volume of a cylinder

int main()
{
    //Declaration and initializing the variables
    int area;
    int volume;
    int height;
    int base= 3.141592;  
    int radius; 

    //Calculate the area of a cylinder
    //Ask the user to enter the radius and the height

    cout << "We are calculating the area of your cylinder\n"; 
    cout << "-------------------------------------------------\n"; 

    cout << "Please enter the radius of your cylinder\n"; 
    cin >> radius;

    cout << "Please enter the height of your cylinder\n"; 
    cin >> height; 

    //output the area of the cylinder
    area = (2 * base * radius * height) + (2 * base * radius * radius); 
    cout << "The area of your cylinder is " << area << endl; 

    cout << "--------------------------------------------------------\n\n";

    //Calculate the volume of a cylinder
    //Ask the user to enter the radius and the height

    cout << "We are calculating the volume of your cylinder\n";
    cout <<"------------------------------------------------\n";  

    cout << "Please enter the radius of your cylinder\n";
    cin >> radius;

    cout << "Please enter the height of your cylinder\n";
    cin >> height;

    //output the volume of the cylinder
    volume = base * radius * radius * height; 

    cout << "The volume of your cylinder is " << volume << endl; 

    return 0; 

}

