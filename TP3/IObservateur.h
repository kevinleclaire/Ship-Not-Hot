//Notez que tous les observateurs peuvent r�utiliser ce fichier int�gralement.  Ce sera toujours la forme de l'observateur
#pragma once

	class Sujet;  //Parce qu'on sera en forward declaration
	class IObservateur
	{
	public:
		virtual void notifier(Sujet* sujet) = 0;
	};
