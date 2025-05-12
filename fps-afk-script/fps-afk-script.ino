#include <Keyboard.h>
#include <stdlib.h> // 用于随机数

void setup() {
  // 初始化键盘模拟
  Keyboard.begin();
  delay(1000); // 等待1秒，确保键盘准备好
}

void loop() {
  char keys[] = {'w', 'a', 's', 'd'}; // 指定的键位
  int randomIndex = rand() % 4;        // 随机选择一个键
  char randomKey = keys[randomIndex];

  int randomDuration = 1000 + rand() % 4000; // 持续时间：1秒到5秒之间

  Keyboard.press(randomKey);  // 随机按下键
  delay(randomDuration);      // 持续随机时间
  Keyboard.release(randomKey); // 松开键

  int randomDelay = 1000 + rand() % 2000; // 随机等待时间：1秒到3秒之间
  delay(randomDelay); // 等待随机时间
}
