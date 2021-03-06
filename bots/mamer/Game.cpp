//--------------------------------------------------------------------------
// Game.cpp - Source file for the Game class
//
// Matthew E. Moses && Michael A. Long
//
// $Revision: 1.3 $
// $Date: 1998/09/10 19:57:17 $
//
// $Author: mlong $
// $Locker:  $
//
// $Log: Game.cpp,v $
// Revision 1.3  1998/09/10 19:57:17  mlong
// lots of little bug fixes and a few new features
//
// Revision 1.2  1998/04/29 15:23:19  mlong
// prepairing for the move to daimi
// new sorting routine.
//
// Revision 1.1  1997/07/18 15:42:13  chess
// Initial revision
//
//
//--------------------------------------------------------------------------

// static char RCSid[] = "$Id: Game.cpp,v 1.3 1998/09/10 19:57:17 mlong Exp $";

#include "Game.hh"

//- Constructor -----------------------------------------------------------
Game::Game(const char *wn, const char *bn, int t, int i, int r, char v) {
  strcpy(whiteName, wn);
  strcpy(blackName, bn);
  time = t;
  inc = i;
  rated = r;
  variation = v;

  gameNumber = -1;
}

//- DeConstructor ---------------------------------------------------------
Game::~Game() {
}

//- IsGame -----------------------------------------------------------------
int Game::IsGame(const char *whiteUser, const char *blackUser, int t, int i, int r, char v) {
    if(
       (0 == strcasecmp(whiteUser, whiteName)) && 
       (0 == strcasecmp(blackUser, blackName)) &&
       (time == t) &&
       (inc == i) &&
       (rated == r) &&
       (variation == v))
        return(1);
    else
        return(0);
} //- End of IsGame
