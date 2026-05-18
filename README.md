# Linguistico - Raylib Language Learning Application
Linguistico is a graphical language learning application developed in C++ using Raylib.

This project focuses on interactive learning for:
- Old English
- Spanish
  
The application combines:
- listening
- reading
- translation
- symbol recognition
- quiz-based learning

inside a medieval inspired graphical interface.

---

# Features

## Old English Learning
- Thorn (Þ)
- Wynn (Ƿ)
- Ash (Æ)
- Old English vocabulary
- Beowulf inspired passages
- translation exercises

## Spanish Learning
- greetings
- colors
- numbers
- sentence translation
- vocabulary practice

## Interactive Learning System
- Text-to-Speech pronunciation
- Reading passages
- Multiple choice quizzes
- Dedicated lesson screens
- Progress tracking
- Medieval themed UI

## Graphical Interface
Built completely using:
- C++
- Raylib graphics library

---

# Technologies Used

- C++
- Raylib
- Windows PowerShell Speech API
- MinGW / GCC

---

# Project Structure

```bash
src/
 └── main.cpp

lib/
 └── raylib/

assets/
 └── fonts/
```

---

# Screens Included

- Splash Screen
- Language Selection
- Proficiency Selection
- Lesson Pages
- Reading Screens
- Quiz System
- Final Completion Screen

---

# Learning Modes

- Reading
- Writing
- Listening
- Translation

---

# Build Instructions

## Compile

```bash
g++ src/main.cpp -o Linguistico ^
-Ilib/raylib/include ^
-Llib/raylib/lib ^
-lraylib -lopengl32 -lgdi32 -lwinmm
```

---

# Controls

| Key/Button | Action |
|------------|--------|
| Mouse Click | Select options |
| SPACE | Continue |
| Listen Button | Play pronunciation |
| Back Button | Return to previous menu |

---

# Themes & Design

The application uses:
- parchment inspired colors
- medieval academic styling
- manuscript inspired reading pages
- animated UI components

---

# Educational Purpose

This project was created as a BSCS educational project to demonstrate:
- graphical programming
- game-style UI systems
- language learning mechanics
- speech integration
- structured course design

---

# Developers

Developed by:
- Faizan 
- Irtiza
- Arshad
- Gohar

---

# Future Improvements

- More languages
- Save progress system
- Achievement badges
- User profiles
- Audio files
- Animated character guide
- Mobile version

---

# License

This project is for educational purposes.
