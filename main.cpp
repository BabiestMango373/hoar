//
//  main.cpp
//  hoar
//
//  Created by Andrey Scherbakov on 24.03.2024.
//

#include <iostream>
using namespace std;

void sort(int* a, int w, int h)
{
    int i, j, p, t;
    i = w;
    j = h;
    p = a[(i+j) / 2];
    while (i <= j)
    {
        while (a[i] < p)
            i++;
        while (a[j] > p)
            j--;
        if (i <= j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }
    if (j > w)
        sort(a, w, j);
    if (i < h)
        sort(a, i, h);
}

int main()
{
    int f, l, a[100], n;
    setlocale(LC_ALL, "Rus");
    cout << "Введите размер массива: ";
    cin >> n;
    cout << endl << "Введите элементы массива: "<<"\n";
    for (int i=0; i<n; i++)
    {
        cout<<i+1<<" элемент: ";
        cin>>a[i];
    }
    f = 0;
    l = n - 1;
    sort(a, f, l);
    cout << endl << "Конечный массив: ";
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}
