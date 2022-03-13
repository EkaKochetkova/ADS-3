// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int low = 0;
    int top = size - 1;
    while (low <= top) {
        int mid = (top + low) / 2;
        if (arr[mid] == value) {
            int i = mid + 1;
            int j = mid - 1;
            int count = 1;
            while (arr[i] == value || arr[j] == value) {
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
        if (arr[mid] < value) {
            low = mid + 1;
        }
        if (arr[mid] > value) {
            top = mid - 1;
        }
    }
    return 0; // если ничего не найдено
}
