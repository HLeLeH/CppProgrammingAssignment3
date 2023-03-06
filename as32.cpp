#include <iostream>
using namespace std;
int sum_array_elements( int *arr, int n ) {
  //  if (n < 0) {
  //    return 0;
  //  } else{
  //    return *(arr + n) + sum_array_elements(arr, n-1);
  //   }
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += *(arr + i);
  }
  return sum;
}
int main()
{
  int n;
  do {
    cout << "Input the number of elements to store in the array (max 10): ";
    cin >> n;
  } while (n > 10);
  int *array = new int[n];
  cout << "Input 5 number of elements in the array:\n";
  for (int i = 0; i < n; i++) {
    cout << "\telement - " << (i + 1) << ": ";
    cin >> array[i];
  }
   int sum;
   sum = sum_array_elements(array, n);
   cout << "The sum of array is: " << sum;
  delete[] array;
}