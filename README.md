# Android-nRF-UART

nRF UART app can be used to connect to Bluetooth® Smart devices running a custom Nordic Semiconductor UART service. When connected, the app can send and receive ASCII and UTF-8 text strings. 

This app works with the ble_app_uart project in the nRF51 SDK and the Bluetooth Smart SDK for Arduino. 

This app created as a demonstration for handling 128 bit proprietary UUID service and characteristics. 

This source code can be compiled with Android Studio and Gradle. 

## Modification

This fork of the Android-nRF-UART App has this modifikations:

- send more than 20 Bytes via a loop (Text field: MaxLeng 168)
- gets and sends android status bar notifications
- works with a non nRF Module like HM-10

### Note
- Android 4.4 or later is required.
- Android Studio supported 
