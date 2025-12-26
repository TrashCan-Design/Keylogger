# 🚀 Keylogger 

<div align="center">



[![Language](https://img.shields.io/github/languages/top/warrior123-coder/Keylogger?style=for-the-badge&color=blue)](https://github.com/warrior123-coder/Keylogger/)

**A C-based Windows utility demonstrating low-level keyboard event interception for educational and research purposes.**

</div>

## ⚠️ Disclaimer & Ethical Considerations

This project is developed *solely for educational and research purposes* to understand how Windows API calls work, particularly in the context of low-level system interaction and potential malware creation techniques.

**DO NOT use this software for any illegal, unethical, or malicious activities.** Using a keylogger without explicit consent is illegal in most jurisdictions and can lead to severe legal consequences. The author and contributors are not responsible for any misuse or damage caused by this software. Always ensure you have appropriate authorization before deploying or testing such tools.

## 📖 Overview

This repository contains a simple yet functional keylogger implemented in C for the Windows operating system. It leverages the Windows API to intercept and record all keystrokes typed by a user, saving them to a local log file. The project serves as a practical example for developers, security researchers, and students interested in:

-   Understanding low-level Windows API hooks, specifically `SetWindowsHookEx` with `WH_KEYBOARD_LL`.
-   Learning about event-driven programming in a system-level context.
-   Studying the foundational principles behind keyboard monitoring and input interception.
-   Analyzing basic techniques utilized in surveillance software (purely for defensive and educational purposes).

## ✨ Features

-   **Low-Level Keyboard Hooking:** Utilizes the `SetWindowsHookEx` function with `WH_KEYBOARD_LL` to capture global keyboard events across the entire Windows system.
-   **Keystroke Logging:** Records individual key presses and their corresponding character representations.
-   **Persistent Storage:** Saves all captured keystrokes to a local text file (`log.txt` by default) for later review.
-   **Stealth Operation:** Designed to operate without a visible console window after execution, allowing it to run in the background.

## 🛠️ Tech Stack

-   **Language:** C
-   **Platform:** Windows Operating System
-   **APIs:** Windows API (specifically `<windows.h>` for input hooks).

## 🚀 Quick Start

This section guides you through compiling and running the keylogger on a Windows system.

### Prerequisites

-   **Operating System:** Windows (7, 8, 10, 11)
-   **C Compiler:** A C compiler with support for Windows API.
    -   **MinGW-w64 GCC:** Recommended for ease of setup and use on Windows.
    -   **Microsoft Visual C++ (MSVC):** Part of Visual Studio, also a viable option.

### Installation & Compilation

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/warrior123-coder/Keylogger.git
    cd Keylogger
    ```

2.  **Compile the source code:**

    Using **MinGW-w64 GCC**:
    ```bash
    gcc keylogger.c -o keylogger.exe
    ```

3.  **Run the compiled executable:**
    After successful compilation, an executable file (e.g., `keylogger.exe`) will be created in your project directory.

    ```bash
    ./keylogger.exe
    ```
    Once executed, the keylogger will start recording keystrokes to a file named `log.txt` in the same directory. To stop it, you will need to terminate the process via Task Manager (look for `keylogger.exe`).

## 📁 Project Structure

```
Keylogger/
├── keylogger.c      # Main source code for the keylogger
└── README.md        # Project documentation
```

## ⚙️ Configuration

The keylogger's behavior is primarily defined within its source code.
-   **Log File:** By default, keystrokes are saved to `log.txt` in the same directory as the executable. This can be changed by modifying the `FILENAME` macro in `keylogger.c`.

## 🔧 How It Works

The core of this keylogger relies on the `SetWindowsHookEx` function, a powerful component of the Windows API.

1.  **Hook Installation:** The program installs a "low-level keyboard hook" by calling `SetWindowsHookEx` with the `WH_KEYBOARD_LL` parameter. This tells Windows to notify our program every time a keyboard event occurs anywhere in the system, even if our program is not the active window.
2.  **Callback Function:** A custom `LowLevelKeyboardProc` function is registered as the callback. When a key is pressed or released, Windows calls this function.
3.  **Keystroke Processing:** Inside `LowLevelKeyboardProc`, the key event data is analyzed. The virtual key code is converted into a readable character, accounting for shift states, caps lock, etc.
4.  **Logging:** The processed keystroke, along with a timestamp, is then written to the `log.txt` file.
5.  **Chain Calling:** Crucially, `CallNextHookEx` is invoked to pass the keyboard event to the next hook in the chain. This ensures that the operating system and other applications continue to receive and process keyboard input normally.

## 🤝 Contributing

We welcome contributions to improve this educational project! If you have suggestions for enhancements, please feel free to:

1.  Fork this repository.
2.  Create a new branch for your feature or bug fix.
3.  Commit your changes.
4.  Push your branch and open a pull request.

Please ensure your contributions adhere to the educational and ethical guidelines set forth in the Disclaimer.

## 📄 License

No explicit license has been provided for this project. Please contact the repository owner for licensing information.

## 🙏 Acknowledgments

The Windows API documentation for providing the foundational tools for system-level programming.



<div align="center">

**⭐ Star this repo if you find it helpful for your educational pursuits!**

Made with ❤️ by [Jay](https://www.linkedin.com/in/jayshah-cybersec/)

</div>

