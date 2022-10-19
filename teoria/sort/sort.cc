#include <stdio.h>
#include <iostream>

using namespace std;

void selection(int A[], int N); // O(N^2)
// void insertion // O(N^2)
// void bubble(int A[], int N) // O(N^2)
void bubble1(int A[], int N);
void bubble1_aux(int A[], int N, int i, bool ordered);
void quick(int A[], int N); // N*log2(N)
void shell(int A[], int N); // O(N^(3/2))
void merge(int A[], int N); // O(N^(3/2))

void print(int A[], int N);
void swap(int &a, int &b);

int main() {
    const int N = 5;
    int A[N] = {4,3,5,2,7};
    bubble1(A, N);
    print(A, N);
}

void selection(int A[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i; j < N; j++) {
            if (A[j] < A[min])
                min = j;
        }
        swap(A[min], A[i]);
    }
}

void bubble1(int A[], int N) {
    bubble1_aux(A, N, 0, false);
}

void bubble1_aux(int A[], int N, int i, bool ordered) {
    if ((i == N - 1) && ordered) 
        return;

    if (i == N - 1) {
        i = 0;
        ordered = true;
    }

    if (A[i] > A[i+1]) {
        swap(A[i], A[i+1]);
        ordered = false;
    }

    bubble1_aux(A, N, i+1, ordered);
}

void quick(int A[], int N) {

}

void shell(int A[], int N) {

}

void merge(int A[], int N) {

}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void print(int A[], int N) {
    for (int i = 0; i < N; i++) {
        cout << A[i] << ' ';
    }
    cout << endl;
}