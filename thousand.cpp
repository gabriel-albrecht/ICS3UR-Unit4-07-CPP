// Copyright (c) 2020 St. Mother Teresa HS All Rights Reserved.
//
// Created by Gabriel A
// Created on Dec 2020
// This program shows numbers between 1000-2000

#include <iostream>

int main() {
    int thousand = 1000;

    for (thousand = 1000; thousand <= 2000; thousand++) {
        std::cout << thousand << " ";
        if (thousand % 5 == 4) {
            std::cout << std::endl;
        }
    }
}
