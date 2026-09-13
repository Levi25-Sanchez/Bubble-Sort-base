#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
 
 
void bubbleSortBase(vector<int> arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0; intercambios = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) { swap(arr[j], arr[j + 1]); intercambios++; }
        }
}
 
void bubbleSortMejora1(vector<int> arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0; intercambios = 0;
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) { swap(arr[j], arr[j + 1]); intercambios++; swapped = true; }
        }
        if (!swapped) break;
    }
}
 
void bubbleSortMejora2(vector<int> arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0; intercambios = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) { swap(arr[j], arr[j + 1]); intercambios++; }
        }
}
 
void bubbleSortAmbasMejoras(vector<int> arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0; intercambios = 0;
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparaciones++;
            if (arr[j] > arr[j + 1]) { swap(arr[j], arr[j + 1]); intercambios++; swapped = true; }
        }
        if (!swapped) break;
    }
}
 
void selectionSort(vector<int> arr, long &comparaciones, long &intercambios) {
    int n = arr.size();
    comparaciones = 0; intercambios = 0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparaciones++;
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
        intercambios++;
    }
}
 
void imprimir(const vector<int>& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); i++) { cout << arr[i]; if (i+1<arr.size()) cout << ", "; }
    cout << "]";
}
 
void correrPruebas(vector<int> original) {
    long c, s;
    cout << "Arreglo de entrada : "; imprimir(original); cout << "\n";
 
    bubbleSortBase(original, c, s);
    cout << left << setw(24) << "Bubble Sort Base" << "Comparaciones: " << setw(6) << c << " Intercambios: " << s << "\n";
 
    bubbleSortMejora1(original, c, s);
    cout << left << setw(24) << "Bubble Sort Mejora 1" << "Comparaciones: " << setw(6) << c << " Intercambios: " << s << "\n";
 
    bubbleSortMejora2(original, c, s);
    cout << left << setw(24) << "Bubble Sort Mejora 2" << "Comparaciones: " << setw(6) << c << " Intercambios: " << s << "\n";
 
    bubbleSortAmbasMejoras(original, c, s);
    cout << left << setw(24) << "Bubble Sort Ambas Mej." << "Comparaciones: " << setw(6) << c << " Intercambios: " << s << "\n";
 
    selectionSort(original, c, s);
    cout << left << setw(24) << "Selection Sort" << "Comparaciones: " << setw(6) << c << " Intercambios: " << s << "\n\n";
}
 
int main() { 
    cout << "\n PRUEBA 1 \n";

    vector<int> prueba1; 
    prueba1.push_back(5); 
    prueba1.push_back(3); 
    prueba1.push_back(8); 
    prueba1.push_back(2); 
    correrPruebas(prueba1); 
 
    cout << "\n PRUEBA 2  \n";

    vector<int> prueba2; 
    prueba2.push_back(1); 
    prueba2.push_back(2); 
    prueba2.push_back(3); 
    prueba2.push_back(4); 
    prueba2.push_back(5); 
    correrPruebas(prueba2); 
 
    cout << "\n PRUEBA 3 \n";

    vector<int> prueba3; 
    prueba3.push_back(5); 
    prueba3.push_back(4); 
    prueba3.push_back(3); 
    prueba3.push_back(2); 
    prueba3.push_back(1); 
    correrPruebas(prueba3); 
 
    return 0; 
}
