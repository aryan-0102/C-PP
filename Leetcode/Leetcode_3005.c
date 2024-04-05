// Leetcode 3005. Count Elements With Maximum frequency

#include <iostream>
using namespace std;

// Function to count elements with maximum frequency in the array
int maxFrequencyElements(int* nums, int numsSize) {
    // Array to store the frequency of each number, initialized to 0
    int frq[101] = {0};
    // Variables to store maximum frequency and the count of elements with maximum frequency
    int max = 0, max_count = 0;
    
    // Loop through the array to calculate frequency of each number
    for(int i = 0; i < numsSize; i++){
        frq[nums[i]]++; // Increment the frequency of the current number
        if(frq[nums[i]] > max)
            max = frq[nums[i]]; // Update max frequency if needed
    }
    
    // Loop through the frequency array to count elements with maximum frequency
    for(int i = 0; i < 101; i++){
        if(frq[i] == max)
            max_count += max; // Increment max_count if the frequency is equal to max
    }
    
    return max_count; // Return the count of elements with maximum frequency
}

int main() {
    int len ;
    cout << "Enter number of elements: " << endl;
    cin >> len;

    int arr[len];
    cout << "Enter data in array: " << endl;
    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }

    // Call the maxFrequencyElements function and store the result
    int result = maxFrequencyElements(arr, len);
    cout << "Number of elements with maximum frequency: " << result << endl;

    return 0;
}
