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
            i1++;
        }
        else
        {
            arr2[i2] = arr[i];
            i2++;
        }
    }
    for (int i = 0; i < i1; i++)
    {
        printf("\n Phan tu mang chan arr1[%d] = %d", i, arr1[i]);
    }
    for (int i = 0; i < i2; i++)
    {
        printf("\n Phan tu mang le arr2[%d] = %d", i, arr2[i]);
    }
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