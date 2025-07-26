class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> Temperature;
        double kelvin = celsius + 273.15;
        double Fahrenheit = celsius * 1.80 + 32.00;
        Temperature.push_back(kelvin);
        Temperature.push_back(Fahrenheit);
        return Temperature;
    }
};