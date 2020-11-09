#include <stdio.h>

const int MAX = 100;

void inputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n Hay nhap phan tu thu %d cua mang:", i);
        scanf("%d", &arr[i]);
    }
}

void outputArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n Phan tu thu %d la: %d", i, arr[i]);
    }
}
void findMaxNumber(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        };
    };
    printf("So lon nhat trong mang la: %d", max);
}

int main()
{
    int n;
    int arr[MAX];
    do
    {
        printf("Hay nhap so luong phan tu:");
        scanf("%d", &n);
    } while (n > MAX && n < 0);

    inputArr(arr, n);
    findMaxNumber(arr, n);
}