/*
 * Licensed under ST Liberty SW License Agreement V2, (the "License");
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *        http://www.st.com/software_license_agreement_liberty_v2
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file
 * @brief   SPC5xx low level icu driver header.
 *
 * @addtogroup ICU
 * @{
 */

#ifndef _ICU_LLD_H_
#define _ICU_LLD_H_

#if HAL_USE_ICU || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    Mode options
 * @{
 */
/**
 * @brief   Skip first capture cycle.
 * @details If set to @p TRUE the first capture cycle is skipped.
 * @note    The default is @p FALSE.
 */
#if !defined(ICU_JUMP_FIRST_CAPTURE) || defined(__DOXYGEN__)
#define ICU_SKIP_FIRST_CAPTURE               FALSE
#endif

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @name    Configuration options
 * @{
 */
/**
 * @brief   ICUD0 driver enable switch.
 * @details If set to @p TRUE the support for ICUD0 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD0) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD0	                 TRUE
#endif

/**
 * @brief   ICUD1 driver enable switch.
 * @details If set to @p TRUE the support for ICUD1 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD1) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD1	                 TRUE
#endif

/**
 * @brief   ICUD2 driver enable switch.
 * @details If set to @p TRUE the support for ICUD2 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD2) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD2 	                 TRUE
#endif

/**
 * @brief   ICUD3 driver enable switch.
 * @details If set to @p TRUE the support for ICUD3 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD3) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD3 	                 TRUE
#endif

/**
 * @brief   ICUD4 driver enable switch.
 * @details If set to @p TRUE the support for ICUD4 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD4) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD4                   TRUE
#endif

/**
 * @brief   ICUD5 driver enable switch.
 * @details If set to @p TRUE the support for ICUD5 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD5) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD5	                 TRUE
#endif

/**
 * @brief   ICUD6 driver enable switch.
 * @details If set to @p TRUE the support for ICUD6 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD6) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD6                   TRUE
#endif

/**
 * @brief   ICUD7 driver enable switch.
 * @details If set to @p TRUE the support for ICUD7 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD7) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD7                   TRUE
#endif

/**
 * @brief   ICUD8 driver enable switch.
 * @details If set to @p TRUE the support for ICUD8 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD8) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD8                   TRUE
#endif

/**
 * @brief   ICUD9 driver enable switch.
 * @details If set to @p TRUE the support for ICUD9 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD9) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD9                   TRUE
#endif

/**
 * @brief   ICUD10 driver enable switch.
 * @details If set to @p TRUE the support for ICUD10 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD10) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD10                   TRUE
#endif

/**
 * @brief   ICUD11 driver enable switch.
 * @details If set to @p TRUE the support for ICUD11 is included.
 * @note    The default is @p TRUE.
 */
#if !defined(SPC5_ICU_USE_SMOD11) || defined(__DOXYGEN__)
#define SPC5_ICU_USE_SMOD11                   TRUE
#endif

/**
 * @brief   eTimer0 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_ETIMER0_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_ETIMER0_PRIORITY         7
#endif

/**
 * @brief   eTimer1 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_ETIMER1_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_ETIMER1_PRIORITY         7
#endif

/**
 * @brief   ICUD0 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD0_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD0_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD1 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD1_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD1_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD2 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD2_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD2_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD3 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD3_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD3_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD4 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD4_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD4_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD5 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD5_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD6 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD6_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD7 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD7_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD8 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD8_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD9 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD9_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD10 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD10_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   ICUD11 interrupt priority level setting.
 */
#if !defined(SPC5_ICU_SMOD11_IRQ_PRIORITY) || defined(__DOXYGEN__)
#define SPC5_ICU_SMOD5_IRQ_PRIORITY         7
#endif

/**
 * @brief   eTIMER0 peripheral configuration when started.
 * @note    The default configuration is 1 (always run) in run mode and
 *          2 (only halt) in low power mode. The defaults of the run modes
 *          are defined in @p hal_lld.h.
 */
#if !defined(SPC5_ICU_ETIMER0_START_PCTL) || defined(__DOXYGEN__)
#define SPC5_ICU_ETIMER0_START_PCTL     (SPC5_ME_PCTL_RUN(1) |          \
                                             SPC5_ME_PCTL_LP(2))
#endif

/**
 * @brief   eTIMER0 peripheral configuration when stopped.
 * @note    The default configuration is 0 (never run) in run mode and
 *          0 (never run) in low power mode. The defaults of the run modes
 *          are defined in @p hal_lld.h.
 */
#if !defined(SPC5_ICU_ETIMER0_STOP_PCTL) || defined(__DOXYGEN__)
#define SPC5_ICU_ETIMER0_STOP_PCTL      (SPC5_ME_PCTL_RUN(0) |          \
                                             SPC5_ME_PCTL_LP(0))
#endif

/**
 * @brief   eTIMER1 peripheral configuration when started.
 * @note    The default configuration is 1 (always run) in run mode and
 *          2 (only halt) in low power mode. The defaults of the run modes
 *          are defined in @p hal_lld.h.
 */
#if !defined(SPC5_ICU_ETIMER1_START_PCTL) || defined(__DOXYGEN__)
#define SPC5_ICU_ETIMER1_START_PCTL     (SPC5_ME_PCTL_RUN(1) |          \
                                             SPC5_ME_PCTL_LP(2))
#endif

/**
 * @brief   eTIMER1 peripheral configuration when stopped.
 * @note    The default configuration is 0 (never run) in run mode and
 *          0 (never run) in low power mode. The defaults of the run modes
 *          are defined in @p hal_lld.h.
 */
#if !defined(SPC5_ICU_ETIMER1_STOP_PCTL) || defined(__DOXYGEN__)
#define SPC5_ICU_ETIMER1_STOP_PCTL      (SPC5_ME_PCTL_RUN(0) |          \
                                             SPC5_ME_PCTL_LP(0))
#endif
/** @} */

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

#if (SPC5_ICU_USE_SMOD0 || SPC5_ICU_USE_SMOD1 || 							\
	SPC5_ICU_USE_SMOD2 || SPC5_ICU_USE_SMOD3 || 							\
	SPC5_ICU_USE_SMOD4 || SPC5_ICU_USE_SMOD5) && !SPC5_HAS_ETIMER0
#error "ETIMER0 not present in the selected device"
#endif

#if (SPC5_ICU_USE_SMOD6 || SPC5_ICU_USE_SMOD7 ||                            \
    SPC5_ICU_USE_SMOD8 || SPC5_ICU_USE_SMOD9 ||                             \
    SPC5_ICU_USE_SMOD10 || SPC5_ICU_USE_SMOD11) && !SPC5_HAS_ETIMER1
#error "ETIMER1 not present in the selected device"
#endif

#if (!SPC5_ICU_USE_SMOD0 && !SPC5_ICU_USE_SMOD1 &&                          \
    !SPC5_ICU_USE_SMOD2 && !SPC5_ICU_USE_SMOD3 &&                           \
    !SPC5_ICU_USE_SMOD4 && !SPC5_ICU_USE_SMOD5) && SPC5_ICU_USE_ETIMER0
#error "ICU driver activated but no SMOD peripheral assigned"
#endif

#if (!SPC5_ICU_USE_SMOD6 && !SPC5_ICU_USE_SMOD7 &&                          \
    !SPC5_ICU_USE_SMOD8 && !SPC5_ICU_USE_SMOD9 &&                           \
    !SPC5_ICU_USE_SMOD10 && !SPC5_ICU_USE_SMOD11) && SPC5_ICU_USE_ETIMER1
#error "ICU driver activated but no SMOD peripheral assigned"
#endif

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief ICU driver mode.
 */
typedef enum {
  ICU_INPUT_ACTIVE_HIGH = 0, /**< Trigger on rising edge.            */
  ICU_INPUT_ACTIVE_LOW = 1, /**< Trigger on falling edge.           */
}icumode_t;

/**
 * @brief   ICU frequency type.
 */
typedef uint32_t icufreq_t;

/**
 * @brief   ICU channel.
 */
typedef enum {
  ICU_CHANNEL_1 = 0, /**< Use SMODxCH1.      */
  ICU_CHANNEL_2 = 1, /**< Use SMODxCH2.      */
  ICU_CHANNEL_3 = 2, /**< Use SMODxCH3.      */
  ICU_CHANNEL_4 = 3, /**< Use SMODxCH4.      */
  ICU_CHANNEL_5 = 4, /**< Use SMODxCH5.      */
  ICU_CHANNEL_6 = 5, /**< Use SMODxCH6.      */
}icuchannel_t;

/**
 * @brief   ICU counter type.
 */
typedef uint16_t icucnt_t;

/**
 * @brief   Driver configuration structure.
 * @note    It could be empty on some architectures.
 */
typedef struct {
  /**
   * @brief   Driver mode.
   */
  icumode_t mode;
  /**
   * @brief   Timer clock in Hz.
   * @note    The low level can use assertions in order to catch invalid
   *          frequency specifications.
   */
  icufreq_t frequency;
  /**
   * @brief   Callback for pulse width measurement.
   */
  icucallback_t width_cb;
  /**
   * @brief   Callback for cycle period measurement.
   */
  icucallback_t period_cb;
  /**
   * @brief   Callback for timer overflow.
   */
  icucallback_t overflow_cb;
  /* End of the mandatory fields.*/
  /**
   * @brief   Timer input channel to be used.
   * @note    Only inputs TIMx 1 and 2 are supported.
   */
  icuchannel_t channel;
}ICUConfig;

/**
 * @brief   Structure representing an ICU driver.
 */
struct ICUDriver {
  /**
   * @brief Driver state.
   */
  icustate_t state;
  /**
   * @brief Current configuration data.
   */
  const ICUConfig *config;
  /**
   * @brief Pointer to the CAN registers.
   */
#if defined(ICU_DRIVER_EXT_FIELDS)
  ICU_DRIVER_EXT_FIELDS
#endif
  /* End of the mandatory fields.*/
  /**
   * @brief Timer base clock.
   */
  uint32_t clock;
  /**
   * @brief Pointer to the eTimerx registers block.
   */
  volatile struct ETIMER_tag *etimerp;
  /**
   * @brief CCR register used for width capture.
   */
  volatile vuint16_t *wccrp;
  /**
   * @brief CCR register used for period capture.
   */
  volatile vuint16_t *pccrp;
};

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if SPC5_ICU_USE_SMOD0 && !defined(__DOXYGEN__)
extern ICUDriver ICUD1;
#endif

#if SPC5_ICU_USE_SMOD1 && !defined(__DOXYGEN__)
extern ICUDriver ICUD2;
#endif

#if SPC5_ICU_USE_SMOD2 && !defined(__DOXYGEN__)
extern ICUDriver ICUD3;
#endif

#if SPC5_ICU_USE_SMOD3 && !defined(__DOXYGEN__)
extern ICUDriver ICUD4;
#endif

#if SPC5_ICU_USE_SMOD4 && !defined(__DOXYGEN__)
extern ICUDriver ICUD5;
#endif

#if SPC5_ICU_USE_SMOD5 && !defined(__DOXYGEN__)
extern ICUDriver ICUD6;
#endif

#if SPC5_ICU_USE_SMOD6 && !defined(__DOXYGEN__)
extern ICUDriver ICUD7;
#endif

#if SPC5_ICU_USE_SMOD7 && !defined(__DOXYGEN__)
extern ICUDriver ICUD8;
#endif

#if SPC5_ICU_USE_SMOD8 && !defined(__DOXYGEN__)
extern ICUDriver ICUD9;
#endif

#if SPC5_ICU_USE_SMOD9 && !defined(__DOXYGEN__)
extern ICUDriver ICUD10;
#endif

#if SPC5_ICU_USE_SMOD10 && !defined(__DOXYGEN__)
extern ICUDriver ICUD11;
#endif

#if SPC5_ICU_USE_SMOD11 && !defined(__DOXYGEN__)
extern ICUDriver ICUD12;
#endif

#ifdef __cplusplus
extern "C" {
#endif
  void icu_lld_init(void);
  void icu_lld_start(ICUDriver *icup);
  void icu_lld_stop(ICUDriver *icup);
  void icu_lld_enable(ICUDriver *icup);
  void icu_lld_disable(ICUDriver *icup);
  icucnt_t icu_lld_get_width(ICUDriver *icup);
  icucnt_t icu_lld_get_period(ICUDriver *icup);
#ifdef __cplusplus
}
#endif

#endif /* HAL_USE_ICU */

#endif /* _ICU_LLD_H_ */

/** @} */
