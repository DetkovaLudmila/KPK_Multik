 KPK_Multik
# Мульфильм "ЛЕТО"
  <p> 
  Мультфильм "Лето" - мой первый проект написанный на языке С++.  
    <p/>  
  <p>
Это история о прогулке летним днем, и коварной погоде.
</p>

![Стартовая страница](https://user-images.githubusercontent.com/82305409/118387553-bfa25a00-b627-11eb-852f-8545b3524214.PNG)
![Встреча1](https://user-images.githubusercontent.com/82305409/118387557-c5983b00-b627-11eb-9457-a8e98c758178.PNG)
![Встреча](https://user-images.githubusercontent.com/82305409/118387560-c92bc200-b627-11eb-9115-b69f3f97e0c5.PNG)

![Приветствие11](https://user-images.githubusercontent.com/82305409/115125196-328bc700-9fcf-11eb-8377-79b920184460.png)
Этапы работы над мультфильмом:</p>
1. Знакомство с языком С++ и библиотекой ТXLib.h </p> 
2. Создание героев мультфильма: мальчик, девочка, солнце, облако, елочка, гриб, цветок, дом, дождь, кот.
Программа становится большой и начинается путаница где какой герой.</p>
![Boy](https://user-images.githubusercontent.com/82305409/118387462-56bae200-b627-11eb-8532-d541a4096ab3.PNG)
![Cat](https://user-images.githubusercontent.com/82305409/118387468-5c182c80-b627-11eb-90e3-ce6b1dc9cc0b.PNG)
![Girl](https://user-images.githubusercontent.com/82305409/118387474-620e0d80-b627-11eb-96a2-3e5aebd64e32.PNG)
![howse](https://user-images.githubusercontent.com/82305409/118387498-80740900-b627-11eb-9e7e-923d20e7783f.PNG)
![Sun](https://user-images.githubusercontent.com/82305409/118387505-8538bd00-b627-11eb-8bfe-4fcfb4f0dbd5.PNG)
![Flower](https://user-images.githubusercontent.com/82305409/118387514-8bc73480-b627-11eb-9ba1-7b029f07fd17.PNG)
![Tree](https://user-images.githubusercontent.com/82305409/118387521-9386d900-b627-11eb-999f-0d8341ad3f9a.PNG)
![Kust](https://user-images.githubusercontent.com/82305409/118387526-984b8d00-b627-11eb-8ad4-888cd39dab0c.PNG)
![Cloud](https://user-images.githubusercontent.com/82305409/118387527-9aade700-b627-11eb-9aea-123e01f032c9.PNG)
![Grib](https://user-images.githubusercontent.com/82305409/118387530-a13c5e80-b627-11eb-818d-19e5f1d1f47c.PNG)



3. Разбиение программы на отдельные функции рисования каждого объекта:
DrawBoy - мальчик, DrawGirl - девочка, DrawSun - солнце, DrawCloud - облако, DrawTree - елочка,
DrawGrib - гриб, DrawFlower - цветок, DrawHowse - дом, DrawRain - дождь. Встает вопрос как нарисовать много героев?</p>
4. Добавление в наши функции параметров. Теперь можем рисовать сколько угодно героев, указывая координаты условного центра героя.
DrawHowse          (int x, int y);</p>
DrawSun            (int x, int y);</p>
DrawCloud          (int x, int y);</p>
DrawGirl           (int x, int y);</p>
DrawBoy            (int x, int y);</p>
DrawFlower         (int x, int y);</p>
DrawGrib           (int x, int y);</p>
DrawCat (int x, int y); <p/>
DrawKust (int x, int y); </p>
DrawTree           (int x, int y);</p>
DrawRain           (int x, int y);</p>
5. Изменение размера и цвета героев.</p>
void DrawHowse          (int x, int y, double sizex, double sizey, COLORREF stenaColor,COLORREF kryshaColor);</p>
void DrawSun            (int x, int y, double sizex, double sizey, COLORREF sunColor);</p>
void DrawCloud          (int x, int y, double sizex, double sizey, COLORREF cloudColor);</p>
void DrawGirl           (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor);</p>
void DrawBoy            (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor);</p>
void DrawFlower         (int x, int y, double sizex, double sizey, COLORREF lepestkiColor,COLORREF serdcevinaColor);</p>
void DrawGrib           (int x, int y, double sizex, double sizey, COLORREF shlypkaColor,COLORREF nogkaColor);</p>
void DrawTree           (int x, int y, double sizex, double sizey, COLORREF treeColor);</p>
void DrawRain           (int x, int y, double sizex, double sizey, COLORREF cloudColor);</p>
void DrawCat            (int x, int y, double sizex, double sizey, COLORREF catColor,COLORREF eyesColor);</p>
void DrawKust           (int x, int y, double sizex, double sizey); </p>
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
void WalkFlower         (); - сцена  прогулки среди цветов </p>
void WalkGrib           (); -  сцена прогулки в лесу </P>
void RainDay            (); -  сцена дождливого дня </p>
void GoHomeisLesa       (); -  сцена возвращение  домой из леса </p>
void GoHome             (); -  сцена возвращение домой из леса под дождем </p>
void RainDay            (); - сцена дождливого дня</p>
В процессе работы над проектом использовался метод рефакторинга  и  масштабирования</P>
Рефакторинг представляет собой процесс такого изменения программной системы, при котором не меняется внешнее поведение кода, но улучшается его внутренняя структура. 
Это способ систематического приведения кода в порядок, при котором шансы появления новых ошибок минимальны.</p>
Масштабирование  предполагает  простоту добавления новых  параметров  в функции без кардинального изменения самой функции.
