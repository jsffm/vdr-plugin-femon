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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������� �������� �������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "���������� ����"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
#if VDRVERSNUM >= 10300
    "����� �� ���������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
#if VDRVERSNUM >= 10300
    "�������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar  
    "", // Catal�  
#if VDRVERSNUM >= 10300
    "�����������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������ ������� � ������� ����"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������� ���������� (0,1 ���)"  // ������� (Russian)
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
    "Siirtonopeuden laskenta", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������ �������� ������ ������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������� ��������� (0,1 ���)"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������� ���� ������� ������� �� (%)"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������� ���� �������� ������� �� (%)"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "�������� � ������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "����� ������������ ������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "����� ���������� ������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "����� �������� ������"  // ������� (Russian)
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
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
#if VDRVERSNUM >= 10300
    "������������ ������ syslog"  // ������� (Russian)
#endif
  },
  { "LOCK", // English
    "LOCK", // Deutsch
    "LOCK", // Slovenski
    "LOCK", // Italiano
    "LOCK", // Nederlands
    "LOCK", // Portugu�s
    "LOCK", // Fran�ais
    "LOCK", // Norsk
    "LOCK", // suomi
    "LOCK", // Polski
    "LOCK", // Espa�ol
    "LOCK", // �������� (Greek)
    "LOCK", // Svenska
    "LOCK", // Romaneste
    "LOCK", // Magyar
    "LOCK", // Catal�
#if VDRVERSNUM >= 10300
    "��Ų��"  // ������� (Russian)
#endif
  },
  { "SIGNAL", // English
    "SIGNAL", // Deutsch
    "SIGNAL", // Slovenski
    "SIGNAL", // Italiano
    "SIGNAL", // Nederlands
    "SIGNAL", // Portugu�s
    "SIGNAL", // Fran�ais
    "SIGNAL", // Norsk
    "SIGNAL", // suomi
    "SIGNAL", // Polski
    "SIGNAL", // Espa�ol
    "SIGNAL", // �������� (Greek)
    "SIGNAL", // Svenska
    "SIGNAL", // Romaneste
    "SIGNAL", // Magyar
    "SIGNAL", // Catal�
#if VDRVERSNUM >= 10300
    "������"  // ������� (Russian)
#endif
  },
  { "CARRIER", // English
    "CARRIER", // Deutsch
    "CARRIER", // Slovenski
    "CARRIER", // Italiano
    "CARRIER", // Nederlands
    "CARRIER", // Portugu�s
    "CARRIER", // Fran�ais
    "CARRIER", // Norsk
    "CARRIER", // suomi
    "CARRIER", // Polski
    "CARRIER", // Espa�ol
    "CARRIER", // �������� (Greek)
    "CARRIER", // Svenska
    "CARRIER", // Romaneste
    "CARRIER", // Magyar
    "CARRIER", // Catal�
#if VDRVERSNUM >= 10300
    "����ɰ�"  // ������� (Russian)
#endif
  },
  { "VITERBI", // English
    "VITERBI", // Deutsch
    "VITERBI", // Slovenski
    "VITERBI", // Italiano
    "VITERBI", // Nederlands
    "VITERBI", // Portugu�s
    "VITERBI", // Fran�ais
    "VITERBI", // Norsk
    "VITERBI", // suomi
    "VITERBI", // Polski
    "VITERBI", // Espa�ol
    "VITERBI", // ��������
    "VITERBI", // Svenska
    "VITERBI", // Romaneste
    "VITERBI", // Magyar
    "VITERBI", // Catal�
#if VDRVERSNUM >= 10300
    "��µ���"  // ������� (Russian)
#endif
  },
  { "SYNC", // English
    "SYNC", // Deutsch
    "SYNC", // Slovenski
    "SYNC", // Italiano
    "SYNC", // Nederlands
    "SYNC", // Portugu�s
    "SYNC", // Fran�ais
    "SYNC", // Norsk
    "SYNC", // suomi
    "SYNC", // Polski
    "SYNC", // Espa�ol
    "SYNC", // �������� (Greek)
    "SYNC", // Svenska
    "SYNC", // Romaneste
    "SYNC", // Magyar
    "SYNC", // Catal�
#if VDRVERSNUM >= 10300
    "�����"  // ������� (Russian)
#endif
  },
  { "Audio", // English
    "Audio", // Deutsch
    "Audio", // Slovenski
    "Audio", // Italiano
    "Audio", // Nederlands
    "Audio", // Portugu�s
    "Audio", // Fran�ais
    "Audio", // Norsk
    "Audio", // suomi
    "Audio", // Polski
    "Audio", // Espa�ol
    "Audio", // �������� (Greek)
    "Audio", // Svenska
    "Audio", // Romaneste
    "Audio", // Magyar
    "Audio", // Catal�
#if VDRVERSNUM >= 10300
    "�����"  // ������� (Russian)
#endif
  },
  { "Video", // English
    "Video", // Deutsch
    "Video", // Slovenski
    "Video", // Italiano
    "Video", // Nederlands
    "Video", // Portugu�s
    "Video", // Fran�ais
    "Video", // Norsk
    "Video", // suomi
    "Video", // Polski
    "Video", // Espa�ol
    "Video", // �������� (Greek)
    "Video", // Svenska
    "Video", // Romaneste
    "Video", // Magyar
    "Video", // Catal�
#if VDRVERSNUM >= 10300
    "�����"  // ������� (Russian)
#endif
  },
  { "Auto", // English
    "Auto", // Deutsch
    "Auto", // Slovenski
    "Auto", // Italiano
    "Auto", // Nederlands
    "Auto", // Portugu�s
    "Auto", // Fran�ais
    "Auto", // Norsk
    "Auto", // suomi
    "Auto", // Polski
    "Auto", // Espa�ol
    "Auto", // �������� (Greek)
    "Auto", // Svenska
    "Auto", // Romaneste
    "Auto", // Magyar
    "Auto", // Catal�
#if VDRVERSNUM >= 10300
    "����"  // ������� (Russian)
#endif
  },
  { "None", // English
    "None", // Deutsch
    "None", // Slovenski
    "None", // Italiano
    "None", // Nederlands
    "None", // Portugu�s
    "None", // Fran�ais
    "None", // Norsk
    "None", // suomi
    "None", // Polski
    "None", // Espa�ol
    "None", // �������� (Greek)
    "None", // Svenska
    "None", // Romaneste
    "None", // Magyar
    "None", // Catal�
#if VDRVERSNUM >= 10300
    "���"  // ������� (Russian)
#endif
  },
  { "Off", // English
    "Off", // Deutsch
    "Off", // Slovenski
    "Off", // Italiano
    "Off", // Nederlands
    "Off", // Portugu�s
    "Off", // Fran�ais
    "Off", // Norsk
    "Off", // suomi
    "Off", // Polski
    "Off", // Espa�ol
    "Off", // �������� (Greek)
    "Off", // Svenska
    "Off", // Romaneste
    "Off", // Magyar
    "Off", // Catal�
#if VDRVERSNUM >= 10300
    "����"  // ������� (Russian)
#endif
  },
  { "On", // English
    "On", // Deutsch
    "On", // Slovenski
    "On", // Italiano
    "On", // Nederlands
    "On", // Portugu�s
    "On", // Fran�ais
    "On", // Norsk
    "On", // suomi
    "On", // Polski
    "On", // Espa�ol
    "On", // �������� (Greek)
    "On", // Svenska
    "On", // Romaneste
    "On", // Magyar
    "On", // Catal�
#if VDRVERSNUM >= 10300
    "���"  // ������� (Russian)
#endif
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
#if VDRVERSNUM >= 10300
    "���"  // ������� (Russian)
#endif
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
#if VDRVERSNUM >= 10300
    "����/�"  // ������� (Russian)
#endif
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
#if VDRVERSNUM >= 10300
    "����/�"  // ������� (Russian)
#endif
  },
  { NULL }
};
