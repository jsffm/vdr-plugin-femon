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
    "����� �� ���������", // ������� (Russian)
    "", // Hrvatski (Croatian)
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
    "������ ������� � ������� ����", // ������� (Russian)
    "", // Hrvatski (Croatian)
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
    "������� ���������� (0,1 ���)", // ������� (Russian)
    "", // Hrvatski (Croatian)
  },
  { "Analyze Stream", // English
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
    "������� ��������� (0,1 ���)", // ������� (Russian)
    "", // Hrvatski (Croatian)
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
    "������� ���� ������� ������� �� (%)", // ������� (Russian)
    "", // Hrvatski (Croatian)
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
    "������� ���� �������� ������� �� (%)", // ������� (Russian)
    "", // Hrvatski (Croatian)
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
    "������������ ������ syslog", // ������� (Russian)
    "", // Hrvatski (Croatian)
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
    "��Ų��", // ������� (Russian)
    "LOCK", // Hrvatski (Croatian)
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
    "������", // ������� (Russian)
    "SIGNAL", // Hrvatski (Croatian)
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
    "����ɰ�", // ������� (Russian)
    "CARRIER", // Hrvatski (Croatian)
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
    "��µ���", // ������� (Russian)
    "VITERBI", // Hrvatski (Croatian)
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
    "�����", // ������� (Russian)
    "SYNC", // Hrvatski (Croatian)
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
  },
  { "Show CA System", // English
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
  },
  { NULL }
};
