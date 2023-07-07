#include <iostream>
#include <Windows.h>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Tekan tombol apapun untuk mendapatkan posisi kursor..." << std::endl;
    
    while (!GetAsyncKeyState(0x47) & 1) {
        // Mendapatkan posisi kursor saat ini
        POINT cursorPos;
        // Mendapatkan posisi kursor
        if (GetCursorPos(&cursorPos)) {
            int x = cursorPos.x;
            int y = cursorPos.y;

            std::cout << "Posisi kursor: (" << x << ", " << y << ")" << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
        system("cls");
    }
    getchar();
    return 0;
}