#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <p18f4550.h>

// Function Prototypes

void initialize();
int add_array(int arr[], int size);

// Main Function

void main(void)
{
    initialize();                         // Initialize system (ports, oscillator, etc.)        // Define the array of numbers and its size
    int n = 5;                            // Example: We want to sum 5 numbers
    int array[] = {10, 20, 30, 40, 50};   // Example array
    
    // Calculate the sum of the array
    int sum = add_array(array, n);

    // Output the sum to PORTB (e.g., to LEDs connected to PORTB)
    PORTB = sum;                         // Display the result in binary on LEDs connected to PORTB

    while(1);                            // Infinite loop to keep the program running
}

// Function to initialize the system (ports, etc.)

void initialize() 
{
    TRISB = 0x00;                        // Set PORTB as output (for displaying result via LEDs)
}

// Function to add elements of an array

int add_array(int arr[], int size)
 {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];                  // Add each element to sum
    }
    return sum;                         // Return the final sum
}
