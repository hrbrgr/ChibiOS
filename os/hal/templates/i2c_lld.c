/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012,2013 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    templates/i2c_lld.c
 * @brief   I2C Driver subsystem low level driver source template.
 *
 * @addtogroup I2C
 * @{
 */

#include "ch.h"
#include "hal.h"

#if HAL_USE_I2C || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/**
 * @brief   I2C1 driver identifier.
 */
#if PLATFORM_I2C_USE_I2C1 || defined(__DOXYGEN__)
I2CDriver I2CD1;
#endif

/*===========================================================================*/
/* Driver local variables and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Driver interrupt handlers.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Low level I2C driver initialization.
 *
 * @notapi
 */
void i2c_lld_init(void) {

#if PLATFORM_I2C_USE_I2C1
  i2cObjectInit(&I2CD1);
#endif /* PLATFORM_I2C_USE_I2C1 */
}

/**
 * @brief   Configures and activates the I2C peripheral.
 *
 * @param[in] i2cp      pointer to the @p I2CDriver object
 *
 * @notapi
 */
void i2c_lld_start(I2CDriver *i2cp) {

  if (i2cp->state == I2C_STOP) {
    /* Enables the peripheral.*/
#if PLATFORM_I2C_USE_I2C1
    if (&I2CD1 == i2cp) {

    }
#endif /* PLATFORM_I2C_USE_I2C1 */
  }
  /* Configures the peripheral.*/

}

/**
 * @brief   Deactivates the I2C peripheral.
 *
 * @param[in] i2cp      pointer to the @p I2CDriver object
 *
 * @notapi
 */
void i2c_lld_stop(I2CDriver *i2cp) {

  if (i2cp->state != I2C_STOP) {
    /* Resets the peripheral.*/

    /* Disables the peripheral.*/
#if PLATFORM_I2C_USE_I2C1
    if (&I2CD1 == i2cp) {

    }
#endif /* PLATFORM_I2C_USE_I2C1 */
  }
}

/**
 * @brief   Receives data via the I2C bus as master.
 * @details Number of receiving bytes must be more than 1 on STM32F1x. This is
 *          hardware restriction.
 *
 * @param[in] i2cp      pointer to the @p I2CDriver object
 * @param[in] addr      slave device address
 * @param[out] rxbuf    pointer to the receive buffer
 * @param[in] rxbytes   number of bytes to be received
 * @param[in] timeout   the number of ticks before the operation timeouts,
 *                      the following special values are allowed:
 *                      - @a TIME_INFINITE no timeout.
 *                      .
 * @return              The operation status.
 * @retval RDY_OK       if the function succeeded.
 * @retval RDY_RESET    if one or more I2C errors occurred, the errors can
 *                      be retrieved using @p i2cGetErrors().
 * @retval RDY_TIMEOUT  if a timeout occurred before operation end. <b>After a
 *                      timeout the driver must be stopped and restarted
 *                      because the bus is in an uncertain state</b>.
 *
 * @notapi
 */
msg_t i2c_lld_master_receive_timeout(I2CDriver *i2cp, i2caddr_t addr,
                                     uint8_t *rxbuf, size_t rxbytes,
                                     systime_t timeout) {

  (void)i2cp;
  (void)addr;
  (void)rxbuf;
  (void)rxbytes;
  (void)timeout;

  return RDY_OK;
}

/**
 * @brief   Transmits data via the I2C bus as master.
 * @details Number of receiving bytes must be 0 or more than 1 on STM32F1x.
 *          This is hardware restriction.
 *
 * @param[in] i2cp      pointer to the @p I2CDriver object
 * @param[in] addr      slave device address
 * @param[in] txbuf     pointer to the transmit buffer
 * @param[in] txbytes   number of bytes to be transmitted
 * @param[out] rxbuf    pointer to the receive buffer
 * @param[in] rxbytes   number of bytes to be received
 * @param[in] timeout   the number of ticks before the operation timeouts,
 *                      the following special values are allowed:
 *                      - @a TIME_INFINITE no timeout.
 *                      .
 * @return              The operation status.
 * @retval RDY_OK       if the function succeeded.
 * @retval RDY_RESET    if one or more I2C errors occurred, the errors can
 *                      be retrieved using @p i2cGetErrors().
 * @retval RDY_TIMEOUT  if a timeout occurred before operation end. <b>After a
 *                      timeout the driver must be stopped and restarted
 *                      because the bus is in an uncertain state</b>.
 *
 * @notapi
 */
msg_t i2c_lld_master_transmit_timeout(I2CDriver *i2cp, i2caddr_t addr,
                                      const uint8_t *txbuf, size_t txbytes,
                                      uint8_t *rxbuf, size_t rxbytes,
                                      systime_t timeout) {

  (void)i2cp;
  (void)addr;
  (void)txbuf;
  (void)txbytes;
  (void)rxbuf;
  (void)rxbytes;
  (void)timeout;

  return RDY_OK;
}

#endif /* HAL_USE_I2C */

/** @} */
