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

void addItemArr(int arr[], int n, int x, int position)
{
    if (position >= 0 && position < n)
    {
        for (int i = n; i >= position; i--)
        {
            arr[i] = arr[i - 1];
            arr[position] = x;
        }
        n++;
    }
    else
    {
        printf("\n Vi tri ban them vao lon hon mang roi nha!!");
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n Phan tu arr[ %d] la: %d", i, arr[i]);
    }
}

int main()
{
    int n;
    int x;
    int position;
    int arr[MAX];
    printf("\n Nhap so luong phan tu trong mang:");
    scanf("%d", &n);
    printf("\nSo luong phan tu trong mang la %d", n);
    inputArr(arr, n);
    printf("\n Hay nhap vi tri them vao mang:");
    scanf("%d", &position);
    printf("\n Hay vi phan tu muon them vao:");
    scanf("%d", &x);
    printf("\nMang trk khi them vao");

    outputArr(arr, n);
    printf("\nMang sau khi them vao");
    addItemArr(arr, n, x, position);
}
