#include <iostream>

using namespace std;

int main()
{
    int l;
    cout<<"enter length"<<endl;
    cin >>l;
    int b;
    cout<<"enter breadth"<<endl;
    cin>>b;
    int area;
    area=l*b;
    cout<<area <<endl;
    int perimeter;
    perimeter=2*(l+b);
    cout<<perimeter;
    if (area>perimeter){
            cout<<"the area is greater than perimeter";}
    else if (area<perimeter)
        { cout<<"the perimeter is grater";}
    else if (area==perimeter) {cout<<"both are equal";}
    return 0;
}
