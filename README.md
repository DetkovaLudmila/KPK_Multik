# KPK_Multik![встреча](https://user-images.githubusercontent.com/82305409/114626785-dd913d80-9cbc-11eb-80dd-1bbb93519b8d.PNG)
  
<h1 p align="center"> 
Мультфильм "Лето" </p></h>
  <p> 
  Мультфильм "Лето" - мой первый проект написанный на языке С++.  
    <p/>  
  <p>
Однажды прекрасным летним днем девочка встречает на улице мальчика, и они отправляются прогуляться в лес.Девочка собирает цветы, мальчик грибы.    
Но вот погода испортилась и пошел дождь. Дети поспешили вернуться домой.
</p>

Этапы работы над мульфильмом:
1. Знакомство с языком С++ и библиотекой ТXLib.h </p> 
2. Создание героев мультфильма: мальчик, девочка, солнце, облако, елочка, гриб, цветок, дом, дождь. 
Программа становится большой и начинается путаница где какой герой.</p>
3. Разбиение программы на отдельные функции рисования каждого объекта:
DrawBoy - мальчик, DrawGirl - девочка, DrawSun - солнце, DrawCloud - облако, DrawTree - елочка,
DrawGrib - гриб, DrawFlower - цветок, DrawHowse - дом, DrawRain - дождь. Встает вопрос как нарисовать много героев?</p>
4. Добавление в наши функции параметров. Теперь можем рисовать сколько угодно героев, указывая координаты условного центра героя.
DrawHowse          (int x, int y);</p>
DrawSun            (int x, int y);</p>
DrawCloud          (int x, int y);</p>
DrawGirl           (int x, int y);
DrawBoy            (int x, int y);</p>
DrawFlower         (int x, int y);</p>
DrawGrib           (int x, int y);</p>
DrawTree           (int x, int y);</p>
DrawRain           (int x, int y);</p>
5. Изменение размера и цвета героев.</p>
void DrawHowse          (int x, int y, double sizex, double sizey, COLORREF stenaColor,COLORREF kryshaColor);
void DrawSun            (int x, int y, double sizex, double sizey, COLORREF sunColor);</p>
void DrawCloud          (int x, int y, double sizex, double sizey, COLORREF cloudColor);</p>
void DrawGirl           (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor);</p>
void DrawBoy            (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor);</p>
void DrawFlower         (int x, int y, double sizex, double sizey, COLORREF lepestkiColor,COLORREF serdcevinaColor);</p>
void DrawGrib           (int x, int y, double sizex, double sizey, COLORREF shlypkaColor,COLORREF nogkaColor);</p>
void DrawTree           (int x, int y, double sizex, double sizey, COLORREF treeColor);</p>
void DrawRain           (int x, int y, double sizex, double sizey, COLORREF cloudColor);</p>
6. Движение героев.</p>
void DrawHowse          (int x, int y, double sizex, double sizey, COLORREF stenaColor,COLORREF kryshaColor,
                        double krysha, double okno,double truba, double dym);</p>
void DrawSun            (int x, int y, double sizex, double sizey, COLORREF sunColor, int rays);</p>
void DrawCloud          (int x, int y, double sizex, double sizey, COLORREF cloudColor);</p>

void DrawGirl           (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor,
                        double rhand, double lhand, double legs,double crazy,double smile);</p>
void DrawBoy            (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor,
                        double rhand, double lhand, double legs,double crazy,double smile);</p>
void DrawFlower         (int x, int y, double sizex, double sizey, COLORREF lepestkiColor,COLORREF serdcevinaColor,
                        int list, int naklon);</p>
void DrawGrib           (int x, int y, double sizex, double sizey, COLORREF shlypkaColor,COLORREF nogkaColor);</p>
void DrawTree           (int x, int y, double sizex, double sizey, COLORREF treeColor, int wind);</p>
void DrawRain           (int x, int y, double sizex, double sizey, COLORREF cloudColor, int luzha, int rain);</p>
7. Работа с циклами. Герои оживают.Показываем взаимосвязь с математикой и физикой.</p>
8. Создание сцен.</p>
void StartTitles        (); - стартовая сцена с названием мульфильма</p>
void EndTitles          (); - последняя сцена с именем автора</p>
void DrawBackGround     (int wind, int rays); - фон солнечного дня</p>
void DrawBackGroundRain (int wind); - фон дождливого дня</p>
void SunDay             (); - сцена солнечного дня</p>
void Meeting            (); - сцена встречи</p>
void Greeting           (); - сцена приветствия</p>
void Walk               (); - сцена прогулки</p>
void RainDay            (); - сцена дождливого дня</p>
void GirlGoHome         (); - сцена возвращения девочки домой</p>
void BoyGoHome          (); - сцена возвращения мальчика домой</p>
В процессе работы над проектом использовался метод рефакторинга</p>
Рефакторинг представляет собой процесс такого изменения программной системы, при котором не меняется внешнее поведение кода, но улучшается его внутренняя структура. 
Это способ систематического приведения кода в порядок, при котором шансы появления новых ошибок минимальны.</p>
