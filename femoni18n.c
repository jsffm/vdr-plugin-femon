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
    "", // Fran�ais
    "", // Norsk
    "DVB signaalimittari (OSD)", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Signal Information", // English
    "Signalinformationen", // Deutsch
    "", // Slovenski
    "Informazioni sul segnale", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Signaalimittari", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Position", // English
    "Position", // Deutsch
    "", // Slovenski
    "Posizione", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Sijainti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Default Display Mode", // English
    "Standard Anzeigemodus", // Deutsch
    "", // Slovenski
    "Modo di visualizzazione standard", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
    "", // Norsk
    "Oletus n�ytt�moodi", // suomi
    "", // Polski   
    "", // Espa�ol  
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
#if VDRVERSNUM >= 10300
    ""  // �������  
#endif
  },
  { "simple", // English
    "einfach", // Deutsch
    "", // Slovenski
    "semplice", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
    "", // Norsk
    "suppea", // suomi
    "", // Polski   
    "", // Espa�ol  
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
#if VDRVERSNUM >= 10300
    ""  // �������  
#endif
  },
  { "advanced", // English
    "fortgeschritten", // Deutsch
    "", // Slovenski
    "avanzato", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
    "", // Norsk
    "laaja", // suomi
    "", // Polski   
    "", // Espa�ol  
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
#if VDRVERSNUM >= 10300
    ""  // �������  
#endif
  },
  { "Hide Mainmenu Entry", // English
    "Hauptmen�eintrag verstecken", // Deutsch
    "", // Slovenski
    "Nascondi voce men�", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Piilota valinta p��valikosta", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "OSD Update Interval [0.1s]", // English
    "OSD Updateintervall [0.1s]", // Deutsch
    "", // Slovenski
    "Intervallo di aggiornamento [0.1s]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "N�yt�n p�ivitysv�li [0.1s]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Bitrate Calculation", // English
    "Bitratenberechnung", // Deutsch
    "", // Slovenski
    "Calcolo Bitrate", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Bittinopeuden laskenta", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Calculation Interval [0.1s]", // English
    "Berechnungsintervall [0.1s]", // Deutsch
    "", // Slovenski
    "Intervallo di calcolo [0.1s]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Laskennan p�ivitysv�li [0.1s]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Red Limit [%]", // English
    "Grenze Rot [%]", // Deutsch
    "", // Slovenski
    "Limite rosso [%]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Punaisen taso [%]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Green Limit [%]", // English
    "Grenze Gr�n [%]", // Deutsch
    "", // Slovenski
    "Limite verde [%]", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Vihre�n taso [%]", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Transponder Information", // English
    "Transponderinformation", // Deutsch
    "", // Slovenski
    "Informazioni transponder", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk   
    "Transponderin tiedot", // suomi
    "", // Polski   
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Satellite Card", // English
    "Satellitenkarte", // Deutsch
    "", // Slovenski
    "Scheda satellitare", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Satelliittikortti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Cable Card", // English
    "Kabelkarte", // Deutsch
    "", // Slovenski
    "Scheda via cavo", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Kaapelikortti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Terrestial Card", // English
    "Terrestrische Karte", // Deutsch
    "", // Slovenski
    "Scheda terrestre", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Terrestiaalikortti", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { "Use Syslog Output", // English
    "Benutze syslog Ausgabe", // Deutsch
    "", // Slovenski
    "Registra su syslog", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Kirjaa systeemilokiin", // suomi
    "", // Polski
    "", // Espa�ol
    "", // ��������
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    ""  // �������
#endif
  },
  { NULL }
};

