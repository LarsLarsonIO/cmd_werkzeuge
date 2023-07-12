/*	
	Name: Windows Interne Werkzeuge
	Copyright: none
	Author: Lars
	Date: 04.01.18 01:07
	Update: 11.07.23
	Description: ...

	TODO:
	Update P4 Systembewertung
	Integrieren von WINGET 
*/
#include <iostream>
#include <windows.h>
#include <errno.h>
#include <string.h>

int main (){

	int eingabe, shutDown, adminkontoEingabe = 0;

		system("title Windows [Werkzeuge]"); //Titel der Konsole
		system("color 02");

		std::cout << "\nHAUPTMENUE \n"
			 	  << "__________\n\n"
			 	  << ">>  1. Information zur Benutzung <----- Bitte zuerst Lesen!!!\n\n"
			 	  << ">>  2. IP-Sniffer(TCP/UDP) + Protokoll  \n"
			 	  << ">>  3. IP-Protokoll aufrufen \n"
			 	  << ">>  4. Systembewertung (!zur Zeit keine Funktion!)\n"
			 	  << ">>  5. Leistungsueberwachung \n"
			 	  << ">>  6. Speicherdiagnose \n"
			 	  << ">>  7. Registrierungseditor GUI \n"
			 	  << ">>  8. Registrierungseditor CMD \n"
			 	  << ">>  9. Festplatten Scanner \n"
			 	  << ">> 10. Ressourcenueberpruefung \n"
			 	  << ">> 12. Zeichentabelle Charmap \n"
			 	  << ">> 13. Shutdown \n"
			 	  << ">> 14. Aufzeichnung\n"
			 	  << ">> 15. Administratorkonto aktivieren/deaktivieren\n"
			 	  << ">> 16. Laufende Prozesse\n"
			 	  << ">> 17. Datentraegerbereinigung\n\n"
			 	  << ">> Programm Beenden mit Eingabe eines Buchstaben oder der Taste > 0 <\n\n";		
	do {
		std::cout << "\n\nEingabe: ";
		std::cin >> eingabe;

		if (std::cin.fail()){
			return 1;
		}

		if (eingabe == 1){
			std::cout << "\nErstelle readme.txt "; 
			for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				FILE* txt; //Zeiger auf Datenstrom der Datei
					txt = fopen("readme.txt","w"); //Datei neu erzeugen bzw. überschreiben falls vorhanden
							fprintf(txt,"Windows Interne Werkzeuge\n"
										"_________________________\n\n"
										"NUTZUNG DES PROGRAMMES AUF EIGENE GEFAHR! \n\n"
										"Keine Installation notwendig. \n\n"
										"Dieses Programm bedient sich ausschließlich der Integrierten CMD Befehlsparameter.\n"
										"Eine Liste der Befehle findet sich weiter unten.\n" //Ausgabe der Beschreibung
										"Um das Programm völlig zu nutzen empfiehlt es sich es als Administrator auszuführen.\n\n"
										"Befehlsparameter:\n"
										" - (2) netstat --> netstat -b 5 > 'Dateiname'.txt\n"
										" - (3) start 'Dateiname'.txt mit Editor\n"
										" - (4) winsat formal --> Get-WmiObject -Class Win32_WinSAT\n"
										" - (5) perfmon\n"
										" - (6) mdsched\n" 
										" - (7) regedit\n"
										" - (8) reg /?\n"
										" - (9) chkdsk C:\n"
										" - (10) sfc /scannow\n"
										" - (11) start shell:startup\n"
										" - (12) charmap\n"
										" - (13) 1 Stunde {shutdown -s -t 3600}; 2 Stunden {shutdown -s -t 7200}; 3 Stunden {shutdown -s -t 10800}\n"
										" - (14) psr\n"
										" - (15) net user administrator /active:yes || net user administrator /active:no\n"
										" - (16) tasklist\n"
										" - (17) cleanmgr"
										);
									fclose(txt); //Datei Schliessen
								txt = fopen("readme.txt","r"); //Datei öffnen
							system("notepad.exe readme.txt"); //Datei öffnen
						continue;
		}	if (eingabe == 2){
				std::cout << "\nIP-Sniffer & Protokollerstellung wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system(" powershell.exe netstat ");
				system(" powershell.exe netstat -s -b 5 > tcp-udp.txt ");
				system("PAUSE");
				continue;
		}	if (eingabe == 3){
				std::cout << "\nProtokoll wird abgerufen ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("start tcp-udp.txt  ");
				system("PAUSE");
				continue; 
		}	if (eingabe == 4){
				std::cout << "\nzur Zeit keine Funktion! \nManuelle Eingabe mit > winsat formal < moeglich";
				// std::cout << "\nLeistungsindex wird gestartet \n ";
				// for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				// system(" powershell.exe winsat formal ");
				// system(" powershell.exe Get-WmiObject -Class Win32_WinSAT  ");
				// system("PAUSE");
				continue;
		}	if (eingabe == 5){
				std::cout << "\nLeistungsueberwachung wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system(" powershell.exe perfmon ");
				system("PAUSE");
				continue;
		}	if (eingabe == 6){
				std::cout << "\nSpeicherdiagnose wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe mdsched");
				system("PAUSE");
				continue;
		}	if (eingabe == 7){
				std::cout << "\nRegistrierungs Editor wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe regedit");
				system("PAUSE");
				continue;
		}	if (eingabe == 8){
				std::cout << "\nRegistrierungseditor CMD wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe reg /?");
				system("PAUSE");
				continue;
		}	if (eingabe == 9){
				std::cout << "\nFestplatten Scan CHKDSK wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe chkdsk C:");
				system("PAUSE");
				continue;
		}	if (eingabe == 10){
				std::cout << "\nRessourcenueberpruefung wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe sfc /scannow");
				system("PAUSE");
				continue;
		}	if (eingabe == 11){
				std::cout << "\nAutostart Einstellungen wird geladen ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe start shell:startup");
				system("PAUSE");
				continue;
		}	if (eingabe == 12){
				std::cout << "\nZeichentabelle wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system("powershell.exe charmap");
				system("PAUSE");
				continue;
		}	if (eingabe == 13){
				do {
					printf("\nShutdown\n");
					std::cout << "_____________\n\n"
						 << "1.) 1 Stunde\n"
					 	 << "2.) 2 Stunden\n"
					 	 << "3.) 3 Stunden\n"
					 	 << "4.) Herunterfahren abbrechen \n\n"
					 	 << "Shutdown in: ";
					std::cin >> shutDown;
				
						if (shutDown == 1){
							system("shutdown -s -t 3600");
							continue;
						}
						if (shutDown == 2){
							system("shutdown -s -t 7200");
							continue;
						}
						if (shutDown == 3){
							system("shutdown -s -t 10800");
							continue;
						}
						if (shutDown == 4){
							system("shutdown -a");
							continue;
						 
						} if ((shutDown <  1) || (shutDown > 4)){
							printf("std::cin.fail\n\n");
							break;
							} 					
					} while (eingabe);
		}	if (eingabe == 14){
				system("psr");
				system("PAUSE");
				continue;
		}	if (eingabe == 15) {
				do {
					printf("\nAdministratorkonto \n\n");
					std::cout << "1.) Administratorkonto aktivieren\n"
						 << "2.) Administratorkonto deaktivieren\n\n";
					std::cin >> adminkontoEingabe;
					  if (adminkontoEingabe == 1) {
						system("net user administrator /active:yes");
						system("PAUSE");
						continue;
					} if (adminkontoEingabe == 2) {
						system("net user administrator /active:no");
						system("PAUSE");
						continue;
					} if ((adminkontoEingabe < 1) || (adminkontoEingabe > 2)){
							printf("std::cin.fail");
							break;
							}
					} while (adminkontoEingabe);
		} 	if (eingabe == 16){
				std::cout << "\nTasklist wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system ("tasklist");
				system ("PAUSE");
				continue;
		}	if (eingabe == 17){
				std::cout << "\nDatentraegerbereinigung wird gestartet ";
				for (int i = 0; i < 5; i++){ Sleep(300) ; std::cout << ".", "\n"; } // Ladesequenz
				system ("cleanmgr");
				system ("PAUSE");
				continue;
			}		
		if ((eingabe < 1)||(eingabe > 17)){ 
				return 1;
					}	
				} while(eingabe);
		std::cin.ignore();
		std::cin.get();
	return eingabe; 
}
