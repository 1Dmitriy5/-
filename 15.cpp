
#include "images.h"

void Image0(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[4] = {
        cx,        	cy + 20,
        cx + 20,	cy - 20,
        cx - 20,   	cy - 20,
        cx,        	cy + 20
    };
    Polyline(hdc, p, 4);

    DeleteObject(hPen);
}
void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hPen);

    POINT p[4] = {
        cx,        	cy - 20,
        cx + 20,	cy + 20,
        cx - 20,   	cy + 20,
        cx,        	cy - 20
    };
    Polyline(hdc, p, 4);

    DeleteObject(hPen);
}
void image2(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);

    POINT p[5] = {
        cx,         cy - 20,
        cx + 20,    cy,
        cx,         cy + 20,
        cx - 20,    cy,
        cx,         cy - 20
    };
    Polyline(hdc, p, 5);

    DeleteObject(hPen);
}
void image3(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[5] = {
        cx,         cy - 20,
        cx + 35,    cy + 20,
        cx + 70,    cy - 20,
        cx + 35,    cy + 5,
        cx,         cy - 20
    };
    Polyline(hdc, p, 5);

    DeleteObject(hPen);
}
void image4(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hPen;
    hPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));
    SelectObject(hdc, hPen);
    POINT p[6] = {
        cx,         cy,
        cx,         cy + 80,
        cx + 80,    cy + 80,
        cx + 80,    cy,
        cx + 40,    cy + 40,
        cx,         cy,
    };
    Polyline(hdc, p, 6);

    DeleteObject(hPen);
}