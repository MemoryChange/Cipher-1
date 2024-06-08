#include <Windows.h>
#include <iostream>
#include <vector>
#include <conio.h>
#include <string>

using namespace std;


string encrypt(string input)
{
    vector<char> word(input.begin(), input.end());
    string alphabet = "a�������������������������������.,:;-!?1234567890";



    for (int i = 0; i < (int)input.length(); i++)
    {
        for (int j = 0; j < (int)alphabet.length(); j++)
        {

                if (word[i] == alphabet[j])
                {
                    word[i] = alphabet[(j + 1)];

                    break;
                }

        }
    }
    string str(word.begin(), word.end());
    return str;
}


string decrypt(string input)
{
    vector<char> word(input.begin(), input.end());
    string alphabet = "a�������������������������������.,:;-!?1234567890";

    for (int i = 0; i < (int)input.length(); i++)
    {
        for (int j = 0; j < (int)alphabet.length(); j++)
        {
            if (word[i] == alphabet[j])
            {
                word[i] = alphabet[(j - 1)];
                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    string alphabet_view = "a�������������������������������.,:;-!?1234567890";

    int choice;
    string input_text;
    string output_text;

    while (true)
    {
        cout << endl;
        cout << "�������� ��������:" << endl;
        cout << "1. ����������� �����" << endl;
        cout << "2. ������������ �����" << endl;
        cout << "3. �����" << endl;
        cout << "��� �����: ";
        cin >> choice;
        cout << endl;


        switch (choice)
        {

        case 1:

            cout << alphabet_view << endl;

            cout << "������� ����� ��� ����������: " << endl << endl;
            cin.ignore();
            getline(cin, input_text);

            output_text = encrypt(input_text);
            cout << "������������� �����: " << output_text << endl << endl;
            break;



        case 2:

            cout << alphabet_view << endl;

            cout << "������� ����� ��� �����������: " << endl << endl;
            cin.ignore();
            getline(cin, input_text);
            output_text = decrypt(input_text);

            cout << "�������������� �����: " << output_text << endl;
            break;


        case 3:
            cout << "����� �������!" << endl;
            return 0;
        }
    }

    
    return 0;
}