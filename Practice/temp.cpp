#include<iostream>
#include<iomanip>
using namespace std;
class WeatherData
{
    private:
        float c;
    public :
        WeatherData(float temp_c)
        {
            c=temp_c;
        }
        float operator+()
        {
            c = (c * 9.0 / 5.0 + 32.0);
            return c;
        }
        float operator-()
        {
            return ((-c * 9.0 / 5.0 + 32.0));
        }
};
int main()
{
    float temp_c;
    cin>>temp_c;
    WeatherData w(temp_c);
    cout<<+w<<"°F"<<endl;
cout << "Temperature: " << temp_c << (char)176 << "C" << endl;}
