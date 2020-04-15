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
*  \file blinky.h
*  \date 2020
*******************************************************************************/
#ifndef __BLINKY_H__
#define __BLINKY_H__

#include <cstdint>
#include "LedDriverInterface.h"

class Blinky
{
    public:
        /**
         * @brief Blinky constructor
         * @param[in] arg_ledDriver A LedDriver implementing the LedDriverInterface
         */
        Blinky(LedDriverInterface &arg_ledDriver);

        /**
         * @brief Start the blinking
         */
        void start(void);

        /**
         * @brief Return the blinking state as a boolean
         * @return bool: true if blinking is started, false if the blinking is not started
         */
        bool isStarted(void);

        /**
         * @brief Stop the blinking
         */
        void stop(void);

        /**
         * @brief Schedule the blinking
         */
        void refresh(void);
    
    private:
        /* Attributes */
        LedDriverInterface &m_ledDriver;
        uint16_t m_counter;
        bool m_isBlinking;
};

#endif
/*******************************************************************************
* Copyright 2020 Somfy SAS - All rights reserved.
* All reproduction, use, distribution of this software, in whole or in part, by
* any means, without SOMFY SAS's prior written approval, is strictly forbidden.
*******************************************************************************/