#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace tp3
{
	class Scene
	{
	public:
		//Quand vos ajouterez des sc�nes, ajouter un enum ici
		enum scenes { TITRE, COMBAT, SORTIE, FIN };

		virtual ~Scene() {}  //Pour que le destructeur de l'objet en m�moire soit apell�
		virtual scenes run() = 0;

		//La boucle de jeu est maintenant g�r�e par la sc�ne
		virtual bool init(RenderWindow * const window) = 0;
		virtual void getInputs() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;

		//Score du joueur, ne fonctionne malheureusement pas � la fin de la partie et pas eu le temps de le corriger
		int scoreJoueur = 0;


	protected:
		RenderWindow *mainWin;
		Event event;
		View view;

		// Largeur et hauteur de l'�cran
		// Ratio de 1,333333
		static const int LARGEUR_ECRAN = 1280;
		static const int HAUTEUR_ECRAN = 720;

		/// <summary>
		/// � la fin de chaque sc�ne, on indique � Game quelle nouvelle sc�ne elle doit charger.
		/// </summary>
		Scene::scenes transitionVersScene;
		bool isRunning;
	};
}