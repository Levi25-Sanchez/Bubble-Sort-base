#include <iostream>
#include <vector>
using namespace std;
 
void bubbleSortMejora1(vector<int>& arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0;
    intercambios = 0;
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                intercambios++;
                swapped = true;
            }
        }
        if (!swapped) break; 
    }
}
 
int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    long comparaciones = 0, intercambios = 0;
    bubbleSortMejora1(arr, comparaciones, intercambios);

    cout << "Arreglo ordenado: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    
    cout << "\nComparaciones: " << comparaciones << "\nIntercambios: " << intercambios << endl;
    return 0;
}
