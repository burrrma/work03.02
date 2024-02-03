#include <iostream>

//функция заполнения
void Fill(int** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = rand() % 90 + 1;
        }
    }
}
//функция вывода на экран
void Show(int** arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Count(int** arr, int rows, int columns) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum = sum + arr[i][i];
    }
    std::cout << "The sum of the main diagonal is: " << sum;
}

int main() {
    int rows;
    int columns;
    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> rows;
    std::cout << "Enter the number of columns: " << std::endl;
    std::cin >> columns;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[columns];
    }

    Fill(arr, rows, columns);
    Show(arr, rows, columns);

    if (rows == columns) {
        Count(arr, rows, columns);
    }
    //Если матрица не квадратная - не можем посчитать главную диагональ
    else std::cout << "Not a square matrix! There is no main diagonal!";


    delete[] arr;

}