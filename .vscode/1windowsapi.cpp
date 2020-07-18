// #include <Windows.h>//윈도우즈 API의 제공 형식과 기능을 사용하기 위해 포함

 

// INT APIENTRY WinMain(HINSTANCE hIns, HINSTANCE hPrev, LPSTR cmd, INT nShow)

// {

//     MessageBox(0,TEXT("Hello, World!"), TEXT("MSG BOX"),MB_OK);

//     return 0;

// }

// 진입점은  WinMain, 반환형 int,  함수 호출규칙은 APIENTRY를 따름

//콜백 프로시져는 CALLBACK, 기타 윈도우즈 API 함수 형식은 WINAPI 사용

// int WINAPI MessageBox(HWND hWnd, LPCWSTR lpTest, LPCWSTR lpCaption, UINT uTpye);

// 매크로 상수 MB_OK, MB_OKCANCEL, MB_YESNO

// 반환값은 어떤 버튼을 눌렀는지에 따라 결정-대표 매크로  IDOK, IDCANCEL etc

// --기본정보
//윈도우 운영체제 구성하는 핵심 모듈은 User, GDI, Kernel.
//User에서 제공하는 대표적인것은 윈도우 개체, 발급한 핸들은 시스템 전역에서 사용가능
//GDI모듈은 펜이나 브러쉬같은 그리기 관한 개체들을 발급. 발급한 핸들은 해당 응용 내에서만 사용가능
//Kernel 모듈은 파일, 프로세스, 쓰레드, IPC, 동기화에 관한 개체 발급. 권한 있는 계정에서만 개체 발급, 해당 응용 내에서만 사용가능 but 다른 응용도 권한 있다면 별도의 핸들 발급가능
// 전역적, 지역적, 한정적

//win32 api는 다양한 시스템 형식 제공. C or Cpp 와 win32 api 를 이용하면

//윈도우즈 프로그램 흐름 -속성 설정, 클래스 등록, 인스턴스 생성, 시각화 후 메세지 루프

#include <iostream>
#include <Windows.h>

struct WNDCLASS{
    UINT style;
    WINDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
}