//.....13.8 circle class...........
#include<iostream>
#include<string>
using namespace std;
// making class 
class circle
{
private:
	//member variable of  class 
	double radius;
	double pi = 3.14;
public:
	//member functions of class 
	//constructor first for initilizing value 
	circle()
	{
		radius = 0.0;
	}
	//constructor second for asigning values 
	circle(double rad)
	{
		radius = rad;
	}
	// mutators .....setters function set the value of radius
	void setRadius(double rad)
	{
		while (rad < 0)
		{
			cout << "invalid! radius cannot be negative " << endl;
		}
		radius = rad;
	}
	//accessor function
	double getRadius()
	{
		return radius;
	}
	double getArea()
	{
		double area = radius * radius * pi;
		return area;
	}
	double getDiameter()
	{
		double diameter = radius * 2;
		return  diameter;
	}
	double getCircumference()
	{
		double circum = 2 * pi * radius;
		return circum;
	}


};
int main()
{
	//object of class circle 
	circle c;
	double rad;
	cout << "enter the value of radius :";
	cin >> rad;
	c.setRadius(rad);
	double dia = c.getDiameter();
	double are = c.getArea();
	double cir = c.getCircumference();
	//display the value of circle's area,diameter and circumference
	cout << "The area of circle is :" << are << endl;
	cout << "The diameter of circle is :" << dia << endl;
	cout << "The circumference of  circle is " << cir << endl;
	return 0;

}