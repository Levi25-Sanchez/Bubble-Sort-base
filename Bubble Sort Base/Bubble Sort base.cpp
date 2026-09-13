#include <iostream>
#include <vector>
using namespace std;

void bubbleSortBase(vector<int>& arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0;
    intercambios = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                intercambios++;
            }
        }
    }
}

int main() {
    vector<int> arr;
	
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    
    long comparaciones, intercambios;
    
    bubbleSortBase(arr, comparaciones, intercambios);
    
    cout << "Arreglo ordenado: ";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nComparaciones: " << comparaciones << "\nIntercambios: " << intercambios << endl;
    
    return 0;
}

