#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = 1000000;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
	
    ifstream file("Data.CSV"); 

    if (!file) {
        cout << "Gagal membuka file." << endl;
        return 1;
    }

    vector<int> arr; 
    int value;

    while (file >> value) {
        arr.push_back(value);
    }

    file.close();
    int size=arr.size();
    size=1000000;

    
    cout << "Data sebelum diurutkan: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr);

    cout << endl;
    cout<<endl;
    cout << "Data setelah diurutkan: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

