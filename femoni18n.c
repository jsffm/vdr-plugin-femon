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
    "������� �������� �������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "DVB Signaalmonitor (OSD)", // Eesti
    "", // Dansk
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
    "������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Signaaliinfo", // Eesti
    "", // Dansk
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
    "���������� ����", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Positsioon", // Eesti
    "", // Dansk
  },
  { "Height", // English
    "H�he", // Deutsch
    "", // Slovenski
    "Altezza", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Horizontal offset", // English
    "", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "", // Eesti
    "", // Dansk
  },
  { "Default display mode", // English
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
    "����� �� ���������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Vaikimisi displei moodus", // Eesti
    "", // Dansk
  },
  { "basic", // English
    "Standard", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
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
  },
  { "transponder", // English
    "Transponder", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
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
    "", // Eesti
    "transponder", // Dansk
  },
  { "stream", // English
    "Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
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
    "striim", // Eesti
    "", // Dansk
  },
  { "Theme", // English
    "Thema", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
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
  },
  { "Classic", // English
    "Klassischer", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais 
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
  },
  { "Hide main menu entry", // English
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
    "������ ������� � ������� ����", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Peida valik peamen��s", // Eesti
    "", // Dansk
  },
  { "OSD update interval [0.1s]", // English
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
    "������� ���������� (0,1 ���)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Uuendusintervall [0,1s]", // Eesti
    "", // Dansk
  },
  { "Analyze stream", // English
    "Stream analysieren", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "Striimi anal��s", // Eesti
    "", // Dansk
  },
  { "Calculation interval [0.1s]", // English
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
    "������� ��������� (0,1 ���)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kalkulatsiooni intervall [0,1s]", // Eesti
    "", // Dansk
  },
  { "Red limit [%]", // English
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
    "������� ���� ������� ������� �� (%)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Punase limiit [%]", // Eesti
    "", // Dansk
  },
  { "Green limit [%]", // English
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
    "������� ���� �������� ������� �� (%)", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Rohelise limiit [%]", // Eesti
    "", // Dansk
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
    "�������� � ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Transponderi info", // Eesti
    "", // Dansk
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
    "����� ������������ ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Satelliidikaart", // Eesti
    "", // Dansk
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
    "����� ���������� ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kaablikaart", // Eesti
    "", // Dansk
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
    "����� �������� ������", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Terrestiaalkaart", // Eesti
    "", // Dansk
  },
  { "Use syslog output", // English
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
    "������������ ������ syslog", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "Kirjuta s�steemilogisse", // Eesti
    "", // Dansk
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
  },
  { "Video", // English
    "Video", // Deutsch
    "Video", // Slovenski
    "Video", // Italiano
    "Video", // Nederlands
    "Video", // Portugu�s
    "Video", // Fran�ais
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
  },
  { "None", // English
    "None", // Deutsch
    "None", // Slovenski
    "None", // Italiano
    "None", // Nederlands
    "None", // Portugu�s
    "None", // Fran�ais
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
  },
  { "Off", // English
    "Off", // Deutsch
    "Off", // Slovenski
    "Off", // Italiano
    "Off", // Nederlands
    "Off", // Portugu�s
    "Off", // Fran�ais
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
  },
  { "On", // English
    "On", // Deutsch
    "On", // Slovenski
    "On", // Italiano
    "On", // Nederlands
    "On", // Portugu�s
    "On", // Fran�ais
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
  },
  { "Stream Information", // English
    "Streaminformation", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "Striimi info", // Eesti
    "", // Dansk
  },
  { "MPEG Layer", // English
    "MPEG Layer", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Video Stream", // English
    "Video Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "Videostriim", // Eesti
    "", // Dansk
  },
  { "Bitrate", // English
    "Bitrate", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Frame Rate", // English
    "Bildrate", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Aspect Ratio", // English
    "Seitenverh�ltnis", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "reserved", // English
    "belegt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "free", // English
    "frei", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Video Format", // English
    "Bildformat", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "unknown", // English
    "unbekannt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Resolution", // English
    "Aufl�sung", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Audio Stream", // English
    "Audio Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "Audiostriim", // Eesti
    "", // Dansk
  },
  { "Sampling Frequency", // English
    "Abtastrate", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Apid", // English
    "Apid", // Deutsch
    "Apid", // Slovenski
    "Apid", // Italiano
    "Apid", // Nederlands
    "Apid", // Portugu�s
    "Apid", // Fran�ais
    "Apid", // Norsk
    "��ni PID", // suomi
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
  },
  { "Dpid", // English
    "Dpid", // Deutsch
    "Dpid", // Slovenski
    "Dpid", // Italiano
    "Dpid", // Nederlands
    "Dpid", // Portugu�s
    "Dpid", // Fran�ais
    "Dpid", // Norsk
    "Dolby PID", // suomi
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
  },
  { "Nid", // English
    "Nid", // Deutsch
    "Nid", // Slovenski
    "Nid", // Italiano
    "Nid", // Nederlands
    "Nid", // Portugu�s
    "Nid", // Fran�ais
    "Nid", // Norsk
    "Verkko ID", // suomi
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
  },
  { "Tid", // English
    "Tid", // Deutsch
    "Tid", // Slovenski
    "Tid", // Italiano
    "Tid", // Nederlands
    "Tid", // Portugu�s
    "Tid", // Fran�ais
    "Tid", // Norsk
    "L�hete ID", // suomi
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
  },
  { "Rid", // English
    "Rid", // Deutsch
    "Rid", // Slovenski
    "Rid", // Italiano
    "Rid", // Nederlands
    "Rid", // Portugu�s
    "Rid", // Fran�ais
    "Rid", // Norsk
    "Radio ID", // suomi
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
  },
  { "not indicated", // English
    "", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "AC-3 Stream", // English
    "AC-3 Stream", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "AC-3 ��niraita", // suomi
    "", // Polski
    "", // Espa�ol
    "", // �������� (Greek)
    "", // Svenska
    "", // Romaneste
    "", // Magyar
    "", // Catal�
    "", // ������� (Russian)
    "", // Hrvatski (Croatian)
    "AC-3 striim", // Eesti
    "", // Dansk
  },
  { "Frame Size", // English
    "Frame Gr��e", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Bit Stream Mode", // English
    "Bitstream Modus", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "Bitistriimi t��p", // Eesti
    "", // Dansk
  },
  { "Audio Coding Mode", // English
    "Audio Coding Modus", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Center Mix Level", // English
    "Center Mix Pegel", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Surround Mix Level", // English
    "Surround Mix Pegel", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Dolby Surround Mode", // English
    "Dolby Surround Modus", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
    "", // Norsk
    "Dolby Surround -moodi", // suomi
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
  },
  { "Low Frequency Effects", // English
    "Tieft�ner Effekte", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Dialogue Normalization", // English
    "Dialog Normalisierung", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Complete Main (CM)", // English
    "Complete Main (CM)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "CM", // Eesti
    "", // Dansk
  },
  { "Music and Effects (ME)", // English
    "Musik und Effekte (ME)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Visually Impaired (VI)", // English
    "Sehbehindert (VI)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Hearing Impaired (HI)", // English
    "H�rbehindert (HI)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Dialogue (D)", // English
    "Dialog (D)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Commentary (C)", // English
    "Kommentar (C)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Emergency (E)", // English
    "Notfall (E)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Voice Over (VO)", // English
    "�berlagerte Stimme (VO)", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Karaoke", // English
    "Karaoke", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Ch1", // English "Channel 1"
    "Kan1", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Ch2", // English "Channel 2"
    "Kan2", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "C", // English "Center"
    "C", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
    "K", // Eesti
    "", // Dansk
  },
  { "L", // English "Left"
    "L", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "R", // English "Right"
    "R", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "S", // English "Surround"
    "S", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "SL", // English "Surround Left"
    "SL", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "SR", // English "Surround Right"
    "SR", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Show CA system", // English
    "CA System anzeigen", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Fixed", // English
    "Fest", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Free to Air", // English
    "Free to Air", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "SECA/Mediaguard", // English
    "SECA/Mediaguard", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Viaccess", // English
    "Viaccess", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Irdeto", // English
    "Irdeto", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "NDS/Videoguard", // English
    "NDS/Videoguard", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "Conax", // English
    "Conax", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "CryptoWorks", // English
    "CryptoWorks", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "PowerVu", // English
    "PowerVu", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "BetaCrypt", // English
    "BetaCrypt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "NagraVision", // English
    "NagraVision", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { "SkyCrypt", // English
    "SkyCrypt", // Deutsch
    "", // Slovenski
    "", // Italiano
    "", // Nederlands
    "", // Portugu�s
    "", // Fran�ais
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
  },
  { NULL }
};
