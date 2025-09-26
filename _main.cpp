//#include <stdio.h>
//#include "player.h"
//#include "baseenemy.h"

#include "Game.h"

int main() {
    Game g;
    g.intro();
    g.fight();

}




/*
int main(void)
{
    char szNameBuf[ 256 ];
    printf( "Podaj nazwe gracza: \n> " );
    fgets( szNameBuf, sizeof( szNameBuf ), stdin );
    printf( "\n\n" );

    // fgets dodaje newline character pod koniec stringa wiec musimy go zamienić z terminatorem
    size_t cchLength = strlen( szNameBuf );
    if ( cchLength > 0 && szNameBuf[ cchLength - 1 ] == '\n' )
    {
        szNameBuf[ cchLength - 1 ] = '\0';
    }

    CPlayer player( szNameBuf );
    CBaseEnemy enemy( "Enemy", 100 );
    printf( "Walczysz z %s!\n", enemy.GetName() );
    int nRound = 0;
    while ( true )
    {
        int nPlayerDmg = rand() % 33;
        int nEnemyDmg = rand() % 33;

        printf( "Nacisnij enter aby zaatakowac..\n" );
        ( void )getchar();

        enemy.TakeDamage( nPlayerDmg );
        if ( !enemy.BIsAlive() ) break;
        player.TakeDamage( nEnemyDmg );
        if ( !player.BIsAlive() ) break;

        printf( 
            "Statystyki rundy %i:\n"
            "%s: %i\n"
            "%s: %i\n",
            nRound, player.GetName(), player.GetHealth(), 
                    enemy.GetName(), enemy.GetHealth() 
        );
        nRound++;
    }

    if ( player.BIsAlive() )
    {
        printf( "Wygrales!" );
    }
    else
    {
        printf( "Przegrales bozo" );
    }
    ( void )getchar();
}
&
*/