#include<stdio.h>
//BINARY SEARCHING
int iterativeBinarySearch(int array[], int start_index, int end_index, int angka){
   while (start_index <= end_index){
      int middle = start_index + (end_index- start_index )/2;
      if (array[middle] == angka)
         return middle;
      if (array[middle] < angka)
         start_index = middle + 1;
      else
         end_index = middle - 1;
   }
   return -1;
}
int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int a = 7;
   int angka;
   printf("masukkan angka : ");scanf("%d", &angka);
   int found_index = iterativeBinarySearch(array, 0, a-1, angka);
   if(found_index == -1 ) {
      printf("Angka tersebut TIDAK DITEMUKAN ");
   }
   else {
      printf("Angka ditemukan pada lokasi/index : %d",found_index);
   }
   return 0;
}