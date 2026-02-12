#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>

Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{

}

void Screen1Presenter::deactivate()
{

}
void Screen1Presenter::hwButtonClicked(uint8_t buttonId)
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
	         //static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen3ScreenNoTransition();
	    }
	    else if (buttonId == 1) // PA2
	    {
	         // Exemplo: volta para a Home
	         static_cast<FrontendApplication*>(Application::getInstance())->gotoScreen6ScreenNoTransition();
	    }
	}
}

void Screen1Presenter::updateCANData(int value)
{
    view.setCANValue(value);
}
