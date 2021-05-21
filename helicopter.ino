// ПОМЕНЯЙ ЗНАЧЕНИЕ ПОРТА ПРИДУРОК!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// И БИБЛИОТЕКУ ДОБАВЬ!!!!!!!!!!

#include "DHT.h"
#define DHTPIN 7 //вместо 7 нужно поставить номер пина датчика температуры
int knopka = 0;
int mot = 0;
int ch = 1;

void setup{
serial.begin(9600);
dht.begin();
pinMode(12,OUTPUT); // 12 пин для моторчика
pinMode(8,INPUT); //8 пин для кнопки
}
void loop{
    delay(1000); //1 секунда задержки
    float humid = dht.readHumidity();
    float temp = dht.readTemperature();
        serial.print("Humidity - "); // по приколу влажность выводим
        serial.print(h);
        serial.print("Temperature - ");
        serial.print(temp);
    if (isnan(h) || isnan(t)) {  // Проверка на ошибку считывания
        Serial.println("Ошибка считывания");
        return;

    if(digitalRead(8)==HIGH&&knopka==0)//если кнопка нажата
    // и перемення "knopka" равна 0
        {
    delay(50);//защита от дребезга
    knopka++;
    ch++}//пишем 1 в переменную кнопка
    //это нужно для того что бы с каждым нажатием кнопки
    //происходило только одно действие
    if(ch % 2 == 0){
        digitalWrite(12.HIGH)
    }
    else{
        digitalWite(12.LOW)
    }

    digitalWrite(13, !digitalRead(13));//меняем значение порта на противоположное ПОМЕНЯЙ ЗНАЧЕНИЕ ПОРТА


    if(digitalRead(8)==LOW&&knopka==1)//если кнопка НЕ нажата
    //и переменная knopka равна  1 ,то ...
    {

    knopka=0;//обнуляем переменную "knopka"
    }   
}

