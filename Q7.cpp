// calculate the area and circumference of a circle and semicircle using radius
// calculate the volume and surface area of a sphere and semisphere using radius
#include <bits/stdc++.h>
using namespace std;

int sphere(float r)
{

    const float pi = 3.141;

    float surface1;
    float surface2;

    float volume1;
    float volume2;

    surface1 = (4 * pi * r * r);
    surface2 = (2 * pi * r * r); // surface2 = surface1/2

    volume1 = (4 * pi * r * r * r) / 3;
    volume2 = (2 * pi * r * r * r) / 3; // volume2 = volume1/2

    cout << "The surface area of a full-sphere is :  " << surface1 << endl;
    cout << "The surface area of a semi-sphere is :  " << surface2 << endl;

    cout << "The volume of a full-sphere is :  " << volume1 << endl;
    cout << "The volume of a semi-sphere is :  " << volume2 << endl;
}

int circle(float r)
{
    const float pi = 3.141;

    float circum1;
    float circum2;

    float area1;
    float area2;
    circum1 = (2 * pi * r);
    circum2 = (pi * r); // circum2 = circum1/2

    area1 = (pi * r * r);
    area2 = (pi * r * r) / 2; // area2 = area1/2

    cout << "The circumference of a full-circle is :  " << circum1 << endl;
    cout << "The circumference of a semi-circle is :  " << circum2 << endl;

    cout << "The  area of a full-circleis :  " << area1 << endl;
    cout << "The  area of a semi-circle is :  " << area2 << endl;
}
int main()
{
    float r;
    cout << " Enter the value of a radius : ";
    cin >> r;

    circle(r);
    sphere(r);
    return 0;
}