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

void combineArr(int arr1[], int arr2[], int n1, int n2)
{
    int arr3[MAX];
    int i3;
    i3 = 0;

    for (int i = 0; i < n1; i++)
    {
        arr3[i3] = arr1[i];
        i3++;
    }

    for (int i = 0; i < n2; i++)
    {
        arr3[i3] = arr2[i];
        i3++;
    }
    printf("Mang moi cua ban la: ");
    for (int i = 0; i < i3; i++)
    {

        printf(" \n Phan tu arr3[%d] la %d", i, arr3[i]);
    }
}

int main()
{
    int n1;
    int n2;
    int arr1[MAX];
    int arr2[MAX];
    do
    {
        printf("Hay nhap so luong phan tu n1:");
        scanf("%d", &n1);
    } while (n1 > MAX && n1 < 0);
    inputArr(arr1, n1);
    do
    {
        printf("Hay nhap so luong phan tu n2:");
        scanf("%d", &n2);
    } while (n2 > MAX && n2 < 0);

    inputArr(arr2, n2);
    combineArr(arr1, arr2, n1, n2);
}