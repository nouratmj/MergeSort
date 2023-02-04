//Noorah Tariq
//Merge Sort
#include <iostream>
using namespace std;
void merge(int*, int, int, int);
void merge_sort(int* array, int lowest_num, int high_num)
{
    int mid;
    if (lowest_num < high_num) {
        mid = (lowest_num + high_num) / 2;
        merge_sort(array, lowest_num, mid);
        merge_sort(array, mid + 1, high_num);

        merge(array, lowest_num, high_num, mid);
    }
}
void merge(int* array2, int lowest_num1, int high_num1, int midian_num1)
{
    int i, j, k, the_array[50];
    i = lowest_num1;
    k = lowest_num1;
    j = midian_num1 + 1;
    while (i <= midian_num1 && j <= high_num1) {
        if (array2[i] < array2[j]) {
            the_array[k] = array2[i];
            k++;
            i++;
        }
        else {
            the_array[k] = array2[j];
            k++;
            j++;
        }
    }
    while (i <= midian_num1) {
        the_array[k] = array2[i];
        k++;
        i++;
    }
    while (j <= high_num1) {
        the_array[k] = array2[j];
        k++;
        j++;
    }
    for (i = lowest_num1; i < k; i++) {
        array2[i] = the_array[i];
    }
}

int main()
{
    int Sort_array[20];
    int number;
    cout << "Enter The number for elements that will be in the sorted:";
    cin >> number;
    cout << "Enter " << number << " elements to be sorted :" << endl;
    for (int i = 0; i < number; i++) {
        cin >> Sort_array[i];
    }
    merge_sort(Sort_array, 0, number - 1);
    cout << "The Sorted for array is :" << endl;
    for (int i = 0; i < number; i++)
    {
        cout << Sort_array[i] << "\t";
    }
