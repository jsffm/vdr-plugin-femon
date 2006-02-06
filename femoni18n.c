/*
 * Frontend Status Monitor plugin for the Video Disk Recorder
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id$
 */

#include "femoni18n.h"

const tI18nPhrase Phrases[] = {
  { "DVB Signal Information Monitor (OSD)", // English
    "DVB Signal Informationsanzeige (OSD)", // Deutsch
    "", // Slovenski
    "Visualizza le informazioni sul segnale DVB", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Affiche les informations du signal DVB", // Fran�ais
    "", // Norsk
    "Signaalimittari (OSD)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������� �������� �������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "DVB Signaalmonitor (OSD)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Signal Information", // English
    "Signalinformationen", // Deutsch
    "", // Slovenski
    "Informazioni sul segnale", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Signal DVB", // Fran�ais
    "", // Norsk
    "Signaalimittari", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Signaaliinfo", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Position", // English
    "Position", // Deutsch
    "", // Slovenski
    "Posizione", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Position", // Fran�ais
    "", // Norsk
    "Sijainti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "���������� ����", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Positsioon", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Height", // English
    "H�he", // Deutsch
    "", // Slovenski
    "Altezza", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Hauteur", // Fran�ais
    "", // Norsk
    "Korkeus", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "K�rgus", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Horizontal offset", // English
    "Horizontaler Offset", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "D�placement horizontal", // Fran�ais
    "", // Norsk
    "Vaakakeskitys", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Horisontaalne nihe", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Default display mode", // English
    "Standard Anzeigemodus", // Deutsch
    "", // Slovenski
    "Modo di visualizzazione standard", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Affichage par d�faut", // Fran�ais
    "", // Norsk
    "Oletusn�ytt�tila", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
    "����� �� ���������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Vaikimisi displei moodus", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "basic", // English
    "Standard", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "basique", // Fran�ais
    "", // Norsk
    "perus", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "standard", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "transponder", // English
    "Transponder", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "transpondeur", // Fran�ais
    "", // Norsk
    "transponderi", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "transponder", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "stream", // English
    "Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "flux", // Fran�ais
    "", // Norsk
    "l�hete", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "voog", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Skin", // English
    "Oberfl�che", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Skin", // Fran�ais
    "", // Norsk
    "Ulkoasu", // suomi
    "", // Polski
    "", // Espa�ol  
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal� 
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kest", // Eesti
    "", // Dansk 
    "", // �esky (Czech)
  },
  { "Theme", // English
    "Thema", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Th�me", // Fran�ais
    "", // Norsk
    "Teema", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Teema", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Classic", // English
    "Klassischer", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Classique", // Fran�ais
    "", // Norsk
    "Klassinen", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Klassikaline", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Elchi", // English
    "Elchi", // Deutsch
    "Elchi", // Slovenski
    "Elchi", // Italiano
    "Elchi", // Nederlands
    "Elchi", // Portugu�s
    "Elchi", // Fran�ais
    "Elchi", // Norsk
    "Elchi", // suomi
    "Elchi", // Polski
    "Elchi", // Espa�ol
    "Elchi", // �������� (Greek)
    "Elchi", // Svenska
    "Elchi", // Romaneste
    "Elchi", // Magyar
    "Elchi", // Catal�
    "Elchi", // ������� (Russian)
    "Elchi", // Hrvatski (Croatian)
    "Elchi", // Eesti
    "Elchi", // Dansk
    "Elchi", // �esky (Czech)
  },
  { "DeepBlue", // English
    "DeepBlue", // Deutsch
    "DeepBlue", // Slovenski
    "DeepBlue", // Italiano
    "DeepBlue", // Nederlands
    "DeepBlue", // Portugu�s
    "DeepBlue", // Fran�ais
    "DeepBlue", // Norsk
    "DeepBlue", // suomi
    "DeepBlue", // Polski
    "DeepBlue", // Espa�ol
    "DeepBlue", // �������� (Greek)
    "DeepBlue", // Svenska
    "DeepBlue", // Romaneste
    "DeepBlue", // Magyar
    "DeepBlue", // Catal�
    "DeepBlue", // ������� (Russian)
    "DeepBlue", // Hrvatski (Croatian)
    "DeepBlue", // Eesti
    "DeepBlue", // Dansk
    "DeepBlue", // �esky (Czech)
  },
  { "Moronimo", // English
    "Moronimo", // Deutsch
    "Moronimo", // Slovenski
    "Moronimo", // Italiano
    "Moronimo", // Nederlands
    "Moronimo", // Portugu�s
    "Moronimo", // Fran�ais
    "Moronimo", // Norsk
    "Moronimo", // suomi
    "Moronimo", // Polski
    "Moronimo", // Espa�ol
    "Moronimo", // �������� (Greek)
    "Moronimo", // Svenska
    "Moronimo", // Romaneste
    "Moronimo", // Magyar
    "Moronimo", // Catal�
    "Moronimo", // ������� (Russian)
    "Moronimo", // Hrvatski (Croatian)
    "Moronimo", // Eesti
    "Moronimo", // Dansk
    "Moronimo", // �esky (Czech)
  },
  { "Enigma", // English
    "Enigma", // Deutsch
    "Enigma", // Slovenski
    "Enigma", // Italiano
    "Enigma", // Nederlands
    "Enigma", // Portugu�s
    "Enigma", // Fran�ais
    "Enigma", // Norsk
    "Enigma", // suomi
    "Enigma", // Polski
    "Enigma", // Espa�ol
    "Enigma", // �������� (Greek)
    "Enigma", // Svenska
    "Enigma", // Romaneste
    "Enigma", // Magyar
    "Enigma", // Catal�
    "Enigma", // ������� (Russian)
    "Enigma", // Hrvatski (Croatian)
    "Enigma", // Eesti
    "Enigma", // Dansk
    "Enigma", // �esky (Czech)
  },
  { "EgalsTry", // English
    "EgalsTry", // Deutsch
    "EgalsTry", // Slovenski
    "EgalsTry", // Italiano
    "EgalsTry", // Nederlands
    "EgalsTry", // Portugu�s
    "EgalsTry", // Fran�ais
    "EgalsTry", // Norsk
    "EgalsTry", // suomi
    "EgalsTry", // Polski
    "EgalsTry", // Espa�ol
    "EgalsTry", // �������� (Greek)
    "EgalsTry", // Svenska
    "EgalsTry", // Romaneste
    "EgalsTry", // Magyar
    "EgalsTry", // Catal�
    "EgalsTry", // ������� (Russian)
    "EgalsTry", // Hrvatski (Croatian)
    "EgalsTry", // Eesti
    "EgalsTry", // Dansk
    "EgalsTry", // �esky (Czech)
  },
  { "Duotone", // English
    "Duotone", // Deutsch
    "Duotone", // Slovenski
    "Duotone", // Italiano
    "Duotone", // Nederlands
    "Duotone", // Portugu�s
    "Duotone", // Fran�ais
    "Duotone", // Norsk
    "Duotone", // suomi
    "Duotone", // Polski
    "Duotone", // Espa�ol
    "Duotone", // �������� (Greek)
    "Duotone", // Svenska
    "Duotone", // Romaneste
    "Duotone", // Magyar
    "Duotone", // Catal�
    "Duotone", // ������� (Russian)
    "Duotone", // Hrvatski (Croatian)
    "Duotone", // Eesti
    "Duotone", // Dansk
    "Duotone", // �esky (Czech)
  },
  { "SilverGreen", // English
    "SilverGreen", // Deutsch
    "SilverGreen", // Slovenski
    "SilverGreen", // Italiano
    "SilverGreen", // Nederlands
    "SilverGreen", // Portugu�s
    "SilverGreen", // Fran�ais
    "SilverGreen", // Norsk
    "SilverGreen", // suomi
    "SilverGreen", // Polski
    "SilverGreen", // Espa�ol
    "SilverGreen", // �������� (Greek)
    "SilverGreen", // Svenska
    "SilverGreen", // Romaneste
    "SilverGreen", // Magyar
    "SilverGreen", // Catal�
    "SilverGreen", // ������� (Russian)
    "SilverGreen", // Hrvatski (Croatian)
    "SilverGreen", // Eesti
    "SilverGreen", // Dansk
    "SilverGreen", // �esky (Czech)
  },
  { "Hide main menu entry", // English
    "Hauptmen�eintrag verstecken", // Deutsch
    "", // Slovenski
    "Nascondi voce men�", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Masquer dans le menu principal", // Fran�ais
    "", // Norsk
    "Piilota valinta p��valikosta", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������ ������� � ������� ����", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Peida valik peamen��s", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "OSD update interval [0.1s]", // English
    "OSD Updateintervall [0.1s]", // Deutsch
    "", // Slovenski
    "Intervallo di aggiornamento [0.1s]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Intervalle de mise � jour (0,1s)", // Fran�ais
    "", // Norsk
    "N�yt�n p�ivitysv�li [0.1s]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������� ���������� (0,1 ���)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Uuendusintervall [0,1s]", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Analyze stream", // English
    "Stream analysieren", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Analyser le flux", // Fran�ais
    "", // Norsk
    "L�hetteen analysointi", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������ �������� ������ ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Voo anal��s", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Calculation interval [0.1s]", // English
    "Berechnungsintervall [0.1s]", // Deutsch
    "", // Slovenski
    "Intervallo di calcolo [0.1s]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Intervalle de calcul (0,1s)", // Fran�ais
    "", // Norsk
    "Laskennan p�ivitysv�li [0.1s]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������� ��������� (0,1 ���)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kalkulatsiooni intervall [0,1s]", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Red limit [%]", // English
    "Grenze Rot [%]", // Deutsch
    "", // Slovenski
    "Limite rosso [%]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Limite du rouge (%)", // Fran�ais
    "", // Norsk
    "Punaisen taso [%]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������� ���� ������� ������� �� (%)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Punase limiit [%]", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Green limit [%]", // English
    "Grenze Gr�n [%]", // Deutsch
    "", // Slovenski
    "Limite verde [%]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Limite du vert (%)", // Fran�ais
    "", // Norsk
    "Vihre�n taso [%]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������� ���� �������� ������� �� (%)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Rohelise limiit [%]", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Transponder Information", // English
    "Transponderinformation", // Deutsch
    "", // Slovenski
    "Informazioni transponder", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Information transpondeur", // Fran�ais
    "", // Norsk   
    "Transponderin tiedot", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "�������� � ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Transponderi info", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Satellite Card", // English
    "Satellitenkarte", // Deutsch
    "", // Slovenski
    "Scheda satellitare", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Carte Satellite", // Fran�ais
    "", // Norsk
    "Satelliittikortti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "����� ������������ ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Satelliidikaart", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Cable Card", // English
    "Kabelkarte", // Deutsch
    "", // Slovenski
    "Scheda via cavo", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Carte C�ble", // Fran�ais
    "", // Norsk
    "Kaapelikortti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "����� ���������� ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kaablikaart", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Terrestrial Card", // English
    "Terrestrische Karte", // Deutsch
    "", // Slovenski
    "Scheda terrestre", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Carte TNT", // Fran�ais
    "", // Norsk
    "Terrestriaalikortti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "����� �������� ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Terrestiaalkaart", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Use syslog output", // English
    "Benutze syslog Ausgabe", // Deutsch
    "", // Slovenski
    "Registra su syslog", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Enregistrer les infos dans syslog", // Fran�ais
    "", // Norsk
    "Kirjaa systeemilokiin", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "������������ ������ syslog", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kirjuta s�steemilogisse", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Audio", // English
    "Audio", // Deutsch
    "Audio", // Slovenski
    "Audio", // Italiano
    "Audio", // Nederlands
    "Audio", // Portugu�s
    "Audio", // Fran�ais
    "Audio", // Norsk
    "��ni", // suomi
    "Audio", // Polski
    "Audio", // Espa�ol
    "Audio", // �������� (Greek)
    "Audio", // Svenska
    "Audio", // Romaneste
    "Audio", // Magyar
    "Audio", // Catal�
    "�����", // ������� (Russian)
    "Audio", // Hrvatski (Croatian)
    "Audio", // Eesti
    "Audio", // Dansk
    "Audio", // �esky (Czech)
  },
  { "Video", // English
    "Video", // Deutsch
    "Video", // Slovenski
    "Video", // Italiano
    "Video", // Nederlands
    "Video", // Portugu�s
    "Vid�o", // Fran�ais
    "Video", // Norsk
    "Kuva", // suomi
    "Video", // Polski
    "Video", // Espa�ol
    "Video", // �������� (Greek)
    "Video", // Svenska
    "Video", // Romaneste
    "Video", // Magyar
    "Video", // Catal�
    "�����", // ������� (Russian)
    "Video", // Hrvatski (Croatian)
    "Video", // Eesti
    "Video", // Dansk
    "Video", // �esky (Czech)
  },
  { "Auto", // English
    "Auto", // Deutsch
    "Auto", // Slovenski
    "Auto", // Italiano
    "Auto", // Nederlands
    "Auto", // Portugu�s
    "Auto", // Fran�ais
    "Auto", // Norsk
    "auto", // suomi
    "Auto", // Polski
    "Auto", // Espa�ol
    "Auto", // �������� (Greek)
    "Auto", // Svenska
    "Auto", // Romaneste
    "Auto", // Magyar
    "Auto", // Catal�
    "����", // ������� (Russian)
    "Auto", // Hrvatski (Croatian)
    "Auto", // Eesti
    "Auto", // Dansk
    "Auto", // �esky (Czech)
  },
  { "None", // English
    "None", // Deutsch
    "None", // Slovenski
    "None", // Italiano
    "None", // Nederlands
    "None", // Portugu�s
    "Aucun", // Fran�ais
    "None", // Norsk
    "ei", // suomi
    "None", // Polski
    "None", // Espa�ol
    "None", // �������� (Greek)
    "None", // Svenska
    "None", // Romaneste
    "None", // Magyar
    "None", // Catal�
    "���", // ������� (Russian)
    "None", // Hrvatski (Croatian)
    "Ei", // Eesti
    "None", // Dansk
    "None", // �esky (Czech)
  },
  { "Off", // English
    "Off", // Deutsch
    "Off", // Slovenski
    "Off", // Italiano
    "Off", // Nederlands
    "Off", // Portugu�s
    "Non", // Fran�ais
    "Off", // Norsk
    "poissa", // suomi
    "Off", // Polski
    "Off", // Espa�ol
    "Off", // �������� (Greek)
    "Off", // Svenska
    "Off", // Romaneste
    "Off", // Magyar
    "Off", // Catal�
    "����", // ������� (Russian)
    "Off", // Hrvatski (Croatian)
    "V�ljas", // Eesti
    "Off", // Dansk
    "Off", // �esky (Czech)
  },
  { "On", // English
    "On", // Deutsch
    "On", // Slovenski
    "On", // Italiano
    "On", // Nederlands
    "On", // Portugu�s
    "Oui", // Fran�ais
    "On", // Norsk
    "p��ll�", // suomi
    "On", // Polski
    "On", // Espa�ol
    "On", // �������� (Greek)
    "On", // Svenska
    "On", // Romaneste
    "On", // Magyar
    "On", // Catal�
    "���", // ������� (Russian)
    "On", // Hrvatski (Croatian)
    "Sees", // Eesti
    "On", // Dansk
    "On", // �esky (Czech)
  },
  { "MHz", // English
    "MHz", // Deutsch
    "MHz", // Slovenski
    "MHz", // Italiano
    "MHz", // Nederlands
    "MHz", // Portugu�s
    "MHz", // Fran�ais
    "MHz", // Norsk
    "MHz", // suomi
    "MHz", // Polski
    "MHz", // Espa�ol
    "MHz", // �������� (Greek)
    "MHz", // Svenska
    "MHz", // Romaneste
    "MHz", // Magyar
    "MHz", // Catal�
    "���", // ������� (Russian)
    "MHz", // Hrvatski (Croatian)
    "MHz", // Eesti
    "MHz", // Dansk
    "MHz", // �esky (Czech)
  },
  { "Mbit/s", // English
    "Mbit/s", // Deutsch
    "Mbit/s", // Slovenski
    "Mbit/s", // Italiano
    "Mbit/s", // Nederlands
    "Mbit/s", // Portugu�s
    "Mbit/s", // Fran�ais
    "Mbit/s", // Norsk
    "Mbit/s", // suomi
    "Mbit/s", // Polski
    "Mbit/s", // Espa�ol
    "Mbit/s", // �������� (Greek)
    "Mbit/s", // Svenska
    "Mbit/s", // Romaneste
    "Mbit/s", // Magyar
    "Mbit/s", // Catal�
    "����/�", // ������� (Russian)
    "Mbit/s", // Hrvatski (Croatian)
    "Mbit/s", // Eesti
    "Mbit/s", // Dansk
    "Mbit/s", // �esky (Czech)
  },
  { "kbit/s", // English
    "kbit/s", // Deutsch
    "kbit/s", // Slovenski
    "kbit/s", // Italiano
    "kbit/s", // Nederlands
    "kbit/s", // Portugu�s
    "kbit/s", // Fran�ais
    "kbit/s", // Norsk
    "kbit/s", // suomi
    "kbit/s", // Polski
    "kbit/s", // Espa�ol
    "kbit/s", // �������� (Greek)
    "kbit/s", // Svenska
    "kbit/s", // Romaneste
    "kbit/s", // Magyar
    "kbit/s", // Catal�
    "����/�", // ������� (Russian)
    "kbit/s", // Hrvatski (Croatian)
    "kbit/s", // Eesti
    "kbit/s", // Dansk
    "kbit/s", // �esky (Czech)
  },
  { "Stream Information", // English
    "Streaminformation", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Information flux", // Fran�ais
    "", // Norsk
    "L�hetteen tiedot", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Voo info", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "MPEG Layer", // English
    "MPEG Layer", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "MPEG Layer", // Fran�ais
    "", // Norsk
    "MPEG-taso", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "MPEG tase", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Video Stream", // English
    "Video Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Flux vid�o", // Fran�ais
    "", // Norsk
    "Kuvaraita", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Videovoog", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Bitrate", // English
    "Bitrate", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Bitrate", // Fran�ais
    "", // Norsk
    "Bittinopeus", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar 
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Bitikiirus", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Frame Rate", // English
    "Bildrate", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Rafra�chissement", // Fran�ais
    "", // Norsk
    "Ruudunp�ivitysnopeus", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kaadrisagedus", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Hz", // English
    "Hz", // Deutsch
    "Hz", // Slovenski
    "Hz", // Italiano
    "Hz", // Nederlands
    "Hz", // Portugu�s
    "Hz", // Fran�ais
    "Hz", // Norsk
    "Hz", // suomi
    "Hz", // Polski
    "Hz", // Espa�ol
    "Hz", // �������� (Greek)
    "Hz", // Svenska
    "Hz", // Romaneste
    "Hz", // Magyar
    "Hz", // Catal�
    "��", // ������� (Russian)
    "Hz", // Hrvatski (Croatian)
    "Hz", // Eesti
    "Hz", // Dansk
    "Hz", // �esky (Czech)
  },
  { "Aspect Ratio", // English
    "Seitenverh�ltnis", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Proportions d'image", // Fran�ais
    "", // Norsk
    "Kuvasuhde", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "K�lgsuhe", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "reserved", // English
    "belegt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "r�serv�", // Fran�ais
    "", // Norsk
    "varattu", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "reserveeritud", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "free", // English
    "frei", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "libre", // Fran�ais
    "", // Norsk
    "vapaa", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "vaba", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Video Format", // English
    "Bildformat", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Standard vid�o", // Fran�ais
    "", // Norsk
    "Kuvaformaatti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Videoformaat", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "PAL", // English
    "PAL", // Deutsch
    "PAL", // Slovenski
    "PAL", // Italiano
    "PAL", // Nederlands
    "PAL", // Portugu�s
    "PAL", // Fran�ais
    "PAL", // Norsk
    "PAL", // suomi
    "PAL", // Polski
    "PAL", // Espa�ol
    "PAL", // �������� (Greek)
    "PAL", // Svenska
    "PAL", // Romaneste
    "PAL", // Magyar
    "PAL", // Catal�
    "PAL", // ������� (Russian)
    "PAL", // Hrvatski (Croatian)
    "PAL", // Eesti
    "PAL", // Dansk
    "PAL", // �esky (Czech)
  },
  { "NTSC", // English
    "NTSC", // Deutsch
    "NTSC", // Slovenski
    "NTSC", // Italiano
    "NTSC", // Nederlands
    "NTSC", // Portugu�s
    "NTSC", // Fran�ais
    "NTSC", // Norsk
    "NTSC", // suomi
    "NTSC", // Polski
    "NTSC", // Espa�ol
    "NTSC", // �������� (Greek)
    "NTSC", // Svenska
    "NTSC", // Romaneste
    "NTSC", // Magyar
    "NTSC", // Catal�
    "NTSC", // ������� (Russian)
    "NTSC", // Hrvatski (Croatian)
    "NTSC", // Eesti
    "NTSC", // Dansk
    "NTSC", // �esky (Czech)
  },
  { "unknown", // English
    "unbekannt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "inconnu", // Fran�ais
    "", // Norsk
    "tuntematon", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "tundmatu", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Resolution", // English
    "Aufl�sung", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "R�solution", // Fran�ais
    "", // Norsk
    "Resoluutio", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Resolutsioon", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Audio Stream", // English
    "Audio Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Flux audio", // Fran�ais
    "", // Norsk
    "��niraita", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Audiovoog", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Sampling Frequency", // English
    "Abtastrate", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Fr�quence d'�chantillonage", // Fran�ais
    "", // Norsk
    "N�ytteenottotaajuus", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "S�mplimissagedus", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "kHz", // English
    "kHz", // Deutsch
    "kHz", // Slovenski
    "kHz", // Italiano
    "kHz", // Nederlands
    "kHz", // Portugu�s
    "kHz", // Fran�ais
    "kHz", // Norsk
    "kHz", // suomi
    "kHz", // Polski
    "kHz", // Espa�ol
    "kHz", // �������� (Greek)
    "kHz", // Svenska
    "kHz", // Romaneste
    "kHz", // Magyar
    "kHz", // Catal�
    "ڳ�", // ������� (Russian)
    "kHz", // Hrvatski (Croatian)
    "kHz", // Eesti
    "kHz", // Dansk
    "kHz", // �esky (Czech)
  },
  { "Apid", // English
    "Apid", // Deutsch
    "Apid", // Slovenski
    "Apid", // Italiano
    "Apid", // Nederlands
    "Apid", // Portugu�s
    "Apid", // Fran�ais
    "Apid", // Norsk
    "��ni-PID", // suomi
    "Apid", // Polski
    "Apid", // Espa�ol
    "Apid", // �������� (Greek)
    "Apid", // Svenska
    "Apid", // Romaneste
    "Apid", // Magyar
    "Apid", // Catal�
    "Apid", // ������� (Russian)
    "Apid", // Hrvatski (Croatian)
    "Apid", // Eesti
    "Apid", // Dansk
    "Apid", // �esky (Czech)
  },
  { "Dpid", // English
    "Dpid", // Deutsch
    "Dpid", // Slovenski
    "Dpid", // Italiano
    "Dpid", // Nederlands
    "Dpid", // Portugu�s
    "Dpid", // Fran�ais
    "Dpid", // Norsk
    "Dolby-PID", // suomi
    "Dpid", // Polski
    "Dpid", // Espa�ol
    "Dpid", // �������� (Greek)
    "Dpid", // Svenska
    "Dpid", // Romaneste
    "Dpid", // Magyar
    "Dpid", // Catal�
    "Dpid", // ������� (Russian)
    "Dpid", // Hrvatski (Croatian)
    "Dpid", // Eesti
    "Dpid", // Dansk
    "Dpid", // �esky (Czech)
  },
  { "Nid", // English
    "Nid", // Deutsch
    "Nid", // Slovenski
    "Nid", // Italiano
    "Nid", // Nederlands
    "Nid", // Portugu�s
    "Nid", // Fran�ais
    "Nid", // Norsk
    "Verkko-ID", // suomi
    "Nid", // Polski
    "Nid", // Espa�ol
    "Nid", // �������� (Greek)
    "Nid", // Svenska
    "Nid", // Romaneste
    "Nid", // Magyar
    "Nid", // Catal�
    "Nid", // ������� (Russian)
    "Nid", // Hrvatski (Croatian)
    "Nid", // Eesti
    "Nid", // Dansk
    "Nid", // �esky (Czech)
  },
  { "Tid", // English
    "Tid", // Deutsch
    "Tid", // Slovenski
    "Tid", // Italiano
    "Tid", // Nederlands
    "Tid", // Portugu�s
    "Tid", // Fran�ais
    "Tid", // Norsk
    "L�hete-ID", // suomi
    "Tid", // Polski
    "Tid", // Espa�ol
    "Tid", // �������� (Greek)
    "Tid", // Svenska
    "Tid", // Romaneste
    "Tid", // Magyar
    "Tid", // Catal�
    "Tid", // ������� (Russian)
    "Tid", // Hrvatski (Croatian)
    "Tid", // Eesti
    "Tid", // Dansk
    "Tid", // �esky (Czech)
  },
  { "Rid", // English
    "Rid", // Deutsch
    "Rid", // Slovenski
    "Rid", // Italiano
    "Rid", // Nederlands
    "Rid", // Portugu�s
    "Rid", // Fran�ais
    "Rid", // Norsk
    "Radio-ID", // suomi
    "Rid", // Polski
    "Rid", // Espa�ol
    "Rid", // �������� (Greek)
    "Rid", // Svenska
    "Rid", // Romaneste
    "Rid", // Magyar
    "Rid", // Catal�
    "Rid", // ������� (Russian)
    "Rid", // Hrvatski (Croatian)
    "Rid", // Eesti
    "Rid", // Dansk
    "Rid", // �esky (Czech)
  },
  { "Coderate", // English
    "Coderate", // Deutsch
    "Coderate", // Slovenski
    "Coderate", // Italiano
    "Coderate", // Nederlands
    "Coderate", // Portugu�s
    "Coderate", // Fran�ais
    "Coderate", // Norsk
    "Suojaustaso", // suomi
    "Coderate", // Polski
    "Coderate", // Espa�ol
    "Coderate", // �������� (Greek)
    "Coderate", // Svenska
    "Coderate", // Romaneste
    "Coderate", // Magyar
    "Coderate", // Catal�
    "Coderate", // ������� (Russian)
    "Coderate", // Hrvatski (Croatian)
    "Coderate", // Eesti
    "Coderate", // Dansk
    "Coderate", // �esky (Czech)
  },
  { "dB", // English
    "dB", // Deutsch
    "dB", // Slovenski
    "dB", // Italiano
    "dB", // Nederlands
    "dB", // Portugu�s
    "dB", // Fran�ais
    "dB", // Norsk
    "dB", // suomi
    "dB", // Polski
    "dB", // Espa�ol
    "dB", // �������� (Greek)
    "dB", // Svenska
    "dB", // Romaneste
    "dB", // Magyar
    "dB", // Catal�
    "dB", // ������� (Russian)
    "dB", // Hrvatski (Croatian)
    "dB", // Eesti
    "dB", // Dansk
    "dB", // �esky (Czech)
  },
  { "not indicated", // English
    "nicht angegeben", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "non indiqu�", // Fran�ais
    "", // Norsk
    "ei ilmaistu", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "m�rkimata", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "AC-3", // English
    "AC-3", // Deutsch
    "AC-3", // Slovenski
    "AC-3", // Italiano
    "AC-3", // Nederlands
    "AC-3", // Portugu�s
    "AC-3", // Fran�ais
    "AC-3", // Norsk
    "AC-3", // suomi
    "AC-3", // Polski
    "AC-3", // Espa�ol
    "AC-3", // �������� (Greek)
    "AC-3", // Svenska
    "AC-3", // Romaneste
    "AC-3", // Magyar
    "AC-3", // Catal�
    "AC-3", // ������� (Russian)
    "AC-3", // Hrvatski (Croatian)
    "AC-3", // Eesti
    "AC-3", // Dansk
    "AC-3", // �esky (Czech)
  },
  { "AC-3 Stream", // English
    "AC-3 Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Flux AC-3", // Fran�ais
    "", // Norsk
    "AC-3-��niraita", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "AC-3 voog", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Frame Size", // English
    "Frame Gr��e", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Taille de paquet", // Fran�ais
    "", // Norsk
    "Kehyksen koko", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kaadri suurus", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Bit Stream Mode", // English
    "Bitstream Modus", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Mode bitstream", // Fran�ais
    "", // Norsk
    "L�hetteen tyyppi", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Bitivoo t��p", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Audio Coding Mode", // English
    "Audio Coding Modus", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Mode de codage audio", // Fran�ais
    "", // Norsk
    "��nikoodaus", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Audiokodeering", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Center Mix Level", // English
    "Center Mix Pegel", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Niveau sonore milieu", // Fran�ais
    "", // Norsk
    "Keskikanavan taso", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Keskmise kanali tase", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Surround Mix Level", // English
    "Surround Mix Pegel", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Niveau sonore surround", // Fran�ais
    "", // Norsk
    "Tehostekanavien taso", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Surround kanali tase", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Dolby Surround Mode", // English
    "Dolby Surround Modus", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Mode Dolby Surround", // Fran�ais
    "", // Norsk
    "Dolby Surround -tehoste", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Dolby Surround'i t��p", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Low Frequency Effects", // English
    "Tieft�ner Effekte", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Effets de basses", // Fran�ais
    "", // Norsk
    "LFE-kanava", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "LFE kanal", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Dialogue Normalization", // English
    "Dialog Normalisierung", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Normalisation des dialogues", // Fran�ais
    "", // Norsk
    "Dialogin normalisointi", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Dialoogi normalisatsioon", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Complete Main (CM)", // English
    "Complete Main (CM)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Principal (CM)", // Fran�ais
    "", // Norsk
    "P��asiallinen (CM)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "T�iskomplekt (CM)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Music and Effects (ME)", // English
    "Musik und Effekte (ME)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Musique et effets (ME)", // Fran�ais
    "", // Norsk
    "Musiikki ja tehosteet (ME)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Muusika ja efektid (ME)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Visually Impaired (VI)", // English
    "Sehbehindert (VI)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Malvoyants (VI)", // Fran�ais
    "", // Norsk
    "N�k�rajoitteinen (VI)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Vaegn�gemine (VE)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Hearing Impaired (HI)", // English
    "H�rbehindert (HI)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Malentendants (HI)", // Fran�ais
    "", // Norsk
    "Kuulorajoitteinen (HI)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Vaegkuulmine (HI)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Dialogue (D)", // English
    "Dialog (D)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Dialogue (D)", // Fran�ais
    "", // Norsk
    "Vuoropuhelu (D)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Dialoog (D)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Commentary (C)", // English
    "Kommentar (C)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Commentaires (C)", // Fran�ais
    "", // Norsk
    "Kommentointi (C)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kommentaar (C)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Emergency (E)", // English
    "Notfall (E)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Urgence (E)", // Fran�ais
    "", // Norsk
    "H�t�tiedote (E)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "H�dateade (E)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Voice Over (VO)", // English
    "�berlagerte Stimme (VO)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Voix off (VO)", // Fran�ais
    "", // Norsk
    "P��lle puhuttu (VO)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Pealer��kimine (VO)", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Karaoke", // English
    "Karaoke", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Karaoke", // Fran�ais
    "", // Norsk
    "Karaoke", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Karaoke", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Ch1", // English "Channel 1"
    "Kan1", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Can. 1", // Fran�ais
    "", // Norsk
    "kan. 1", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kan. 1", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Ch2", // English "Channel 2"
    "Kan2", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Can. 2", // Fran�ais
    "", // Norsk
    "kan. 2", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kan. 2", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "C", // English "Center"
    "C", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Centre", // Fran�ais
    "", // Norsk
    "K", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "C", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "L", // English "Left"
    "L", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Gauche", // Fran�ais
    "", // Norsk
    "V", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "L", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "R", // English "Right"
    "R", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Droite", // Fran�ais
    "", // Norsk
    "O", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "R", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "S", // English "Surround"
    "S", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Surround", // Fran�ais
    "", // Norsk
    "T", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "S", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "SL", // English "Surround Left"
    "SL", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Surround gauche", // Fran�ais
    "", // Norsk
    "TV", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "SL", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "SR", // English "Surround Right"
    "SR", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Surround droit", // Fran�ais
    "", // Norsk
    "TO", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "SR", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Show CA system", // English
    "CA System anzeigen", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Syst�me CA", // Fran�ais
    "", // Norsk
    "N�yt� salausj�rjestelm�", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "N�ita CA s�steemi", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Fixed", // English
    "Fest", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Fixe", // Fran�ais
    "", // Norsk
    "kiinte�", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Fikseeritud", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Analog", // English
    "", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Analogique", // Fran�ais
    "", // Norsk
    "analoginen", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Free to Air", // English
    "Free to Air", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Free To Air", // Fran�ais
    "", // Norsk
    "salaamaton", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "FTA", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "SECA/Mediaguard", // English
    "SECA/Mediaguard", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "SECA/Mediaguard", // Fran�ais
    "", // Norsk
    "SECA/Mediaguard", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "SECA/Mediaguard", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Viaccess", // English
    "Viaccess", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Viaccess", // Fran�ais
    "", // Norsk
    "Viaccess", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Viaccess", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Irdeto", // English
    "Irdeto", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Irdeto", // Fran�ais
    "", // Norsk
    "Irdeto", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Irdeto", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "NDS/Videoguard", // English
    "NDS/Videoguard", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "NDS/Videoguard", // Fran�ais
    "", // Norsk
    "NDS/Videoguard", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "NDS/Videoguard", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "Conax", // English
    "Conax", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "Conax", // Fran�ais
    "", // Norsk
    "Conax", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Conax", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "CryptoWorks", // English
    "CryptoWorks", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "CryptoWorks", // Fran�ais
    "", // Norsk
    "CryptoWorks", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "CryptoWorks", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "PowerVu", // English
    "PowerVu", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "PowerVu", // Fran�ais
    "", // Norsk
    "PowerVu", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "PowerVu", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "BetaCrypt", // English
    "BetaCrypt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "BetaCrypt", // Fran�ais
    "", // Norsk
    "BetaCrypt", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "BetaCrypt", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "NagraVision", // English
    "NagraVision", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "NagraVision", // Fran�ais
    "", // Norsk
    "NagraVision", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "NagraVision", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { "SkyCrypt", // English
    "SkyCrypt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "SkyCrypt", // Fran�ais
    "", // Norsk   
    "SkyCrypt", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "SkyCrypt", // Eesti
    "", // Dansk
    "", // �esky (Czech)
  },
  { NULL }
};
