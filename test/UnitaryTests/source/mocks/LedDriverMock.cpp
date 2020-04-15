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
*  \file LedDriverMock.cpp
*  \date 2020
*******************************************************************************/
#include "CppUTest/TestHarness.h"
#include "CppUtestExt/MockSupport.h"
#include "LedDriverMock.h"

LedDriverMock::LedDriverMock()
{
}

/* Inherited interface */
void LedDriverMock::on(void)
{
    mock().actualCall("on");
}

bool LedDriverMock::isOn(void)
{
    return mock().actualCall("isOn").returnBoolValue();
}

void LedDriverMock::off(void)
{
    mock().actualCall("off");
}

bool LedDriverMock::isOff(void)
{
    return mock().actualCall("isOff").returnBoolValue();
}

void LedDriverMock::toggle(void)
{
    mock().actualCall("toggle");
}

/*******************************************************************************
* Copyright 2020 Somfy SAS - All rights reserved.
* All reproduction, use, distribution of this software, in whole or in part, by
* any means, without SOMFY SAS's prior written approval, is strictly forbidden.
*******************************************************************************/