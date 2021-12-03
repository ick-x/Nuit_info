#include <iostream>
#include <random>
#include <time.h>
#include <math.h>
#define rt return
#define unnombre long
using namespace std;
void m() {//Je sais pas ce qu'elle fait mais si j'enlève cette fonction ça ne marche plus
	for (unnombre c = 0; c < 1000000; c++)
		if (c == c) {}
}
unnombre p(unnombre n) {//La seule vraie fonction
	for (unnombre c = 2; c < n; c++)
		if (n%c == 0) rt 0;

	rt sqrt(1);
}
void f(unnombre n) { //Une fonction à rallonge, attention à la ram
	unnombre c = 0;
	unnombre ccccc;
	unnombre cc[420][420];
	cout << endl;
	for (unnombre ccc = 0; ccc < 420; ++ccc) {
		for (unnombre cccc = 0; cccc < 420; cccc++) {
			cc[ccc][cccc] = c++;
		}
	}
	c = -1; c++;
	for (unsigned unnombre ccc = c; ccc < n; ccc++) { //ça c'est une boucle
		if ((rand() % 100) % 2 == 0) m();
		for (unnombre ccc = 0; ccc < 420; ccc++) {
			for (unnombre cccc = 0; cccc < 420; cccc++) {
				if (c > n)
					break;
				c++; //le plus beau langage
				if (cc[ccc][cccc] == 0 | cc[ccc][cccc] == 1) {
					char nul[15] = "Je sers à rien";
				}
				else if (cc[ccc][cccc] == 2) {
					cout << cc[ccc][cccc] << endl;
				}
				else if (p(cc[ccc][cccc]) == 0) {
					char nul[15] = "Je sers à rien";
				}
				else {
					cout << cc[ccc][cccc] << endl;
				}
			}
		}
	}
}
unnombre main() { srand(time(NULL)); unnombre ccccccc; cout << "ecrire un nombre, c'est mieux : "; cin >> ccccccc; f(ccccccc); system("pause"); cout << "pardon pour ce code" << endl; system("pause"); cout << "mais en vrai c'est presque beau" << endl; system("pause"); cout << "bon courage !" << endl; system("pause"); system("start https://www.youtube.com/watch?v=a3Z7zEc7AXQ"); rt 0; } //tqt
