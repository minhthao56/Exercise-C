
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
void findOneItemArr(int arr[], int item)
{
    for (size_t i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == item)
        {
            printf("\n So %d o vi tri so: %d", item, i);
        }
    }
}

int main()
{
    int n;
    int arr[MAX];
    printf("\n Nhap so luong phan tu trong mang:");
    scanf("%d", &n);
    printf("So luong phan tu trong mang la %d", n);
    inputArr(arr, n);
    outputArr(arr, n);
    int item;
    printf("\n Nhap so can tim");
    scanf("%d", &item);
    findOneItemArr(arr, item);
}
