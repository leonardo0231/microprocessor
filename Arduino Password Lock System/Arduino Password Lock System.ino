#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] - {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '7', 'C'},
    {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad keypad = KeyPad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

char password[5]; // پسورد اولیه
char inputPassword[5]; // پسورد ورودی
int index = 0; // شاخص ورودی پسورد
bool isSet = false;
const int ledPin = 12;

void setup(){
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
    Serial.print("Set Password: ");
}

void loop(){
    char key = KeyPad.getKey();

    if(key){
        if(!isSet){
            password[index] = key;
            Serial.print(key);
            index++;

            if(index == 4){
                password[index] = '\0'; // پایان رشته
                isSet = true;
                index = 0;
                Serial.println("\nPassword set.");
                Serial.println("Enter Password:");
            }
        } else {
            inputPassword[index] = key;
            Serial.print(key);
            index++;

            if(index == 4){
                inputPassword[index] = '\0';
                index = 0;

                if(strcmp(password, inputPassword) == 0){
                    Serial.println("\nCorrect password!");
                    digitalWrite(led, HIGH);
                } else {
                    Serial.println("\nWrong password!");
                    digitalWrite(led, LOW);
                }
                Serial.println("Enter password: ");
            }
        }
    }
}