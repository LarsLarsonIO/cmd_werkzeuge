# Dieses Programm bedient sich ausschließlich der von Windows integrierten Werkzeuge.

Eine Installation ist nicht notwendig.

Eine Liste der Befehle findet sich weiter unten.
Um das Programm vollständig zu nutzen empfiehlt es sich es als Administrator auszuführen.

Befehlsparameter:
 - netstat --> netstat -b 5 > 'Dateiname'.txt
 - start 'Dateiname'.txt mit Editor
 - winsat formal --> Get-WmiObject -Class Win32_WinSAT
 - perfmon
 - mdsched
 - regedit
 - reg /?
 - chkdsk C:
 - sfc /scannow
 - start shell:startup
 - charmap
 - 1 Stunde {shutdown -s -t 3600}; 2 Stunden {shutdown -s -t 7200}; 3 Stunden {shutdown -s -t 10800}
 - psr
 - net user administrator /active:yes || net user administrator /active:no
 - tasklist
 - cleanmgr
 - powercfg -duplicatescheme e9a42b02-d5df-448d-aa00-03f14749eb61

 ## Getestete Betriebssysteme
 *'Win10 x64'
 *'Win11 x64'
