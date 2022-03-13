// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int low = 0;           
    int top = size - 1;   
    while (low <= top) {
        int mid = (top + low) / 2;
        if (arr[mid] == value) {
            return mid + 1;
        } else if (arr[mid] < value) {
            low = low + 1;
        }
        else if (arr[mid] > value) {
            top = top - 1;
        }
    }
    return 0; // если ничего не найдено
}
