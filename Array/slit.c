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

void slitArr(int arr[], int n)
{

    int arr1[MAX];
    int arr2[MAX];
    int i1 = 0;
    int i2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {

            arr1[i1] = arr[i];
            i1 = i1 + 1;
        }
        else
        {
            arr2[i2] = arr[i];
            i2 = i2 + 1;
        }
    }
    for (size_t i = 0; i < sizeof arr1; i++)
    {
        printf("%d", arr1[i]);
    }
    // for (size_t i = 0; i < sizeof arr2; i++)
    // {
    //     printf("%d", arr2[i2]);
    // }
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
    slitArr(arr, n);
}