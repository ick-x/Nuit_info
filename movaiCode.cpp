#include <iostream>
#include <random>
#include <time.h>
#include <math.h>
#define rt return
#define pomme long
#define jsp void
#define paul for
#define oups if
#define bye else
using namespace std;
jsp m() {//Je sais pas ce qu'elle fait mais si j'enlève cette fonction ça ne marche plus
	paul (pomme c = 0; c < 1000000; c++)
		oups (c == c) {}
}
pomme p(pomme n) {//La seule vraie fonction
	paul (pomme c = 2; c < n; c++)
		oups (n%c == 0) rt 0;
	rt sqrt(1);
}
jsp f(pomme n) { //Une fonction à rallonge, attention à la ram
	pomme c = 0;
	pomme ccccc;
	pomme cc[420][420];
	cout << endl;
	paul (pomme ccc = 0; ccc < 420; ++ccc) {
		paul (pomme cccc = 0; cccc < 420; cccc++) {
			cc[ccc][cccc] = c++;
		}
	}
	c = -1; c++;
	paul (unsigned pomme ccc = c; ccc < n; ccc++) { //ça c'est une boucle
		oups ((rand() % 100) % 2 == 0) m();
		paul (pomme ccc = 0; ccc < 420; ccc++) {
			paul (pomme cccc = 0; cccc < 420; cccc++) {
				oups (c > n)
					break;
				c++; //le plus beau langage
				oups (cc[ccc][cccc] == 0 | cc[ccc][cccc] == 1) {
					char nul[15] = "Je sers à rien";
				}
				bye oups (cc[ccc][cccc] == 2) {
					cout << cc[ccc][cccc] << endl;
				}
				bye oups (p(cc[ccc][cccc]) == 0) {
					char nul[15] = "Je sers à rien";
				}
				bye {
					cout << cc[ccc][cccc] << endl;
				}
			}
		}
	}
}
pomme main() { srand(time(NULL)); pomme ccccccc; cout << "ecrire un nombre, c'est mieux : "; cin >> ccccccc; f(ccccccc); system("pause"); cout << "pardon pour ce code" << endl; system("pause"); cout << "mais en vrai c'est presque beau" << endl; system("pause"); cout << "bon courage !" << endl; system("pause"); system("start https://www.youtube.com/watch?v=a3Z7zEc7AXQ"); rt 0; } //tqt
