# 🚀 C++ Learning Roadmap Journey

A structured repository designed to track learning progress, host code samples, notes, and exercises following the modern C++ developer roadmap.

## 📌 Progress Tracker

- [ ] **Phase 1: C++ Foundations** 🟩 *(Target: 1-2 weeks)*
- [ ] **Phase 2: Object-Oriented Programming (OOP)** 🟪 *(Target: 2-3 weeks)*
- [ ] **Phase 3: STL & Memory Management** 🟦 *(Target: 2-3 weeks)*
- [ ] **Phase 4: Modern / Advanced C++** 🟫 *(Target: 3-4 weeks)*

## 💻 Compilation & Usage
Each subfolder contains standalone source files (`.cpp`). You can compile them using GCC/Clang via CLI:

```bash
g++ -std=c++17 main.cpp -o main
./main
```

## �️ CMake Build Instructions
From the repository root:

```bash
cmake -S . -B build
cmake --build build
```

Build a specific target:

```bash
cmake --build build --target Phase_01_Basics_01_namespace_source
```

Run a built executable:

```bash
./build/Phase_01_Basics_01_namespace_source
```

Clean build files:

```bash
cmake --build build --target clean
rm -rf build
```

## ⚡ Shell Aliases
Source the helper script once from the repo root:

```bash
source ./project_aliases.sh
```

Then use:

- `cfg` — configure
- `b` — build
- `c` — clean
- `br` — rebuild
- `r <target>` — run a target

## �📁 Recommended Folder Layout
For scalable learning, each topic folder can include:

- `README.md` — theory summary, syntax notes, and usage tips.
- `source/main.cpp` — a sandbox example showcasing the topic.
- `exercise/exercise.cpp` — practice or challenge code.
