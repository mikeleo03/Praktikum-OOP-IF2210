#include "User.h"
#include "PremiumUser.h"
#include "ArtistUser.h"

#include <iostream>

using namespace std;

int main() {
    char* n = new char[1];
    strcpy(n,"u");
    User u(n);
    PremiumUser p(n);
    ArtistUser a(n);

    cout << u.getName() << endl;
    cout << p.getName() << endl;
    cout << a.getName() << endl;
    cout << u.getNumOfFavouriteMusic();
    u.viewMusicList();

    char* t = new char[20];
    char* s = new char[20];
    char* q = new char[20];
    strcpy(t, "123");
    strcpy(s, "Haiyayhadhahd");
    strcpy(q, "ajadhjahdahjd");
    u.addFavouriteMusic(t);
    cout << u.getNumOfFavouriteMusic() << endl;
    u.addFavouriteMusic(s);
    cout << u.getNumOfFavouriteMusic() << endl;
    u.addFavouriteMusic(q);
    cout << u.getNumOfFavouriteMusic() << endl;
    u.viewMusicList();
    u.deleteFavouriteMusic("123");
    cout << u.getNumOfFavouriteMusic() << endl;
    u.viewMusicList();
    return 0;
}