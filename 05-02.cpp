#include <iostream>
#include <cstdlib>

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
    for (int i = 0; i < 20; ++i)  // 20�̃f�[�^��1���擪���珇�Ƀ`�F�b�N
    {
        if (array[i] % 2 == 0 || array[i] % 3 == 0) // 2��������3�Ŋ���؂��Ȃ�
        {
            cout << array[i] << endl; // �o��
        }
    }  
}
