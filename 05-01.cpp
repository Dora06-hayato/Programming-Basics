#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; ++i) // ������{ }���̏�����5��J��Ԃ�
    {
        double x;
        cin >> x;                // �f�[�^���󂯎����
        cout << x * 2.0 << endl; // 2�{���ďo�͂���
    }
}

// �ʉ�
int main()
{
    double data[5];
    for (int i = 0; i < 5; ++i)
    {
        cin >> data[i];          // �z��̊e�v�f�ɐ擪���珇�ɓ���
    }
    for (int i = 0; i < 5; ++i)
    {
        data[i] = data[i] * 2.0; // �z��̊e�v�f��擪���珇��2�{
    }
    for (int i = 0; i < 5; ++i)
    {
        cout << data[i] << endl; // �z��̊e�v�f��擪���珇�ɏo��
    }
}
