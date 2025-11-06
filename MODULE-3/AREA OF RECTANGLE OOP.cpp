#include<iostream>
using namespace std;
class Rectangle 
{
    private:
        float length,width;

    public:
    void set(float l, float w) 
    {
        length = l;
        width = w;
    }

    float area()
    {
        return length * width;
    }
};
int main()
{
    float length, width;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    Rectangle rect;

    rect.set(length, width);

    cout << "Area of rectangle: " << rect.area() << endl;

}