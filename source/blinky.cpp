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
*  \file blinky.cpp
*  \date 2020
*******************************************************************************/
#include "blinky.h"

Blinky::Blinky(LedDriverInterface &arg_ledDriver):
m_ledDriver(arg_ledDriver),
m_counter(0),
m_isBlinking(false)
{
}

void Blinky::start(void)
{
	/**
	* @brief start function initialisation 
	-# step 1: function starts the led blinking
	*/
    m_isBlinking = true;

}

bool Blinky::isStarted(void)
{
	/**
	* @brief isStarted function initialisation 
	-# step 2: function isStarted gets the Led status (is it lit or off)
	*/
    if(!m_isBlinking)
    {
        return false;
    }
    return true;
	
}

void Blinky::stop(void)
{
	/**
	* @brief stop function initialisation 
	 -# step 3: Turn off the led
	*/
    m_isBlinking = false;

}

void Blinky::refresh(void)
{
	/**
	* @brief refresh function initialisation 
	-# step 4: Schedules the blinking
	*/
    if(m_isBlinking)
    {
        if(m_counter >= 50)
        {
            m_ledDriver.toggle();
            m_counter = 0;
        }
        else
        {
            m_counter += 1;
        }
    }
    // else do nothing
	
}

/*******************************************************************************
* Copyright 2020 Somfy SAS - All rights reserved.
* All reproduction, use, distribution of this software, in whole or in part, by
* any means, without SOMFY SAS's prior written approval, is strictly forbidden.
*******************************************************************************/