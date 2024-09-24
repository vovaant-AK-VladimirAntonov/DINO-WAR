cmake_minimum_required(VERSION 3.26.4)
project(DINO_WAR)

set(CMAKE_CXX_STANDARD 17)

add_executable(DINO_WAR main.cpp
        StartMenu.cpp
        MainMenu.cpp
        Menu.h
        ProfileMenu.cpp
        Textbox.hpp
        Textbox.cpp
        ShopMenu.cpp
        Dino.h
        BattleMenu.cpp
        Player.h
        Battle.cpp
        AssetManager.cpp
        WinnerMenu.cpp
        LooserMenu.cpp
)
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/Users/Asus/SFML/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
include_directories(C:/Users/Asus/SFML/SFML-2.6.1/include)
target_link_libraries(DINO_WAR sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
