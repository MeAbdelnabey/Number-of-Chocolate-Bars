#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Ahlan ya user ya 7pipi... Are you M or F ?\n"<<endl;
    char gender;double BMR,number,weight,height,age;
    cin >> gender ;
    if(gender=='M' )
    {
        cout << "Enter your weight , height , age" <<endl;
        cin >> weight >> height >> age ;
        BMR = 655 + 4.3 * weight + 4.7 * height - 4.7 * age ;
        number=BMR/230;
        cout << " you need "<<number <<" of chocolate bars"<<endl;
    }
    else if(gender=='F')
    {
        cout << "Enter your weight , height , age" <<endl;
        cin >> weight >> height >> age ;
        BMR = 66 + 6.3 * weight + 12.9 * height - 6.8 * age ;
        number=BMR/230;
        cout << " you need "<<number <<" of chocolate bars"<<endl;
    }
    return 0;
}
