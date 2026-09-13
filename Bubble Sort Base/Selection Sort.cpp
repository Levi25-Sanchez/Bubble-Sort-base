#include <iostream>
#include <vector>
using namespace std;
 
void selectionSort(vector<int>& arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0;
    intercambios = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); 
        intercambios++;
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
    selectionSort(arr, comparaciones, intercambios);

    cout << "Arreglo ordenado: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << "\nComparaciones: " << comparaciones << "\nIntercambios: " << intercambios << endl;
    return 0;
}

