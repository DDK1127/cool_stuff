#include<stdio.h>

void bubble_sort(int arr[], int n);//�w�j�ƧǪk 
void insertion_sort(int arr[], int n);//���J�ƧǪk
void selection_sort(int array[], int n);//��ܱƧǪk
void quick_sort(int arr[], int first_index, int last_index);//�ֳt�ƧǪk 

int main(){
	int array[] = { 1 , 5 , 99 , 456, 54 , 87, 55 , 55 , 47};
	int n = sizeof(array)/sizeof(array[0]) , i;
	bubble_sort(array , n);
	for(i = 0 ; i < n ; i++){
		printf("%d  " , array[i]);
	}
	return 0;
}
//�w�j�ƧǪk 
void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < i; ++j) {
      if (arr[j] > arr[i]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
}
//���J�ƧǪk
void insertion_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j-1] > arr[j]) {
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
  }
}

//��ܱƧǪk
void selection_sort(int array[], int n) {
	int i, j;
    for (i = 0; i < n-1 ; i++) {
        int min_idx = i;
        for (j = i+1; j < n; j++) {
            if (array[j] < array[min_idx]) 
                min_idx = j;
        }
        int temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

//�ֳt�ƧǪk 
void quick_sort(int arr[], int first_index, int last_index) {
  // �ŧi�����ܼ�
  int pivotIndex, temp, index_a, index_b;

  if (first_index < last_index) {
    // �H�Ĥ@�Ӥ����@�����
    pivotIndex = first_index;
    index_a = first_index;
    index_b = last_index;

    // �H���W�覡�Ƨ�
    while (index_a < index_b) {
      while (arr[index_a] <= arr[pivotIndex] && index_a < last_index) {
        index_a++;
      }
      while (arr[index_b] > arr[pivotIndex]) {
        index_b--;
      }

      if (index_a < index_b) {
        // �洫����
        temp = arr[index_a];
        arr[index_a] = arr[index_b];
        arr[index_b] = temp;
      }
    }

    // �洫��Ǥ����P index_b ����
    temp = arr[pivotIndex];
    arr[pivotIndex] = arr[index_b];
    arr[index_b] = temp;

    // ���j�I�s�ֳt�ƧǪk���
    quick_sort(arr, first_index, index_b - 1);
    quick_sort(arr, index_b + 1, last_index);
  }
}
