#include <iostream>

void moveArrayContentToNewDoubleSizeArray(int *&array, int size) {
    int *newArray = new int[size * 2];
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = newArray;
};

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int capacity = 5;
    int *numbers = new int[capacity];
    int entries = 0;

    while (true) {
        std::cout << "Please enter a number: ";
        std::cin >> numbers[entries];
        if (std::cin.fail()) break;
        printArray(numbers, entries);
        entries++;
        if (entries > capacity) {
            moveArrayContentToNewDoubleSizeArray(numbers, entries);
        }
    }

    return 0;
}
