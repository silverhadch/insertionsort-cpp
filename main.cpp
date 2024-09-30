#include <iostream>
using namespace std;

void printarray(int array[], int arraylength);
void insertsort(int array[], int arraylength);  

int main() {
    int array[] = {3, 6, 2, 8, 54, 2, 65, 774, 3436, 45242, 64};
    int arraylength = sizeof(array) / sizeof(array[0]);
    
    cout << "Unsorted Array: ";
    printarray(array, arraylength);
    
    insertsort(array, arraylength);
    
    cout << "\nSorted Array: ";
    printarray(array, arraylength);
    
    return 0;
}

void printarray(int array[], int arraylength) { 
    for (int i = 0; i < arraylength; i++) {
        cout << array[i] << " ";
    }
}

void insertsort(int array[], int arraylength) {
    for (int i = 1; i < arraylength; i++) {
        int x = array[i];
        int j = i;

        while (j > 0 && array[j - 1] > x) {
            array[j] = array[j - 1];
            j--;
        }
        
        array[j] = x;
    }
}
