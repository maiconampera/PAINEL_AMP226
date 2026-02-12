#include <gui/screen4_screen/Screen4View.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>

Screen4Presenter::Screen4Presenter(Screen4View& v)
    : view(v)
{

}

void Screen4Presenter::activate()
{

}

void Screen4Presenter::deactivate()
{

}
void Screen4Presenter::hwButtonClicked(uint8_t buttonId)
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
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen3ScreenNoTransition();
	    }
	}
}
