#include<iostream>

using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{
    return pi * radius * radius * height;
    // return cal_area_circle(radius) * height;    
}

void area_circle()
{
    double radius {0};
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius {};
    double height {};

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << " is: " << calc_volume_cylinder(radius,height) << endl;

}
