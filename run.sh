#!/usr/bin/env bash

# Dar permissão ao script:
#   chmod +x run.sh

# Uso:
#   ./run.sh <pasta> <arquivo_sem_extensao>
#
# Exemplo:
#   ./run.sh 2026_2 1171
#
# Compila 2026_2/1171.cpp e executa o binário gerado.

set -e

CXX="g++"
CXXFLAGS="-Wall -Wextra -std=c++17"

FOLDER="$1"
FILE="$2"

if [ -z "$FOLDER" ] || [ -z "$FILE" ]; then
    echo "Uso: ./run.sh <pasta> <arquivo_sem_extensao>"
    echo "Exemplo: ./run.sh 2026_2 1171"
    exit 1
fi

SRC="$FOLDER/$FILE.cpp"
BIN="$FOLDER/$FILE"

if [ ! -f "$SRC" ]; then
    echo "Erro: arquivo $SRC não encontrado."
    exit 1
fi

echo "Compilando $SRC..."
$CXX $CXXFLAGS "$SRC" -o "$BIN"

echo "Executando $BIN..."
echo "----------------------------------------"
"./$BIN"
