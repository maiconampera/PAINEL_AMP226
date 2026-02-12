#include <gui/screen6_screen/Screen6View.hpp>
#include <gui/screen6_screen/Screen6Presenter.hpp>

Screen6Presenter::Screen6Presenter(Screen6View& v)
    : view(v)
{

}

void Screen6Presenter::activate()
{

}

void Screen6Presenter::deactivate()
{

}
void Screen6Presenter::hwButtonClicked(uint8_t buttonId)
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
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen1ScreenNoTransition();
	    }
	}
}
