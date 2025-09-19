#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>

AsyncWebServer server(80);

// Stockage résultats scan
String scanResults;

void scanNetworks() {
  int n = WiFi.scanNetworks();
  scanResults = "<h2>Résultats du scan :</h2><ul>";
  if (n == 0) {
    scanResults += "<li>Aucun réseau trouvé</li>";
  } else {
    for (int i = 0; i < n; ++i) {
      scanResults += "<li><b>" + WiFi.SSID(i) + "</b> | "
                   + String(WiFi.RSSI(i)) + " dBm | "
                   + (WiFi.encryptionType(i) == ENC_TYPE_NONE ? "Ouvert" : "Sécurisé")
                   + "</li>";
    }
  }
  scanResults += "</ul>";
  WiFi.scanDelete();
}

void setup() {
  Serial.begin(115200);

  // Démarre en mode AP
  WiFi.mode(WIFI_AP);
  WiFi.softAP("ESP-Marauder", "12345678"); // SSID + mot de passe

  Serial.println("AP démarré !");
  Serial.println("SSID : ESP-Marauder");
  Serial.println("MDP  : EPSI");
  Serial.println("IP   : 192.168.4.1");

  // Page principale
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    String html = "<!DOCTYPE html><html><head><meta charset='UTF-8'><title>ESP8266 Marauder</title>";
    html += "<style>body{font-family:sans-serif;text-align:center;}button{padding:10px;margin:10px;}</style></head><body>";
    html += "<h1>ESP8266 Marauder Lite</h1>";
    html += "<button onclick=\"location.href='/scan'\">🔍 Scanner WiFi</button>";
    html += scanResults;
    html += "</body></html>";
    request->send(200, "text/html", html);
  });

  // Page scan
  server.on("/scan", HTTP_GET, [](AsyncWebServerRequest *request){
    scanNetworks();
    request->redirect("/");
  });

  server.begin();
}

void loop() {
}
