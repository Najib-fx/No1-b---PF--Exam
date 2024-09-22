#include <iostream>
using namespace std;

// Function to calculate the sum of the series
double calculateSeriesSum() {
    double sum = 0.0; // Initialize sum as a double to handle decimal values

    // Loop through odd numbers for numerators and denominators
    for (int i = 1, j = 3; i <= 95 && j <= 97; i += 2, j += 2) {
        sum += static_cast<double>(i) / j; // Add each term to the sum
    }

    return sum; // Return the calculated sum
}

int main() {
    // Call the function to calculate the sum of the series
    double seriesSum = calculateSeriesSum();

    // Output the result
    cout << "The sum of the series is: " << seriesSum << endl;

    return 0; // Indicate that the program ended successfully
}
