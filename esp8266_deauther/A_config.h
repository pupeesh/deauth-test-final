#pragma once

#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

#define DEFAULT_ESP8266

// #define NODEMCU

// Forces formatting of SPIFFS and EEPROM ot startup
// #define FORMAT_SPIFFS
// #define FORMAT_EEPROM

// Forces a reset of all settings at startup
// #define RESET_SETTINGS


#if defined(DEFAULT_ESP8266) || defined(NODEMCU)
// ===== LED ===== //
// #define LED_DIGITAL
// #define LED_PIN_R 16 // NodeMCU on-board LED
// #define LED_PIN_B 2  // ESP-12 LED

#endif /* if defined(DEFAULT_ESP8266) || defined(NODEMCU) */
// ============================== //


// ========= FALLBACK ========= //

// ===== AUTOSAVE ===== //
#ifndef AUTOSAVE_ENABLED
  #define AUTOSAVE_ENABLED true
#endif /* ifndef ATTACK_ALL_CH */

#ifndef AUTOSAVE_TIME
  #define AUTOSAVE_TIME 60
#endif /* ifndef ATTACK_ALL_CH */

// ===== ATTACK ===== //
#ifndef ATTACK_ALL_CH
  #define ATTACK_ALL_CH false
#endif /* ifndef ATTACK_ALL_CH */

#ifndef RANDOM_TX
  #define RANDOM_TX false
#endif /* ifndef RANDOM_TX */

#ifndef ATTACK_TIMEOUT
  #define ATTACK_TIMEOUT 600
#endif /* ifndef ATTACK_TIMEOUT */

#ifndef DEAUTHS_PER_TARGET
  #define DEAUTHS_PER_TARGET 25
#endif /* ifndef DEAUTHS_PER_TARGET */

#ifndef DEAUTH_REASON
  #define DEAUTH_REASON 1
#endif /* ifndef DEAUTH_REASON */

#ifndef BEACON_INTERVAL_100MS
  #define BEACON_INTERVAL_100MS true
#endif /* ifndef BEACON_INTERVAL_100MS */

#ifndef PROBE_FRAMES_PER_SSID
  #define PROBE_FRAMES_PER_SSID 1
#endif /* ifndef PROBE_FRAMES_PER_SSID */

// ===== SNIFFER ===== //
#ifndef CH_TIME
  #define CH_TIME 200
#endif /* ifndef CH_TIME */

#ifndef MIN_DEAUTH_FRAMES
  #define MIN_DEAUTH_FRAMES 3
#endif /* ifndef MIN_DEAUTH_FRAMES */

// ===== ACCESS POINT ===== //
#ifndef AP_SSID
  #define AP_SSID "pwned"
#endif /* ifndef AP_SSID */

#ifndef AP_PASSWD
  #define AP_PASSWD "deauther"
#endif /* ifndef AP_PASSWD */

#ifndef AP_HIDDEN
  #define AP_HIDDEN false
#endif /* ifndef AP_HIDDEN */

#ifndef AP_IP_ADDR
  #define AP_IP_ADDR { 192, 168, 4, 1 }
#endif /* ifndef AP_IP_ADDR */

// ===== WEB INTERFACE ===== //
#ifndef WEB_ENABLED
  #define WEB_ENABLED true
#endif /* ifndef WEB_ENABLED */

#ifndef WEB_CAPTIVE_PORTAL
  #define WEB_CAPTIVE_PORTAL false
#endif /* ifndef WEB_CAPTIVE_PORTAL */

#ifndef WEB_USE_SPIFFS
  #define WEB_USE_SPIFFS false
#endif /* ifndef WEB_USE_SPIFFS */

#ifndef DEFAULT_LANG
  #define DEFAULT_LANG "bg"
#endif /* ifndef DEFAULT_LANG */

// ===== CLI ===== //
#ifndef CLI_ENABLED
  #define CLI_ENABLED true
#endif /* ifndef CLI_ENABLED */

#ifndef CLI_ECHO
  #define CLI_ECHO true
#endif /* ifndef CLI_ECHO */

// ===== Web ===== //
#ifndef WEB_IP_ADDR
  #define WEB_IP_ADDR (192, 168, 4, 1)
#endif // ifndef WEB_IP_ADDR

#ifndef WEB_URL
  #define WEB_URL "deauth.me"
#endif // ifndef WEB_URL

// ======== CONSTANTS ========== //
// Do not change these values unless you know what you're doing!
#define DEAUTHER_VERSION "2.6.1"
#define DEAUTHER_VERSION_MAJOR 2
#define DEAUTHER_VERSION_MINOR 6
#define DEAUTHER_VERSION_REVISION 1

#define EEPROM_SIZE 4095
#define BOOT_COUNTER_ADDR 1
#define SETTINGS_ADDR 100

// ======== AVAILABLE SETTINGS ========== //


/*
   // ===== ATTACK ===== //
 #define ATTACK_ALL_CH false
 #define RANDOM_TX false
 #define ATTACK_TIMEOUT 600
 #define DEAUTHS_PER_TARGET 25
 #define DEAUTH_REASON 1
 #define BEACON_INTERVAL_100MS true
 #define PROBE_FRAMES_PER_SSID 1

   // ====== SNIFFER ====== //
 #define CH_TIME 200
 #define MIN_DEAUTH_FRAMES 3

   // ===== ACCESS POINT ===== //
 #define AP_SSID "pwned"
 #define AP_PASSWD "deauther"
 #define AP_HIDDEN false
 #define AP_IP_ADDR {192, 168, 4, 1}

   // ===== WEB INTERFACE ===== //
 #define WEB_ENABLED true
 #define WEB_CAPTIVE_PORTAL false
 #define WEB_USE_SPIFFS false
 #define DEFAULT_LANG "en"

   // ===== CLI ===== //
 #define CLI_ENABLED true
 #define CLI_ECHO true

   // ===== Web ===== //
 #define WEB_IP_ADDR (192, 168, 4, 1)
 #define WEB_URL "deauth.me"

 */
