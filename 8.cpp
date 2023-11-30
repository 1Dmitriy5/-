// проект 24.cpp : Определяет точку входа для приложения.
//

#include "framework.h"
#include "проект 24.h"

#define MAX_LOADSTRING 100

// Глобальные переменные:
HINSTANCE hInst;                                // текущий экземпляр
WCHAR szTitle[MAX_LOADSTRING];                  // Текст строки заголовка
WCHAR szWindowClass[MAX_LOADSTRING];            // имя класса главного окна

// Отправить объявления функций, включенных в этот модуль кода:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Разместите код здесь.

    // Инициализация глобальных строк
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_MY24, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Выполнить инициализацию приложения:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_MY24));

    MSG msg;

    // Цикл основного сообщения:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  ФУНКЦИЯ: MyRegisterClass()
//
//  ЦЕЛЬ: Регистрирует класс окна.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_MY24));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_MY24);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   ФУНКЦИЯ: InitInstance(HINSTANCE, int)
//
//   ЦЕЛЬ: Сохраняет маркер экземпляра и создает главное окно
//
//   КОММЕНТАРИИ:
//
//        В этой функции маркер экземпляра сохраняется в глобальной переменной, а также
//        создается и выводится главное окно программы.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Сохранить маркер экземпляра в глобальной переменной

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}
void drawHome(HDC hdc) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 7, RGB(245, 80, 100));
    SelectObject(hdc, hPen);
    // крыша
    MoveToEx(hdc, 150, 350, NULL);
    LineTo(hdc, 275, 250);
    LineTo(hdc, 400, 350);
    // дом
    LineTo(hdc, 400, 525);
    LineTo(hdc, 150, 525);
    LineTo(hdc, 150, 350);
    LineTo(hdc, 400, 350);
    // окно
    MoveToEx(hdc, 225, 400, NULL);
    LineTo(hdc, 225, 475);
    LineTo(hdc, 325, 475);
    LineTo(hdc, 325, 400);
    LineTo(hdc, 225, 400);
    // рама
    MoveToEx(hdc, 275, 400, NULL);
    LineTo(hdc, 275, 475);
    MoveToEx(hdc, 275, 425, NULL);
    LineTo(hdc, 325, 425);
    HPEN lPen;
    lPen = CreatePen(PS_SOLID, 4, RGB(100, 50, 100));
    SelectObject(hdc, lPen);
}
void eloch(HDC hdc) {
    HPEN lPen;
    lPen = CreatePen(PS_SOLID, 4, RGB(100, 50, 100));
    SelectObject(hdc, lPen);
    MoveToEx(hdc, 500, 400, NULL);
    LineTo(hdc, 525, 375);
    LineTo(hdc, 550, 400);
    LineTo(hdc, 500, 400);
    MoveToEx(hdc, 475, 450, NULL);
    LineTo(hdc, 525, 400);
    LineTo(hdc, 575, 450);
    LineTo(hdc, 475, 450);
    MoveToEx(hdc, 450, 525, NULL);
    LineTo(hdc, 525, 450);
    LineTo(hdc, 600, 525);
    LineTo(hdc, 450, 525);
}
void derevo(HDC hdc) {
    HPEN jPen;
    jPen = CreatePen(PS_SOLID, 3, RGB(10, 240, 140));
    SelectObject(hdc, jPen);
    MoveToEx(hdc, 75, 351, NULL);
    LineTo(hdc, 75, 525);
    MoveToEx(hdc, 55, 357, NULL);
    LineTo(hdc, 75, 375);
    MoveToEx(hdc, 55, 357, NULL);
    LineTo(hdc, 75, 375);
    MoveToEx(hdc, 100, 375, NULL);
    LineTo(hdc, 75, 440);
    MoveToEx(hdc, 40, 375, NULL);
    LineTo(hdc, 75, 420);
    MoveToEx(hdc, 30, 420, NULL);
    LineTo(hdc, 75, 460);
    MoveToEx(hdc, 120, 440, NULL);
    LineTo(hdc, 75, 475);
    MoveToEx(hdc, 35, 450, NULL);
    LineTo(hdc, 75, 500);
}
void zbr(HDC hdc) {
    HPEN gPen;
    gPen = CreatePen(PS_SOLID, 5, RGB(158, 104, 74));
    SelectObject(hdc, gPen);
    MoveToEx(hdc, 700, 525, NULL);
    LineTo(hdc, 750, 525);
    LineTo(hdc, 750, 250);
    LineTo(hdc, 725, 200);
    LineTo(hdc, 700, 250);
    LineTo(hdc, 700, 525);
    MoveToEx(hdc, 775, 525, NULL);
    LineTo(hdc, 825, 525);
    LineTo(hdc, 825, 250);
    LineTo(hdc, 800, 200);
    LineTo(hdc, 775, 250);
    LineTo(hdc, 775, 525);
    MoveToEx(hdc, 850, 525, NULL);
    LineTo(hdc, 900, 525);
    LineTo(hdc, 900, 250);
    LineTo(hdc, 875, 200);
    LineTo(hdc, 850, 250);
    LineTo(hdc, 850, 525);
    MoveToEx(hdc, 925, 525, NULL);
    LineTo(hdc, 975, 525);
    LineTo(hdc, 975, 250);
    LineTo(hdc, 950, 200);
    LineTo(hdc, 925, 250);
    LineTo(hdc, 925, 525);
    MoveToEx(hdc, 1000, 525, NULL);
    LineTo(hdc, 1050, 525);
    LineTo(hdc, 1050, 250);
    LineTo(hdc, 1025, 200);
    LineTo(hdc, 1000, 250);
    LineTo(hdc, 1000, 525);
    MoveToEx(hdc, 700, 250, NULL);
    LineTo(hdc, 1050, 250);
    MoveToEx(hdc, 700, 500, NULL);
    LineTo(hdc, 1050, 500);
}
void Car(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
    SelectObject(hdc, hPen);
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 128, 67));
    SelectObject(hdc, hBrush);
    Rectangle(hdc, 50, 200, 300, 250);
    MoveToEx(hdc, 100, 200, NULL);
    LineTo(hdc, 150, 150);
    LineTo(hdc, 250, 150);
    LineTo(hdc, 300, 200);
    hPen = CreatePen(PS_SOLID, 7, RGB(0, 0, 128));
    SelectObject(hdc, hPen);
    hBrush = CreateHatchBrush(HS_FDIAGONAL, RGB(255, 0, 0));
    SelectObject(hdc, hBrush);
    Ellipse(hdc, 75, 225, 125, 275);
    hPen = CreatePen(PS_SOLID, 7, RGB(0, 160, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateHatchBrush(HS_BDIAGONAL, RGB(0, 255, 0));
    SelectObject(hdc, hBrush);
    Ellipse(hdc, 225, 225, 275, 275);
}
void baba(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
    SelectObject(hdc, hPen);
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 128, 67));
    SelectObject(hdc, hBrush);
    hPen = CreatePen(PS_SOLID, 3, RGB(105, 149, 161));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(167, 236, 255));
    SelectObject(hdc, hBrush);
    Ellipse(hdc, 375, 225, 450, 275);
    Ellipse(hdc, 385, 200, 440, 240);
    Ellipse(hdc, 395, 180, 430, 210);
    hPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(0, 0, 0));
    SelectObject(hdc, hBrush);
    Rectangle(hdc, 395, 177, 430, 183);
    Rectangle(hdc, 400, 160, 425, 177);
    hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    MoveToEx(hdc, 383, 220, NULL);
    LineTo(hdc, 365, 233);
    LineTo(hdc, 368, 240);
    MoveToEx(hdc, 365, 233, NULL);
    LineTo(hdc, 355, 235);
    MoveToEx(hdc, 438, 220, NULL);
    LineTo(hdc, 455, 233);
    LineTo(hdc, 453, 242);
    MoveToEx(hdc, 455, 233, NULL);
    LineTo(hdc, 463, 231);
    hPen = CreatePen(PS_SOLID, 4, RGB(255, 127, 39));
    SelectObject(hdc, hPen);
    MoveToEx(hdc, 405, 200, NULL);
    LineTo(hdc, 392, 203);
    hPen = CreatePen(PS_SOLID, 4, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(0, 0, 0));
    SelectObject(hdc, hBrush);
    Ellipse(hdc, 403, 190, 405, 193);
    Ellipse(hdc, 415, 190, 417, 193);
    hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    Ellipse(hdc, 400, 213, 402, 216);
    Ellipse(hdc, 400, 220, 402, 223);
    Ellipse(hdc, 400, 227, 402, 230);
}
void avtobus(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
    SelectObject(hdc, hPen);
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 128, 67));
    SelectObject(hdc, hBrush);
    hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(163, 73, 164));
    SelectObject(hdc, hBrush);
    Rectangle(hdc, 500, 175, 700, 225);
    MoveToEx(hdc, 500, 175, NULL);
    LineTo(hdc, 550, 125);
    LineTo(hdc, 675, 125);
    LineTo(hdc, 700, 150);
    LineTo(hdc, 700, 200);
    MoveToEx(hdc, 525, 150, NULL);
    LineTo(hdc, 700, 150);
    MoveToEx(hdc, 550, 125, NULL);
    LineTo(hdc, 550, 175);
    MoveToEx(hdc, 600, 125, NULL);
    LineTo(hdc, 600, 175);
    MoveToEx(hdc, 650, 125, NULL);
    LineTo(hdc, 650, 175);
    MoveToEx(hdc, 575, 125, NULL);
    LineTo(hdc, 575, 175);
    MoveToEx(hdc, 625, 125, NULL);
    LineTo(hdc, 625, 175);
    MoveToEx(hdc, 675, 125, NULL);
    LineTo(hdc, 675, 175);
    hPen = CreatePen(PS_SOLID, 6, RGB(24, 62, 12));
    SelectObject(hdc, hPen);
    hBrush = CreateHatchBrush(HS_BDIAGONAL, RGB(136, 0, 21));
    SelectObject(hdc, hBrush);
    Ellipse(hdc, 515, 200, 565, 250);
    hPen = CreatePen(PS_SOLID, 6, RGB(234, 54, 128));
    SelectObject(hdc, hPen);
    hBrush = CreateHatchBrush(HS_BDIAGONAL, RGB(60, 77, 10));
    SelectObject(hdc, hBrush);
    Ellipse(hdc, 640, 200, 690, 250);
}
void zamok(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
    SelectObject(hdc, hPen);
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 128, 67));
    SelectObject(hdc, hBrush);
    hPen = CreatePen(PS_SOLID, 4, RGB(153, 33, 164));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(153, 0, 0));
    SelectObject(hdc, hBrush);
    Rectangle(hdc, 850, 150, 900, 250);
    Rectangle(hdc, 900, 75, 950, 250);
    Rectangle(hdc, 950, 125, 1000, 250);
    hPen = CreatePen(PS_SOLID, 3, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(153, 217, 214));
    SelectObject(hdc, hBrush);
    Rectangle(hdc, 915, 100, 935, 180);
    MoveToEx(hdc, 925, 100, NULL);
    LineTo(hdc, 925, 180);
    MoveToEx(hdc, 915, 140, NULL);
    LineTo(hdc, 935, 140);
    Rectangle(hdc, 860, 175, 890, 200);
    Rectangle(hdc, 960, 175, 990, 200);
    hPen = CreatePen(PS_SOLID, 10, RGB(214, 24, 124));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(0, 0, 0));
    SelectObject(hdc, hBrush);
    MoveToEx(hdc, 875, 75, NULL);
    LineTo(hdc, 925, 25);
    LineTo(hdc, 975, 75);
    LineTo(hdc, 875, 75);
    MoveToEx(hdc, 900, 100, NULL);
    LineTo(hdc, 825, 150);
    LineTo(hdc, 900, 150);
    LineTo(hdc, 900, 100);
    MoveToEx(hdc, 950, 87, NULL);
    LineTo(hdc, 1025, 125);
    LineTo(hdc, 950, 125);
    LineTo(hdc, 950, 87);
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(136, 86, 61));
    SelectObject(hdc, hBrush);
    Rectangle(hdc, 910, 200, 940, 250);
    hPen = CreatePen(PS_SOLID, 5, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    hBrush = CreateSolidBrush(RGB(0, 0, 0));
    Ellipse(hdc, 915, 220, 918, 223);
}
void kust1(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
    SelectObject(hdc, hPen);
    hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
    SelectObject(hdc, hPen);
    {
        int x1 = 400, y1 = 150;

        int x2 = 500, y2 = 250;
        do {
            MoveToEx(hdc, x1, y1, NULL);
            LineTo(hdc, x2, y2);

            x1 += 6;
        } while (x1 <= 600);
    }
}
void kust2(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(128, 0, 0));
    hPen = CreatePen(PS_SOLID, 1, RGB(34, 177, 76));
    SelectObject(hdc, hPen);
    {
        int x1 = 0, y1 = 250;
        int x2 = 100, y2 = 250;
        do {
            MoveToEx(hdc, x1, y1, NULL);
            LineTo(hdc, x2, y2);
            x1 += 2;
            y1 -= 4;
        } while (x1 <= 100);

        x1 = 100;
        y1 = 50;
        do {
            MoveToEx(hdc, x1, y1, NULL);
            LineTo(hdc, x2, y2);
            x1 += 2;
            y1 += 4;
        } while (x1 <= 200);
    }
}
void zabor(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 3, RGB(163, 73, 164));
    SelectObject(hdc, hPen);
    {
        int x1 = 150, y1 = 0;
        int x2 = 150, y2 = 100;
        do {
            MoveToEx(hdc, x1, y1, NULL);
            LineTo(hdc, x2, y2);
            x1 += 8;
            x2 += 8;
        } while (x1 <= 450);

    }
}
void lest(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 7, RGB(97, 44, 40));
    SelectObject(hdc, hPen);
    {
        int x1 = 600, y1 = 500;
        int x2 = 600, y2 = 470;
        do {
            MoveToEx(hdc, x1, y1, NULL);
            LineTo(hdc, x2, y2);
            x2 += 30;
            LineTo(hdc, x2, y2);
            x1 = x2;
            y1 = y2;
            y2 -= 30;

        } while (y2 >= 300);
        MoveToEx(hdc, x2, y2 + 30, NULL);
        LineTo(hdc, x2, 500);
        LineTo(hdc, 600, 500);
    }
}
void trava(HDC hdc) {
    HPEN hPen = CreatePen(PS_SOLID, 2, RGB(39, 125, 26));
    SelectObject(hdc, hPen);
    {
        int x1 = 2, y1 = 530;
        int x2 = 2, y2 = 495;
        do {
            MoveToEx(hdc, x1, y1, NULL);
            LineTo(hdc, x2, y2);
            x1 += 3;
            x2 = x1;
        } while (x1 <= 1135);
    }
}
//
//  ФУНКЦИЯ: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  ЦЕЛЬ: Обрабатывает сообщения в главном окне.
//
//  WM_COMMAND  - обработать меню приложения
//  WM_PAINT    - Отрисовка главного окна
//  WM_DESTROY  - отправить сообщение о выходе и вернуться
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // Разобрать выбор в меню:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // дом
            drawHome(hdc);
            // ёлочка
            eloch(hdc);
            // дерево
            derevo(hdc);
            //забор1
            zbr(hdc);
            //машина
            Car(hdc);
            // снежная баба
            baba(hdc);
            //автобус
            avtobus(hdc);
            //замок
            zamok(hdc);
            //куст1
            kust1(hdc);
            //куст2
            kust2(hdc);
            //забор2
            zabor(hdc);
            //ллестница
            lest(hdc);
            //трава
            trava(hdc);

            EndPaint(hWnd, &ps);
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Обработчик сообщений для окна "О программе".
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
