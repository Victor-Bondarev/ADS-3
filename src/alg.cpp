// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int left = 0;
    int right = size - 1;
    int f = 0;
    while (left <= right) {
        int ser = (right + left) / 2;
        if (*(arr + ser) == value) {
            f++;
            int newser = ser;
            while ((*(arr + ser + 1)) == value) {
                f++;
                ser++;
            }
            while ((*(arr + newser - 1)) == value) {
                f++;
                newser--;
            }
            return f;
        } else if (*(arr + ser) > value) {
            right = ser - 1;
        } else {
            left = ser + 1;
        }
    }
    return f;
}
