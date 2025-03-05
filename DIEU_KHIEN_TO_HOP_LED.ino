
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
char auth[] = "76S7PIGqAOIZmvT0j2XYH6fs1xC9f5n5";
char ssid[] = "Thu Thao";
char pass[] = "12052002";
#define led1 23
#define led2 22
#define led3 21
#define led4R 19
#define led4G 18
#define led4B 5
#define led5 17
#define led6 16
#define led7 4
#define led8 2
#define led9 15
#define led10R 13
#define led10G 12
#define led10B 14
#define led11R 27
#define led11G 26
#define led11B 25
#define coi 33
int ledPins[] = {led1, led2, led3, led4R, led4G, led4B, led5, led6, led7, led8, led9, led10R, led10G, led10B, led11R, led11G, led11B};
int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13;
int jj1 = 0, jj2, jj3, jj4, jj5, jj6, jj7, jj8, jj9, jj10, jj11, jj12;
int chop = 200;
long t1, t2;
void setup() {
  Serial.begin(9600);
  for (int a = 0; a < 17; a++) {
    pinMode(ledPins[a], OUTPUT); // Thiết lập chế độ OUTPUT cho tất cả các chân LED
  }
  pinMode(coi, OUTPUT);
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4R, 0);
  digitalWrite(led4G, 0);
  digitalWrite(led4B, 0);
  digitalWrite(led5, 0);
  digitalWrite(led6, 0);
  digitalWrite(led7, 0);
  digitalWrite(led8, 0);
  digitalWrite(led9, 0);
  digitalWrite(led10R, 0);
  digitalWrite(led10G, 0);
  digitalWrite(led10B, 0);
  digitalWrite(led11R, 0);
  digitalWrite(led11G, 0);
  digitalWrite(led11B, 0);
  Blynk.begin(auth, ssid, pass, "blynk-server.com", 8080);
  Blynk.run();
  delay(1000);
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
  Blynk.virtualWrite(V14, 0);
  Blynk.virtualWrite(V15, 0);
  Blynk.virtualWrite(V16, 0);
  Blynk.virtualWrite(V17, 0);
  Blynk.virtualWrite(V18, 0);
  Blynk.virtualWrite(V19, 0);
  Blynk.virtualWrite(V20, 0);
  Blynk.virtualWrite(V21, 0);
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
  Blynk.virtualWrite(V25, 0);
}
BLYNK_WRITE(V1)
{
  i1 = param.asInt();
  i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V2)
{
  i2 = param.asInt();
  i1 = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V3)
{
  i3 = param.asInt();
  i1 = 0, i2  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V4)
{
  i4 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0,  i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V5)
{
  i5 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V6)
{
  i6 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V7)
{
  i7 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V8)
{
  i8 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V9)
{
  i9 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i10  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V10)
{
  i10 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i11 = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V11)
{
  i11 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i12  = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V12, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V12)
{
  i12 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i13  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V13, 0);
}
BLYNK_WRITE(V13)
{
  i13 = param.asInt();
  i1 = 0, i2  = 0, i3  = 0, i4  = 0, i5  = 0, i6  = 0, i7  = 0, i8  = 0, i9  = 0, i10  = 0, i11 = 0, i12  = 0;
  Blynk.virtualWrite(V1, 0);
  Blynk.virtualWrite(V2, 0);
  Blynk.virtualWrite(V3, 0);
  Blynk.virtualWrite(V4, 0);
  Blynk.virtualWrite(V5, 0);
  Blynk.virtualWrite(V6, 0);
  Blynk.virtualWrite(V7, 0);
  Blynk.virtualWrite(V8, 0);
  Blynk.virtualWrite(V9, 0);
  Blynk.virtualWrite(V10, 0);
  Blynk.virtualWrite(V11, 0);
  Blynk.virtualWrite(V12, 0);
}
BLYNK_WRITE(V14)
{
  jj1 = param.asInt();
  t1 = millis();
  jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V15)
{
  jj2 = param.asInt();
  t1 = millis();
  jj1 = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V16)
{
  jj3 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V17)
{
  jj4 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V18)
{
  jj5 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V19)
{
  jj6 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V20)
{
  jj7 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V21)
{
  jj8 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj9  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V22)
{
  jj9 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj10  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V23)
{
  jj10 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj11 = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V24, 0);
}
BLYNK_WRITE(V24)
{
  jj11 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj12  = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
}
BLYNK_WRITE(V25)
{
  jj12 = param.asInt();
  t1 = millis();
  jj1 = 0, jj2  = 0, jj3  = 0, jj4  = 0, jj5  = 0, jj6  = 0, jj7  = 0, jj8  = 0, jj9  = 0, jj10  = 0, jj11 = 0;
  Blynk.virtualWrite(V22, 0);
  Blynk.virtualWrite(V23, 0);
  Blynk.virtualWrite(V24, 0);
}

void loop() {
  Blynk.run();
  if (i1 == 1) {
    Serial.println("BAT TO HOP 1");
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);

  }
  //////////////////////////////////////////////
  else if (i2 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 1);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
    delay(chop);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    delay(chop);
  }
  ///////////////////////////////////////////////
  else if (i3 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
    delay(chop);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    delay(chop);
  }
  //////////////////////////////////////////////
  else if (i4 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 1);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  ///////////////////////////////////////
  else if (i5 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 1);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 1);
    digitalWrite(led4B, 1);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 1);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  ///////////////////////////////////////////
  else if (i6 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 1);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  ////////////////////////////////////////
  else if (i7 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 1);
    digitalWrite(led10G, 1);
    digitalWrite(led10B, 1);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  ///////////////////////////////////////////
  else if (i8 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 1);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 1);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);

  }
  //////////////////////////////////////
  else if (i9 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 1);
    digitalWrite(led4B, 1);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 1);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }

  ////////////////////////////////////////////
  else if (i10 == 1) {
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 1);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  /////////////////////////////////////////
 else if (i11 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 1);
    digitalWrite(led4B, 1);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 1);
    digitalWrite(led10B, 1);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 1);
    digitalWrite(led11B, 1);
  }
  /////////////////////////////////////////////
  else if (i12 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 0);
    digitalWrite(led4G, 1);
    digitalWrite(led4B, 1);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  /////////////////////////////////////////////////////////
  else if (i13 == 1) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    digitalWrite(led4R, 1);
    digitalWrite(led4G, 0);
    digitalWrite(led4B, 0);
    digitalWrite(led5, 1);
    digitalWrite(led6, 1);
    digitalWrite(led7, 1);
    digitalWrite(led8, 0);
    digitalWrite(led9, 0);
    digitalWrite(led10R, 0);
    digitalWrite(led10G, 0);
    digitalWrite(led10B, 0);
    digitalWrite(led11R, 0);
    digitalWrite(led11G, 0);
    digitalWrite(led11B, 0);
  }
  else {
    digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4R, 0);
  digitalWrite(led4G, 0);
  digitalWrite(led4B, 0);
  digitalWrite(led5, 0);
  digitalWrite(led6, 0);
  digitalWrite(led7, 0);
  digitalWrite(led8, 0);
  digitalWrite(led9, 0);
  digitalWrite(led10R, 0);
  digitalWrite(led10G, 0);
  digitalWrite(led10B, 0);
  digitalWrite(led11R, 0);
  digitalWrite(led11G, 0);
  digitalWrite(led11B, 0);
  }

  /////////////////////////////////////////////////////////////////////////

  if (jj1 == 1) {
    if (millis() - t1 <= 1000) {
      digitalWrite(coi, HIGH);
    }
    else digitalWrite(coi, LOW);
  }
  //////////////////////////////
  else if (jj2 == 1) {
    if (millis() - t1 <= 1000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 1000 && millis() - t1 <= 2000) {
      digitalWrite(coi, LOW);
    }
    if (millis() - t1 > 2000 && millis() - t1 <= 3000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 3000 && millis() - t1 <= 4000) {
      digitalWrite(coi, LOW);
    }
  }
  ///////////////////////////////
  else if (jj3 == 1) {
    if (millis() - t1 <= 1000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 1000 && millis() - t1 <= 2000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 2000 && millis() - t1 <= 3000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 3000 && millis() - t1 <= 4000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 4000 && millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }
  }

  //////////////////////////////
  else if (jj4 == 1) {
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 6000 && millis() - t1 <= 11000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 11000 && millis() - t1 <= 12000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 12000 && millis() - t1 <= 13000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 13000 && millis() - t1 <= 14000) {
      digitalWrite(coi, LOW);
    }
  }
  ////////////////////////////////
  else if (jj5 == 1) {
    ///dài
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }
    ///dài
    if (millis() - t1 > 6000 && millis() - t1 <= 11000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 11000 && millis() - t1 <= 12000) {
      digitalWrite(coi, LOW);
    }
    ///ngắn
    if (millis() - t1 > 12000 && millis() - t1 <= 13000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 13000 && millis() - t1 <= 14000) {
      digitalWrite(coi, LOW);
    }
    ///ngắn
    if (millis() - t1 > 14000 && millis() - t1 <= 15000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 15000 && millis() - t1 <= 16000) {
      digitalWrite(coi, LOW);
    }
  }
  //////////////////////////////////////////////////
  else if (jj6 == 1) {
    ///dài
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }
    ///ngắn
    if (millis() - t1 > 6000 && millis() - t1 <= 7000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 7000 && millis() - t1 <= 8000) {
      digitalWrite(coi, LOW);
    }
    ///dài
    if (millis() - t1 > 8000 && millis() - t1 <= 13000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 13000 && millis() - t1 <= 14000) {
      digitalWrite(coi, LOW);
    }
    ///ngắn
    if (millis() - t1 > 14000 && millis() - t1 <= 15000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 15000 && millis() - t1 <= 16000) {
      digitalWrite(coi, LOW);
    }
  }
  //////////////////////////////////////////////////
  else if (jj7 == 1) {
    if (millis() - t1 <= 1000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 1000 && millis() - t1 <= 2000) {
      digitalWrite(coi, LOW);
    }
    ///2
    if (millis() - t1 > 2000 && millis() - t1 <= 3000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 3000 && millis() - t1 <= 4000) {
      digitalWrite(coi, LOW);
    }
    ///3
    if (millis() - t1 > 4000 && millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }
    ///4
    if (millis() - t1 > 6000 && millis() - t1 <= 7000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 7000 && millis() - t1 <= 8000) {
      digitalWrite(coi, LOW);
    }
    ///5
    if (millis() - t1 > 8000 && millis() - t1 <= 9000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 9000 && millis() - t1 <= 10000) {
      digitalWrite(coi, LOW);
    }
  }
  ///////////////////////////////////////
  else if (jj8 == 1) {
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    else digitalWrite(coi, LOW);
  }
  ///////////////////////////////////////
  else if (jj9 == 1) {
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    else digitalWrite(coi, LOW);

    if (millis() - t1 >= 120000) {
      t1 = millis();
    }
  }

  ///////////////////////////////////////
  else if (jj10 == 1) {

    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 7000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 7000 && millis() - t1 <= 12000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 12000 && millis() - t1 <= 14000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 >= 120000) {
      t1 = millis();
    }
  }

  ///////////////////////////////////////
  else if (jj11 == 1) {
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 6000 && millis() - t1 <= 7000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 7000 && millis() - t1 <= 8000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 9000 && millis() - t1 <= 10000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 10000 && millis() - t1 <= 11000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 >= 120000) {
      t1 = millis();
    }
  }

  ///////////////////////////////////////
  else if (jj12 == 1) {
    if (millis() - t1 <= 5000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 5000 && millis() - t1 <= 6000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 6000 && millis() - t1 <= 7000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 7000 && millis() - t1 <= 8000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 8000 && millis() - t1 <= 9000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 9000 && millis() - t1 <= 10000) {
      digitalWrite(coi, LOW);
    }

    if (millis() - t1 > 10000 && millis() - t1 <= 11000) {
      digitalWrite(coi, HIGH);
    }
    if (millis() - t1 > 11000 && millis() - t1 <= 12000) {
      digitalWrite(coi, LOW);
    }
  }
  else {
    t1 = millis();
    digitalWrite(coi, LOW);
  }

}
