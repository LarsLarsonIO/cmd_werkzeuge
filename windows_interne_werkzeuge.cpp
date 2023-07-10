/*	
	Name: Windows Interne Werkzeuge
	Copyright: none
	Author: Lars
	Date: 04.01.18 01:07
	Update: 10.07.23
	Description: ...
 
*/
#include <iostream>
#include <windows.h>
#include <errno.h>
#include <string.h>

using namespace std;

int main (){

	int x = 0, SD = 0, sct = 0;

		system("title Windows [Werkzeuge]"); //Titel des Konsolen Programmes
		system("color 02");
		cout << "HAUPTMENUE \n"
			 << "__________\n\n"
			 << ">> 1. Information zur Benutzung <-----Bitte zuerst Lesen!!!\n\n"
			 << ">> 2. IP-Sniffer(TCP/UDP) & Protokoll Erstellung \n"
			 << ">> 3. IP-Protokoll aufrufen \n"
			 << ">> 4. Windows(R) Systembewertungstool \n"
			 << ">> 5. Windows(R) Leistungsueberwachung \n"
			 << ">> 6. Windows(R) Speicherdiagnose \n"
			 << ">> 7. Registrierungseditor GUI \n"
			 << ">> 8. Registrierungseditor CMD \n"
			 << ">> 9. Festplatten Scanner \n"
			 << ">>10. Microsoft(R) Windows (R)-Ressourcenueberpruefungsprogramm \n"
			 << ">>11. Windows(R) Autostart Einstellungen \n"
			 << ">>12. Windows(R) Zeichentabelle Charmap \n"
			 << ">>13. Windows(R) ShutdownTool \n"
			 << ">>14. Windows(R) AufzeichnungsTool\n"
			 << ">>15. Windows(R) Administratorkonto aktivieren/deaktivieren\n"
			 << ">>16. Anzeigen von laufende Prozessen\n"
			 << ">>17. Datentraegerbereinigung\n\n"
			 << ">> Programm Beenden mit Eingabe eines Buchstaben oder der Taste 0\n\n";

		
	do {

		cout << ">>> ";
		cin >> x;

		if (cin.fail()){
			return 1;
		}

		if (x == 1){
			cout << "\n Informationen zum Programm \n\n";
					FILE* txt; //Zeiger auf Datenstrom der Datei
						txt = fopen("Information zum Programm.txt","w"); //Datei neu erzeugen bzw. überschreiben falls vorhanden
							fprintf(txt,"CMD Management Info\n"
										"___________________\n\n"
										"NUTZUNG DES PROGRAMMES AUF EIGENE GEFAHR! \n\n"
										"Dieses Programm bedient sich ausschließlich der Integrierten CMD Befehlsparameter.\n"
										"Eine Liste der Befehle findet sich weiter unten.\n" //Ausgabe des Textes
										"Um das Programm völlig zu nutzen empfiehlt es sich es als Administrator auszuführen.\n\n"
										""
										"Befehlsparameter:\n"
										" - netstat --> netstat -b 5 > 'Dateiname'.txt\n"
										" - start 'Dateiname'.txt mit Editor\n"
										" - winsat formal --> Get-WmiObject -Class Win32_WinSAT\n"
										" - perfmon\n"
										" - mdsched\n" 
										" - regedit\n"
										" - reg /?\n"
										" - chkdsk C:\n"
										" - sfc /scannow\n"
										" - start shell:startup\n"
										" - charmap\n"
										" - 1 Stunde {shutdown -s -t 3600}; 2 Stunden {shutdown -s -t 7200}; 3 Stunden {shutdown -s -t 10800}\n"
										" - psr\n"
										" - net user administrator /active:yes || net user administrator /active:no\n"
										" - tasklist\n"
										" - cleanmgr"
										);
									fclose(txt); //Datei Schliessen
								txt = fopen("Information zum Programm.txt","r"); //Datei öffnen
							system("notepad.exe Information zum Programm.txt"); //Datei öffnen
						continue;
		}	if (x == 2){
				cout << "IP-Sniffer & Protokoll Erstellung wird gestartet... \n \n";
				system(" powershell.exe netstat ");
				system(" powershell.exe netstat -s -b 5 > Internet-Zugriff-Protokoll.txt ");
				system("PAUSE");
				continue;
		}	if (x == 3){
				cout << "Protokoll wird abgerufen... \n \n";
				system("start Internet-Zugriff-Protokoll.txt ");
				system("PAUSE");
				continue; 
		}	if (x == 4){
				cout << "Leistungs Index wird gestartet... \n \n";
				system(" powershell.exe winsat formal ");
				system(" powershell.exe Get-WmiObject -Class Win32_WinSAT  ");
				system("PAUSE");
				continue;
		}	if (x == 5){
				cout << "Leistungsueberwachung wird gestartet... \n \n";
				system(" powershell.exe perfmon ");
				system("PAUSE");
				continue;
		}	if (x == 6){
				cout << "Speicherdiagnose wird gestartet... \n \n";
				system("powershell.exe mdsched");
				system("PAUSE");
				continue;
		}	if (x == 7){
				cout << "Registrierungs Editor wird gestartet.... \n \n";
				system("powershell.exe regedit");
				system("PAUSE");
				continue;
		}	if (x == 8){
				cout << "Registrierungseditor CMD wird gestartet..... \n";
				system("powershell.exe reg /?");
				system("PAUSE");
				continue;
		}	if (x == 9){
				cout << "Festplatten Scan CHKDSK wird gestartet... \n \n";
				system("powershell.exe chkdsk C:");
				system("PAUSE");
				continue;
		}	if (x == 10){
				cout << "Microsoft(R) Windows (R)-Ressourcenueberpruefungsprogramm wird gestartet... \n";
				system("powershell.exe sfc /scannow");
				system("PAUSE");
				continue;
		}	if (x == 11){
				cout << "Windows Autostart Einstellungen wird gestartet... \n";
				system("powershell.exe start shell:startup");
				system("PAUSE");
				continue;
		}	if (x == 12){
				cout << "Windows Zeichentabelle wird gestartet... \n";
				system("powershell.exe charmap");
				system("PAUSE");
				continue;
		}	if (x == 13){
				do {
				printf("Shutdown\n");
					cout << "_____________\n\n"
						 << "1.) 1 Stunde\n"
					 	 << "2.) 2 Stunden\n"
					 	 << "3.) 3 Stunden\n"
					 	 << "4.) Herunterfahren abbrechen \n\n"
					 	 << "Shutdown in: ";
					cin >> SD;
				
						if (SD == 1){
							system("shutdown -s -t 3600");
							continue;
						}
						if (SD == 2){
							system("shutdown -s -t 7200");
							continue;
						}
						if (SD == 3){
							system("shutdown -s -t 10800");
							continue;
						}
						if (SD == 4){
							system("shutdown -a");
							continue;
						 
						} if ((SD <  1) || (SD > 4)){
							printf("cin.fail\n\n");
							continue;
							} 					
					} while (x);
		}	if (x == 14){
				system("psr");
				system("PAUSE");
				continue;
		}	if (x == 15) {
				do {
				printf("Administratorkonto Verwaltung\n\n");
				cout << "1.) Administratorkonto aktivieren\n"
					 << "2.) Administratorkonto deaktivieren\n\n";
				cin >> sct;
				if (sct == 1) {
					system("net user administrator /active:yes");
					system("PAUSE");
					continue;
				} if (sct == 2) {
					system("net user administrator /active:no");
					system("PAUSE");
					continue;
				} if ((sct < 1) || (sct > 2)){
					printf("cin.fail");
					break;
				}
				} while (sct);
		} 	if (x == 16){
				system ("tasklist");
				system ("PAUSE");
				continue;
		}	if (x == 17){
				system ("cleanmgr");
				system ("PAUSE");
				continue;
			}		 
		
		if ((x < 1)||(x > 17)){ 
				return 1;
					}	
				} while(x);
		cin.ignore();
		cin.get();
	return x; 
}
