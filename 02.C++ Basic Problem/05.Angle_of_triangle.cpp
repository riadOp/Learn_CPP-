#include<bits/stdc++.h>
using namespace std;
int main(){
    double a , b, c ;
    cin >> a >> b >> c ;
    cout <<"Angle(a) : "<<(acos((((b*b) + (c*c))-(a*a))/(2 * b * c)))*(180/acos(-1)) <<"Degree" <<endl;
    cout <<"Angle(b) : "<<(acos((((a*a) + (c*c))-(b*b))/(2 * a * c)))*(180/acos(-1)) <<"Degree" <<endl;
    cout <<"Angle(c) : "<<(acos((((b*b) + (a*a))-(c*c))/(2 * a * b)))*(180/acos(-1)) <<"Degree" <<endl;
    return 0;
}