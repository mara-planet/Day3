#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>                       // 헤더파일의 코드를 추가
#pragma comment(lib, "winmm.lib")           // 라이브러리의 코드를 추가

int main() {
	int 도 = 260, 레 = 290, 미 = 330, 파 = 340, 솔 = 380, 라 = 430, 시 = 490, 높은도 = 510;
	char c;

	// 무한반복
	while (1) {
		if (_kbhit())       // 키보드 히트 (키보드가 눌릴 때 인지)
		{
			c = _getch();       // 키보드 입력값을 변수에 저장
			switch (c)
			{
			case'a':
					Beep(도, 200);
					printf("도");
					Sleep(90);            // 0.09초 멈춤
					break;
			case's':
				Beep(레, 200);
				printf("레");
				Sleep(90);            // 0.09초 멈춤
				break;
			case'd':
				Beep(미, 200);
				printf("미");
				Sleep(90);            // 0.09초 멈춤
				break;
			case'f':
				Beep(파, 200);
				printf("파");
				Sleep(90);            // 0.09초 멈춤
				break;
			case'j':
				Beep(솔, 200);
				printf("솔");
				Sleep(90);            // 0.09초 멈춤
				break;
			case'k':
				Beep(파, 200);
				printf("라");
				Sleep(90);            // 0.09초 멈춤
				break;
			case'l':
				Beep(미, 200);
				printf("시");
				Sleep(90);            // 0.09초 멈춤
				break;
			case 59:                  // ;
				Beep(높은도, 200);
				printf("도");
				Sleep(90);
				break;
			case 27:                   // ESC
				printf("\n프로그램 종료\n");
				break;

			}
			if (c == 27) {
				break;
			}
		}
	}

	return 0;
}