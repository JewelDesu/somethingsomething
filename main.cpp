#include "libtcod.hpp"
#include "Actor.hpp"
#include "Map.hpp"
#include "Engine.hpp"

Engine engine;

void TCOD_console_set_fullscreen (bool fullscreen);

int main()
{
   while ( !TCODConsole::isWindowClosed() )
   {
       TCOD_console_set_fullscreen();
       engine.update();
       engine.render();
       TCODConsole::flush();
   }
   return 0;
}

void TCOD_console_set_fullscreen (bool fullscreen)
{

}
