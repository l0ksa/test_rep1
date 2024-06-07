// Задвання 1
//#include <iostream>
// #include <Windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    cout << "Не дай, Боже, вам багатства,\n"
//        "Та жити на світі в чужому краю,\n"
//        "Бо чужий край ніколи\n"
//        "Не стане рідним краєм.\n";
//    return 0;
//}


// Завдання 2
//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ukr");
//    int start_hour, start_minute, start_second;
//    int end_hour, end_minute, end_second;
//
//    cout << "Введіть години, хвилини та секунди початку подорожі через пробіл: ";
//    cin >> start_hour >> start_minute >> start_second;
//
//    cout << "Введіть години, хвилини та секунди завершення подорожі через пробіл: ";
//    cin >> end_hour >> end_minute >> end_second;
//
//    int start_time = start_hour * 3600 + start_minute * 60 + start_second;
//    int end_time = end_hour * 3600 + end_minute * 60 + end_second;
//
//    int travel_time_seconds = end_time - start_time;
//    int travel_time_minutes = travel_time_seconds / 60;
//
//    float cost_per_minute = 2.0;
//    float total_cost = travel_time_minutes * cost_per_minute;
//
//    cout << "Вартість подорожі: " << total_cost << " грн" << endl;
//
//    return 0;
//}


// Завдання 3
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double distance, fc;
//    double prices[3];
//
//    cout << "Введіть відстань у кілометрах: ";
//    cin >> distance;
//
//    cout << "Введіть витрату палива на 100 км: ";
//    cin >> fc;
//
//    for (int i = 0; i < 3; ++i) {
//        cout << "Введіть вартість " << i + 1 << "-го виду бензину: ";
//        cin >> prices[i];
//    }
//
//    cout << "\nПорівняльна таблиця вартості подорожі:\n";
//    cout << "--------------------------------------\n";
//    cout << "Вид палива\t| Вартість подорожі\n";
//    cout << "--------------------------------------\n";
//
//    for (int i = 0; i < 3; ++i) {
//        double totalcost = (distance / 100) * fc * prices[i];
//        cout << "Паливо " << i + 1 << "\t\t| " << totalcost << " грн\n";
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int a;
//    cout << "Введіть значення a: ";
//    cin >> a;
//
//    int total = 0;
//    for (int i = a; i <= 500; ++i) {
//        total += i;
//    }
//
//        cout << "Сума цілих чисел від " << a << " до 500: " << total << '\n';
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double num;
//    cout << "Введіть ціле число: ";
//    cin >> num;
//
//    int intNumber = int(num);
//
//    if (num != intNumber) {
//        cout << "Число не є цілим!\n";
//        return 0;
//    }
//
//    double average = (1 + intNumber) / 2.0;
//    cout << "Середнє арифметичне всіх цілих чисел від 1 до " << intNumber << ": " << average << '\n';
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int num1, num2;
//    cout << "Введіть перше ціле число: ";
//    cin >> num1;
//    cout << "Введіть друге ціле число: ";
//    cin >> num2;
//
//    cout << "Цілі числа на які обидва введені числа діляться без залишку: ";
//    for (int i = 1; i <= min(num1, num2); ++i) {
//        if (num1 % i == 0 && num2 % i == 0) {
//            cout << i << " ";
//        }
//    }
//    cout << '\n';
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int x = 1967;
//    int y = 2850;
//    int z = 320;
//
//    double result = 1 + 3 * sqrt(sin(x / 1000.0 + 1) / (2 * y / 1000.0 * z / 1000.0));
//    cout << "Результат обчислення виразу B: " << result << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int number;
//    cout << "Введіть шестизначне число: ";
//    cin >> number;
//
//    if (number < 100000 || number > 999999) {
//        cout << "Помилка! Це не шестизначне число.\n";
//        return 0;
//    }
//
//    int first = number / 1000;
//    int second = number % 1000;
//
//    int sum1 = (first / 100) + ((first / 10) % 10) + (first % 10);
//    int sum2 = (second / 100) + ((second / 10) % 10) + (second % 10);
//
//    if (sum1 == sum2) {
//        cout << "Це щасливе число!\n";
//    }
//    else {
//        cout << "Це не щасливе число.\n";
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    double distAB, distBC, weight;
//    cout << "Введіть відстань між пунктами А і В (в км): ";
//    cin >> distAB;
//    cout << "Введіть відстань між пунктами В і С (в км): ";
//    cin >> distBC;
//    cout << "Введіть вагу вантажу (в кг): ";
//    cin >> weight;
//
//    double fuelAB = 0, fuelBC = 0;
//
//    if (weight <= 500) {
//        fuelAB = distAB;
//        fuelBC = distBC;
//    }
//    else if (weight <= 1000) {
//        fuelAB = distAB * 4;
//        fuelBC = distBC * 4;
//    }
//    else if (weight <= 1500) {
//        fuelAB = distAB * 7;
//        fuelBC = distBC * 7;
//    }
//    else if (weight <= 2000) {
//        fuelAB = distAB * 9;
//        fuelBC = distBC * 9;
//    }
//    else {
//        cout << "Неможливо підняти вагу понад 2000 кг.\n";
//        return 0;
//    }
//
//    double totalfuel = fuelAB + fuelBC;
//    cout << "Мінімальна кількість палива для подолання відстані А-С через В: " << totalfuel<< " л\n";
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    const int ROWS = 3;
//    const int COLS = 4;
//
//    int array[ROWS][COLS] = {
//        {3, 5, 6, 7},
//        {12, 1, 1, 1},
//        {0, 7, 12, 1}
//    };
//
//    cout << "Суми у кожному рядку:\n";
//    for (int i = 0; i < ROWS; ++i) {
//        int row = 0;
//        for (int j = 0; j < COLS; ++j) {
//            row += array[i][j];
//            cout << array[i][j] << " ";
//        }
//        cout << "| " << row << "\n";
//    }
//
//    cout << "Суми у кожному стовпці:\n";
//    for (int j = 0; j < COLS; ++j) {
//        int col = 0;
//        for (int i = 0; i < ROWS; ++i) {
//            col += array[i][j];
//        }
//        cout << col << " ";
//    }
//    cout << "\n";
//
//    cout << "Сума по всіх рядках і стовпцях: ";
//    int total = 0;
//    for (int i = 0; i < ROWS; ++i) {
//        for (int j = 0; j < COLS; ++j) {
//            total += array[i][j];
//        }
//    }
//    cout << total << "\n";
//
//    return 0;
//}


//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_ALL, "ukr");
//
//    const int height = 3, width = 4;
//    int matrix[height][width] = { 0 };
//
//    int startNumber;
//    cout << "Введіть число для початкового значення: ";
//    cin >> startNumber;
//
//    int arrayRow = 0;
//
//    for (int i = 0; i < height; ++i) {
//        int currentNumber = startNumber;
//        for (int j = 0; j < width; ++j) {
//            matrix[i][j] = currentNumber;
//            currentNumber++;
//        }
//        arrayRow += matrix[i][0];
//    }
//
//    cout << "Створений масив:\n";
//    for (int i = 0; i < height; ++i) {
//        for (int j = 0; j < width; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << "| " << arrayRow << std::endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//const int numgrades = 10;
//
//int main() {
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int grades[numgrades];
//
//    cout << "Введіть оцінки студента:\n";
//    for (int i = 0; i < numgrades; ++i) {
//        cout << "Оцінка " << (i + 1) << ": ";
//        cin >> grades[i];
//    }
//
//    int choice;
//    do {
//        cout << "\nМеню:\n";
//        cout << "1. Вивід оцінок\n";
//        cout << "2. Перездача іспиту\n";
//        cout << "3. Чи виходить стипендія\n";
//        cout << "0. Вихід\n";
//        cout << "Виберіть опцію: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Оцінки студента: ";
//            for (int i = 0; i < numgrades; ++i) {
//                cout << grades[i] << " ";
//            }
//            cout << std::endl;
//        }
//        else if (choice == 2) {
//            int index, newGrade;
//            cout << "Введіть номер елемента для перездачі і нову оцінку: ";
//            cin >> index >> newGrade;
//
//            if (index >= 1 && index <= numgrades) {
//                grades[index - 1] = newGrade;
//                cout << "Оцінка успішно змінена." << endl;
//            }
//            else {
//                cout << "Невірний номер елемента. Введіть число від 1 до " << numgrades << endl;
//            }
//        }
//        else if (choice == 3) {
//            int sum = 0;
//            for (int i = 0; i < numgrades; ++i) {
//                sum += grades[i];
//            }
//
//            double average = static_cast<double>(sum) / numgrades;
//
//            if (average >= 10.7) {
//                cout << "Студент має право на стипендію.\n";
//            }
//            else {
//                cout << "Студент не має права на стипендію.\n";
//            }
//        }
//        else if (choice == 0) {
//            cout << "Дякую за використання програми. До побачення!\n";
//        }
//        else {
//            cout << "Невірний вибір. Будь ласка, введіть правильну опцію.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int array2d[3][4] = {
//        {1, 0, 3, 4},
//        {0, 2, 0, 5},
//        {6, 7, 8, 9}
//    };
//
//    int zeroscore = 0;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            if (array2d[i][j] == 0) {
//                zeroscore++;
//            }
//        }
//    }
//
//    cout << "Кількість нульових елементів в масиві: " << zeroscore << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <cmath>
//#include <Windows.h>
//
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int n;
//    cout << "Введіть розмір квадратної матриці: ";
//    cin >> n;
//
//    int matrix[20][20] = { 0 };
//
//    for (int i = 0; i < n; ++i) {
//        for (int j = n - i - 1; j < n; ++j) {
//            matrix[i][j] = n - j;
//        }
//    }
//
//    cout << "Трикутник з вказаним виглядом (перевернутий верхом вниз):" << endl;
//    for (int i = n - 1; i >= 0; --i) {
//        for (int j = 0; j < n; ++j) {
//            if (matrix[i][j] != 0) {
//                cout << matrix[i][j] << " ";
//            }
//            else {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    int maxvalue = matrix[0][n - 1];
//    for (int i = 1; i < n; ++i) {
//        if (matrix[i][n - 1 - i] > maxvalue) {
//            maxvalue = matrix[i][n - 1 - i];
//        }
//    }
//
//    cout << "Найбільше значення в темно-синіх частинах матриці: " << maxvalue << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//template <typename T>
//T findMax(const T* array, const int size) {
//    T mavмal = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > maxVal) {
//            maxval = array[i];
//        }
//    }
//    return maxval;
//}
//
//template <typename T>
//T findMax(const T** array, const int rows, const int cols) {
//    T maxval = array[0][0];
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (array[i][j] > maxval) {
//                maxval = array[i][j];
//            }
//        }
//    }
//    return maxVal;
//}
//
//template <typename T>
//T findMax(const T*** array, const int dim1, const int dim2, const int dim3) {
//    T maxval = array[0][0][0];
//    for (int i = 0; i < dim1; ++i) {
//        for (int j = 0; j < dim2; ++j) {
//            for (int k = 0; k < dim3; ++k) {
//                if (array[i][j][k] > maxval) {
//                    maxval = array[i][j][k];
//                }
//            }
//        }
//    }
//    return maxval;
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int arr1D[] = { 3, 8, 1, 5, 7 };
//    int max1D = findMax(arr1D, 5);
//    cout << "Максимум в 1-му масиві: " << max1D << endl;
//
//    int arr2D[][3] = { {2, 4, 6}, {1, 5, 9}, {3, 7, 8} };
//    int max2D = findMax(reinterpret_cast<const int**>(arr2D), 3, 3);
// 
//    cout << "Максимум в 2-му масиві: " << max2D << endl;
//
//    int arr3D[][2][2] = { {{1, 3}, {4, 2}}, {{7, 5}, {8, 6}} };
//    int max3D = findMax(reinterpret_cast<const int***>(arr3D), 2, 2, 2);
//    cout << "Максимум в 3-му масиві: " << max3D << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int findMax(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//int findMax(int a, int b, int c) {
//    return findMax(findMax(a, b), c);
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int num1 = 10, num2 = 7;
//    int maxOfTwo = findMax(num1, num2);
//    cout << "Не більше двох цілих чисел: " << maxOfTwo << endl;
//
//    int num3 = 15;
//    int maxOfThree = findMax(num1, num2, num3);
//    cout << "Не більше трьох цілих чисел: " << maxOfThree << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//template <typename T, size_t N>
//T findMax(const T(&arr)[N]) {
//    T maxval = arr[0];
//    for (size_t i = 1; i < N; ++i) {
//        if (arr[i] > maxval) {
//            maxval = arr[i];
//        }
//    }
//    return maxval;
//}
//
//template <typename T, size_t rows, size_t cols>
//T findMax(const T(&arr)[rows][cols]) {
//    T maxval = arr[0][0];
//    for (size_t i = 0; i < rows; ++i) {
//        for (size_t j = 0; j < cols; ++j) {
//            if (arr[i][j] > maxval) {
//                maxval = arr[i][j];
//            }
//        }
//    }
//    return maxval;
//}
//
//template <typename T, size_t d1, size_t d2, size_t d3>
//T findMax(const T(&arr)[d1][d2][d3]) {
//    T maxval = arr[0][0][0];
//    for (size_t i = 0; i < d1; ++i) {
//        for (size_t j = 0; j < d2; ++j) {
//            for (size_t k = 0; k < d3; ++k) {
//                if (arr[i][j][k] > maxval) {
//                    maxval = arr[i][j][k];
//                }
//            }
//        }
//    }
//    return maxval;
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int arr1D[] = { 2, 5, 8, 1, 3, 7 };
//    cout << "Максимум в 1-му масиві: " << findMax(arr1D) << endl;
//
//    int arr2D[][3] = { {1, 4, 2}, {8, 6, 9}, {3, 7, 5} };
//    cout << "Максимум в 2-му масиві: " << findMax(arr2D) << endl;
//
//    int arr3D[][2][2] = { {{7, 2}, {9, 4}}, {{5, 1}, {6, 8}} };
//    cout << "Максимум в 3-му масиві: " << findMax(arr3D) << endl;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int getrandomnumber(int min, int max) {
//    return rand() % (max - min + 1) + min;
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    srand(time(nullptr));
//
//    int size;
//    cout << "Введіть розмір масиву: ";
//    cin >> size;
//
//    int* array = new int[size];
//
//    for (int i = 0; i < size; ++i) {
//        array[i] = getrandomnumber(1, 100);
//    }
//
//    int* maxptr = &array[0];
//    int* minptr = &array[0];
//
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > *maxptr) {
//            maxptr = &array[i];
//        }
//        if (array[i] < *minptr) {
//            minptr = &array[i];
//        }
//    }
//
//    cout << "Максимальний елемент: " << *maxptr << endl;
//    cout << "Мінімальний елемент: " << *minptr << endl;
//
//    cout << "Обернений масив: ";
//    for (int i = size - 1; i >= 0; --i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//
//    delete[] array;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int* getEvenElements(const int* arr, int size, int& newSize) {
//    int count = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] % 2 == 0) {
//            count++;
//        }
//    }
//
//    newSize = count;
//    int* evenArr = new int[count];
//    int index = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] % 2 == 0) {
//            evenArr[index++] = arr[i];
//        }
//    }
//
//    return evenArr;
//}
//
//int* getOddElements(const int* arr, int size, int& newSize) {
//    int count = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] % 2 != 0) {
//            count++;
//        }
//    }
//
//    newSize = count;
//    int* oddArr = new int[count];
//    int index = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] % 2 != 0) {
//            oddArr[index++] = arr[i];
//        }
//    }
//
//    return oddArr;
//}
//
//int main() {
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    int evenSize, oddSize;
//    int* evenArr = getEvenElements(arr, size, evenSize);
//    int* oddArr = getOddElements(arr, size, oddSize);
//
//    cout << "Even elements: ";
//    for (int i = 0; i < evenSize; ++i) {
//        cout << evenArr[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Odd elements: ";
//    for (int i = 0; i < oddSize; ++i) {
//        cout << oddArr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] evenArr;
//    delete[] oddArr;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void deleteElement(int*& array, int& size, int index) {
//    if (index < 0 || index >= size) {
//        cout << "Invalid index!\n";
//        return;
//    }
//
//    for (int i = index; i < size - 1; ++i) {
//        array[i] = array[i + 1];
//    }
//
//    size = size - 1;
//
//    int* newArray = new int[size];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = array[i];
//    }
//
//    delete[] array;
//    array = newArray;
//}
//
//int main() 
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int size = 5;
//    int* array = new int[size] {1, 2, 3, 4, 5};
//
//    cout << "Початковий масив: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << endl;
//
//    int index;
//    cout << "Введіть індекс елемента, який потрібно видалити: ";
//    cin >> index;
//
//    deleteElement(array, size, index);
//
//    cout << "Оновлений масив: ";
//    for (int i = 0; i < size; ++i) {
//        cout << array[i] << " ";
//    }
//    cout << std::endl;
//
//    delete[] array;
//
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int size = 5;
//	int* array = new int[size] {1, 2, 3, 4, 5};
//
//	cout << "Початковий масив: ";
//	for (int i = 0; i < size; i++) {
//		cout << array[i] << " ";
//	}
//	cout << endl;
//
//	int index;
//	cout << "Введіть індекс елемента, який потрібно видалити: ";
//	cin >> index;
//
//	if (index >= 0 && index < size) {
//		for (int i = index; i < size - 1; i++) {
//			array[i] = array[i + 1];
//		}
//		size = size - 1;
//
//		cout << "Елемент за індексом " << index << " був видалений.\n";
//		cout << "Оновлений масив: ";
//		for (int i = 0; i < size; i++) {
//			cout << array[i] << " ";
//		}
//		cout << endl;
//	}
//	else {
//		cout << "Неправильний індекс.\n";
//	}
//
//	delete[] array;
//
//	return 0;
//}


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//int findminsumposition(int array[], int start) {
//	if (start == 90);
//	return start;
//
//	int currentsum = 0;
//	for (int i = start; i < start + 10; i++) {
//		currentsum += array[i];
//	}
//
//	int nextposition = findminsumposition(array, start + 1);
//	return (currentsum <= array[nextposition]) ? start : nextposition;
//}
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	srand(time(0));
//
//	int array[100];
//
//	for (int i = 0; i < 100; i++) {
//		array[i] = rand() % 100;
//	}
//
//	int position = findminsumposition(array, 0);
//	cout << "Початкова позиція послідовності з мінімальною сумою: " << position << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//
//int main() {
//    srand(time(nullptr));
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int size = 10;
//    int** matrix = new int* [size];
//    for (size_t i = 0; i < size; i++)
//    {
//        matrix[i] = new int[size];
//        for (size_t j = 0; j < size; j++)
//        {
//            matrix[i][j] = rand() % 10;
//        }
//    }
//
//    cout << "Створена матриця" << endl;
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = 0; j < size; j++)
//        {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    int* sumArray = new int[size * 2 - 1] {};
//    for (size_t k = 0; k < size * 2 - 1; k++)
//    {
//        sumArray[k] = 0;
//        for (size_t i = 0; i < size; i++)
//        {
//            for (size_t j = 0; j < size; j++)
//            {
//                if (i + j == k) {
//                    sumArray[k] += matrix[i][j];
//                }
//            }
//        }
//    }
//
//    cout << "Суми дiагоналей:";
//    for (size_t i = 0; i < size * 2 - 1; i++)
//    {
//        cout << sumArray[i] << " ";
//    }
//
//    for (size_t i = 0; i < size; i++)
//    {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//    delete[] sumArray;
//    return 0;
//}


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//struct User {
//	string login;
//	string password;
//	int age;
//	Sex sex;
//
//	User(string login, string password, int age, Sex sex) {
//		this->login = login;
//		this->password = password;
//		this->age = age;
//		this->sex = sex;
//	}
//
//	void PrintUserData() {
//		cout << "Login: " << login << endl;
//		cout << "Password: " << password << endl;
//		cout << "Age: " << age << endl;
//		switch (sex)
//		{
//		case Male:
//			cout << "Male";
//			break;
//		case Female:
//			cout << "Female";
//			break;
//		default:
//			break;
//		}
//		cout << endl << endl;
//	}
//};
//
//int main() {
//	srand(time(nullptr));
//	setlocale(LC_ALL, "ukr");
//	User user{ "NewUser", "12345678", 18, Male};
//	User user2{ "NewUser1", " 123456", 19, Female};
//	User user3{ "NewUser2", " 123457", 13, Male};
//	return 0;
//}
//
//enum Sex
//{
//	Male,
//	Female
//}; 


//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//enum Firm {
//	Bosh,
//	LG
//};
//
//struct Iron {
//	Firm firm;
//	string model;
//	string color;
//	int minTemperature;
//	int maxTemperature;
//
//	bool isSteamAllowed;
//	int power;
//
//	Iron(Firm f, string m, string c, int minT, int maxT, bool isSteam, int p) {
//		firm = f;
//		model = m;
//		color = c;
//		minTemperature = minT;
//		maxTemperature = maxT;
//		isSteamAllowed = isSteam;
//		power = p;
//	}
//};
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	srand(time(nullptr));
//	Iron iron{ LG, "FF0NX", "red", 20, 120, true, 250 };
//	cout << iron.color << endl;
//	cout << iron.model << endl;
//	cout << iron.maxTemperature << endl;
//	cout << iron.minTemperature << endl;
//
//	return 0;
//}


//#include <iostream>
//#include <string>
//#include <Windows.h>
//using namespace std;
//
//const int maxstudents = 100;
//
//struct Student {
//	string firstname;
//	string lastname;
//	string group;
//	bool present;
//};
//
//struct Journal {
//	Student students[maxstudents];
//	int count;
//
//	Journal() : count(0) {}
//
//	void addstudent(Student newstudent) {
//		if (count < maxstudents) {
//			students[count] = newstudent;
//			count++;
//		}
//		else {
//			cout << "Журнал вже заповнений" << endl;
//		}
//	}
//
//	void findstudentsbygroup(string groupname) {
//		cout << "Студенти групи '" << groupname << "':" << endl;
//		for (int i = 0; i < count; i++) {
//			if (students[i].group == groupname) {
//				cout << students[i].firstname << " " << students[i].lastname << endl;
//			}
//		}
//	}
//
//	void findpresentstudents() {
//		cout << "\nПрисутні студенти:" << endl;
//		for (int i = 0; i < count; ++i) {
//			if (students[i].present) {
//				cout << students[i].firstname << " " << students[i].lastname << endl;
//			}
//		}
//	}
//};
//
//int main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	Journal journal;
//
//	journal.addstudent({ "Іван", "Легайна", "Група 1", true });
//	journal.addstudent({ "Марія", "Мельник", "Група 2", false });
//	journal.addstudent({ "Олег", "Тичинський", "Група 1", true });
//	journal.addstudent({ "Соня", "Коваленко", "Група 3", true });
//
//	journal.findstudentsbygroup("Група 1");
//
//	journal.findpresentstudents();
//
//	return 0;
//}


#include <iostream>
#include <Windows.h>
#include <cpprest/http_client.h>
#include <cpprest/json.h>

using namespace std;

void showMainMenu() {
    cout << "Меню:\n";
    cout << "1. Відстеження стану серверів та робочих станцій\n";
    cout << "2. Моніторинг використання ресурсів (ЦП, ОЗУ, дисковий простір)\n";
    cout << "3. Перевірка стану мережевих підключень та пропускної здатності\n";
    cout << "4. Повідомлення та сповіщення системних адміністраторів про інцидент\n";
    cout << "5. Генерація детальних звітів про стан системи за обрані періоди\n";
    cout << "6. Аналіз історичних даних для виявлення тенденцій та прогнозування можливих проблем\n";
    cout << "7. Логування інцидентів та дій, виконаних для їх усунення\n";
    cout << "8. Відстеження прогресу вирішення проблем та призначення відповідальних\n";
    cout << "0. Вихід\n";
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;

    do {
        showMainMenu();
        std::cout << "Введіть номер опції: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Відстеження стану серверів та робочих станцій\n";
            break;
        case 2:
            std::cout << "Моніторинг використання ресурсів\n";
            break;
        case 0:
            std::cout << "Вихід з програми.\n";
            break;
        default:
            std::cout << "Невірний вибір. Будь ласка, введіть правильний номер опції.\n";
            break;
        }
    } while (choice != 0);

    return 0;
}
