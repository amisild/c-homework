#include <iostream>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <bits/stdc++.h>

using namespace std;

int choosing_numbers(int numbers[]) {
    for (int i = 0; i < 20; i++) {
        numbers[i] = (rand()%80 + 1);
    }
    return 0;
}

int saving_to_file(int numbers[], int n) {
    srand(time(0));
    ofstream myfile;
    myfile.open ("winningnumbers.txt");
    myfile << "The winning numbers are:" << "\n";

    vector<int> v(numbers, numbers + n); 
    vector<int>::iterator it; 
  
    // using unique() method to remove duplicates 
    it = unique(v.begin(), v.end()); 
  
    // resize the new vector 
    v.resize(distance(v.begin(), it)); 
  
    // Print the array with duplicates removed
    for (it = v.begin(); it != v.end(); ++it) 
        myfile << *it << ", "; 
    myfile << '\n'; 

    myfile.close();
    return 0;
}

int main (void)
{
    const int n = 20;
    int numbers[20];

    choosing_numbers(numbers);
    saving_to_file(numbers, n);

    return 0;    
}