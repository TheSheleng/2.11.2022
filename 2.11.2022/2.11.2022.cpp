#include "framework.h"
#include "2.11.2022.h"

#define MAX_LOADSTRING 100

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    //Задание 1

    //WCHAR str[MAX_LOADSTRING];
    //unsigned int characters = 0;

    //wsprintf(str, TEXT("Это типа резюме."));
    //characters += wcslen(str);
    //MessageBox(nullptr, str, TEXT("Резюме"), MB_OK);

    //wsprintf(str, TEXT("Я не знаю, что сюда можно написать..."));
    //characters += wcslen(str);
    //MessageBox(nullptr, str, TEXT("Резюме"), MB_OK);

    //wsprintf(str, TEXT("Но на ссылку на мою змейку :3"));
    //characters += wcslen(str);
    //MessageBox(nullptr, str, TEXT("Резюме"), MB_OK);

    //wsprintfW(str, L"%i", characters);
    //MessageBox(nullptr, TEXT("https://github.com/TheSheleng/snake.git"), str, MB_OK);


    //Задание 2

    //WCHAR str[MAX_LOADSTRING];

    //const int MAX_GUES = 100;
    //int guess = MAX_GUES / 2;

    //const int ATTEMPT = 10;
    //for (int i = 2; i < ATTEMPT; i++)
    //{
    //    wsprintfW(str, L"Я думаю это %i\n\nДа - больше\nНет - меньше\nОтмена - угадал", guess);
    //    int answer = MessageBox(nullptr, str, str, MB_YESNOCANCEL);

    //    int change = MAX_GUES / (pow(2, i));

    //    switch (answer)
    //    {
    //    case IDYES: guess += change ? change : 1; break;
    //    case IDNO: guess -= change ? change : 1; break;
    //    case IDCANCEL: i = ATTEMPT;
    //    }
    //}

    //wsprintfW(str, L"Это %i", guess);
    //MessageBox(nullptr, str, TEXT("Ответ"), MB_OK);

    return 0;
}