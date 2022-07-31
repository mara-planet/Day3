

#include "framework.h"
#include "ImageDlg.h"
#include <gdiplus.h>
#pragma comment(lib, "gdiplus")
using namespace Gdiplus;

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        SetWindowPos(hDlg, HWND_TOP, 0, 0, 800, 600, NULL);
        return (INT_PTR)TRUE;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hDlg, &ps);
        Graphics gp(hdc);
        Image img = TEXT("img1.jpg");
        gp.DrawImage(&img, 0, 0, 800, 600);
        EndPaint(hDlg, &ps);
    }
    return TRUE;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;

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

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    ULONG_PTR up;
    GdiplusStartupInput gpsi;
    GdiplusStartup(&up, &gpsi, NULL);
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    GdiplusShutdown(up);
}







//
//  함수: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  용도: 주 창의 메시지를 처리합니다.
//
//  WM_COMMAND  - 애플리케이션 메뉴를 처리합니다.
//  WM_PAINT    - 주 창을 그립니다.
//  WM_DESTROY  - 종료 메시지를 게시하고 반환합니다.
//
//

// 정보 대화 상자의 메시지 처리기입니다.
