/*
Copyright (C) 2019 Intel Corporation

SPDX-License-Identifier: Apache-2.0

Open Drone ID C Library

Maintainer:
Gabriel Cox
gabriel.c.cox@intel.com
*/

#include <stdio.h>
#include <opendroneid.h>

void test_InOut(void);
void ODID_getSimData(uint8_t *message, uint8_t msgType);
void test_sim(void);

int main(int argc, char const *argv[]) {

    // Perform test that takes all nominal unpacked structures displays them, encodes them, decodes them, displays result
    test_InOut();

    // Simulates a moving drone, encodes and displays data
    printf("Press any key to begin simulator messages...");
    getchar();
    test_sim();
}
