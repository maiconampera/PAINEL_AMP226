#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
void Screen1View::setCANValue(int value)
{
    // 1. Limpa o buffer e escreve o novo valor formatado como decimal (%d)
    // textAreaCANBuffer é criado automaticamente pelo Designer se você ativou o Wildcard
    Unicode::snprintf(textAreaCANBuffer, TEXTAREACAN_SIZE, "%d", value);

    // 2. Avisa o TouchGFX que o texto mudou e precisa ser redesenhado na tela
    textAreaCAN.invalidate();
}
