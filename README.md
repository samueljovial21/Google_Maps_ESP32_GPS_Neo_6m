# Google_Maps_ESP32_GPS_Neo_6m
Getting Google Maps position link using GPS Neo Ublox 6m with ESP32 development board. <br/>
Take a look at my repository before. [Link's here](https://github.com/samueljovial21/ESP32_GPS_Neo_6m.git).

## Wiring Diagram
* VCC : 3v3 pin at ESP32 <br/>
* RX  : TX2 pin at ESP32 <br/>
* TX  : RX2 pin at ESP32 <br/>
* GND : GND pin at ESP32 <br/>
<img src="./ESP32_GPS_Neo_6m_Wiring.png">

## Notes
You need to install TinyGpsPlus library first to your arduino IDE. <br/>
You can add it by copying the TinyGPSPlus folder to your arduino IDE library. <br/>
The common path is C:\Users\<username>\Documents\Arduino\libraries

## Output Example
### No Satellite
No Blinking GPS Module <br/>
<img src="./No_Satellite.PNG">

### Satellite available
Blinking GPS Module <br/>
<img src="./Available_Location.PNG">
