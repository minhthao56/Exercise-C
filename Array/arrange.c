#include <stdio.h>

const int MAX = 100;

void changePosition(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

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
void arrangeArr(int arr[], int n)
{

    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                printf("%d, %d", arr[i], arr[j]);
                changePosition(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    int n;
    int arr[MAX];
    printf("\n Nhap so luong phan tu trong mang:");
    scanf("%d", &n);
    printf("\nSo luong phan tu trong mang la %d", n);
    inputArr(arr, n);
    printf("\n Mang truoc khi sap xep:");
    outputArr(arr, n);
    printf("\n Mang sau khi sap xep tang dan:");
    arrangeArr(arr, n);
    outputArr(arr, n);
}
