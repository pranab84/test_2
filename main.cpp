#include <iostream>
#include <limits>

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double );
double areaTriangle(double, double);
double r;
const double PI = 3.1416;
int main() {
    int choice;
    char cont;
    do{
        system("cls");
        initMenu();
        cin>> choice;
        menuDecision(choice);
        do{
        cout<< "Do you want to continue?? (y/n)"<< endl;

        cin>> cont;
        cin.ignore(numeric_limits<streamsize>:: max(),'\n');
        } while (cont != 'y'&& cont != 'Y' && cont != 'n' && cont != 'N');
        }

        while (cont == 'y' || cont == 'Y');

    return 0;
}

void initMenu()
{
    cout<< " Enter the option: "<< endl;
    cout<< "1. circle "<< endl;
    cout<< "2. Square "<< endl;
    cout<< "3. Rectangle "<< endl;
    cout<< "4. triangle "<< endl;

}
void menuDecision(int choice)
{
    double r, a, b, h , v;
    switch (choice) {
        case 1:
            cout<< "Enter the radius: "<< endl;
            cin >> r;
            areaCircle(r);
            break;
        case 2:
            cout<< "Enter the side of a square: "<< endl;
            cin >> a;
            areaSquare(a);
            break;
        case 3:
            cout<< "Enter the width of a rectangle: "<< endl;
            cin >> a;
            cout<< "Enter the height of a rectangle: "<< endl;
            cin >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout<< "Enter the height of triangle: "<< endl;
            cin >> h;
            cout<< "Enter the base of triangle: " << endl;
            cin>> v;
            areaTriangle(h, v);
            break;
        default:
            cout<< "you didn't chose any option from above: "<< endl;
    }

}
double areaCircle(double r){
    double result = PI * r * r;
    cout<< "area of circle that radius is:"<< r  <<  "="  << result << endl;

    return result;
}
double areaSquare(double a){
    double result = a*a;
    cout<< "area of square that side is:"<< a  <<  "=" <<"" << result << endl;
    return result;

}
double areaRectangle(double a, double b){
    double result = a*b;
    cout<< "area of rectangle is; "<< result << endl;
    return result;

}

double areaTriangle(double v, double h){
    double result = 0.5 * v * h;
    cout<< "area of triangle is: "<< result << endl;
    return result;


}