#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{

}

void Screen2Presenter::activate()
{

}

void Screen2Presenter::deactivate()
{

}
void Screen2Presenter::hwButtonClicked(uint8_t buttonId)
{
	{
	    if (buttonId == 3) // PB11
	    {
	        // Use o nome que você encontrou no FrontendApplicationBase.hpp
	        static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen1ScreenNoTransition();

	    }
	    else if (buttonId == 2) // PA3
	    {
	         // Exemplo: vai para outra tela que você criou
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen3ScreenNoTransition();
	    }
	    else if (buttonId == 1) // PA2
	    {
	         // Exemplo: volta para a Home
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen5ScreenNoTransition();
	    }
	}
}
