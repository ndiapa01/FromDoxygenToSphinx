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
*  \file LedDriverMock.h
*  \date 2020
*******************************************************************************/
#ifndef __LED_DRIVER_MOCK_H__
#define __LED_DRIVER_MOCK_H__

#include <cstdint>
#include "LedDriverInterface.h"

class LedDriverMock: public LedDriverInterface
{
    public:
        /* Constructor */
        LedDriverMock();

        /* Inherited interface */
        virtual void on(void) override final;
        virtual bool isOn(void) override final;
        virtual void off(void) override final;
        virtual bool isOff(void) override final;
        virtual void toggle(void) override final;
};

#endif
/*******************************************************************************
* Copyright 2020 Somfy SAS - All rights reserved.
* All reproduction, use, distribution of this software, in whole or in part, by
* any means, without SOMFY SAS's prior written approval, is strictly forbidden.
*******************************************************************************/