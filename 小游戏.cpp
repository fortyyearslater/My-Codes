#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    int a = 0, sheng = 20, gong = 10, fang = 10, b, shengm = 20, yao = 0;
    int guais, guaig, qian = 0, c;
    while (a == 0)
    {
        cout << "1.�����̵�" << endl;
        cout << "2.�ַ�ħ��" << endl;
        cout << "3.��ɫ����" << endl;
        cout << "��ѡ��..." << endl;
        cout << endl;
        cin >> b;
        if (b == 1)
        {
            cout << "1.װ��" << endl;
            cout << "2.ҩƷ" << endl;
            cout << "����0�˳�" << endl;
            cout << endl;
            cin >> b;
            if (b == 1)
            {
                while (b != 0)
                {
                    cout << "1.����" << endl;
                    cout << "2.����" << endl;
                    cout << "3.����" << endl;
                    cout << "����0�˳�" << endl;
                    cout << endl;
                    cin >> b;
                    if (b == 1)
                    {
                        cout << "1.��ʿ������+10�� ��ֵ��20" << endl;
                        cout << "2.ʯ�н���+20�� ��ֵ40" << endl;
                        cout << "3.ħ�������֣�+90�� ��ֵ150" << endl;
                        cout << "����4�˳�" << endl;
                        cout << endl;
                        cin >> b;
                        if (b == 1 && qian >= 20)
                        {
                            gong = 20;
                            qian -= 20;
                            cout << "��������" << gong << endl;
                        }
                        if (b == 2 && qian >= 40)
                        {
                            gong = 30;
                            qian -= 40;
                            cout << "��������" << gong << endl;
                        }
                        if (b == 3 && qian >= 150)
                        {
                            gong = 100;
                            qian -= 150;
                            cout << "��������" << gong << endl;
                        }
                    }
                    if (b == 2)
                    {
                        cout << "1.�ʼҶ��ƣ�+10�� ��ֵ��20" << endl;
                        cout << "2.���㱤�ݣ�+20�� ��ֵ40" << endl;
                        cout << "3.ħ�������֣�+90�� ��ֵ150" << endl;
                        cout << "����4�˳�" << endl;
                        cout << endl;
                        cin >> b;
                        if (b == 1 && qian >= 20)
                        {
                            fang = 20;
                            qian -= 20;
                            cout << "��������" << fang << endl;
                        }
                        if (b == 2 && qian >= 40)
                        {
                            fang = 30;
                            qian -= 40;
                            cout << "��������" << fang << endl;
                        }
                        if (b == 3 && qian >= 150)
                        {
                            fang = 100;
                            qian -= 150;
                            cout << "��������" << fang << endl;
                        }
                    }
                    if (b == 3)
                    {
                        cout << "1.ս�����ף�+10�� ��ֵ��20" << endl;
                        cout << "2.�������ף�+20�� ��ֵ40" << endl;
                        cout << "3.ħ���ľ�����+90�� ��ֵ150" << endl;
                        cout << "����4�˳�" << endl;
                        cout << endl;
                        cin >> b;
                        if (b == 1 && qian >= 20)
                        {
                            shengm = 20;
                            qian -= 20;
                            cout << "��������" << shengm << endl;
                        }
                        if (b == 2 && qian >= 40)
                        {
                            shengm = 30;
                            qian -= 40;
                            cout << "��������" << shengm << endl;
                        }
                        if (b == 3 && qian >= 150)
                        {
                            shengm = 100;
                            qian -= 150;
                            cout << "��������" << shengm << endl;
                        }
                    }
                }
            }
            if (b == 2)
            {
                cout << "1.���ٻظ�������1��" << endl;
                cout << "2.�ָ�ҩ��������5��*5" << endl;
                cout << "����0�˳�" << endl;
                cout << endl;
                cin >> b;
                if (b == 1 && qian >= 1)
                {
                    sheng = shengm;
                    qian--;
                    cout << "��������" << sheng << endl;
                }
                if (b == 2 && qian >= 5)
                {
                    yao = yao + 5;
                    cout << "ҩƷ����" << yao << endl;
                }
            }
        }
        else if (b == 2)
        {
            cout << "1.С��" << endl;
            if (gong >= 15)
            {
                cout << "2.ħͷ" << endl;
                if (gong >= 20)
                {
                    cout << "3.��ħ��" << endl;
                    cout << "����0�˳�" << endl;
                    cout << endl;
                    cin >> b;
                }
                else
                {
                    cout << "����0�˳�" << endl;
                    cout << endl;
                    cin >> b;
                }
            }
            else
            {
                cout << "����0�˳�" << endl;
                cout << endl;
                cin >> b;
            }
            if (b == 1)
            {
                guais = 30;
                guaig = 5;
                c = 5;
                while (guais > 0 && sheng > 0)
                {
                    cout << "1.����" << endl;
                    cout << "2.����������" << c << "��" << endl;
                    cout << "3.�ظ������ܣ�" << endl;
                    cout << endl;
                    cin >> b;
                    if (b == 1)
                    {
                        guais = guais - gong;
                        sheng = sheng - guaig;
                        cout << "��������"
                             << "-" << gong << "=" << guais << endl;
                        cout << "��������"
                             << "-" << guaig << "=" << sheng << endl;
                    }
                    if (b == 2 && c != 0)
                    {
                        if (fang >= guaig)
                        {
                            guais = guais - (fang - guaig);
                            cout << "��������"
                                 << "-" << fang - guaig << "=" << guais << endl;
                        }
                        else
                        {
                            sheng = sheng - (guaig - fang);
                            cout << "��������"
                                 << "-" << guaig - fang << "=" << sheng << endl;
                        }
                        c--;
                    }
                    if (b == 3 && yao > 0)
                    {
                        yao--;
                        sheng = sheng + 20;
                        if (sheng > shengm)
                            sheng = shengm;
                        cout << "ҩƷ����" << yao << endl;
                        cout << "��������+20��" << sheng << "��" << endl;
                    }
                    if (sheng <= 0)
                    {
                        cout << "������" << endl;
                        break;
                    }
                }
                if (sheng > 0)
                {
                    qian = qian + 2;
                    cout << "���"
                         << "+2" << endl;
                }
                cout << endl;
            }
            if (b == 2)
            {
                guais = 50;
                guaig = 10;
                c = 7;
                while (guais > 0 && sheng > 0)
                {
                    cout << "1.����" << endl;
                    cout << "2.����������" << c << "��" << endl;
                    cout << "3.�ظ������ܣ�" << endl;
                    cout << endl;
                    cin >> b;
                    if (b == 1)
                    {
                        guais = guais - gong;
                        sheng = sheng - guaig;
                        cout << "��������"
                             << "-" << gong << "=" << guais << endl;
                        cout << "��������"
                             << "-" << guaig << "=" << sheng << endl;
                    }
                    if (b == 2 && c != 0)
                    {
                        if (fang >= guaig)
                        {
                            guais = guais - (fang - guaig);
                            cout << "��������"
                                 << "-" << fang - guaig << "=" << guais << endl;
                        }
                        else
                        {
                            sheng = sheng - (guaig - fang);
                            cout << "��������"
                                 << "-" << guaig - fang << "=" << sheng << endl;
                        }
                        c--;
                    }
                    if (b == 3 && yao > 0)
                    {
                        yao--;
                        sheng = sheng + 20;
                        if (sheng > shengm)
                            sheng = shengm;
                        cout << "ҩƷ����" << yao << endl;
                        cout << "��������+20��" << sheng << "��" << endl;
                    }
                    if (sheng <= 0)
                    {
                        cout << "������" << endl;
                        break;
                    }
                }
                if (sheng > 0)
                {
                    qian = qian + 10;
                    cout << "���"
                         << "+10" << endl;
                }
                cout << endl;
            }
            if (b == 3)
            {
                guais = 100;
                guaig = 20;
                c = 15;
                while (guais > 0 && sheng > 0)
                {
                    cout << "1.����" << endl;
                    cout << "2.����������" << c << "��" << endl;
                    cout << "3.�ظ������ܣ�" << endl;
                    cout << endl;
                    cin >> b;
                    if (b == 1)
                    {
                        guais = guais - gong;
                        sheng = sheng - guaig;
                        cout << "��������"
                             << "-" << gong << "=" << guais << endl;
                        cout << "��������"
                             << "-" << guaig << "=" << sheng << endl;
                    }
                    if (b == 2 && c != 0)
                    {
                        if (fang >= guaig)
                        {
                            guais = guais - (fang - guaig);
                            cout << "��������"
                                 << "-" << fang - guaig << "=" << guais << endl;
                        }
                        else
                        {
                            sheng = sheng - (guaig - fang);
                            cout << "��������"
                                 << "-" << guaig - fang << "=" << sheng << endl;
                        }
                        c--;
                    }
                    if (b == 3 && yao > 0)
                    {
                        yao--;
                        sheng = sheng + 20;
                        if (sheng > shengm)
                            sheng = shengm;
                        cout << "ҩƷ����" << yao << endl;
                        cout << "��������+20��" << sheng << "��" << endl;
                    }
                    if (sheng <= 0)
                    {
                        cout << "������" << endl;
                        break;
                    }
                }
                if (sheng > 0)
                {
                    qian = qian + 100;
                    cout << "���"
                         << "+100" << endl;
                }
                cout << endl;
            }
        }
        else if (b == 3)
        {
            printf("���Ժ�");
            for (int i = 1; i <= 5; i++)
            {
                printf(".");
                Sleep(5);
            }
            printf("\n��������\n");
            printf("----------------------------------------------\n");
            printf("����: %d ", sheng);
            printf("����: %d\n\n", gong);
            printf("����: %d ", fang);
            printf("��������: %d\n\n", shengm);
            printf("���: %d ", qian);
            cout << endl
                 << endl;
        }
    }
    return 0;
}
