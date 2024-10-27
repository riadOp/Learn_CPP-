#include<iostream>

double CelciusToFahrenheit();
double FahrenheitToCelcius();
double CelciusToKelvin();

int main() {
    int Choice;
    double Celsius, Fahrenheit, Kelvin;
    
    do {
        std::cout << "*************************Temperature Converter*******************\n";
        std::cout << "Which task you want to perform : \n";
        std::cout << "01. Celsius to Fahrenheit \n";
        std::cout << "02. Fahrenheit to Celsius \n";
        std::cout << "03. Celsius to Kelvin\n";
        std::cout << "04. Exit\n";
        std::cout << "Enter your choice : ";
        std::cin >> Choice ;

        switch(Choice) {
            case 1:
                CelciusToFahrenheit();
                break;
            case 2:
                FahrenheitToCelcius();
                break;
            case 3:
                CelciusToKelvin();
                break;
            case 4:
                std::cout << "Quitiingggg.......\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }
    } while (Choice != 4);

    return 0;
}

double CelciusToFahrenheit() {
    double Celsius, Fahrenheit;
    std::cout << "Enter temperature in Celsius : ";
    std::cin >> Celsius;
    Fahrenheit = (Celsius * 9.0 / 5.0) + 32.0;
    std::cout << "Temperature in Fahrenheit scale is " << Fahrenheit << " Degree\n";
    return Fahrenheit; 
}

double FahrenheitToCelcius() {
    double Fahrenheit, Celsius;
    std::cout << "Enter temperature in Fahrenheit : ";
    std::cin >> Fahrenheit;
    Celsius = (Fahrenheit - 32.0) * 5.0 / 9.0;
    std::cout << "Temperature in Celsius scale is " << Celsius << " Degree\n";
}

double CelciusToKelvin() {
    double Celsius, Kelvin;
    std::cout << "Enter temperature in Celsius : ";
    std::cin >> Celsius;
    Kelvin = Celsius + 273.15;
    std::cout << "Temperature in Kelvin scale is " << Kelvin << " Degree\n";
}
