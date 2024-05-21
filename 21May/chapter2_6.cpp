#include <iostream>

class TemperatureConverter {
private:
    float fahrenheit;
    float celsius;

public:
    // Constructor to initialize the fahrenheit value
    TemperatureConverter(float f) : fahrenheit(f), celsius(0.0) {}

    // Function to perform the conversion
    void convertToFahrenheit() {
        celsius = (fahrenheit - 32) * 5 / 9;
    }

    // Function to display the result
    void display() const {
        std::cout << "Fahrenheit: " << fahrenheit << "°F\n";
        std::cout << "Celsius: " << celsius << "°C\n";
    }
};

int main() {
    float tempF;

    std::cout << "Enter temperature in Fahrenheit: ";
    std::cin >> tempF;

    // Create an object of TemperatureConverter class
    TemperatureConverter converter(tempF);

    // Convert the temperature to Celsius
    converter.convertToFahrenheit();

    // Display the converted temperature
    converter.display();

    return 0;
}
