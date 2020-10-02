//
//  main.cpp
//  CLIArt
//
//  Created by MitsukiGoto on 2020/10/02.
//  Copyright © 2020 MitsukiGoto. All rights reserved.
//

#include <iostream>
#include <chrono>
#include <thread>
#include <string>

int main(int argc, const char * argv[]) {
    for(auto i = 0;; ++i) {
        constexpr int default_color = 30;
        std::cout << "\e[38;5;" << default_color + i * 10 << "m";
        std::string art =
        " /$$       /$$  /$$$$$$                /$$                 /$$$$$$$$                  /$$             /$$\n"
        "| $$      |__/ /$$__  $$              |__/                |__  $$__/                 | $$            | $$\n"
        "| $$       /$$| $$  \\__//$$$$$$        /$$  /$$$$$$$         | $$  /$$$$$$   /$$$$$$$| $$$$$$$       | $$\n"
        "| $$      | $$| $$$$   /$$__  $$      | $$ /$$_____/         | $$ /$$__  $$ /$$_____/| $$__  $$      | $$\n"
        "| $$      | $$| $$_/  | $$$$$$$$      | $$|  $$$$$$          | $$| $$$$$$$$| $$      | $$  \\ $$      |__/\n"
        "| $$      | $$| $$    | $$_____/      | $$ \\____  $$         | $$| $$_____/| $$      | $$  | $$          \n"
        "| $$$$$$$$| $$| $$    |  $$$$$$$      | $$ /$$$$$$$/         | $$|  $$$$$$$|  $$$$$$$| $$  | $$       /$$\n"
        "|________/|__/|__/     \\_______/      |__/|_______/          |__/ \\_______/ \\_______/|__/  |__/      |__/\n";
        std::cout << art << std::endl;
        // 8times back the cursor
        for(auto j = 0; j <= 8; ++j) {
            std::cout << "\e[1A";
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(150));
    }
    return 0;
}
