#include <stdio.h>
#include <windows.h>

int main() {
    // salva a cor original
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Salvando os atributos do console */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;


    // muda para cor 42
    SetConsoleTextAttribute(hConsole, 42);

    // tudo que estiver aqui estara com a cor 42

    //volta a cor ao normal
    SetConsoleTextAttribute(hConsole, saved_attributes);



    /* Alterando as cores do console */
    for(int color=0;color<255;color++) {
        SetConsoleTextAttribute(hConsole, color);
        printf("[COR:%3d] ", color);

        // pula de linha a cada 10 impressões
        if(color % 10 == 0)
            printf("\n");
    }

    /* Restaurando a cor original do console */
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("\nVoltando ao normal");

    return 0;
}
