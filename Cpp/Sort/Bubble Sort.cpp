/*
Prompt: Write a C++ program that sorts the following product prices in ascending order 
using a bubble sort algorithm: 1200, 499, 2500, 799, 1500. 
After sorting, print the sorted list of prices separated by spaces.

A bubble sort is a simple sorting algorithm, 
which repeatedly compares and swaps adjacent elements if they are in the wrong order. 
A bubble sort algorithm repeats these comparisons until the entire list is sorted. 
With each iteration of the inner loop of a bubble sort, 
the largest (or smallest) element left in the unsorted portion of the list is moved to the end.

Please note 'while' loop implementaton as opposed to 'for' loops.
*/

#include <iostream>

using namespace std;

const int length_of_list = 5;

int list_1[length_of_list] = {1200, 499, 2500, 799, 1500};

void bubble_sort(int array[], int length_of_list);            // Prototypes of functions
void print_sorted_array(int array[], int length_of_list);

int main () {
    bubble_sort(list_1, length_of_list);  
    print_sorted_array(list_1, length_of_list);
}

void bubble_sort(int array[], int length) {
    bool swapped = true;
    int i = 0;
    while (swapped) {
        swapped = false;
        int j = 0;

        while (j < length - i - 1) {   // Condition is length - i - 1 because no need to to check already sorted elements at end of array
            if (array[j] > array[j + 1]) {

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
            j++;
        }
        i++;
    }
}

void print_sorted_array(int array[], int length) {
    cout << "The sorted array is: "; 
    int i = 0;
    while (i < length) {
        cout << array[i] << " ";
        i++;
    }
    cout << endl;
}
