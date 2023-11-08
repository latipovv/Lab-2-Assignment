#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//1
int main() {
    /*int intNumber = 24;
    cout << intNumber<<endl;

    float floatNum = 3.14;
    cout << floatNum<<endl;

    double doubleNumber = 45.1234;
    cout << doubleNumber<<endl;

    char charName = 'A';
    cout << charName<<endl;

    cout << sizeof(charName)<<endl;
    cout << sizeof(intNumber)<<endl;
    cout << sizeof(doubleNumber)<<endl;
    cout << sizeof(floatNum)<<endl;


    //2
    string name = "Akbar";
    string ID = "230027";
    string favSong ="Saint Pablo - Kanye";
    string favMovie = "Intersteller";
    cout << name<<endl;
    cout << ID<<endl;
    cout << favSong<<endl;
    cout << favMovie<<endl;

    //3
    cout<<"\"The Rain\" is raining all around, \n";
    cout<<"\\It falls on field and tree\\ \n";
    cout<<"It rains on the umbrellas here, \n";
    cout<<"And on the ships at sea. \n";
    cout<<" 'Rain'\t Robert Louis Stvenson"<<endl;

    //4
    int a = 151;
    char b = 'B';
    float c = a / 3;
    int x = b;
    float f = (a + b)/5;

    //5
    int i = 32;
    int y = 48;
    int sum = i + y;
    int product = i * y;
    cout << sum << endl;
    cout << product << endl;


    //6
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;

    //7
    double x, y;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    double numerator = 2 * (std::pow(x, 2)+3);
    double denominator = std::pow(y, 3) + 4;

    double t = numerator / denominator;
    cout << "The result of t is: " << t <<endl;


    //8
    float radius;

    cout << "Enter the radius: " << endl;
    cin >> radius;

    float surfaceArea = 4 * 3.14 * pow(radius, 2);
    cout << "The surface area of the sphere is: "<< surfaceArea << endl;

    //9
    float vo, v, t;

    cout << "Enter the starting velocity(vo) in meters/second: ";
    cin >> vo;

    cout << "Enter the ending velocity(v) in meters/seconds: ";
    cin >> v;

    cout << "Enter the time span(t) in seconds: ";
    cin >> t;

    double acceleration = (v - vo)/ t;
    cout << "The verage acceleration is: " << acceleration << "meters/second^2" <<endl;

    //10
    float distance, fuelEfficiency, pricePerGallon;

    cout << "Enter the distance to drive in miles: " ;
    cin >> distance;

    cout << "Enter the fuel efficiency of the car in miles per gallon: " ;
    cin >> fuelEfficiency;

    cout << "Enter the price per gallon of fuel: " ;
    cin >> pricePerGallon;

    float cost = (distance/fuelEfficiency) * pricePerGallon;

    cout << "The cost of the trip is: $" << cost << endl;


    //11
    double var1 = 5.23e3;
    double var2 = 25e-4;

    cout << "Variable 1: " << var1 << endl;
    cout << "Variable 2: " << var2 <<endl;


    //12
    int totalStudents = 241;
    int totalGroups = 11;

    int studentsPerGroup = totalStudents / totalGroups;
    int remainingStudents = totalStudents % totalGroups;
    int firstGroupStudents = studentsPerGroup + remainingStudents;
    int lastGroupStudents = studentsPerGroup;

    cout << "Number of students in the first group: " << firstGroupStudents << endl;
    cout << "Number of students in the last group: " << lastGroupStudents << endl;



    //13

    float side;

    cout << "Enter the side of the hexagon: ";
    cin >> side;

    float area;
    area = 3 * 1.73 * pow(side, 2) / 2;
    cout << "The area of the hexagon is: " << area <<endl;



    //14
    int num;

    num++;
    num *= 6;
    num -= 4;
    num /= 2;
    num--;
    num %= 5;

    cout << "Result: " << num << endl;



    //15
    char letter = 'A';

    letter += 7;
    cout << letter;

    letter -= 3;
    cout << letter;

    letter += 7;
    cout << letter;
    cout << letter;

    letter += 3;
    cout << letter << "!";


     //16
    float x = 13;
    float y = 1;

    float z = 2* x - (x + y);

    cout << "The value of z is: " << z <<endl;


    //17
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 == num2){
        cout << "The numbers are equal" << endl;
    }else{
        cout << "The number are not equal" << endl;
    }


    //18
    int a, b;

    cout << "Enter the a: ";
    cin >> a;

    cout << "Enter the b: ";
    cin >> b;

    if (a < 50 && a * b > 0) {
        cout << "Both conditions 'a < 50' and 'a * b > 0' are true" << endl;
    }else{
        cout << "At least one of the conditions is false" << endl;
    }



    //19
    int a, b, c;
    cout << "Enter the a";
    cin >> a;
    cout <<"Enter the b";
    cin >> b;
    cout <<"Enter the c";
    cin >> c;

    if (a > b && a > c){
        cout<< "a is the largest number"<<endl;
    }else{
        cout << "a is not the largest number" << endl;
    }


    //20
    int num1, num2, num3, num4, num5;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    cout << "Enter the fourth number: ";
    cin >> num4;
    cout << "Enter the fifth number: ";
    cin >> num5;

    if (num1 >= 0 || num2 >= 0 || num3 >= 0 || num4 >= 0 || num5 >= 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;



    //21
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    int sum = a+b;
    int product = a * b;
    int condition1 = (sum >50 && product >50) ? 1: 0;
    int condition2 = ((sum>50 || product > 500) && (b >= 10 )) ? 1 : 0;
    int condition3 = (a>50 || b > 50) ? 1 : 0;
    cout << "Condition 1 : " << condition1 << endl;
    cout << "Condition 2: " << condition2 << endl;
    cout << "Condition 3: " << condition3 << endl;


    }

     */

    //22
    float sardorHeight_cm = 7;
    float mikeHeight_ft;

    cout << "Enter the Sardor's height in cm: ";
    cin >> sardorHeight_cm;

    cout << "Enter the Mike's height in ft: ";
    cin >> mikeHeight_ft;

    float mikeHeight_cm = mikeHeight_ft * 30.48;

    if (mikeHeight_cm > sardorHeight_cm) {
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }


    return 0;
}



