const int analogPin = A0;    // 조도 센서에 연결된 아날로그 핀
const int ledPin = 13;       // LED가 연결된 디지털 출력 핀

void setup() {
  Serial.begin(9600);       // 시리얼 통신 시작
  pinMode(ledPin, OUTPUT);  // LED 출력 핀 설정
}

void loop() {
  int sensorValue = analogRead(analogPin);  // 조도 센서 값 읽기

  int brightness = map(sensorValue, 0, 1023, 0, 255);  // 밝기 계산
  analogWrite(ledPin, brightness);  // LED 밝기 조절

  int speed = map(sensorValue, 0, 1023, 100, 1000);  // 속도 계산
  blinkLED(speed);  // LED 깜빡이는 속도 조절

  Serial.println(sensorValue);  // 조도 센서 값 시리얼 통신으로 출력
}

void blinkLED(int delayTime) {
  digitalWrite(ledPin, HIGH);  // LED 켜기
  delay(delayTime);            // 지정된 시간 동안 대기
  digitalWrite(ledPin, LOW);   // LED 끄기
  delay(delayTime);            // 지정된 시간 동안 대기
}