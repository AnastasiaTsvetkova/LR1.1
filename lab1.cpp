// lab1

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    const int K = 10;
    int A[K];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < K; i++)
    {
        cin >> A[i];                                
    }
    for (int i = 0; i < K; i++)
    {
        if (A[i] % 2 == 0)  
            A[i] = 0;
    }
    cout << "Mассив:" << endl;
    for (int i = 0; i < K; i++)
        cout << setw(2) << A[i] << " ";                      
    system("pause");
    return 0;
}