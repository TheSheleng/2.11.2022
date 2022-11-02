#include "framework.h"
#include "2.11.2022.h"

#define MAX_LOADSTRING 100

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    WCHAR str[MAX_LOADSTRING];
    unsigned int characters = 0;

    wsprintf(str, TEXT("Это типа резюме."));
    characters += wcslen(str);
    MessageBox(nullptr, str, TEXT("Резюме"), MB_OK);

    wsprintf(str, TEXT("Я не знаю, что сюда можно написать..."));
    characters += wcslen(str);
    MessageBox(nullptr, str, TEXT("Резюме"), MB_OK);

    wsprintf(str, TEXT("Но на ссылку на мою змейку :3"));
    characters += wcslen(str);
    MessageBox(nullptr, str, TEXT("Резюме"), MB_OK);

    wsprintfW(str, L"%i", characters);
    MessageBox(nullptr, TEXT("https://github.com/TheSheleng/snake.git"), str, MB_OK);

    return 0;
}