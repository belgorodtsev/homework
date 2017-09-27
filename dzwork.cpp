#include <cmath>
#include <iostream>

int main()
{   //1
	double pi = 3.14;
	std::cout << pi << std::endl;
	//
	//2
	int a = 1;
	int b = 13;
	int c = 49;
	std::cout << a << " " << b << " " << c << std::endl;
	//
	//3
	std::cout << " write a symbol = " << std::endl;
	char symbol1 = 0;
	std::cin >> symbol1;
	char symbol2 = 0;
	std::cin >> symbol2;
	std::cout << a << symbol1 << b << symbol2 << c << std::endl;
	//
	//4
	std::cout << " write a three numbers = " << std::endl;
	double number1 = 0;
	std::cin >> number1;
	double number2 = 0;
	std::cin >> number2;
	double number3 = 0;
	std::cin >> number3;
	std::cout << number1 << " " << number2 << " " << number3 << std::endl;
	//
	//5
	std::cout << " write a = " << std::endl;
	double numberA = 0;
	std::cin >> a;
	double x = 0;
	x = 12 * numberA * numberA + 7 * numberA - 12;
	std::cout << " x = " << x << std::endl;
	double y = 0;
	y = 3 * x * x * x + 4 * x * x - 11 * x + 1;
	std::cout << " y = " << y << std::endl;
	//
	//6
	std::cout << " write mass = " << std::endl;
	double mass = 0;
	std::cin >> mass;
	std::cout << " write V = " << std::endl;
	double V = 0;
	std::cin >> V;
	double density = 0;
	density = mass / V;
	std::cout << " density = " << density << std::endl;
	//
	//7
	std::cout << " write coefficientA = " << std::endl;
	double coefficientA = 0;
	std::cin >> coefficientA;
	std::cout << " write coefficientB = " << std::endl;
	double coefficientB = 0;
	std::cin >> coefficientB;
	double X = 0;
	X = -coefficientB / coefficientA;
	std::cout << " X = " << X << std::endl;
	//
	//8
	std::cout << " write coordinateX1" << std::endl;
	double coordinateX1 = 0;
	std::cin >> coordinateX1;
	std::cout << " write coordinateY1" << std::endl;
	double coordinateY1 = 0;
	std::cin >> coordinateY1;
	std::cout << " write coordinateX2" << std::endl;
	double coordinateX2 = 0;
	std::cin >> coordinateX2;
	std::cout << " write coordinateY2" << std::endl;
	double coordinateY2 = 0;
	std::cin >> coordinateY2;
	double distance = 0;
	distance = sqrt(((coordinateX1 - coordinateX2) * (coordinateX1 - coordinateX2)) + ((coordinateY1 - coordinateY2) * (coordinateY1 - coordinateY2)));
	std::cout << " distance = " << distance << std::endl;
	//
	//9
	std::cout << " Enter the title A = " << std::endl;
	double titleA = 0;
	std::cin >> titleA;
	std::cout << " Enter the title B = " << std::endl;
	double titleB = 0;
	std::cin >> titleB;
	std::cout << " Enter the height H = " << std::endl;
	double heightH = 0;
	std::cin >> heightH;
	double sideX = 0;
	sideX = (titleB - titleA) / 2;
	double side = 0;
	side = sqrt(sideX * sideX + heightH * heightH);
	double perimeter = 0;
	perimeter = titleA + titleB + 2 * side;
	std::cout << " Perimeter is p = " << perimeter << std::endl;
	//
	//10
	std::cout << " write inner radius r1 = " << std::endl;
	double radius1 = 0;
	std::cin >> radius1;
	std::cout << " write outer radius r2 = " << std::endl;
	double radius2 = 0;
	std::cin >> radius2;
	double area1 = 0;
	area1 = pi * radius1 * radius1;
	double area2 = 0;
	area2 = pi * radius2 * radius2;
	double area = 0;
	area = area2 - area1;
	std::cout << " area = " << area << std::endl;
	//
	//11
	std::cout << " write edge cube = " << std::endl;
	double edgeCube = 0;
	std::cin >> edgeCube;
	double VCube = 0;
	VCube = edgeCube * edgeCube * edgeCube;
	double SurfaceAreaCube = 0;
	SurfaceAreaCube = 6 * edgeCube * edgeCube;
	std::cout << " cube volume V = " << VCube << std::endl;
	std::cout << " Surface area = " << SurfaceAreaCube << std::endl;
	//
	//12
	std::cout << " write side A = " << std::endl;
	int sideA = 0;
	std::cin >> sideA;
	int perimeter1 = 0;
	perimeter1 = sideA * 4;
	std::cout << " Perimeter is p = " << perimeter1 << std::endl;
	//
	//13
	std::cout << " Radius r = " << std::endl;
	int radius = 0;
	std::cin >> radius;
	int diameter = 0;
	diameter = radius * 2;
	std::cout << " Diameter d = " << diameter << std::endl;
	//
	return 0;
}
