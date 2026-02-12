#include <gui/screen3_screen/Screen3View.hpp>
#include <gui/screen3_screen/Screen3Presenter.hpp>

Screen3Presenter::Screen3Presenter(Screen3View& v)
    : view(v)
{

}

void Screen3Presenter::activate()
{

}

void Screen3Presenter::deactivate()
{

}
void Screen3Presenter::hwButtonClicked(uint8_t buttonId)
{
	{
	    if (buttonId == 3) // PB11
	    {
	        // Use o nome que você encontrou no FrontendApplicationBase.hpp
	        static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen2ScreenNoTransition();
	    }
	    else if (buttonId == 2) // PA3
	    {
	         // Exemplo: vai para outra tela que você criou
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen1ScreenNoTransition();
	    }
	    else if (buttonId == 1) // PA2
	    {
	         // Exemplo: volta para a Home
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen4ScreenNoTransition();
	    }
	}
}
