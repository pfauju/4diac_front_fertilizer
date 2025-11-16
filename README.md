# ISOBUS Fronttank Controller – Nordsten NS5030

Dieses Projekt ist ein ISOBUS-Umbau für einen Nordsten NS5030 Fronttank.  
Ziel ist eine moderne Steuerung mit Wiegeeinrichtung und fahrgeschwindigkeitsabhängiger Ausbringungsregelung.

## Funktionen
- ISOBUS VT-Bedienoberfläche (IsoDesigner)
- Abdrehprobe (Fließfaktor-Bestimmung)
- Zielmenge in kg/ha
- Automatische Mengenausbringung je nach Fahrgeschwindigkeit
- Live-Gewichtserfassung durch Wiegezellen
- PWM-Ansteuerung des Dosiermotors
- Diagnoseanzeigen

## Hardware
- Hutschienenmoped XL
- ESP32 Controller
- Wiegezellen + Verstärker
- DC-Motor
- Geschwindigkeitssignal
- 12V Bordnetz

## Software
- 4diac für Logik und Regelung
- ESP32 Firmware (Motor, Wiegedaten, Kommunikation)
- IsoDesigner Masken für ISOBUS-VT

## Ziel
Ein vollwertiges ISOBUS-Gerät zur präzisen Dünger-Ausbringung mit moderner Steuerungstechnik.
