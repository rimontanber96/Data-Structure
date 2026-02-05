#include <iostream>
using namespace std;

class ArrayOperation {
private:
    int* arr;   // pointer for dynamic array
    int size;

public:
    // constructor: array create
    ArrayOperation(int n) {
        size = n;
        arr = new int[size];
    }

    // input array
    void input() {
        cout << "Enter elements:\n";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // delete element at position
    void deleteAt(int pos) {
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  // reduce size after deletion
    }

    // display array
    void display() {
        cout << "Array after deletion:\n";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n, pos;
    cout << "Enter array size: ";
    cin >> n;

    ArrayOperation obj(n);  // create object with dynamic size

    obj.input();

    cout << "Enter index to delete: ";
    cin >> pos;

    obj.deleteAt(pos);
    obj.display();

    return 0;
}
