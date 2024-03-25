#include "header.h"

int main() {
    allegro_init();
    install_keyboard();
    set_color_depth(desktop_color_depth());
    if((set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0))!=0)
    { 	allegro_message("Pb de mode graphique") ;

        exit(EXIT_FAILURE);
    }

    int c =  makecol(0, 255, 0);
    int pos_x = 5;
    int pos_y = 5;
    int longueur = 10;
    int largeur = 10;
    int scancode, fin = 0, touche;

    while (!fin)			// boucle d’événements
    {
        if (keypressed())		// équivalent de kbhit() de conio.h
        {
            int touche=readkey(); 		// équivalent de getch() de conio.h
            // récupérer le scancode sur le 2ème octet
            rect(screen, pos_x , pos_y, pos_x+largeur, pos_y+longueur, makeacol(0,0,0,0));
            scancode=touche>>8;
            if (scancode==KEY_DOWN)
                pos_y+=3;
            if (scancode==KEY_UP)
                pos_y-=3;
            if (scancode==KEY_RIGHT)
                pos_x+=3;
            if (scancode==KEY_LEFT)
                pos_x-=3;
            if (scancode == KEY_ESC){
                allegro_exit();
                fin -=3;
            }
            rect(screen, pos_x , pos_y, pos_x+largeur, pos_y+longueur, c);
        }
    }


    allegro_exit();

}END_OF_MAIN()
