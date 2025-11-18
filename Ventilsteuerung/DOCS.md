# Projektbeschreibung – ISOBUS Fronttank Steuerung (4diac)

## **Wichtige Prozess-Variablen**

| Variable | Typ | Beschreibung |
|---------|-----|--------------|
| `NumberVariable_application_rate` | `UINT` | Prozentwert (10–200 %), beeinflusst PWM-Sollwert |
| `NumberVariable_bool_selected_speed` | `UINT` | 0 = wheel-based speed, 1 = ground-based speed |
| `NumberVariable_Wheel_based_machine_speed` | `UINT` | Reifengeschwindigkeit |
| `NumberVariable_Ground_based_machine_speed` | `UINT` | Radargeschwindigkeit |

---

### **Mask Switching**
Softkeys **6–9** wechseln zwischen den 4 Datenmasken.  
Jeder Softkey triggert beim *Loslassen* 

---

