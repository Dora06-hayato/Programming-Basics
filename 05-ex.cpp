#include <iostream>
#include <cstdlib>
#include <algorithm> // ��2�̏ꍇ�ɕK�v

using namespace std;

int main()
{
    // 20�̗������i�[�����z��
    int array[20];
    for (int i = 0; i < 20; ++i)
    {
        array[i] = rand();
    }
    
    // TODO: �ȍ~�C�K�v�ȃR�[�h��ǉ�

    // ��1. �o�u���\�[�g
    for (int i = 0; i < 19; ++i)
    {
        for (int j = i + 1; j < 20; ++j)
        {
            if (array[i] > array[j])
            {
                int t = array[i];
                array[i] = array[j];
                array[j] = t;
            }
        }
    }
    
    // ��2. STL��sort
    sort(array, array + 20);
    
    for (int i = 0; i < 20; ++i)
    {
        cout << array[i] << endl;
    }
}
