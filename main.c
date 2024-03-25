#include "header.h"

void main() {
    allegro_init();
    install_keyboard();
    set_color_depth(desktop_color_depth());
    if((set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,800,0,0))!=0)
    { 	allegro_message("Pb de mode graphique") ;
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    int c =  makecol(0, 255, 0);
    rect(screen, 80 , 260, 160, 300, c);

}END_OF_MAIN()
