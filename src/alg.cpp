// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int low = 0;
int top = size - 1;
    while (low <= top) {
        int mid = (top + low) / 2;
        if (arr[mid] == value) {
            int i = 1;
            int j = 1;
            int count = 1;
            while ((arr[mid + i] == value || arr[mid - j] == value) && ((mid + i <= size) && (mid - j >= 0))) {
                if (arr[mid + i] == value) {
                    count += 1;
                    i += 1;
                }
                if (arr[mid - j] == value) {
                    count += 1;
                    j += 1;
                }
            }
            return count;
        }
        else if (arr[mid] < value) {
            low = low + 1;
        }
        else if (arr[mid] > value) {
            top = top - 1;
        }
    }
    return 0; // если ничего не найдено
}
