/*******************************************************************************
This document and/or file is SOMFY?s property. All information it contains is
strictly confidential. This document and/or file shall not be used, reproduced
or passed on in any way, in full or in part without SOMFY?s prior written
approval. All rights reserved.
Ce document et/ou fichier est la propri?t? de SOMFY. Les informations qu?il
contient sont strictement confidentielles. Toute reproduction, utilisation,
transmission de ce document et/ou fichier, partielle ou int?grale, non
autoris?e pr?alablement par SOMFY par ?crit est interdite. Tous droits r?serv?s.
*******************************************************************************/

/*!*****************************************************************************
*  \file LedDriverInterface.h
*  \date 2020
*******************************************************************************/
#ifndef __LED_DRIVER_INTERFACE_H__
#define __LED_DRIVER_INTERFACE_H__

class LedDriverInterface
{
    public:
        /**
         * @brief Switch the LED on
         */
        virtual void on(void) = 0;

        /**
         * @brief Check if the LED is on
         * @return bool: true is LED is on, false if LED is off
         */
        virtual bool isOn(void) = 0;

        /**
         * @brief Switch the LED off
         */
        virtual void off(void) = 0;

        /**
         * @brief Check if the LED is on
         * @return bool: true is LED is off, false if LED is on
         */
        virtual bool isOff(void) = 0;

        /**
         * @brief Toggle the LED
         */
        virtual void toggle(void) = 0;
};

#endif
/*******************************************************************************
* Copyright 2020 Somfy SAS - All rights reserved.
* All reproduction, use, distribution of this software, in whole or in part, by
* any means, without SOMFY SAS's prior written approval, is strictly forbidden.
*******************************************************************************/