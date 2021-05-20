// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program shows all RGB values

#include <iostream>

main() {
    int loop1;
    int loop2;
    int loop3;

    // process & output
    for (loop1 = 0; loop1 < 255; loop1++) {
        for (loop2 = 0; loop2 < 255; loop2++) {
            for (loop3 = 0; loop3 < 255; loop3++) {
                std::cout << "RGB (" << loop1 << "," << loop2 << "," << loop3 << ")" << std::endl;
            }
        }
    }
}
