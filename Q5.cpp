#include <iostream>
using namespace std;
bool binarySearch(int array[], int item, int left, int right) {
   bool result = 0;
      while (left <= right && !result) {
            int middle = (left + right) / 2;
            if (array[middle] == item)
                  return middle;
            else if (array[middle] > item)
                  right = middle - 1;
            else
                  left = middle + 1;
      }
      return -1;
}

int main(){
   int n = 2097152;
   int *array = new int[n];
   for (int i = 0; i < n; i++){
      array[i] = 0;
   }
   clock_t time = clock ();
   for (int i = 0; i < 10000000; i++){
      binarySearch(array,1,0,n);
   }
   time = clock() - time;
   float end = double(time) / CLOCKS_PER_SEC * 1000;
   cout << end;
   delete []array;
    return 0;
}
