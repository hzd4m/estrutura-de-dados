cmake_minimum_required(VERSION 3.10)
project(PortfolioC++)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adicionar arquivos fonte
file(GLOB SOURCES "src/*.cpp")

# Criar executável
add_executable(app ${SOURCES})
