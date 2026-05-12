#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <clocale>
#include <fcntl.h>
#include <io.h>
#include <locale>
#include <sapi.h>

#pragma comment(lib, "sapi.lib")

using namespace std;

void speak(const wchar_t* text)
{
    ISpVoice* pVoice = NULL;

    if (FAILED(CoInitialize(NULL)))
        return;

    HRESULT hr = CoCreateInstance(
        CLSID_SpVoice,
        NULL,
        CLSCTX_ALL,
        IID_ISpVoice,
        (void**)&pVoice
    );

    if (SUCCEEDED(hr))
    {
        pVoice->Speak(text, 0, NULL);
        pVoice->Release();
    }

    CoUninitialize();
}



class Old {
public:
    char choice;
public:
    // PROFICIENCY 1 LEVEL 1
    void prof1lvl1() {           // LEVEL 1 TITLE
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                         LEVEL 1 : Thorn                 " << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 1. Today we will learn about the Old English letter 'thorn'. Press any key to continue.");
        _getch();

        system("cls");           // QUESTION 1
        char choice;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Identify the sound made by the given letter: ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                                 Þ/þ (Thorn)" << endl;
        cout << endl << endl;
        cout << "                                                    1. T                           2. Th" << endl;
        cout << "                                                    3. Ma                          4. Sla" << endl;
        cout << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Identify the sound made by the given letter: 'Th' Also known as thorn.");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! The character 'þ', also known as 'Thorn', is an old English letter used to represent the 'th' sound." << endl;
            cout << "It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.";
            speak(L"CORRECT ANSWER! The character known as 'Thorn' is an old English letter used to represent the 'th' sound.");
            speak(L"It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.");
        }
        else {
            cout << "WRONG ANSWER! The character 'þ', also known as 'Thorn', is an old English letter used to represent the 'th' sound." << endl;
            cout << "It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.";
            speak(L"WRONG ANSWER! The character known as 'Thorn' is an old English letter used to represent the 'th' sound.");
            speak(L"It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.");
        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Identify the correct use of the letter 'þ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. Who do you think you are pal?" << endl;
        cout << "                          2. Who do you think you are þal?" << endl;
        cout << "                          3. Who do you þink you are pal?" << endl;
        cout << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Identify the correct use of the letter thorn.");
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER!";
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << "WRONG ANSWER! The third sentence is correct, because 'þ' represents the 'Th' sound.";
            speak(L"WRONG ANSWER! The third sentence is correct, because thorn represents the 'Th' sound.");
        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Identify the correct use of the letter 'þ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. þou shall not take þine's birthright" << endl;
        cout << "                          2. How do þhey noþ see þhe truth?" << endl;
        cout << "                          3. Where do you feel þain?" << endl;
        cout << "                          4. þeople in þain þrefer to be sleeping?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Identify the correct use of the letter thorn.");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!";
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << "WRONG ANSWER! The first sentence is correct, because 'þ' represents the 'Th' sound.";
            speak(L"WRONG ANSWER! The first sentence is correct, because thorn represents the 'Th' sound.");
        }
        _getch();

        system("cls");         // QUESTION 4
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Identify the correct use of the letter 'þ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. Who do you think you are pal?" << endl;
        cout << "                          2. Who do you think you are þal?" << endl;
        cout << "                          3. Who do you þink you are pal?" << endl;
        cout << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Identify the correct use of the letter thorn.");
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER!";
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << "WRONG ANSWER! The third sentence is correct, because 'þ' represents the 'Th' sound.";
            speak(L"WRONG ANSWER! The third sentence is correct, because thorn represents the 'Th' sound.");
        }
        _getch();
    }

    void prof1lvl2() {   // LEVEL 2 TITLE
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                         LEVEL 2 : Wynn                 " << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 2. Today we will learn about the Old English letter 'Wynn'. Press any key to continue.");
        _getch();

        system("cls");           // QUESTION 1
        char choice;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Identify the sound made by the given letter: ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                                 Ƿ/ƿ (Wynn): " << endl;
        cout << endl << endl;
        cout << "                                                    1. W                           2. in" << endl;
        cout << "                                                    3. e                          4. Ee" << endl;
        cout << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Identify the sound made by the given letter 'Wynn':");
        choice = _getch();
        if (choice == '1' || choice == 'w' || choice == 'W') {
            cout << endl << "CORRECT ANSWER! The character 'ƿ', also known as 'Wynn', is an old English letter used to represent the 'w' sound." << endl;
            cout << "It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.";
            speak(L"CORRECT ANSWER! The character known as 'Wynn' is an old English letter used to represent the 'w' sound."); 
            speak(L"It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.");
        }
        else {
            cout << "WRONG ANSWER! The character 'ƿ', also known as 'Wynn', is an old English letter used to represent the 'w' sound." << endl;
            cout << "It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.";
            speak(L"WRONG ANSWER! The character known as 'Wynn' is an old English letter used to represent the 'w' sound.");
            speak(L"It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.");
        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Identify the correct use of the letter 'ƿ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. Ƿ lofe to eat food" << endl;
        cout << "                          2. Ƿe love to eat food." << endl;
        cout << "                          3. Ƿe lofe to eat food.." << endl;
        cout << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Identify the correct use of the letter 'wynn':");
        choice = _getch();
        if (choice == '2' || choice == '3') {
            cout << endl << "CORRECT ANSWER! Both the second and third answers are correct." << endl;
            cout << "The reason 3rd sentence is correct, is because 'f' used to represent the 'v' sound.";
            speak(L"CORRECT ANSWER! Both the second and third answers are correct.");
            speak(L"The reason 3rd sentence is correct, is because 'f' used to represent the 'v' sound.");
        }
        else {
            cout << "WRONG ANSWER! Both the second and third answers are correct." << endl;
            cout << "The reason 3rd sentence is correct, is because 'f' used to represent the 'v' sound.";
            speak(L"WRONG ANSWER! Both the second and third answers are correct.");
            speak(L"The reason 3rd sentence is correct, is because 'f' used to represent the 'v' sound.");
        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Identify the correct use of the letter 'ƿ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. Ƿe do not need þy aid " << endl;
        cout << "                          2. Ƿen is the war starting?" << endl;
        cout << "                          3. Ƿe ƿill help you ƿin this ƿar. " << endl;
        cout << "                          4. Isn't þis more preferrable to sleeǷing?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Identify the correct use of the letter 'wynn':");
        choice = _getch();
        if (choice == '1' || choice == '3') {
            cout << endl << "CORRECT ANSWER! Both 1st and 3rd sentences were correct, because of the use of thorn and wynn.";
            speak(L"CORRECT ANSWER! Both 1st and 3rd sentences were correct, because of the use of thorn and wynn.");
        }
        else {
            cout << "WRONG ANSWER! The 1st and 3rd sentences were correct, because of the use of thorn and wynn.";
            speak(L"WRONG ANSWER! Both 1st and 3rd sentences were correct, because of the use of thorn and wynn.");
        }
        _getch();
    }

    void prof1lvl3() {   // LEVEL 3 TITLE
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                         LEVEL 3 : Ash                 " << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 3. Today we will learn about the Old English letter 'Ash'. Press any key to continue.");
        _getch();

        system("cls");           // QUESTION 1
        char choice;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Identify the sound made by the given letter: ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                                 Æ/æ (Ash): " << endl;
        cout << endl << endl;
        cout << "                                                    1. ae                           2. sh" << endl;
        cout << "                                                    3. xz                          4. a" << endl;
        cout << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Identify the sound made by the given letter:");
        choice = _getch();
        if (choice == '4') {
            cout << endl << "CORRECT ANSWER! The character 'æ', also known as 'Ash', is an old English letter used to represent the 'a' sound." << endl;
            cout << "It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.";
            speak(L"CORRECT ANSWER! The character known as 'Ash' is an old English letter used to represent the 'a' sound.");
            speak(L"It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.");
        }
        else {
            cout << "WRONG ANSWER! The character 'æ', also known as 'Ash', is an old English letter used to represent the 'a' sound." << endl;
            cout << "It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.";
            speak(L"WRONG ANSWER! The character known as 'Ash' is an old English letter used to represent the 'a' sound.");
            speak(L"It has unfortunately fallen out of public use in Modern English and is now considered old fashioned and archaic.");
        }
        _getch();
        
        system("cls");     // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Identify the sound made by the letter 'æ' (Ash): ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                                 Æ/æ (Ash)" << endl;
        cout << endl << endl;
        cout << "                                                    1. ay (as in 'day')" << endl;
        cout << "                                                    2. a (as in 'cat')" << endl;
        cout << "                                                    3. ee (as in 'see')" << endl;
        cout << "                                                    4. a (as in 'father')" << endl;
        cout << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Identify the sound made by the given letter:");
        choice = _getch();
        if (choice == '2' || choice == 'a' || choice == 'A') {
            cout << endl << "CORRECT ANSWER! 'æ' (Ash) represents the short 'a' sound like in 'cat'." << endl;
            speak(L"CORRECT ANSWER! Ash represents the short 'a' sound like in 'cat'.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'æ' (Ash) represents the short 'a' sound like in 'cat'." << endl;
            speak(L"WRONG ANSWER! Ash represents the short 'a' sound like in 'cat'.");
        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Identify the correct use of the letter 'æ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. Ælfred" << endl;
        cout << "                          2. Æliens" << endl;
        cout << "                          3. Dæd Aliens" << endl;
        cout << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Identify the correct use of the letter ash");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! The letter 'æ' represents the short 'a' soundlike in 'Alfred'." << endl;
            speak(L"CORRECT ANSWER! The letter 'Ash' represents the short 'a' sound like in 'Alfred'.");
        }
        else {
            cout << "WRONG ANSWER! Both the second and third answers are correct." << endl;
            speak(L"WRONG ANSWER! Both the second and third answers are correct.");
        }
        _getch();

        system("cls");         // QUESTION 4
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Identify the correct Old English sentence using 'æ'";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Þis is a cæt" << endl;
        cout << "                          2. Þis is a ceet" << endl;
        cout << "                          3. Þis is a cat" << endl;
        cout << "                          4. Þis is a caet" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Identify the correct Old English sentence using ash.");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'cæt' uses Ash for the 'a' sound in 'cat'." << endl;
            speak(L"CORRECT ANSWER! caet uses Ash for the 'a' sound in 'cat'.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'cæt' is the correct Old English spelling." << endl;
            speak(L"WRONG ANSWER! 'cæt' is the correct Old English spelling");
        }
        _getch();
    }
            
    //   PROFICIENCY LEVEL 2
    void prof2lvl1() {            // LEVEL 1 TITLE
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                              PROFICIENCY 2: WORDS (Old English)                        " << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"You've reached Proficiency Level 2 of this language. Now we will learn some Old English words");
        _getch();

        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                        LEVEL 1                        " << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 1");
        _getch();

        system("cls");            // QUESTION 1
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'Ƿe' mean?";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. He" << endl;
        cout << "                          2. We" << endl;
        cout << "                          3. They" << endl;
        cout << "                          4. You" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does 'we' mean?");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT! 'Ƿe' = We" << endl;
            speak(L"CORRECT!");
        }
        else {
            cout << endl << "WRONG! 'Ƿe' = We" << endl;
            speak(L"WRONG!");
        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << "Q2. What does 'þu' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Thou (you)" << endl;
        cout << "                          2. They" << endl;
        cout << "                          3. That" << endl;
        cout << "                          4. This" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does 'thu' mean? ");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "Correct!" << endl;
            speak(L"CORRECT!");
        }
        else {
            cout << endl << "Wrong! 'þu' = Thou/you" << endl;
            speak(L"WRONG!");
         }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. What does 'þæt' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. This" << endl;
        cout << "                          2. That" << endl;
        cout << "                          3. Thou" << endl;
        cout << "                          4. We" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. What does thaet mean?");
        choice = _getch();

        if (choice == '2') {
            cout << endl << "CORRECT! 'þæt' = That" << endl;
            speak(L"CORRECT!");
        }
        else {
            cout << endl << "WRONG! 'þæt' = That" << endl;
            speak(L"WRONG!");
        }
        _getch();
    }

    void prof2lvl2() {
        system("cls");         // QUESTION 1
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'ƿeoruld' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Sword" << endl;
        cout << "                          2. World" << endl;
        cout << "                          3. Warrior" << endl;
        cout << "                          4. Word" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does 'weorld' mean?");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT! 'ƿeoruld' means World." << endl;
            speak(L"CORRECT!");
        }
        else {
            cout << endl << "WRONG! 'ƿeoruld' means World." << endl;
            speak(L"WRONG!");
        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'cyning' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Knight" << endl;
        cout << "                          2. Prince" << endl;
        cout << "                          3. King" << endl;
        cout << "                          4. Castle" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does 'cyning' mean?");
        choice = _getch();

        if (choice == '3') {
            cout << endl << "CORRECT! 'cyning' means King." << endl;
            speak(L"CORRECT! 'cyning' means King.");
        }
        else {
            cout << endl << "WRONG! 'cyning' means King." << endl;
            speak(L"WRONG! 'cyning' means King.");
        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the Old English word for 'King': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Type the Old English word for 'King'");
        string answer;
        cin >> answer;
        if (answer == "cyning" || answer == "Cyning" || answer == "CYNING") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct word was 'cyning'." << endl;
            speak(L"WRONG ANSWER! The correct word was 'cyning'.");
        }
        _getch();

        system("cls");         // QUESTION 4
        cout << "------------------------------------------------------------------------------------------------------------------------";
        wcout << endl << endl << "Q4. Type the Modern translation for the Old English word 'eorþe': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 4. Type the Modern translation for the Old English word 'eorthe':");
        string answer1;
        cin >> answer1;
        if (answer1 == "earth" || answer1 == "Earth" || answer1 == "EARTH" || answer1 == "eorth" || answer1 == "Eorth" || answer1 == "EORTH") {
            cout << endl << "CORRECT ANSWER! 'eorþe' was the word for 'Earth' in Old English" << endl;
            speak(L"CORRECT ANSWER!'eorþe' was the word for 'Earth' in Old English");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct word was 'Earth'." << endl;
            speak(L"WRONG ANSWER! The correct word was 'Earth'.");
        }
        _getch();

        system("cls");         // QUESTION 5
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q5. Which sentence correctly uses previous Old English words?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Þe cyning rules þe ƿeoruld." << endl;
        cout << "                          2. Þe king rules þe world." << endl;
        cout << "                          3. Þe cyning rules þe world." << endl;
        cout << "                          4. Þe king rules þe ƿeoruld." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 5. Which sentence correctly uses previous Old English words?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT! This sentence properly uses both 'þ' and 'ƿ' alongside Old English vocabulary." << endl;
            speak(L"CORRECT! This sentence properly uses thorn and wynn alongside Old English vocabulary.");
        }
        else {
            cout << endl << "WRONG! The first sentence is fully written in proper Old English style." << endl;
            speak(L"WRONG! The first sentence is fully written in proper Old English style.");
        }
        _getch();
    }

    void prof2lvl3() {
        system("cls");         // QUESTION 1
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'sƿeord' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Shield" << endl;
        cout << "                          2. Spear" << endl;
        cout << "                          3. Sword" << endl;
        cout << "                          4. Warrior" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does 'sweord' mean?");
        choice = _getch();

        if (choice == '3') {
            cout << endl << "CORRECT! 'sƿeord' means Sword." << endl;
            speak(L"CORRECT! 'sweord' means Sword.");
        }
        else {
            cout << endl << "WRONG! 'sƿeord' means Sword." << endl;
            speak(L"WRONG! 'sweord' means Sword.");
        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'Hƿæt' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Listen!" << endl;
        cout << "                          2. Sleep" << endl;
        cout << "                          3. Warrior" << endl;
        cout << "                          4. Kingdom" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does 'Hwaet' mean?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT! 'Hƿæt!' is often translated as 'Listen!' or 'Lo!'" << endl;
            speak(L"CORRECT! 'Hwaet!' is often translated as 'Listen!' or 'Lo!'");
        }
        else {
            cout << endl << "WRONG! 'Hƿæt!' is often translated as 'Listen!' or 'Lo!'" << endl;
            speak(L"WRONG! 'Hwaet!' is often translated as 'Listen!' or 'Lo!'");
        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Identify the correct Old English sentence:" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Hƿæt! Þe cyning has a sƿeord." << endl;
        cout << "                          2. What! The king has a sword." << endl;
        cout << "                          3. Hƿæt! Þe king has a sword." << endl;
        cout << "                          4. What! Þe cyning has a sƿeord." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Q3.Identify the correct Old English sentence: ");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! This sentence consistently uses Old English spelling and letters." << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG! The first sentence is the most correct Old English form." << endl;
            speak(L"WRONG ANSWER!");
        }
        _getch();

        system("cls");         // QUESTION 4
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Type the modern translation of the following Old English sentence: ";
        cout << endl << endl << "                          1. Hƿæt! Þe cyning has a sƿeord." << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 4. Type the modern translation of the following Old English sentence:");

        string answer;
        cin >> answer;
        if (answer == "What! The king has a sword" || answer == "Lo! The king has a sword" || answer == "Listen! The king has a sword" || answer == "what! the king has a sword" || answer == "lo! the king has a sword" || answer == "listen! the king has a sword" || answer == "what! The king has a sword" || answer == "lo! The king has a sword" || answer == "listen! The king has a sword") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct word was 'cyning'." << endl;
            speak(L"WRONG ANSWER!");
        }
        _getch();

    }
        

    //   PROFICIENCY LEVEL 3
    void prof3lvl1() {
        system("cls");         // QUESTION 1
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate the sentence:" << endl << endl;
        cout << "                  Þe cyning carries a sƿeord.";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. The king carries a sword." << endl;
        cout << "                          2. The knight carries a shield." << endl;
        cout << "                          3. The warrior carries a spear." << endl;
        cout << "                          4. The prince carries a sword." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Translate the sentence");

        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! 'cyning' means king and 'sƿeord' means sword." << endl;
            speak(L"WRONG ANSWER!");
        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Translate the sentence:" << endl << endl;
        cout << "                  Ƿe ƿillan help þe cyning.";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. We will help the king." << endl;
        cout << "                          2. They will attack the king." << endl;
        cout << "                          3. We want the sword." << endl;
        cout << "                          4. Thou will help the king." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Translate the sentence");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG! 'Ƿe' means we and 'ƿillan' means will/want." << endl;
            speak(L"WRONG ANSWER!");

        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Which sentence is most properly written in Old English style?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Þe cyning rules þe ƿeoruld." << endl;
        cout << "                          2. The cyning rules þe world." << endl;
        cout << "                          3. Þe king rules þe ƿeoruld." << endl;
        cout << "                          4. The king rules the world." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Which sentence is most properly written in Old English style?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");

        }
        else {
            cout << endl << "WRONG ANSWER! The first sentence uses proper Old English spelling throughout." << endl;
            speak(L"WRONG ANSWER!");

        }
        _getch();
    }



    void prof3lvl2() {
        system("cls");         // QUESTION 1
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate the sentence:" << endl << endl;
        cout << "                  Hwæt! Wé Gárdena in géardagum.";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. Why! Our Gardens in days of year." << endl;
        cout << "                          2. Lo! We gardens in the year of days." << endl;
        cout << "                          3. “Lo! We Spear-Danes in days of old." << endl;
        cout << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER!";
            speak(L"CORRECT ANSWER!");

        }
        else {
            cout << "WRONG ANSWER! The third sentence is correct, because 'þ' represents the 'Th' sound and 'g' used to sound like 'y'.";
            speak(L"WRONG ANSWER!");

        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Translate the sentence:" << endl << endl;
        cout << "                  Þetta er góður dagur.";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl;
        cout << "                          1. This is a good day." << endl;
        cout << "                          2. Data or good dogs." << endl;
        cout << "                          3. This is a good dog." << endl;
        cout << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!";
            speak(L"CORRECT ANSWER!");

        }
        else {
            cout << "WRONG ANSWER! The first sentence is correct, because 'þ' represents the 'Th' sound and 'g' used to sound like 'y'.";
            speak(L"WRONG");

        }
        _getch();

    }

    void prof3lvl3() {

        system("cls");         // QUESTION 1
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate the sentence:" << endl << endl;
        cout << "                  Hƿæt! Ƿe are ready for battle.";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Listen! We are ready for battle." << endl;
        cout << "                          2. We are sleeping peacefully." << endl;
        cout << "                          3. The king is afraid." << endl;
        cout << "                          4. The world is ending." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Translate the sentence:");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");

        }
        else {
            cout << endl << "WRONG! 'Hƿæt!' means Listen! or Lo!" << endl;
            speak(L"WRONG");

        }
        _getch();

        system("cls");         // QUESTION 2
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Identify the properly written Old English sentence:" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Þu hast a sƿeord." << endl;
        cout << "                          2. You hast a sword." << endl;
        cout << "                          3. Þu has a sword." << endl;
        cout << "                          4. Thou hast a sword." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Identify the properly written Old English sentence");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG! The first sentence uses proper Old English style." << endl;
            speak(L"WRONG");
        }
        _getch();

        system("cls");         // QUESTION 3
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. What does 'gód cyning' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Bad warrior" << endl;
        cout << "                          2. Great world" << endl;
        cout << "                          3. Good king" << endl;
        cout << "                          4. Strong sword" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. What does good cyning mean?");
        choice = _getch();

        if (choice == '3') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER");

        }
        else {
            cout << endl << "WRONG! 'gód cyning' means good king." << endl;
            speak(L"WRONG!");

        }
        _getch();

        system("cls");         // QUESTION 4
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Which sentence is fully Old English styled?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Hƿæt! Þe gód cyning has a sƿeord." << endl;
        cout << "                          2. Listen! The good king has a sword." << endl;
        cout << "                          3. Hƿæt! The gód king has a sƿeord." << endl;
        cout << "                          4. Listen! Þe good cyning has a sword." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 4. Which sentence is fully Old English styled?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER");
        }
        else {
            cout << endl << "WRONG! The first sentence is fully consistent in Old English style." << endl;
            speak(L"WRONG!");
        }
        _getch();
    }

    void prof3lvl4() {

        system("cls");   // LEVEL TITLE
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                   PROFICIENCY 3 - LEVEL 4 : READING & TRANSLATION";
        cout << endl << endl << endl;
        cout << "                    In this level, you will read and translate full Old English passages.";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 4. Reading and translation. You will now translate full Old English passages.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate the following sentence:" << endl << endl;

        cout << "                  Hwæt! Þe cyning rides ofer þe eorðan mid his sƿeorde." << endl;

        cout << endl << endl << endl;
        cout << "                          1. Listen! The king rides over the earth with his sword." << endl;
        cout << "                          2. The warrior sleeps beneath the stars." << endl;
        cout << "                          3. The king throws away his shield." << endl;
        cout << "                          4. Listen! The prince rides across the sea." << endl;

        cout << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 1. Translate the following Old English sentence.");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'rides ofer þe eorðan' means rides over the earth." << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The first translation is correct." << endl;
            speak(L"WRONG ANSWER! The first translation is correct.");
        }
        _getch();


        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Type the Modern English translation:" << endl << endl;

        cout << "                  Þu eart min freond." << endl;

        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 2. Type the Modern English translation.");

        string answer;
        cin.ignore();
        getline(cin, answer);

        if (answer == "You are my friend" ||
            answer == "you are my friend" ||
            answer == "Thou are my friend" ||
            answer == "thou are my friend" ||
            answer == "Thou art my friend" ||
            answer == "thou art my friend") {

            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct translation was 'You are my friend.'" << endl;
            speak(L"WRONG ANSWER! The correct translation was You are my friend.");
        }

        _getch();


        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Which paragraph is written most consistently in Old English style?" << endl;

        cout << endl << endl;

        cout << "1. Hwæt! Þe cyning has a sƿeord and rides þurh þe ƿeoruld." << endl << endl;

        cout << "2. Listen! The king has a sword and rides through the world." << endl << endl;

        cout << "3. Hwæt! The cyning has a sword and rides þurh þe world." << endl << endl;

        cout << "4. Listen! Þe king has a sƿeord and rides through þe ƿeoruld." << endl;

        cout << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 3. Which paragraph is written most consistently in Old English style?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! The first paragraph consistently uses Old English spelling and letters." << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The first paragraph is fully Old English styled." << endl;
            speak(L"WRONG ANSWER! The first paragraph is fully Old English styled.");
        }

        _getch();


        // QUESTION 4
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Translate the following passage:" << endl << endl;

        cout << "                  Fæder ure, þu þe eart on heofonum." << endl;

        cout << endl << endl;

        cout << "                          1. Our Father, thou who art in heaven." << endl;
        cout << "                          2. Great king above the earth." << endl;
        cout << "                          3. Father of warriors in battle." << endl;
        cout << "                          4. Lord of swords and kings." << endl;

        cout << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 4. Translate the following passage.");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! This is the opening line of the Lord's Prayer in Old English." << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The first translation is correct." << endl;
            speak(L"WRONG ANSWER! The first translation is correct.");
        }
        _getch();


        // QUESTION 5
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q5. Type the Modern English translation for:" << endl << endl;

        cout << "                  TÞe cyning has a sƿeord" << endl;

        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 5. Type the Old English translation.");

        string answer2;
        cin.ignore();
        getline(cin, answer2);

        if (answer2 == "THE KING HAS A SWORD" ||
            answer2 == "The king has a sword" ||
            answer2 == "the king has a sword" ||
            answer2 == "þe cyning has a sƿeord.") {

            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct sentence was 'The king has a sword.'" << endl;
            speak(L"WRONG ANSWER!");
        }

        _getch();


        // FINAL READING
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl;

        cout << "                                       FINAL READING PASSAGE";
        cout << endl << endl;

        cout << "Hwæt! Þe gód cyning rides ofer þe ƿeoruld." << endl;
        cout << "He hæfþ a sƿeord and protects his folc." << endl;
        cout << "Þe people sing and glædlice folgiaþ him." << endl;
        cout << "Fæder ure, þu þe eart on heofonum." << endl;

        cout << endl << endl;

        cout << "                              Congratulations! You can now read basic Old English.";
        cout << endl << endl;

        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Congratulations! You can now read basic Old English.");
        _getch();
    }

    void final() {
        system("cls");  // FINAL CHALLENGE TITLE SCREEN
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl;
        cout << "                                            FINAL CHALLENGE : LORD'S PRAYER";
        cout << endl << endl;
        cout << "                         You will now translate portions of one of the most famous" << endl;
        cout << "                           prayers in history using your Old English knowledge." << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"FINAL CHALLENGE : THE LORD'S PRAYER");
        speak(L"You will now translate portions of one of the most famous prayers in history using your Old English knowledge");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate the following Old English line:" << endl << endl;
        cout << "                  Fæder ure, þu þe eart on heofonum," << endl;
        cout << endl << endl << endl << endl;
        cout << "                          1. Our Father, thou who art in heaven," << endl;
        cout << "                          2. Our king, thou who art in battle," << endl;
        cout << "                          3. Father of warriors upon earth," << endl;
        cout << "                          4. Great king of the heavens," << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Translate the following Old English line:");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'Fæder ure' means 'Our Father' and 'heofonum' refers to heaven." << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG! The first translation is correct." << endl;
            speak(L"WRONG! The first translation is correct.");
        }
        _getch();


        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does the word 'heofonum' most closely mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Kingdom" << endl;
        cout << "                          2. Heaven" << endl;
        cout << "                          3. Warrior" << endl;
        cout << "                          4. Sword" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Q2. What does the word 'heovonum' most closely mean?");
        choice = _getch();

        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! 'Heofonum' refers to Heaven." << endl;
            speak(L"CORRECT ANSWER! 'Heovonum' refers to Heaven");
        }
        else {
            cout << endl << "WRONG! 'Heofonum' means Heaven." << endl;
            speak(L"Wrong! 'Heovonum' means Heaven");
        }
        _getch();


        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Translate the following line:" << endl << endl;
        cout << "                  Si þin nama gehalgod." << endl;
        cout << endl << endl << endl << endl;
        cout << "                          1. Thy kingdom come." << endl;
        cout << "                          2. Blessed be the warriors." << endl;
        cout << "                          3. Hallowed be thy name." << endl;
        cout << "                          4. Glory to the king." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Translate the following line: ");
        choice = _getch();

        if (choice == '3') {
            cout << endl << "CORRECT ANSWER! 'Nama' means name, and 'gehalgod' means hallowed or sanctified." << endl;
            speak(L"CORRECT ANSWER!");
        }
        else {
            cout << endl << "WRONG! The third translation is correct." << endl;
            speak(L"WRONG! The third translation is correct.");
        }
        _getch();


        // QUESTION 4
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Which sentence is written most correctly in Old English style?" << endl;
        cout << endl << endl << endl << endl;
        cout << "                          1. Fæder ure, þu þe eart on heofonum." << endl;
        cout << "                          2. Father ure, thou þe art in heaven." << endl;
        cout << "                          3. Fæder our, þu who art on heofonum." << endl;
        cout << "                          4. Our father, þu þe eart in heaven." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 4. Which sentence is written most correctly in Old English style?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! The first sentence is the most consistently written in Old English style." << endl;
            speak(L"CORRECT ANSWER! The first sentence is the most consistently written in Old English style.");
        }
        else {
            cout << endl << "WRONG! The first sentence is the correct answer." << endl;
            speak(L"WRONG! The first sentence is the correct answer.");
        }
        _getch();


        // FINAL PARAGRAPH
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl;
        cout << "                                      THE LORD'S PRAYER IN OLD ENGLISH";
        cout << endl << endl << endl;

        cout << "Fæder ure, þu þe eart on heofonum," << endl;
        cout << "Si þin nama gehalgod." << endl;
        cout << "Tobecume þin rice." << endl;
        cout << "Gewurþe ðin willa on eorðan swa swa on heofonum." << endl;
        cout << "Urne gedæghwamlican hlaf syle us todæg." << endl;
        cout << "And forgyf us ure gyltas," << endl;
        cout << "swa swa we forgyfað urum gyltendum." << endl;
        cout << endl << endl;

        cout << "Our Father, which art in heaven," << endl;
        cout << "Hallowed be thy Name." << endl;
        cout << "Thy Kingdom come." << endl;
        cout << "Thy will be done in Earth as it is in Heaven." << endl;
        cout << "Give us this day our daily bread." << endl;
        cout << "And forgive us our trespasses," << endl;
        cout << "As we forgive them that trespass against us." << endl << endl << endl;
        cout << "                               Congratulations! You have completed Old English.";
        cout << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Congratulations! You have completed the Old English course. The following is an extract of the Lord's Prayer in Old English.");
        speak(L"Press any key to return to the main menu.");
        _getch();

    }
};



class Spanish {
public:
    char choice;

    // PROFICIENCY 1 : BASIC WORDS
    void prof1lvl1() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                LEVEL 1 : Greetings" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 1. Today we will learn how to greet people.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'Hola' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Goodbye" << endl;
        cout << "                          2. Please" << endl;
        cout << "                          3. Hello" << endl;
        cout << "                          4. Thanks" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does Hola mean?");
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER! 'Hola' means Hello." << endl;
            speak(L"Correct answer. Hola means Hello.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Hola' means Hello." << endl;
            speak(L"Wrong answer. Hola means Hello.");
        }
        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'Adiós' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Goodbye" << endl;
        cout << "                          2. Good morning" << endl;
        cout << "                          3. Friend" << endl;
        cout << "                          4. Food" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does Adios mean?");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'Adiós' means Goodbye." << endl;
            speak(L"Correct answer. Adios means Goodbye.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Adiós' means Goodbye." << endl;
            speak(L"Wrong answer. Adios means Goodbye.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Which sentence correctly says 'Hello friend'?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Hola amigo" << endl;
        cout << "                          2. Adiós amigo" << endl;
        cout << "                          3. Gracias amigo" << endl;
        cout << "                          4. Por favor amigo" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Which sentence correctly says Hello friend?");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Hola amigo' means Hello friend." << endl;
            speak(L"Wrong answer. Hola amigo means Hello friend.");
        }
        _getch();
    }

    void prof1lvl2() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                 LEVEL 2 : Numbers" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 2. Today we will learn about numbers in Spanish.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'Uno' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. One" << endl;
        cout << "                          2. Two" << endl;
        cout << "                          3. Three" << endl;
        cout << "                          4. Four" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does Uno mean?");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! Uno means One." << endl;
            speak(L"Wrong answer. Uno means One.");
        }
        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'Cinco' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Seven" << endl;
        cout << "                          2. Five" << endl;
        cout << "                          3. Six" << endl;
        cout << "                          4. Ten" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does Cinco mean?");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! Cinco means Five." << endl;
            speak(L"Wrong answer. Cinco means Five.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the Spanish word for 'Three': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Type the Spanish word for Three.");
        string answer;
        cin >> answer;
        if (answer == "Tres" || answer == "tres" || answer == "TRES") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was 'Tres'." << endl;
            speak(L"Wrong answer. The correct answer was Tres.");
        }
        _getch();
    }

    void prof1lvl3() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                                  LEVEL 3 : Colors" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 3. Today we will learn colors in Spanish.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'Rojo' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Blue" << endl;
        cout << "                          2. Red" << endl;
        cout << "                          3. Green" << endl;
        cout << "                          4. Yellow" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does Roho mean?");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! Rojo means Red." << endl;
            speak(L"Wrong answer. Roho means Red.");
        }
        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'Azul' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Black" << endl;
        cout << "                          2. White" << endl;
        cout << "                          3. Blue" << endl;
        cout << "                          4. Pink" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does Azul mean?");
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! Azul means Blue." << endl;
            speak(L"Wrong answer. Azul means Blue.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the Spanish word Red: ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Type the Spanish word for Red.");
        string answer;
        cin >> answer;
        if (answer == "rojo" || answer == "Rojo" || answer == "ROJO") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was Rojo." << endl;
            speak(L"Wrong answer. The correct answer was Roho.");
        }
        _getch();
    }


    // PROFICIENCY 2 : SENTENCES
    void prof2lvl1() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                        LEVEL 1 : Basic Sentences" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 1. Today we will learn basic Spanish sentences.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. What does 'Buenos días' mean?" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Good afternoon" << endl;
        cout << "                          2. Good night" << endl;
        cout << "                          3. Good morning" << endl;
        cout << "                          4. Goodbye" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. What does Buenos dias mean?");
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER! 'Buenos días' means Good morning." << endl;
            speak(L"Correct answer. Buenos dias means Good morning.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Buenos días' means Good morning." << endl;
            speak(L"Wrong answer. Buenos dias means Good morning.");
        }
        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does '¿Cómo estás?' mean?" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. What is your name?" << endl;
        cout << "                          2. How are you?" << endl;
        cout << "                          3. Where are you?" << endl;
        cout << "                          4. Goodbye friend" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does Como estas mean?");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! '¿Cómo estás?' means How are you?" << endl;
            speak(L"Correct answer. Como estas means How are you?");
        }
        else {
            cout << endl << "WRONG ANSWER! '¿Cómo estás?' means How are you?" << endl;
            speak(L"Wrong answer. Como estas means How are you?");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the Spanish translation for 'Thank you': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Type the Spanish translation for Thank you.");
        string answer;
        cin >> answer;
        if (answer == "Gracias" || answer == "gracias" || answer == "GRACIAS") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was Gracias." << endl;
            speak(L"Wrong answer. The correct answer was Gracias.");
        }
        _getch();
    }

    void prof2lvl2() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                        LEVEL 2 : Animals & Objects" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 2. Today we will learn Spanish words for animals and objects.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate: 'El gato es negro.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. The dog is black." << endl;
        cout << "                          2. The cat is black." << endl;
        cout << "                          3. The bird is white." << endl;
        cout << "                          4. The horse is brown." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Translate. El gato es negro.");
        choice = _getch();
        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! 'El gato es negro' means The cat is black." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'El gato es negro' means The cat is black." << endl;
            speak(L"Wrong answer. It means The cat is black.");
        }
        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'perro' mean?" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Cat" << endl;
        cout << "                          2. Fish" << endl;
        cout << "                          3. Dog" << endl;
        cout << "                          4. Horse" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. What does perro mean?");
        choice = _getch();
        if (choice == '3') {
            cout << endl << "CORRECT ANSWER! 'Perro' means Dog." << endl;
            speak(L"Correct answer. Perro means Dog.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Perro' means Dog." << endl;
            speak(L"Wrong answer. Perro means Dog.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the Spanish word for 'House': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Type the Spanish word for House.");
        string answer;
        cin >> answer;
        if (answer == "Casa" || answer == "casa" || answer == "CASA") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was Casa." << endl;
            speak(L"Wrong answer. The correct answer was Casa.");
        }
        _getch();
    }

    void prof2lvl3() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                        LEVEL 3 : Daily Activities" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 3. Today we will learn Spanish daily activities.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate: 'Yo tengo un libro.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. I have a book." << endl;
        cout << "                          2. I read a book." << endl;
        cout << "                          3. I lost a book." << endl;
        cout << "                          4. I bought a book." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 1. Translate. Yo tengo un libro.");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'Yo tengo un libro' means I have a book." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Yo tengo un libro' means I have a book." << endl;
            speak(L"Wrong answer. It means I have a book.");
        }
        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Translate: 'Ella bebe agua.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. She drinks water." << endl;
        cout << "                          2. She eats bread." << endl;
        cout << "                          3. She reads books." << endl;
        cout << "                          4. She likes music." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Translate. Ella bebe agua.");
        choice = _getch();
        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'Ella bebe agua' means She drinks water." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Ella bebe agua' means She drinks water." << endl;
            speak(L"Wrong answer. It means She drinks water.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the Spanish word for Water: ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 3. Type the Spanish word for Water.");
        string answer;
        cin >> answer;
        if (answer == "agua" || answer == "Agua" || answer == "AGUA") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was Agua." << endl;
            speak(L"Wrong answer. The correct answer was Agua.");
        }
        _getch();
    }


    // PROFICIENCY 3 : READING & TRANSLATION
    void prof3lvl1() {

        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                     LEVEL 1 : Reading Basics" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 1. Today we will practice reading and translating Spanish.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate: 'Mi amigo tiene un perro.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. My friend has a dog." << endl;
        cout << "                          2. My brother has a cat." << endl;
        cout << "                          3. My teacher has a horse." << endl;
        cout << "                          4. My friend lost a dog." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 1. Translate. Mi amigo tiene un perro.");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! 'Mi amigo tiene un perro' means My friend has a dog." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The sentence means My friend has a dog." << endl;
            speak(L"Wrong answer. The sentence means My friend has a dog.");
        }

        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does 'llamo' mean?" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Day" << endl;
        cout << "                          2. Llama" << endl;
        cout << "                          3. Name" << endl;
        cout << "                          4. Tomato" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 2. What does yamo mean?");
        choice = _getch();

        if (choice == '3') {
            cout << endl << "CORRECT ANSWER! 'llamo' means Name." << endl;
            speak(L"Correct answer. yamo means Name.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'llamo' means Name." << endl;
            speak(L"Wrong answer. yamo means Name.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. What does 'escuela' mean?" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. Library" << endl;
        cout << "                          2. School" << endl;
        cout << "                          3. Hospital" << endl;
        cout << "                          4. House" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 3. What does escuela mean?");
        choice = _getch();

        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! 'Escuela' means School." << endl;
            speak(L"Correct answer. Escuela means School.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Escuela' means School." << endl;
            speak(L"Wrong answer. Escuela means School.");
        }
        _getch();

        // QUESTION 4
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Type the Spanish translation for 'My name is': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 4. Type the Spanish translation for My name is.");

        string answer;
        cin.ignore();
        getline(cin, answer);

        if (answer == "Me llamo" || answer == "me llamo") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was 'Me llamo'." << endl;
            speak(L"Wrong answer. The correct answer was Me llamo.");
        }

        _getch();
    }

    void prof3lvl2() {

        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                   LEVEL 2 : Sentence Translation" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 2. Today we will practice translating longer Spanish sentences.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate: 'Nosotros vamos a la escuela.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. We are going to school." << endl;
        cout << "                          2. They are leaving school." << endl;
        cout << "                          3. We are building a school." << endl;
        cout << "                          4. They are entering the house." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 1. Translate. Nosotros vamos a la escuela.");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! The sentence means We are going to school." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The sentence means We are going to school." << endl;
            speak(L"Wrong answer. The sentence means We are going to school.");
        }

        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Translate: 'El niño come pan.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. The child drinks milk." << endl;
        cout << "                          2. The boy eats bread." << endl;
        cout << "                          3. The teacher reads books." << endl;
        cout << "                          4. The dog eats meat." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 2. Translate. El nino comay pan.");
        choice = _getch();

        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! The sentence means The boy eats bread." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The sentence means The boy eats bread." << endl;
            speak(L"Wrong answer. The sentence means The boy eats bread.");
        }

        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Type the English translation for 'Buenas noches': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 3. Type the English translation for Buenas noches.");

        string answer;
        cin.ignore();
        getline(cin, answer);

        if (answer == "Good night" || answer == "good night") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Buenas noches' means Good night." << endl;
            speak(L"Wrong answer. Buenas noches means Good night.");
        }

        _getch();
    }

    void prof3lvl3() {

        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                  LEVEL 3 : Advanced Translation" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Level 3. Today we will practice advanced Spanish translation.");
        _getch();

        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate: 'La comida está en la mesa.'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. The food is on the table." << endl;
        cout << "                          2. The water is on the floor." << endl;
        cout << "                          3. The dog is in the house." << endl;
        cout << "                          4. The books are on the chair." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 1. Translate. La comida esta en la mesa.");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! The sentence means The food is on the table." << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The sentence means The food is on the table." << endl;
            speak(L"Wrong answer. The sentence means The food is on the table.");
        }

        _getch();

        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. Type the Spanish translation for 'Yo tengo una casa': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 2. Type the Spanish translation for Yo tengo una casa.");
        string answer;
        cin.ignore();
        getline(cin, answer);
        if (answer == "I have a house" || answer == "i have a house") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was 'I have a house'." << endl;
            speak(L"Wrong answer. The correct answer was I have a house.");
        }
        _getch();

        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Which sentence means 'Where is the school?'" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. ¿Dónde está la escuela?" << endl;
        cout << "                          2. ¿Qué es la escuela?" << endl;
        cout << "                          3. ¿Quién tiene la escuela?" << endl;
        cout << "                          4. ¿Cuándo está la escuela?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 3. Which sentence means Where is the school?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The first sentence is correct." << endl;
            speak(L"Wrong answer. The first sentence is correct.");
        }

        _getch();

        // QUESTION 4
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Type the Spanish translation for 'I have a house': ";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Question 4. Type the Spanish translation for I have a house.");
        cin.ignore();
        getline(cin, answer);
        if (answer == "Yo tengo una casa" || answer == "yo tengo una casa") {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was 'Yo tengo una casa'." << endl;
            speak(L"Wrong answer. The correct answer was Yo tengo una casa.");
        }
        _getch();
    }

    void final() {

        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl;
        cout << "                                         FINAL CHALLENGE : SPANISH STORY";
        cout << endl << endl;
        cout << "                            You will now read and translate a longer Spanish";
        cout << endl;
        cout << "                             passage using everything you have learned so far.";
        cout << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Final Challenge. You will now translate a longer Spanish story.");
        _getch();


        // QUESTION 1
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q1. Translate the following sentence:" << endl << endl;
        cout << "                  Hola amigo. ¿Cómo estás?" << endl;
        cout << endl << endl << endl << endl;
        cout << "                          1. Hello friend. How are you?" << endl;
        cout << "                          2. Goodbye friend. Where are you?" << endl;
        cout << "                          3. Good morning teacher. How old are you?" << endl;
        cout << "                          4. Hello brother. What is your name?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 1. Translate the sentence. Hola amigo. Como estas?");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER! The sentence means Hello friend. How are you?" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct answer was Hello friend. How are you?" << endl;
            speak(L"Wrong answer. The correct answer was Hello friend. How are you?");
        }

        _getch();


        // QUESTION 2
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q2. What does the word 'escuela' mean?" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "                          1. House" << endl;
        cout << "                          2. School" << endl;
        cout << "                          3. Library" << endl;
        cout << "                          4. Friend" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 2. What does escuela mean?");
        choice = _getch();

        if (choice == '2') {
            cout << endl << "CORRECT ANSWER! 'Escuela' means School." << endl;
            speak(L"Correct answer. Escuela means School.");
        }
        else {
            cout << endl << "WRONG ANSWER! 'Escuela' means School." << endl;
            speak(L"Wrong answer. Escuela means School.");
        }

        _getch();


        // QUESTION 3
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q3. Translate the following sentence:" << endl << endl;
        cout << "                  Nosotros vamos a la escuela por la mañana." << endl;
        cout << endl << endl << endl << endl;
        cout << "                          1. We are going to school in the morning." << endl;
        cout << "                          2. They are leaving the house at night." << endl;
        cout << "                          3. We are eating food in the evening." << endl;
        cout << "                          4. The teacher is reading a book." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 3. Translate the sentence. Nosotros vamos a la escuela por la manana.");
        choice = _getch();

        if (choice == '1') {
            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The sentence means We are going to school in the morning." << endl;
            speak(L"Wrong answer. The sentence means We are going to school in the morning.");
        }

        _getch();


        // QUESTION 4
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << "Q4. Type the English translation for the following sentence:" << endl << endl;
        cout << "                  El niño bebe agua y come pan." << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";

        speak(L"Question 4. Translate. El nino bebe agua y come pan.");

        string answer;
        cin.ignore();
        getline(cin, answer);

        if (answer == "The boy drinks water and eats bread" ||
            answer == "the boy drinks water and eats bread" ||
            answer == "The child drinks water and eats bread" ||
            answer == "the child drinks water and eats bread") {

            cout << endl << "CORRECT ANSWER!" << endl;
            speak(L"Correct answer.");
        }
        else {
            cout << endl << "WRONG ANSWER! The correct translation was:" << endl;
            cout << "'The boy drinks water and eats bread.'" << endl;

            speak(L"Wrong answer. The correct translation was The boy drinks water and eats bread.");
        }

        _getch();


        // FINAL STORY
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl;
        cout << "                                         FINAL SPANISH READING";
        cout << endl << endl << endl;

        cout << "Hola amigo." << endl;
        cout << "Me llamo Carlos y yo voy a la escuela cada mañana." << endl;
        cout << "Mi amigo tiene un perro negro y una casa grande." << endl;
        cout << "Nosotros estudiamos español y leemos libros juntos." << endl;
        cout << "Por la tarde, comemos pan y bebemos agua." << endl;
        cout << "La comida está en la mesa y la música es muy buena." << endl;
        cout << "Por la noche, decimos 'Buenas noches' y regresamos a casa." << endl;

        cout << endl << endl;
        cout << "English Translation:" << endl << endl;

        cout << "Hello friend." << endl;
        cout << "My name is Carlos and I go to school every morning." << endl;
        cout << "My friend has a black dog and a big house." << endl;
        cout << "We study Spanish and read books together." << endl;
        cout << "In the afternoon, we eat bread and drink water." << endl;
        cout << "The food is on the table and the music is very good." << endl;
        cout << "At night, we say 'Good night' and return home." << endl;

        cout << endl << endl;
        cout << "                         Congratulations! You have completed the Spanish course.";
        cout << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Congratulations. You have completed the Spanish course.");

        _getch();
    }
};

class Language {
public:
    char l1;
    char prof;
public:
    void select() {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                          Which language would you like to learn?" << endl;
        cout << endl << endl;
        cout << "                                                     1. Old English" << endl;
        cout << "                                                     2. Spanish" << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Which language would you like to learn today?");
        this->l1 = _getch();
        
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                                            Describe your Proficiency in this Language" << endl;
        cout << endl << endl;
        cout << "                                                     1. Basic (Alphabets)" << endl;
        cout << "                                                     2. Average (Words)" << endl;
        cout << "                                                     3. Intermediate (Sentences)" << endl << endl;
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Nice choice, Describe your proficiency in this language.");
        this->prof = _getch();
        if (l1 == '1') {
            Old o1;
            if (prof == '1') {
                o1.prof1lvl1();
                o1.prof1lvl2();
                o1.prof1lvl3();
                system("cls");
                cout << "------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "                                 CONGRATS! You have passed 'Proficiency Level 1' in Old English." << endl;
                cout << "                                           Would you like to move on to the next Level?" << endl;
                cout << endl << endl << endl << endl;
                cout << "                                                 Yes (Y/y)                 No (N/n)";
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------";
                speak(L"CONGRATS! You have passed 'Proficiency Level 1' in Old English.");
                speak(L"Would you like to move on to the next Level?");
                char yn;
                yn =_getch();
                if (yn == 'y' || yn == 'Y' || yn == '1') {
                    prof = '2';
                }
                if (yn == 'n' || yn == 'N' || yn == '2') {
                    system("cls");
                    Language l;
                    l.select();
                }
                if (yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N' && yn != '1') {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "                                 CONGRATS! You have passed 'Proficiency Level 1' in Old English." << endl;
                    cout << "                                           Would you like to move on to the next Level?" << endl;
                    cout << endl << endl << endl << endl;
                    cout << "                                                         ERROR! INVALID INPUT!";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    speak(L"ERROR! INVALID INPUT");
                }                
            }
            if (prof == '2') {
                o1.prof2lvl1();
                o1.prof2lvl2();
                o1.prof2lvl3();
                system("cls");
                cout << "------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "                                 CONGRATS! You have passed 'Proficiency Level 2' in Old English." << endl;
                cout << "                                           Would you like to move on to the next Level?" << endl;
                cout << endl << endl << endl << endl;
                cout << "                                                 Yes (Y/y)                 No (N/n)";
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------";
                speak(L"CONGRATS! You have passed 'Proficiency Level 2' in Old English.");
                speak(L"Would you like to move on to the next Level?");
                char yn;
                yn = _getch();
                if (yn == 'y' || yn == 'Y' || yn == '1') {
                    prof = '3';
                }
                if (yn == 'n' || yn == 'N' || yn == '2') {
                    system("cls");
                    Language l;
                    l.select();
                }
                if (yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N' && yn != '1') {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "                                 CONGRATS! You have passed 'Proficiency Level 2' in Old English." << endl;
                    cout << "                                           Would you like to move on to the next Level?" << endl;
                    cout << endl << endl << endl << endl;
                    cout << "                                                         ERROR! INVALID INPUT!";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    speak(L"ERROR! INVALID INPUT");
                }
            }
            if (prof == '3') {
                o1.prof3lvl1();
                o1.prof3lvl2();
                o1.prof3lvl3();
                o1.prof3lvl4();
                system("cls");
                cout << "------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "                                 CONGRATS! You have passed 'Proficiency Level 3' in Old English." << endl;
                cout << "                                           Would you like to move on to the next Level?" << endl;
                cout << endl << endl << endl << endl;
                cout << "                                                 Yes (Y/y)                 No (N/n)";
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------";
                speak(L"CONGRATS! You have passed 'Proficiency Level 3' in Old English.");
                speak(L"Would you like to move on to the next Level?");
                char yn;
                yn = _getch();
                if (yn == 'y' || yn == 'Y' || yn == '1') {
                    prof = '3';
                }
                if (yn == 'n' || yn == 'N' || yn == '2') {
                    system("cls");
                    Language l;
                    l.select();
                }
                if (yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N' && yn != '1') {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "                                 CONGRATS! You have passed 'Proficiency Level 3' in Old English." << endl;
                    cout << "                                           Would you like to move on to the next Level?" << endl;
                    cout << endl << endl << endl << endl;
                    cout << "                                                         ERROR! INVALID INPUT!";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    speak(L"ERROR! INVALID INPUT");
                }
                o1.final();
                system("cls");
                Language l;
                l.select();
            }
        }
        if (l1 == '2') 
        {
            Spanish s1;
            if (prof == '1') {
                s1.prof1lvl1();
                s1.prof1lvl2();
                s1.prof1lvl3();
                system("cls");
                cout << "------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "                                    CONGRATS! You have passed 'Proficiency Level 1' in Spanish." << endl;
                cout << "                                           Would you like to move on to the next Level?" << endl;
                cout << endl << endl << endl << endl;
                cout << "                                                 Yes (Y/y)                 No (N/n)";
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------";
                speak(L"CONGRATS! You have passed 'Proficiency Level 1' in Spanish.");
                speak(L"Would you like to move on to the next Level?");
                char yn;
                yn = _getch();
                if (yn == 'y' || yn == 'Y' || yn == '1') {
                    prof = '2';
                }
                if (yn == 'n' || yn == 'N' || yn == '2') {
                    system("cls");
                    Language l;
                    l.select();
                }
                if (yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N' && yn != '1') {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "                                    CONGRATS! You have passed 'Proficiency Level 1' in Spanish." << endl;
                    cout << "                                           Would you like to move on to the next Level?" << endl;
                    cout << endl << endl << endl << endl;
                    cout << "                                                         ERROR! INVALID INPUT!";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    speak(L"ERROR! INVALID INPUT");
                }
            }
            if (prof == '2') {
                s1.prof2lvl1();
                s1.prof2lvl2();
                s1.prof2lvl3();
                system("cls");
                cout << "------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "                                    CONGRATS! You have passed 'Proficiency Level 2' in Spanish." << endl;
                cout << "                                           Would you like to move on to the next Level?" << endl;
                cout << endl << endl << endl << endl;
                cout << "                                                 Yes (Y/y)                 No (N/n)";
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------";
                speak(L"CONGRATS! You have passed 'Proficiency Level 2' in Spanish.");
                speak(L"Would you like to move on to the next Level?");
                char yn;
                yn = _getch();
                if (yn == 'y' || yn == 'Y' || yn == '1') {
                    prof = '3';
                }
                if (yn == 'n' || yn == 'N' || yn == '2') {
                    system("cls");
                    Language l;
                    l.select();
                }
                if (yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N' && yn != '1') {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "                                    CONGRATS! You have passed 'Proficiency Level 1' in Spanish." << endl;
                    cout << "                                           Would you like to move on to the next Level?" << endl;
                    cout << endl << endl << endl << endl;
                    cout << "                                                         ERROR! INVALID INPUT!";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    speak(L"ERROR! INVALID INPUT");
                }
            }
            if (prof == '3') {
                s1.prof3lvl1();
                s1.prof3lvl2();
                s1.prof3lvl3();
                system("cls");
                cout << "------------------------------------------------------------------------------------------------------------------------";
                cout << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "                                    CONGRATS! You have passed 'Proficiency Level 3' in Spanish." << endl;
                cout << "                                           Would you like to move on to the next Level?" << endl;
                cout << endl << endl << endl << endl;
                cout << "                                                 Yes (Y/y)                 No (N/n)";
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                cout << "------------------------------------------------------------------------------------------------------------------------";
                speak(L"CONGRATS! You have passed 'Proficiency Level 3' in Spanish.");
                speak(L"Would you like to move on to the next Level?");
                char yn;
                yn = _getch();
                if (yn == 'y' || yn == 'Y' || yn == '1') {
                    prof = '3';
                }
                if (yn == 'n' || yn == 'N' || yn == '2') {
                    system("cls");
                    Language l;
                    l.select();
                }
                if (yn != 'y' && yn != 'Y' && yn != 'n' && yn != 'N' && yn != '1') {
                    system("cls");
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "                                    CONGRATS! You have passed 'Proficiency Level 3' in Spanish." << endl;
                    cout << "                                           Would you like to move on to the next Level?" << endl;
                    cout << endl << endl << endl << endl;
                    cout << "                                                         ERROR! INVALID INPUT!";
                    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------------";
                    speak(L"ERROR! INVALID INPUT");
                }
                s1.final();
                system("cls");
                Language l;
                l.select();
            }
        }
    }
};


int main() {
    SetConsoleOutputCP(CP_UTF8);   // enable UTF-8 output
    SetConsoleCP(CP_UTF8);         // input too (optional)
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "                        A LANGUAGE LEARNING APPLICATION DESIGNED BY IRTIZA, FAIZAN, ARSHAD AND GOHAR:" << endl;
        cout << "                                                         LINGUISTICO!" << endl;
        cout << endl << endl << endl << endl << endl;
        cout << "                                                   PRESS ANY KEY TO CONTINUE";
        cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------";
        speak(L"Hello! Welcome to LINGUISTICO! A Language learning application. We thank you for taking the time to use it and hope you learn something new.");
        speak(L"Press any key to continue.");
        _getch();
        Language l1;
        l1.select();
}