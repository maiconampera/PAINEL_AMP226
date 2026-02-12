#include <gui/screen5_screen/Screen5View.hpp>
#include <gui/screen5_screen/Screen5Presenter.hpp>

Screen5Presenter::Screen5Presenter(Screen5View& v)
    : view(v)
{

}

void Screen5Presenter::activate()
{

}

void Screen5Presenter::deactivate()
{

}
void Screen5Presenter::hwButtonClicked(uint8_t buttonId)
{
	{
	    if (buttonId == 3) // PB11
	    {
	        // Use o nome que você encontrou no FrontendApplicationBase.hpp

	    }
	    else if (buttonId == 2) // PA3
	    {
	         // Exemplo: vai para outra tela que você criou

	    }
	    else if (buttonId == 1) // PA2
	    {
	         // Exemplo: volta para a Home
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen2ScreenNoTransition();
	    }
	}
}
