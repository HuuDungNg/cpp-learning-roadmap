# Project shell aliases for CppFundamental
# Source this file from the repository root:
#   source ./project_aliases.sh

alias cfg='cmake -S . -B build'
alias b='cmake --build build'
alias c='cmake --build build --target clean'
alias br='cmake -S . -B build && cmake --build build'

runexe() {
  if [ $# -ne 1 ]; then
    echo "Usage: runexe <target>"
    echo "Example: runexe Phase_01_Basics_01_namespace_source"
    return 1
  fi

  local exe="./build/$1"
  if [ ! -x "$exe" ]; then
    echo "Executable not found: $exe"
    return 2
  fi

  "$exe"
}

alias r='runexe'
