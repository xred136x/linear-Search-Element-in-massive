// шаблон
#include<iostream>
using namespace std;

// Линейный Поиск первого вхождения элемента value в массив arr. Поиск начинается с позиции begin 

template <typename T>
int search_index(T arr[], const int len, T value, int begin = 0) {
	for (int i = begin; i < len; i++)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
int search_last_index(T arr[], const int len, T value) {
	for (int i = len - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}
// Поиск последнего элемента с бегин
template <typename T>
int search_last_index(T arr[], const int len, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

// Задача 1 подслово
// вывод подслова с позиции sym

void subword(char arr[], const int len, char sym) {
	int index = search_index(arr, len, sym);
	if (index == -1)
		cout << "ERROR\n";
	else {
		for (int i = index; i < len; i++)
			cout << arr[i];
		cout << '\n';
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	const int size = 10;
	int arr[size]{ 6, 4, 1, 7, -6, 1, 0, 1, 11, 9 };
	// search_index
	cout << "Позиция числа 7 в массиве = " << search_index(arr, size, 7) << '\n';
	cout << "Первая позиция числа 1 в иассиве = " << search_index(arr, size, 1) << '\n';
	if (search_index(arr, size, 100) == -1)
		cout << "Нет в массиве\n";
	else
		cout << "Позиция числа 100 в массиве = " << search_index(arr, size, 100) << '\n';
	cout << "Позиция числа 1 начиная с поз.4 в массиве = " << search_index(arr, size, 1, 4) << '\n';


	cout << "Позиция числа 7 в массиве = " << search_last_index(arr, size, 7) << '\n';//3
	cout << "Позиция числа 1 в массиве = " << search_last_index(arr, size, 1) << '\n';//7
	
	cout << "Позиция числа 1 начиная с поз.4 в массиве = " << search_last_index(arr, size, 1, 4) << '\n'; //2

	cout << "Изначальное слово:\n";
	const int letters = 8;
	char word[letters] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	for (int i = 0; i < letters; i++)
		cout << word[i];
	cout << "\nПодслово:\n";
	subword(word, letters, 'n');

	return 0;
}