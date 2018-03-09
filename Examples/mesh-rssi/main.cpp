/*
 * Copyright (c) 2015, 2016 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#include <string>
#include <sstream>
#include <vector>
#include "mbedtls/entropy_poll.h"
#include "mbed.h"
#include "easy-connect/easy-connect.h"
#include "nanostack/whiteboard_api.h"

// Entry point to the program
int main() {

    unsigned int seed;
    size_t len;
    mbedtls_hardware_poll(NULL, (unsigned char *) &seed, sizeof seed, &len);
    srand(seed);

    osThreadId mainThread = osThreadGetId();

    printf("\nStarting mbed Client example\n");

    NetworkInterface* network = easy_connect(true);
    if(network == NULL) {
        printf("\nConnection to Network Failed - exiting application...\n");
        return -1;
    }

    while(1) {

        whiteboard_entry_t* bobby = whiteboard_get(NULL);

        printf("IP Address of other: %d\n", bobby;

        wait(1);
    }
}
