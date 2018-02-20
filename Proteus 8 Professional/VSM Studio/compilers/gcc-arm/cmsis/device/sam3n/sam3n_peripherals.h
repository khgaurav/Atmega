/**
 * \file
 *
 * Copyright (c) 2012 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAM3N_ADC_COMPONENT_
#define _SAM3N_ADC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Analog-to-digital Converter */
/* ============================================================================= */
/** \addtogroup SAM3N_ADC Analog-to-digital Converter */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Adc hardware registers */
typedef struct {
  WoReg ADC_CR;        /**< \brief (Adc Offset: 0x00) Control Register */
  RwReg ADC_MR;        /**< \brief (Adc Offset: 0x04) Mode Register */
  RwReg ADC_SEQR1;     /**< \brief (Adc Offset: 0x08) Channel Sequence Register 1 */
  RwReg ADC_SEQR2;     /**< \brief (Adc Offset: 0x0C) Channel Sequence Register 2 */
  WoReg ADC_CHER;      /**< \brief (Adc Offset: 0x10) Channel Enable Register */
  WoReg ADC_CHDR;      /**< \brief (Adc Offset: 0x14) Channel Disable Register */
  RoReg ADC_CHSR;      /**< \brief (Adc Offset: 0x18) Channel Status Register */
  RoReg Reserved1[1];
  RoReg ADC_LCDR;      /**< \brief (Adc Offset: 0x20) Last Converted Data Register */
  WoReg ADC_IER;       /**< \brief (Adc Offset: 0x24) Interrupt Enable Register */
  WoReg ADC_IDR;       /**< \brief (Adc Offset: 0x28) Interrupt Disable Register */
  RoReg ADC_IMR;       /**< \brief (Adc Offset: 0x2C) Interrupt Mask Register */
  RoReg ADC_ISR;       /**< \brief (Adc Offset: 0x30) Interrupt Status Register */
  RoReg Reserved2[2];
  RoReg ADC_OVER;      /**< \brief (Adc Offset: 0x3C) Overrun Status Register */
  RwReg ADC_EMR;       /**< \brief (Adc Offset: 0x40) Extended Mode Register */
  RwReg ADC_CWR;       /**< \brief (Adc Offset: 0x44) Compare Window Register */
  RoReg Reserved3[2];
  RoReg ADC_CDR[16];   /**< \brief (Adc Offset: 0x50) Channel Data Register */
  RoReg Reserved4[21];
  RwReg ADC_WPMR;      /**< \brief (Adc Offset: 0xE4) Write Protect Mode Register */
  RoReg ADC_WPSR;      /**< \brief (Adc Offset: 0xE8) Write Protect Status Register */
  RoReg Reserved5[5];
  RwReg ADC_RPR;       /**< \brief (Adc Offset: 0x100) Receive Pointer Register */
  RwReg ADC_RCR;       /**< \brief (Adc Offset: 0x104) Receive Counter Register */
  RoReg Reserved6[2];
  RwReg ADC_RNPR;      /**< \brief (Adc Offset: 0x110) Receive Next Pointer Register */
  RwReg ADC_RNCR;      /**< \brief (Adc Offset: 0x114) Receive Next Counter Register */
  RoReg Reserved7[2];
  WoReg ADC_PTCR;      /**< \brief (Adc Offset: 0x120) Transfer Control Register */
  RoReg ADC_PTSR;      /**< \brief (Adc Offset: 0x124) Transfer Status Register */
} Adc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- ADC_CR : (ADC Offset: 0x00) Control Register -------- */
#define ADC_CR_SWRST (0x1u << 0) /**< \brief (ADC_CR) Software Reset */
#define ADC_CR_START (0x1u << 1) /**< \brief (ADC_CR) Start Conversion */
/* -------- ADC_MR : (ADC Offset: 0x04) Mode Register -------- */
#define ADC_MR_TRGEN (0x1u << 0) /**< \brief (ADC_MR) Trigger Enable */
#define   ADC_MR_TRGEN_DIS (0x0u << 0) /**< \brief (ADC_MR) Hardware triggers are disabled. Starting a conversion is only possible by software. */
#define   ADC_MR_TRGEN_EN (0x1u << 0) /**< \brief (ADC_MR) Hardware trigger selected by TRGSEL field is enabled. */
#define ADC_MR_TRGSEL_Pos 1
#define ADC_MR_TRGSEL_Msk (0x7u << ADC_MR_TRGSEL_Pos) /**< \brief (ADC_MR) Trigger Selection */
#define   ADC_MR_TRGSEL_ADC_TRIG0 (0x0u << 1) /**< \brief (ADC_MR) External trigger */
#define   ADC_MR_TRGSEL_ADC_TRIG1 (0x1u << 1) /**< \brief (ADC_MR) TIO Output of the Timer Counter Channel 0 */
#define   ADC_MR_TRGSEL_ADC_TRIG2 (0x2u << 1) /**< \brief (ADC_MR) TIO Output of the Timer Counter Channel 1 */
#define   ADC_MR_TRGSEL_ADC_TRIG3 (0x3u << 1) /**< \brief (ADC_MR) TIO Output of the Timer Counter Channel 2 */
#define ADC_MR_LOWRES (0x1u << 4) /**< \brief (ADC_MR) Resolution */
#define   ADC_MR_LOWRES_BITS_10 (0x0u << 4) /**< \brief (ADC_MR) 10-bit resolution */
#define   ADC_MR_LOWRES_BITS_8 (0x1u << 4) /**< \brief (ADC_MR) 8-bit resolution */
#define ADC_MR_SLEEP (0x1u << 5) /**< \brief (ADC_MR) Sleep Mode */
#define   ADC_MR_SLEEP_NORMAL (0x0u << 5) /**< \brief (ADC_MR) Normal Mode: The ADC Core and reference voltage circuitry are kept ON between conversions */
#define   ADC_MR_SLEEP_SLEEP (0x1u << 5) /**< \brief (ADC_MR) Sleep Mode: The ADC Core and reference voltage circuitry are OFF between conversions */
#define ADC_MR_FWUP (0x1u << 6) /**< \brief (ADC_MR) Fast Wake Up */
#define   ADC_MR_FWUP_OFF (0x0u << 6) /**< \brief (ADC_MR) Normal Sleep Mode: The sleep mode is defined by the SLEEP bit */
#define   ADC_MR_FWUP_ON (0x1u << 6) /**< \brief (ADC_MR) Fast Wake Up Sleep Mode: The Voltage reference is ON between conversions and ADC Core is OFF */
#define ADC_MR_FREERUN (0x1u << 7) /**< \brief (ADC_MR) Free Run Mode */
#define   ADC_MR_FREERUN_OFF (0x0u << 7) /**< \brief (ADC_MR) Normal Mode */
#define   ADC_MR_FREERUN_ON (0x1u << 7) /**< \brief (ADC_MR) Free Run Mode: Never wait for any trigger. */
#define ADC_MR_PRESCAL_Pos 8
#define ADC_MR_PRESCAL_Msk (0xffu << ADC_MR_PRESCAL_Pos) /**< \brief (ADC_MR) Prescaler Rate Selection */
#define ADC_MR_PRESCAL(value) ((ADC_MR_PRESCAL_Msk & ((value) << ADC_MR_PRESCAL_Pos)))
#define ADC_MR_STARTUP_Pos 16
#define ADC_MR_STARTUP_Msk (0xfu << ADC_MR_STARTUP_Pos) /**< \brief (ADC_MR) Start Up Time */
#define   ADC_MR_STARTUP_SUT0 (0x0u << 16) /**< \brief (ADC_MR) 0 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT8 (0x1u << 16) /**< \brief (ADC_MR) 8 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT16 (0x2u << 16) /**< \brief (ADC_MR) 16 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT24 (0x3u << 16) /**< \brief (ADC_MR) 24 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT64 (0x4u << 16) /**< \brief (ADC_MR) 64 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT80 (0x5u << 16) /**< \brief (ADC_MR) 80 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT96 (0x6u << 16) /**< \brief (ADC_MR) 96 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT112 (0x7u << 16) /**< \brief (ADC_MR) 112 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT512 (0x8u << 16) /**< \brief (ADC_MR) 512 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT576 (0x9u << 16) /**< \brief (ADC_MR) 576 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT640 (0xAu << 16) /**< \brief (ADC_MR) 640 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT704 (0xBu << 16) /**< \brief (ADC_MR) 704 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT768 (0xCu << 16) /**< \brief (ADC_MR) 768 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT832 (0xDu << 16) /**< \brief (ADC_MR) 832 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT896 (0xEu << 16) /**< \brief (ADC_MR) 896 periods of ADCClock */
#define   ADC_MR_STARTUP_SUT960 (0xFu << 16) /**< \brief (ADC_MR) 960 periods of ADCClock */
#define ADC_MR_TRACKTIM_Pos 24
#define ADC_MR_TRACKTIM_Msk (0xfu << ADC_MR_TRACKTIM_Pos) /**< \brief (ADC_MR) Tracking Time */
#define ADC_MR_TRACKTIM(value) ((ADC_MR_TRACKTIM_Msk & ((value) << ADC_MR_TRACKTIM_Pos)))
#define ADC_MR_USEQ (0x1u << 31) /**< \brief (ADC_MR) Use Sequence Enable */
#define   ADC_MR_USEQ_NUM_ORDER (0x0u << 31) /**< \brief (ADC_MR) Normal Mode: The controller converts channels in a simple numeric order. */
#define   ADC_MR_USEQ_REG_ORDER (0x1u << 31) /**< \brief (ADC_MR) User Sequence Mode: The sequence respects what is defined in ADC_SEQR1 and ADC_SEQR2 registers. */
/* -------- ADC_SEQR1 : (ADC Offset: 0x08) Channel Sequence Register 1 -------- */
#define ADC_SEQR1_USCH1_Pos 0
#define ADC_SEQR1_USCH1_Msk (0xfu << ADC_SEQR1_USCH1_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 1 */
#define ADC_SEQR1_USCH1(value) ((ADC_SEQR1_USCH1_Msk & ((value) << ADC_SEQR1_USCH1_Pos)))
#define ADC_SEQR1_USCH2_Pos 4
#define ADC_SEQR1_USCH2_Msk (0xfu << ADC_SEQR1_USCH2_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 2 */
#define ADC_SEQR1_USCH2(value) ((ADC_SEQR1_USCH2_Msk & ((value) << ADC_SEQR1_USCH2_Pos)))
#define ADC_SEQR1_USCH3_Pos 8
#define ADC_SEQR1_USCH3_Msk (0xfu << ADC_SEQR1_USCH3_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 3 */
#define ADC_SEQR1_USCH3(value) ((ADC_SEQR1_USCH3_Msk & ((value) << ADC_SEQR1_USCH3_Pos)))
#define ADC_SEQR1_USCH4_Pos 12
#define ADC_SEQR1_USCH4_Msk (0xfu << ADC_SEQR1_USCH4_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 4 */
#define ADC_SEQR1_USCH4(value) ((ADC_SEQR1_USCH4_Msk & ((value) << ADC_SEQR1_USCH4_Pos)))
#define ADC_SEQR1_USCH5_Pos 16
#define ADC_SEQR1_USCH5_Msk (0xfu << ADC_SEQR1_USCH5_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 5 */
#define ADC_SEQR1_USCH5(value) ((ADC_SEQR1_USCH5_Msk & ((value) << ADC_SEQR1_USCH5_Pos)))
#define ADC_SEQR1_USCH6_Pos 20
#define ADC_SEQR1_USCH6_Msk (0xfu << ADC_SEQR1_USCH6_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 6 */
#define ADC_SEQR1_USCH6(value) ((ADC_SEQR1_USCH6_Msk & ((value) << ADC_SEQR1_USCH6_Pos)))
#define ADC_SEQR1_USCH7_Pos 24
#define ADC_SEQR1_USCH7_Msk (0xfu << ADC_SEQR1_USCH7_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 7 */
#define ADC_SEQR1_USCH7(value) ((ADC_SEQR1_USCH7_Msk & ((value) << ADC_SEQR1_USCH7_Pos)))
#define ADC_SEQR1_USCH8_Pos 28
#define ADC_SEQR1_USCH8_Msk (0xfu << ADC_SEQR1_USCH8_Pos) /**< \brief (ADC_SEQR1) User Sequence Number 8 */
#define ADC_SEQR1_USCH8(value) ((ADC_SEQR1_USCH8_Msk & ((value) << ADC_SEQR1_USCH8_Pos)))
/* -------- ADC_SEQR2 : (ADC Offset: 0x0C) Channel Sequence Register 2 -------- */
#define ADC_SEQR2_USCH9_Pos 0
#define ADC_SEQR2_USCH9_Msk (0xfu << ADC_SEQR2_USCH9_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 9 */
#define ADC_SEQR2_USCH9(value) ((ADC_SEQR2_USCH9_Msk & ((value) << ADC_SEQR2_USCH9_Pos)))
#define ADC_SEQR2_USCH10_Pos 4
#define ADC_SEQR2_USCH10_Msk (0xfu << ADC_SEQR2_USCH10_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 10 */
#define ADC_SEQR2_USCH10(value) ((ADC_SEQR2_USCH10_Msk & ((value) << ADC_SEQR2_USCH10_Pos)))
#define ADC_SEQR2_USCH11_Pos 8
#define ADC_SEQR2_USCH11_Msk (0xfu << ADC_SEQR2_USCH11_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 11 */
#define ADC_SEQR2_USCH11(value) ((ADC_SEQR2_USCH11_Msk & ((value) << ADC_SEQR2_USCH11_Pos)))
#define ADC_SEQR2_USCH12_Pos 12
#define ADC_SEQR2_USCH12_Msk (0xfu << ADC_SEQR2_USCH12_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 12 */
#define ADC_SEQR2_USCH12(value) ((ADC_SEQR2_USCH12_Msk & ((value) << ADC_SEQR2_USCH12_Pos)))
#define ADC_SEQR2_USCH13_Pos 16
#define ADC_SEQR2_USCH13_Msk (0xfu << ADC_SEQR2_USCH13_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 13 */
#define ADC_SEQR2_USCH13(value) ((ADC_SEQR2_USCH13_Msk & ((value) << ADC_SEQR2_USCH13_Pos)))
#define ADC_SEQR2_USCH14_Pos 20
#define ADC_SEQR2_USCH14_Msk (0xfu << ADC_SEQR2_USCH14_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 14 */
#define ADC_SEQR2_USCH14(value) ((ADC_SEQR2_USCH14_Msk & ((value) << ADC_SEQR2_USCH14_Pos)))
#define ADC_SEQR2_USCH15_Pos 24
#define ADC_SEQR2_USCH15_Msk (0xfu << ADC_SEQR2_USCH15_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 15 */
#define ADC_SEQR2_USCH15(value) ((ADC_SEQR2_USCH15_Msk & ((value) << ADC_SEQR2_USCH15_Pos)))
#define ADC_SEQR2_USCH16_Pos 28
#define ADC_SEQR2_USCH16_Msk (0xfu << ADC_SEQR2_USCH16_Pos) /**< \brief (ADC_SEQR2) User Sequence Number 16 */
#define ADC_SEQR2_USCH16(value) ((ADC_SEQR2_USCH16_Msk & ((value) << ADC_SEQR2_USCH16_Pos)))
/* -------- ADC_CHER : (ADC Offset: 0x10) Channel Enable Register -------- */
#define ADC_CHER_CH0 (0x1u << 0) /**< \brief (ADC_CHER) Channel 0 Enable */
#define ADC_CHER_CH1 (0x1u << 1) /**< \brief (ADC_CHER) Channel 1 Enable */
#define ADC_CHER_CH2 (0x1u << 2) /**< \brief (ADC_CHER) Channel 2 Enable */
#define ADC_CHER_CH3 (0x1u << 3) /**< \brief (ADC_CHER) Channel 3 Enable */
#define ADC_CHER_CH4 (0x1u << 4) /**< \brief (ADC_CHER) Channel 4 Enable */
#define ADC_CHER_CH5 (0x1u << 5) /**< \brief (ADC_CHER) Channel 5 Enable */
#define ADC_CHER_CH6 (0x1u << 6) /**< \brief (ADC_CHER) Channel 6 Enable */
#define ADC_CHER_CH7 (0x1u << 7) /**< \brief (ADC_CHER) Channel 7 Enable */
#define ADC_CHER_CH8 (0x1u << 8) /**< \brief (ADC_CHER) Channel 8 Enable */
#define ADC_CHER_CH9 (0x1u << 9) /**< \brief (ADC_CHER) Channel 9 Enable */
#define ADC_CHER_CH10 (0x1u << 10) /**< \brief (ADC_CHER) Channel 10 Enable */
#define ADC_CHER_CH11 (0x1u << 11) /**< \brief (ADC_CHER) Channel 11 Enable */
#define ADC_CHER_CH12 (0x1u << 12) /**< \brief (ADC_CHER) Channel 12 Enable */
#define ADC_CHER_CH13 (0x1u << 13) /**< \brief (ADC_CHER) Channel 13 Enable */
#define ADC_CHER_CH14 (0x1u << 14) /**< \brief (ADC_CHER) Channel 14 Enable */
#define ADC_CHER_CH15 (0x1u << 15) /**< \brief (ADC_CHER) Channel 15 Enable */
/* -------- ADC_CHDR : (ADC Offset: 0x14) Channel Disable Register -------- */
#define ADC_CHDR_CH0 (0x1u << 0) /**< \brief (ADC_CHDR) Channel 0 Disable */
#define ADC_CHDR_CH1 (0x1u << 1) /**< \brief (ADC_CHDR) Channel 1 Disable */
#define ADC_CHDR_CH2 (0x1u << 2) /**< \brief (ADC_CHDR) Channel 2 Disable */
#define ADC_CHDR_CH3 (0x1u << 3) /**< \brief (ADC_CHDR) Channel 3 Disable */
#define ADC_CHDR_CH4 (0x1u << 4) /**< \brief (ADC_CHDR) Channel 4 Disable */
#define ADC_CHDR_CH5 (0x1u << 5) /**< \brief (ADC_CHDR) Channel 5 Disable */
#define ADC_CHDR_CH6 (0x1u << 6) /**< \brief (ADC_CHDR) Channel 6 Disable */
#define ADC_CHDR_CH7 (0x1u << 7) /**< \brief (ADC_CHDR) Channel 7 Disable */
#define ADC_CHDR_CH8 (0x1u << 8) /**< \brief (ADC_CHDR) Channel 8 Disable */
#define ADC_CHDR_CH9 (0x1u << 9) /**< \brief (ADC_CHDR) Channel 9 Disable */
#define ADC_CHDR_CH10 (0x1u << 10) /**< \brief (ADC_CHDR) Channel 10 Disable */
#define ADC_CHDR_CH11 (0x1u << 11) /**< \brief (ADC_CHDR) Channel 11 Disable */
#define ADC_CHDR_CH12 (0x1u << 12) /**< \brief (ADC_CHDR) Channel 12 Disable */
#define ADC_CHDR_CH13 (0x1u << 13) /**< \brief (ADC_CHDR) Channel 13 Disable */
#define ADC_CHDR_CH14 (0x1u << 14) /**< \brief (ADC_CHDR) Channel 14 Disable */
#define ADC_CHDR_CH15 (0x1u << 15) /**< \brief (ADC_CHDR) Channel 15 Disable */
/* -------- ADC_CHSR : (ADC Offset: 0x18) Channel Status Register -------- */
#define ADC_CHSR_CH0 (0x1u << 0) /**< \brief (ADC_CHSR) Channel 0 Status */
#define ADC_CHSR_CH1 (0x1u << 1) /**< \brief (ADC_CHSR) Channel 1 Status */
#define ADC_CHSR_CH2 (0x1u << 2) /**< \brief (ADC_CHSR) Channel 2 Status */
#define ADC_CHSR_CH3 (0x1u << 3) /**< \brief (ADC_CHSR) Channel 3 Status */
#define ADC_CHSR_CH4 (0x1u << 4) /**< \brief (ADC_CHSR) Channel 4 Status */
#define ADC_CHSR_CH5 (0x1u << 5) /**< \brief (ADC_CHSR) Channel 5 Status */
#define ADC_CHSR_CH6 (0x1u << 6) /**< \brief (ADC_CHSR) Channel 6 Status */
#define ADC_CHSR_CH7 (0x1u << 7) /**< \brief (ADC_CHSR) Channel 7 Status */
#define ADC_CHSR_CH8 (0x1u << 8) /**< \brief (ADC_CHSR) Channel 8 Status */
#define ADC_CHSR_CH9 (0x1u << 9) /**< \brief (ADC_CHSR) Channel 9 Status */
#define ADC_CHSR_CH10 (0x1u << 10) /**< \brief (ADC_CHSR) Channel 10 Status */
#define ADC_CHSR_CH11 (0x1u << 11) /**< \brief (ADC_CHSR) Channel 11 Status */
#define ADC_CHSR_CH12 (0x1u << 12) /**< \brief (ADC_CHSR) Channel 12 Status */
#define ADC_CHSR_CH13 (0x1u << 13) /**< \brief (ADC_CHSR) Channel 13 Status */
#define ADC_CHSR_CH14 (0x1u << 14) /**< \brief (ADC_CHSR) Channel 14 Status */
#define ADC_CHSR_CH15 (0x1u << 15) /**< \brief (ADC_CHSR) Channel 15 Status */
/* -------- ADC_LCDR : (ADC Offset: 0x20) Last Converted Data Register -------- */
#define ADC_LCDR_LDATA_Pos 0
#define ADC_LCDR_LDATA_Msk (0xfffu << ADC_LCDR_LDATA_Pos) /**< \brief (ADC_LCDR) Last Data Converted */
#define ADC_LCDR_CHNB_Pos 12
#define ADC_LCDR_CHNB_Msk (0xfu << ADC_LCDR_CHNB_Pos) /**< \brief (ADC_LCDR) Channel Number */
/* -------- ADC_IER : (ADC Offset: 0x24) Interrupt Enable Register -------- */
#define ADC_IER_EOC0 (0x1u << 0) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 0 */
#define ADC_IER_EOC1 (0x1u << 1) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 1 */
#define ADC_IER_EOC2 (0x1u << 2) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 2 */
#define ADC_IER_EOC3 (0x1u << 3) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 3 */
#define ADC_IER_EOC4 (0x1u << 4) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 4 */
#define ADC_IER_EOC5 (0x1u << 5) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 5 */
#define ADC_IER_EOC6 (0x1u << 6) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 6 */
#define ADC_IER_EOC7 (0x1u << 7) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 7 */
#define ADC_IER_EOC8 (0x1u << 8) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 8 */
#define ADC_IER_EOC9 (0x1u << 9) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 9 */
#define ADC_IER_EOC10 (0x1u << 10) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 10 */
#define ADC_IER_EOC11 (0x1u << 11) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 11 */
#define ADC_IER_EOC12 (0x1u << 12) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 12 */
#define ADC_IER_EOC13 (0x1u << 13) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 13 */
#define ADC_IER_EOC14 (0x1u << 14) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 14 */
#define ADC_IER_EOC15 (0x1u << 15) /**< \brief (ADC_IER) End of Conversion Interrupt Enable 15 */
#define ADC_IER_DRDY (0x1u << 24) /**< \brief (ADC_IER) Data Ready Interrupt Enable */
#define ADC_IER_GOVRE (0x1u << 25) /**< \brief (ADC_IER) General Overrun Error Interrupt Enable */
#define ADC_IER_COMPE (0x1u << 26) /**< \brief (ADC_IER) Comparison Event Interrupt Enable */
#define ADC_IER_ENDRX (0x1u << 27) /**< \brief (ADC_IER) End of Receive Buffer Interrupt Enable */
#define ADC_IER_RXBUFF (0x1u << 28) /**< \brief (ADC_IER) Receive Buffer Full Interrupt Enable */
/* -------- ADC_IDR : (ADC Offset: 0x28) Interrupt Disable Register -------- */
#define ADC_IDR_EOC0 (0x1u << 0) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 0 */
#define ADC_IDR_EOC1 (0x1u << 1) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 1 */
#define ADC_IDR_EOC2 (0x1u << 2) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 2 */
#define ADC_IDR_EOC3 (0x1u << 3) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 3 */
#define ADC_IDR_EOC4 (0x1u << 4) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 4 */
#define ADC_IDR_EOC5 (0x1u << 5) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 5 */
#define ADC_IDR_EOC6 (0x1u << 6) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 6 */
#define ADC_IDR_EOC7 (0x1u << 7) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 7 */
#define ADC_IDR_EOC8 (0x1u << 8) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 8 */
#define ADC_IDR_EOC9 (0x1u << 9) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 9 */
#define ADC_IDR_EOC10 (0x1u << 10) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 10 */
#define ADC_IDR_EOC11 (0x1u << 11) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 11 */
#define ADC_IDR_EOC12 (0x1u << 12) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 12 */
#define ADC_IDR_EOC13 (0x1u << 13) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 13 */
#define ADC_IDR_EOC14 (0x1u << 14) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 14 */
#define ADC_IDR_EOC15 (0x1u << 15) /**< \brief (ADC_IDR) End of Conversion Interrupt Disable 15 */
#define ADC_IDR_DRDY (0x1u << 24) /**< \brief (ADC_IDR) Data Ready Interrupt Disable */
#define ADC_IDR_GOVRE (0x1u << 25) /**< \brief (ADC_IDR) General Overrun Error Interrupt Disable */
#define ADC_IDR_COMPE (0x1u << 26) /**< \brief (ADC_IDR) Comparison Event Interrupt Disable */
#define ADC_IDR_ENDRX (0x1u << 27) /**< \brief (ADC_IDR) End of Receive Buffer Interrupt Disable */
#define ADC_IDR_RXBUFF (0x1u << 28) /**< \brief (ADC_IDR) Receive Buffer Full Interrupt Disable */
/* -------- ADC_IMR : (ADC Offset: 0x2C) Interrupt Mask Register -------- */
#define ADC_IMR_EOC0 (0x1u << 0) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 0 */
#define ADC_IMR_EOC1 (0x1u << 1) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 1 */
#define ADC_IMR_EOC2 (0x1u << 2) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 2 */
#define ADC_IMR_EOC3 (0x1u << 3) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 3 */
#define ADC_IMR_EOC4 (0x1u << 4) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 4 */
#define ADC_IMR_EOC5 (0x1u << 5) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 5 */
#define ADC_IMR_EOC6 (0x1u << 6) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 6 */
#define ADC_IMR_EOC7 (0x1u << 7) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 7 */
#define ADC_IMR_EOC8 (0x1u << 8) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 8 */
#define ADC_IMR_EOC9 (0x1u << 9) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 9 */
#define ADC_IMR_EOC10 (0x1u << 10) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 10 */
#define ADC_IMR_EOC11 (0x1u << 11) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 11 */
#define ADC_IMR_EOC12 (0x1u << 12) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 12 */
#define ADC_IMR_EOC13 (0x1u << 13) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 13 */
#define ADC_IMR_EOC14 (0x1u << 14) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 14 */
#define ADC_IMR_EOC15 (0x1u << 15) /**< \brief (ADC_IMR) End of Conversion Interrupt Mask 15 */
#define ADC_IMR_DRDY (0x1u << 24) /**< \brief (ADC_IMR) Data Ready Interrupt Mask */
#define ADC_IMR_GOVRE (0x1u << 25) /**< \brief (ADC_IMR) General Overrun Error Interrupt Mask */
#define ADC_IMR_COMPE (0x1u << 26) /**< \brief (ADC_IMR) Comparison Event Interrupt Mask */
#define ADC_IMR_ENDRX (0x1u << 27) /**< \brief (ADC_IMR) End of Receive Buffer Interrupt Mask */
#define ADC_IMR_RXBUFF (0x1u << 28) /**< \brief (ADC_IMR) Receive Buffer Full Interrupt Mask */
/* -------- ADC_ISR : (ADC Offset: 0x30) Interrupt Status Register -------- */
#define ADC_ISR_EOC0 (0x1u << 0) /**< \brief (ADC_ISR) End of Conversion 0 */
#define ADC_ISR_EOC1 (0x1u << 1) /**< \brief (ADC_ISR) End of Conversion 1 */
#define ADC_ISR_EOC2 (0x1u << 2) /**< \brief (ADC_ISR) End of Conversion 2 */
#define ADC_ISR_EOC3 (0x1u << 3) /**< \brief (ADC_ISR) End of Conversion 3 */
#define ADC_ISR_EOC4 (0x1u << 4) /**< \brief (ADC_ISR) End of Conversion 4 */
#define ADC_ISR_EOC5 (0x1u << 5) /**< \brief (ADC_ISR) End of Conversion 5 */
#define ADC_ISR_EOC6 (0x1u << 6) /**< \brief (ADC_ISR) End of Conversion 6 */
#define ADC_ISR_EOC7 (0x1u << 7) /**< \brief (ADC_ISR) End of Conversion 7 */
#define ADC_ISR_EOC8 (0x1u << 8) /**< \brief (ADC_ISR) End of Conversion 8 */
#define ADC_ISR_EOC9 (0x1u << 9) /**< \brief (ADC_ISR) End of Conversion 9 */
#define ADC_ISR_EOC10 (0x1u << 10) /**< \brief (ADC_ISR) End of Conversion 10 */
#define ADC_ISR_EOC11 (0x1u << 11) /**< \brief (ADC_ISR) End of Conversion 11 */
#define ADC_ISR_EOC12 (0x1u << 12) /**< \brief (ADC_ISR) End of Conversion 12 */
#define ADC_ISR_EOC13 (0x1u << 13) /**< \brief (ADC_ISR) End of Conversion 13 */
#define ADC_ISR_EOC14 (0x1u << 14) /**< \brief (ADC_ISR) End of Conversion 14 */
#define ADC_ISR_EOC15 (0x1u << 15) /**< \brief (ADC_ISR) End of Conversion 15 */
#define ADC_ISR_DRDY (0x1u << 24) /**< \brief (ADC_ISR) Data Ready */
#define ADC_ISR_GOVRE (0x1u << 25) /**< \brief (ADC_ISR) General Overrun Error */
#define ADC_ISR_COMPE (0x1u << 26) /**< \brief (ADC_ISR) Comparison Error */
#define ADC_ISR_ENDRX (0x1u << 27) /**< \brief (ADC_ISR) End of RX Buffer */
#define ADC_ISR_RXBUFF (0x1u << 28) /**< \brief (ADC_ISR) RX Buffer Full */
/* -------- ADC_OVER : (ADC Offset: 0x3C) Overrun Status Register -------- */
#define ADC_OVER_OVRE0 (0x1u << 0) /**< \brief (ADC_OVER) Overrun Error 0 */
#define ADC_OVER_OVRE1 (0x1u << 1) /**< \brief (ADC_OVER) Overrun Error 1 */
#define ADC_OVER_OVRE2 (0x1u << 2) /**< \brief (ADC_OVER) Overrun Error 2 */
#define ADC_OVER_OVRE3 (0x1u << 3) /**< \brief (ADC_OVER) Overrun Error 3 */
#define ADC_OVER_OVRE4 (0x1u << 4) /**< \brief (ADC_OVER) Overrun Error 4 */
#define ADC_OVER_OVRE5 (0x1u << 5) /**< \brief (ADC_OVER) Overrun Error 5 */
#define ADC_OVER_OVRE6 (0x1u << 6) /**< \brief (ADC_OVER) Overrun Error 6 */
#define ADC_OVER_OVRE7 (0x1u << 7) /**< \brief (ADC_OVER) Overrun Error 7 */
#define ADC_OVER_OVRE8 (0x1u << 8) /**< \brief (ADC_OVER) Overrun Error 8 */
#define ADC_OVER_OVRE9 (0x1u << 9) /**< \brief (ADC_OVER) Overrun Error 9 */
#define ADC_OVER_OVRE10 (0x1u << 10) /**< \brief (ADC_OVER) Overrun Error 10 */
#define ADC_OVER_OVRE11 (0x1u << 11) /**< \brief (ADC_OVER) Overrun Error 11 */
#define ADC_OVER_OVRE12 (0x1u << 12) /**< \brief (ADC_OVER) Overrun Error 12 */
#define ADC_OVER_OVRE13 (0x1u << 13) /**< \brief (ADC_OVER) Overrun Error 13 */
#define ADC_OVER_OVRE14 (0x1u << 14) /**< \brief (ADC_OVER) Overrun Error 14 */
#define ADC_OVER_OVRE15 (0x1u << 15) /**< \brief (ADC_OVER) Overrun Error 15 */
/* -------- ADC_EMR : (ADC Offset: 0x40) Extended Mode Register -------- */
#define ADC_EMR_CMPMODE_Pos 0
#define ADC_EMR_CMPMODE_Msk (0x3u << ADC_EMR_CMPMODE_Pos) /**< \brief (ADC_EMR) Comparison Mode */
#define   ADC_EMR_CMPMODE_LOW (0x0u << 0) /**< \brief (ADC_EMR) Generates an event when the converted data is lower than the low threshold of the window. */
#define   ADC_EMR_CMPMODE_HIGH (0x1u << 0) /**< \brief (ADC_EMR) Generates an event when the converted data is higher than the high threshold of the window. */
#define   ADC_EMR_CMPMODE_IN (0x2u << 0) /**< \brief (ADC_EMR) Generates an event when the converted data is in the comparison window. */
#define   ADC_EMR_CMPMODE_OUT (0x3u << 0) /**< \brief (ADC_EMR) Generates an event when the converted data is out of the comparison window. */
#define ADC_EMR_CMPSEL_Pos 4
#define ADC_EMR_CMPSEL_Msk (0xfu << ADC_EMR_CMPSEL_Pos) /**< \brief (ADC_EMR) Comparison Selected Channel */
#define ADC_EMR_CMPSEL(value) ((ADC_EMR_CMPSEL_Msk & ((value) << ADC_EMR_CMPSEL_Pos)))
#define ADC_EMR_CMPALL (0x1u << 9) /**< \brief (ADC_EMR) Compare All Channels */
#define ADC_EMR_TAG (0x1u << 24) /**< \brief (ADC_EMR) TAG of ADC_LDCR register */
/* -------- ADC_CWR : (ADC Offset: 0x44) Compare Window Register -------- */
#define ADC_CWR_LOWTHRES_Pos 0
#define ADC_CWR_LOWTHRES_Msk (0xfffu << ADC_CWR_LOWTHRES_Pos) /**< \brief (ADC_CWR) Low Threshold */
#define ADC_CWR_LOWTHRES(value) ((ADC_CWR_LOWTHRES_Msk & ((value) << ADC_CWR_LOWTHRES_Pos)))
#define ADC_CWR_HIGHTHRES_Pos 16
#define ADC_CWR_HIGHTHRES_Msk (0xfffu << ADC_CWR_HIGHTHRES_Pos) /**< \brief (ADC_CWR) High Threshold */
#define ADC_CWR_HIGHTHRES(value) ((ADC_CWR_HIGHTHRES_Msk & ((value) << ADC_CWR_HIGHTHRES_Pos)))
/* -------- ADC_CDR[16] : (ADC Offset: 0x50) Channel Data Register -------- */
#define ADC_CDR_DATA_Pos 0
#define ADC_CDR_DATA_Msk (0xfffu << ADC_CDR_DATA_Pos) /**< \brief (ADC_CDR[16]) Converted Data */
/* -------- ADC_WPMR : (ADC Offset: 0xE4) Write Protect Mode Register -------- */
#define ADC_WPMR_WPEN (0x1u << 0) /**< \brief (ADC_WPMR) Write Protect Enable */
#define ADC_WPMR_WPKEY_Pos 8
#define ADC_WPMR_WPKEY_Msk (0xffffffu << ADC_WPMR_WPKEY_Pos) /**< \brief (ADC_WPMR) Write Protect KEY */
#define ADC_WPMR_WPKEY(value) ((ADC_WPMR_WPKEY_Msk & ((value) << ADC_WPMR_WPKEY_Pos)))
/* -------- ADC_WPSR : (ADC Offset: 0xE8) Write Protect Status Register -------- */
#define ADC_WPSR_WPVS (0x1u << 0) /**< \brief (ADC_WPSR) Write Protect Violation Status */
#define ADC_WPSR_WPVSRC_Pos 8
#define ADC_WPSR_WPVSRC_Msk (0xffffu << ADC_WPSR_WPVSRC_Pos) /**< \brief (ADC_WPSR) Write Protect Violation Source */
/* -------- ADC_RPR : (ADC Offset: 0x100) Receive Pointer Register -------- */
#define ADC_RPR_RXPTR_Pos 0
#define ADC_RPR_RXPTR_Msk (0xffffffffu << ADC_RPR_RXPTR_Pos) /**< \brief (ADC_RPR) Receive Pointer Register */
#define ADC_RPR_RXPTR(value) ((ADC_RPR_RXPTR_Msk & ((value) << ADC_RPR_RXPTR_Pos)))
/* -------- ADC_RCR : (ADC Offset: 0x104) Receive Counter Register -------- */
#define ADC_RCR_RXCTR_Pos 0
#define ADC_RCR_RXCTR_Msk (0xffffu << ADC_RCR_RXCTR_Pos) /**< \brief (ADC_RCR) Receive Counter Register */
#define ADC_RCR_RXCTR(value) ((ADC_RCR_RXCTR_Msk & ((value) << ADC_RCR_RXCTR_Pos)))
/* -------- ADC_RNPR : (ADC Offset: 0x110) Receive Next Pointer Register -------- */
#define ADC_RNPR_RXNPTR_Pos 0
#define ADC_RNPR_RXNPTR_Msk (0xffffffffu << ADC_RNPR_RXNPTR_Pos) /**< \brief (ADC_RNPR) Receive Next Pointer */
#define ADC_RNPR_RXNPTR(value) ((ADC_RNPR_RXNPTR_Msk & ((value) << ADC_RNPR_RXNPTR_Pos)))
/* -------- ADC_RNCR : (ADC Offset: 0x114) Receive Next Counter Register -------- */
#define ADC_RNCR_RXNCTR_Pos 0
#define ADC_RNCR_RXNCTR_Msk (0xffffu << ADC_RNCR_RXNCTR_Pos) /**< \brief (ADC_RNCR) Receive Next Counter */
#define ADC_RNCR_RXNCTR(value) ((ADC_RNCR_RXNCTR_Msk & ((value) << ADC_RNCR_RXNCTR_Pos)))
/* -------- ADC_PTCR : (ADC Offset: 0x120) Transfer Control Register -------- */
#define ADC_PTCR_RXTEN (0x1u << 0) /**< \brief (ADC_PTCR) Receiver Transfer Enable */
#define ADC_PTCR_RXTDIS (0x1u << 1) /**< \brief (ADC_PTCR) Receiver Transfer Disable */
#define ADC_PTCR_TXTEN (0x1u << 8) /**< \brief (ADC_PTCR) Transmitter Transfer Enable */
#define ADC_PTCR_TXTDIS (0x1u << 9) /**< \brief (ADC_PTCR) Transmitter Transfer Disable */
/* -------- ADC_PTSR : (ADC Offset: 0x124) Transfer Status Register -------- */
#define ADC_PTSR_RXTEN (0x1u << 0) /**< \brief (ADC_PTSR) Receiver Transfer Enable */
#define ADC_PTSR_TXTEN (0x1u << 8) /**< \brief (ADC_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_ADC_COMPONENT_ */

#ifndef _SAM3N_CHIPID_COMPONENT_
#define _SAM3N_CHIPID_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Chip Identifier */
/* ============================================================================= */
/** \addtogroup SAM3N_CHIPID Chip Identifier */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Chipid hardware registers */
typedef struct {
  RoReg CHIPID_CIDR; /**< \brief (Chipid Offset: 0x0) Chip ID Register */
  RoReg CHIPID_EXID; /**< \brief (Chipid Offset: 0x4) Chip ID Extension Register */
} Chipid;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- CHIPID_CIDR : (CHIPID Offset: 0x0) Chip ID Register -------- */
#define CHIPID_CIDR_VERSION_Pos 0
#define CHIPID_CIDR_VERSION_Msk (0x1fu << CHIPID_CIDR_VERSION_Pos) /**< \brief (CHIPID_CIDR) Version of the Device */
#define CHIPID_CIDR_EPROC_Pos 5
#define CHIPID_CIDR_EPROC_Msk (0x7u << CHIPID_CIDR_EPROC_Pos) /**< \brief (CHIPID_CIDR) Embedded Processor */
#define   CHIPID_CIDR_EPROC_ARM946ES (0x1u << 5) /**< \brief (CHIPID_CIDR) ARM946ES */
#define   CHIPID_CIDR_EPROC_ARM7TDMI (0x2u << 5) /**< \brief (CHIPID_CIDR) ARM7TDMI */
#define   CHIPID_CIDR_EPROC_CM3 (0x3u << 5) /**< \brief (CHIPID_CIDR) Cortex-M3 */
#define   CHIPID_CIDR_EPROC_ARM920T (0x4u << 5) /**< \brief (CHIPID_CIDR) ARM920T */
#define   CHIPID_CIDR_EPROC_ARM926EJS (0x5u << 5) /**< \brief (CHIPID_CIDR) ARM926EJS */
#define   CHIPID_CIDR_EPROC_CA5 (0x6u << 5) /**< \brief (CHIPID_CIDR) Cortex-A5 */
#define   CHIPID_CIDR_EPROC_CM4 (0x7u << 5) /**< \brief (CHIPID_CIDR) Cortex-M4 */
#define CHIPID_CIDR_NVPSIZ_Pos 8
#define CHIPID_CIDR_NVPSIZ_Msk (0xfu << CHIPID_CIDR_NVPSIZ_Pos) /**< \brief (CHIPID_CIDR) Nonvolatile Program Memory Size */
#define   CHIPID_CIDR_NVPSIZ_NONE (0x0u << 8) /**< \brief (CHIPID_CIDR) None */
#define   CHIPID_CIDR_NVPSIZ_8K (0x1u << 8) /**< \brief (CHIPID_CIDR) 8K bytes */
#define   CHIPID_CIDR_NVPSIZ_16K (0x2u << 8) /**< \brief (CHIPID_CIDR) 16K bytes */
#define   CHIPID_CIDR_NVPSIZ_32K (0x3u << 8) /**< \brief (CHIPID_CIDR) 32K bytes */
#define   CHIPID_CIDR_NVPSIZ_64K (0x5u << 8) /**< \brief (CHIPID_CIDR) 64K bytes */
#define   CHIPID_CIDR_NVPSIZ_128K (0x7u << 8) /**< \brief (CHIPID_CIDR) 128K bytes */
#define   CHIPID_CIDR_NVPSIZ_256K (0x9u << 8) /**< \brief (CHIPID_CIDR) 256K bytes */
#define   CHIPID_CIDR_NVPSIZ_512K (0xAu << 8) /**< \brief (CHIPID_CIDR) 512K bytes */
#define   CHIPID_CIDR_NVPSIZ_1024K (0xCu << 8) /**< \brief (CHIPID_CIDR) 1024K bytes */
#define   CHIPID_CIDR_NVPSIZ_2048K (0xEu << 8) /**< \brief (CHIPID_CIDR) 2048K bytes */
#define CHIPID_CIDR_NVPSIZ2_Pos 12
#define CHIPID_CIDR_NVPSIZ2_Msk (0xfu << CHIPID_CIDR_NVPSIZ2_Pos) /**< \brief (CHIPID_CIDR) Second Nonvolatile Program Memory Size */
#define   CHIPID_CIDR_NVPSIZ2_NONE (0x0u << 12) /**< \brief (CHIPID_CIDR) None */
#define   CHIPID_CIDR_NVPSIZ2_8K (0x1u << 12) /**< \brief (CHIPID_CIDR) 8K bytes */
#define   CHIPID_CIDR_NVPSIZ2_16K (0x2u << 12) /**< \brief (CHIPID_CIDR) 16K bytes */
#define   CHIPID_CIDR_NVPSIZ2_32K (0x3u << 12) /**< \brief (CHIPID_CIDR) 32K bytes */
#define   CHIPID_CIDR_NVPSIZ2_64K (0x5u << 12) /**< \brief (CHIPID_CIDR) 64K bytes */
#define   CHIPID_CIDR_NVPSIZ2_128K (0x7u << 12) /**< \brief (CHIPID_CIDR) 128K bytes */
#define   CHIPID_CIDR_NVPSIZ2_256K (0x9u << 12) /**< \brief (CHIPID_CIDR) 256K bytes */
#define   CHIPID_CIDR_NVPSIZ2_512K (0xAu << 12) /**< \brief (CHIPID_CIDR) 512K bytes */
#define   CHIPID_CIDR_NVPSIZ2_1024K (0xCu << 12) /**< \brief (CHIPID_CIDR) 1024K bytes */
#define   CHIPID_CIDR_NVPSIZ2_2048K (0xEu << 12) /**< \brief (CHIPID_CIDR) 2048K bytes */
#define CHIPID_CIDR_SRAMSIZ_Pos 16
#define CHIPID_CIDR_SRAMSIZ_Msk (0xfu << CHIPID_CIDR_SRAMSIZ_Pos) /**< \brief (CHIPID_CIDR) Internal SRAM Size */
#define   CHIPID_CIDR_SRAMSIZ_48K (0x0u << 16) /**< \brief (CHIPID_CIDR) 48K bytes */
#define   CHIPID_CIDR_SRAMSIZ_1K (0x1u << 16) /**< \brief (CHIPID_CIDR) 1K bytes */
#define   CHIPID_CIDR_SRAMSIZ_2K (0x2u << 16) /**< \brief (CHIPID_CIDR) 2K bytes */
#define   CHIPID_CIDR_SRAMSIZ_6K (0x3u << 16) /**< \brief (CHIPID_CIDR) 6K bytes */
#define   CHIPID_CIDR_SRAMSIZ_24K (0x4u << 16) /**< \brief (CHIPID_CIDR) 24K bytes */
#define   CHIPID_CIDR_SRAMSIZ_4K (0x5u << 16) /**< \brief (CHIPID_CIDR) 4K bytes */
#define   CHIPID_CIDR_SRAMSIZ_80K (0x6u << 16) /**< \brief (CHIPID_CIDR) 80K bytes */
#define   CHIPID_CIDR_SRAMSIZ_160K (0x7u << 16) /**< \brief (CHIPID_CIDR) 160K bytes */
#define   CHIPID_CIDR_SRAMSIZ_8K (0x8u << 16) /**< \brief (CHIPID_CIDR) 8K bytes */
#define   CHIPID_CIDR_SRAMSIZ_16K (0x9u << 16) /**< \brief (CHIPID_CIDR) 16K bytes */
#define   CHIPID_CIDR_SRAMSIZ_32K (0xAu << 16) /**< \brief (CHIPID_CIDR) 32K bytes */
#define   CHIPID_CIDR_SRAMSIZ_64K (0xBu << 16) /**< \brief (CHIPID_CIDR) 64K bytes */
#define   CHIPID_CIDR_SRAMSIZ_128K (0xCu << 16) /**< \brief (CHIPID_CIDR) 128K bytes */
#define   CHIPID_CIDR_SRAMSIZ_256K (0xDu << 16) /**< \brief (CHIPID_CIDR) 256K bytes */
#define   CHIPID_CIDR_SRAMSIZ_96K (0xEu << 16) /**< \brief (CHIPID_CIDR) 96K bytes */
#define   CHIPID_CIDR_SRAMSIZ_512K (0xFu << 16) /**< \brief (CHIPID_CIDR) 512K bytes */
#define CHIPID_CIDR_ARCH_Pos 20
#define CHIPID_CIDR_ARCH_Msk (0xffu << CHIPID_CIDR_ARCH_Pos) /**< \brief (CHIPID_CIDR) Architecture Identifier */
#define   CHIPID_CIDR_ARCH_AT91SAM9xx (0x19u << 20) /**< \brief (CHIPID_CIDR) AT91SAM9xx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM9XExx (0x29u << 20) /**< \brief (CHIPID_CIDR) AT91SAM9XExx Series */
#define   CHIPID_CIDR_ARCH_AT91x34 (0x34u << 20) /**< \brief (CHIPID_CIDR) AT91x34 Series */
#define   CHIPID_CIDR_ARCH_CAP7 (0x37u << 20) /**< \brief (CHIPID_CIDR) CAP7 Series */
#define   CHIPID_CIDR_ARCH_CAP9 (0x39u << 20) /**< \brief (CHIPID_CIDR) CAP9 Series */
#define   CHIPID_CIDR_ARCH_CAP11 (0x3Bu << 20) /**< \brief (CHIPID_CIDR) CAP11 Series */
#define   CHIPID_CIDR_ARCH_AT91x40 (0x40u << 20) /**< \brief (CHIPID_CIDR) AT91x40 Series */
#define   CHIPID_CIDR_ARCH_AT91x42 (0x42u << 20) /**< \brief (CHIPID_CIDR) AT91x42 Series */
#define   CHIPID_CIDR_ARCH_AT91x55 (0x55u << 20) /**< \brief (CHIPID_CIDR) AT91x55 Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7Axx (0x60u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7Axx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7AQxx (0x61u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7AQxx Series */
#define   CHIPID_CIDR_ARCH_AT91x63 (0x63u << 20) /**< \brief (CHIPID_CIDR) AT91x63 Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7Sxx (0x70u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7Sxx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7XCxx (0x71u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7XCxx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7SExx (0x72u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7SExx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7Lxx (0x73u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7Lxx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7Xxx (0x75u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7Xxx Series */
#define   CHIPID_CIDR_ARCH_AT91SAM7SLxx (0x76u << 20) /**< \brief (CHIPID_CIDR) AT91SAM7SLxx Series */
#define   CHIPID_CIDR_ARCH_SAM3UxC (0x80u << 20) /**< \brief (CHIPID_CIDR) SAM3UxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3UxE (0x81u << 20) /**< \brief (CHIPID_CIDR) SAM3UxE Series (144-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3AxC (0x83u << 20) /**< \brief (CHIPID_CIDR) SAM3AxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4AxC (0x83u << 20) /**< \brief (CHIPID_CIDR) SAM4AxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3XxC (0x84u << 20) /**< \brief (CHIPID_CIDR) SAM3XxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4XxC (0x84u << 20) /**< \brief (CHIPID_CIDR) SAM4XxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3XxE (0x85u << 20) /**< \brief (CHIPID_CIDR) SAM3XxE Series (144-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4XxE (0x85u << 20) /**< \brief (CHIPID_CIDR) SAM4XxE Series (144-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3XxG (0x86u << 20) /**< \brief (CHIPID_CIDR) SAM3XxG Series (208/217-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4XxG (0x86u << 20) /**< \brief (CHIPID_CIDR) SAM4XxG Series (208/217-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3SxA (0x88u << 20) /**< \brief (CHIPID_CIDR) SAM3SxASeries (48-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4SxA (0x88u << 20) /**< \brief (CHIPID_CIDR) SAM4SxA Series (48-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3SxB (0x89u << 20) /**< \brief (CHIPID_CIDR) SAM3SxB Series (64-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4SxB (0x89u << 20) /**< \brief (CHIPID_CIDR) SAM4SxB Series (64-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3SxC (0x8Au << 20) /**< \brief (CHIPID_CIDR) SAM3SxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM4SxC (0x8Au << 20) /**< \brief (CHIPID_CIDR) SAM4SxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_AT91x92 (0x92u << 20) /**< \brief (CHIPID_CIDR) AT91x92 Series */
#define   CHIPID_CIDR_ARCH_SAM3NxA (0x93u << 20) /**< \brief (CHIPID_CIDR) SAM3NxA Series (48-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3NxB (0x94u << 20) /**< \brief (CHIPID_CIDR) SAM3NxB Series (64-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3NxC (0x95u << 20) /**< \brief (CHIPID_CIDR) SAM3NxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3SDxB (0x99u << 20) /**< \brief (CHIPID_CIDR) SAM3SDxB Series (64-pin version) */
#define   CHIPID_CIDR_ARCH_SAM3SDxC (0x9Au << 20) /**< \brief (CHIPID_CIDR) SAM3SDxC Series (100-pin version) */
#define   CHIPID_CIDR_ARCH_SAM5A (0xA5u << 20) /**< \brief (CHIPID_CIDR) SAM5A */
#define   CHIPID_CIDR_ARCH_AT75Cxx (0xF0u << 20) /**< \brief (CHIPID_CIDR) AT75Cxx Series */
#define CHIPID_CIDR_NVPTYP_Pos 28
#define CHIPID_CIDR_NVPTYP_Msk (0x7u << CHIPID_CIDR_NVPTYP_Pos) /**< \brief (CHIPID_CIDR) Nonvolatile Program Memory Type */
#define   CHIPID_CIDR_NVPTYP_ROM (0x0u << 28) /**< \brief (CHIPID_CIDR) ROM */
#define   CHIPID_CIDR_NVPTYP_ROMLESS (0x1u << 28) /**< \brief (CHIPID_CIDR) ROMless or on-chip Flash */
#define   CHIPID_CIDR_NVPTYP_FLASH (0x2u << 28) /**< \brief (CHIPID_CIDR) Embedded Flash Memory */
#define   CHIPID_CIDR_NVPTYP_ROM_FLASH (0x3u << 28) /**< \brief (CHIPID_CIDR) ROM and Embedded Flash MemoryNVPSIZ is ROM size      NVPSIZ2 is Flash size */
#define   CHIPID_CIDR_NVPTYP_SRAM (0x4u << 28) /**< \brief (CHIPID_CIDR) SRAM emulating ROM */
#define CHIPID_CIDR_EXT (0x1u << 31) /**< \brief (CHIPID_CIDR) Extension Flag */
/* -------- CHIPID_EXID : (CHIPID Offset: 0x4) Chip ID Extension Register -------- */
#define CHIPID_EXID_EXID_Pos 0
#define CHIPID_EXID_EXID_Msk (0xffffffffu << CHIPID_EXID_EXID_Pos) /**< \brief (CHIPID_EXID) Chip ID Extension */

/*@}*/


#endif /* _SAM3N_CHIPID_COMPONENT_ */

#ifndef _SAM3N_DACC_COMPONENT_
#define _SAM3N_DACC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Digital-to-Analog Converter Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_DACC Digital-to-Analog Converter Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Dacc hardware registers */
typedef struct {
  WoReg DACC_CR;       /**< \brief (Dacc Offset: 0x00) Control Register */
  RwReg DACC_MR;       /**< \brief (Dacc Offset: 0x04) Mode Register */
  WoReg DACC_CDR;      /**< \brief (Dacc Offset: 0x08) Conversion Data Register */
  WoReg DACC_IER;      /**< \brief (Dacc Offset: 0x0C) Interrupt Enable Register */
  WoReg DACC_IDR;      /**< \brief (Dacc Offset: 0x10) Interrupt Disable Register */
  RoReg DACC_IMR;      /**< \brief (Dacc Offset: 0x14) Interrupt Mask Register */
  RoReg DACC_ISR;      /**< \brief (Dacc Offset: 0x18) Interrupt Status Register */
  RoReg Reserved1[50];
  RwReg DACC_WPMR;     /**< \brief (Dacc Offset: 0xE4) Write Protect Mode Register */
  RoReg DACC_WPSR;     /**< \brief (Dacc Offset: 0xE8) Write Protect Status Register */
  RoReg Reserved2[7];
  RwReg DACC_TPR;      /**< \brief (Dacc Offset: 0x108) Transmit Pointer Register */
  RwReg DACC_TCR;      /**< \brief (Dacc Offset: 0x10C) Transmit Counter Register */
  RoReg Reserved3[2];
  RwReg DACC_TNPR;     /**< \brief (Dacc Offset: 0x118) Transmit Next Pointer Register */
  RwReg DACC_TNCR;     /**< \brief (Dacc Offset: 0x11C) Transmit Next Counter Register */
  WoReg DACC_PTCR;     /**< \brief (Dacc Offset: 0x120) Transfer Control Register */
  RoReg DACC_PTSR;     /**< \brief (Dacc Offset: 0x124) Transfer Status Register */
} Dacc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- DACC_CR : (DACC Offset: 0x00) Control Register -------- */
#define DACC_CR_SWRST (0x1u << 0) /**< \brief (DACC_CR) Software Reset */
/* -------- DACC_MR : (DACC Offset: 0x04) Mode Register -------- */
#define DACC_MR_TRGEN (0x1u << 0) /**< \brief (DACC_MR) Trigger Enable */
#define DACC_MR_TRGSEL_Pos 1
#define DACC_MR_TRGSEL_Msk (0x7u << DACC_MR_TRGSEL_Pos) /**< \brief (DACC_MR) Trigger Selection */
#define   DACC_MR_TRGSEL_TRGSEL0 (0x0u << 1) /**< \brief (DACC_MR) External trigger */
#define   DACC_MR_TRGSEL_TRGSEL1 (0x1u << 1) /**< \brief (DACC_MR) TIO Output of the Timer Counter Channel 0 */
#define   DACC_MR_TRGSEL_TRGSEL2 (0x2u << 1) /**< \brief (DACC_MR) TIO Output of the Timer Counter Channel 1 */
#define   DACC_MR_TRGSEL_TRGSEL3 (0x3u << 1) /**< \brief (DACC_MR) TIO Output of the Timer Counter Channel 2 */
#define DACC_MR_DACEN (0x1u << 4) /**< \brief (DACC_MR) DAC enable */
#define DACC_MR_WORD (0x1u << 5) /**< \brief (DACC_MR) Word Transfer */
#define DACC_MR_STARTUP_Pos 8
#define DACC_MR_STARTUP_Msk (0xffu << DACC_MR_STARTUP_Pos) /**< \brief (DACC_MR) Startup Time Selection */
#define DACC_MR_STARTUP(value) ((DACC_MR_STARTUP_Msk & ((value) << DACC_MR_STARTUP_Pos)))
#define DACC_MR_CLKDIV_Pos 16
#define DACC_MR_CLKDIV_Msk (0xffffu << DACC_MR_CLKDIV_Pos) /**< \brief (DACC_MR) DAC Clock Divider for Internal Trigger */
#define DACC_MR_CLKDIV(value) ((DACC_MR_CLKDIV_Msk & ((value) << DACC_MR_CLKDIV_Pos)))
/* -------- DACC_CDR : (DACC Offset: 0x08) Conversion Data Register -------- */
#define DACC_CDR_DATA_Pos 0
#define DACC_CDR_DATA_Msk (0xffffffffu << DACC_CDR_DATA_Pos) /**< \brief (DACC_CDR) Data to Convert */
#define DACC_CDR_DATA(value) ((DACC_CDR_DATA_Msk & ((value) << DACC_CDR_DATA_Pos)))
/* -------- DACC_IER : (DACC Offset: 0x0C) Interrupt Enable Register -------- */
#define DACC_IER_TXRDY (0x1u << 0) /**< \brief (DACC_IER) Transmission Ready Interrupt Enable */
#define DACC_IER_ENDTX (0x1u << 1) /**< \brief (DACC_IER) End of PDC Interrupt Enable */
#define DACC_IER_TXBUFE (0x1u << 2) /**< \brief (DACC_IER) Buffer Empty Interrupt Enable */
/* -------- DACC_IDR : (DACC Offset: 0x10) Interrupt Disable Register -------- */
#define DACC_IDR_TXRDY (0x1u << 0) /**< \brief (DACC_IDR) Transmission Ready Interrupt Disable */
#define DACC_IDR_ENDTX (0x1u << 1) /**< \brief (DACC_IDR) End of PDC Interrupt Disable */
#define DACC_IDR_TXBUFE (0x1u << 2) /**< \brief (DACC_IDR) Buffer Empty Interrupt Disable */
/* -------- DACC_IMR : (DACC Offset: 0x14) Interrupt Mask Register -------- */
#define DACC_IMR_TXRDY (0x1u << 0) /**< \brief (DACC_IMR) Transmission Ready Interrupt Mask */
#define DACC_IMR_ENDTX (0x1u << 1) /**< \brief (DACC_IMR) End of PDC Interrupt Mask */
#define DACC_IMR_TXBUFE (0x1u << 2) /**< \brief (DACC_IMR) Buffer Empty Interrupt Mask */
/* -------- DACC_ISR : (DACC Offset: 0x18) Interrupt Status Register -------- */
#define DACC_ISR_TXRDY (0x1u << 0) /**< \brief (DACC_ISR) Transmission Ready Interrupt Flag */
#define DACC_ISR_ENDTX (0x1u << 1) /**< \brief (DACC_ISR) End of PDC Interrupt Flag */
#define DACC_ISR_TXBUFE (0x1u << 2) /**< \brief (DACC_ISR) Buffer Empty Interrupt Flag */
/* -------- DACC_WPMR : (DACC Offset: 0xE4) Write Protect Mode Register -------- */
#define DACC_WPMR_WPEN (0x1u << 0) /**< \brief (DACC_WPMR) Write Protect Enable */
#define DACC_WPMR_WPKEY_Pos 8
#define DACC_WPMR_WPKEY_Msk (0xffffffu << DACC_WPMR_WPKEY_Pos) /**< \brief (DACC_WPMR) Write Protect KEY */
#define DACC_WPMR_WPKEY(value) ((DACC_WPMR_WPKEY_Msk & ((value) << DACC_WPMR_WPKEY_Pos)))
/* -------- DACC_WPSR : (DACC Offset: 0xE8) Write Protect Status Register -------- */
#define DACC_WPSR_WPROTERR (0x1u << 0) /**< \brief (DACC_WPSR) Write protection error */
#define DACC_WPSR_WPROTADDR_Pos 8
#define DACC_WPSR_WPROTADDR_Msk (0xffu << DACC_WPSR_WPROTADDR_Pos) /**< \brief (DACC_WPSR) Write protection error address */
/* -------- DACC_TPR : (DACC Offset: 0x108) Transmit Pointer Register -------- */
#define DACC_TPR_TXPTR_Pos 0
#define DACC_TPR_TXPTR_Msk (0xffffffffu << DACC_TPR_TXPTR_Pos) /**< \brief (DACC_TPR) Transmit Counter Register */
#define DACC_TPR_TXPTR(value) ((DACC_TPR_TXPTR_Msk & ((value) << DACC_TPR_TXPTR_Pos)))
/* -------- DACC_TCR : (DACC Offset: 0x10C) Transmit Counter Register -------- */
#define DACC_TCR_TXCTR_Pos 0
#define DACC_TCR_TXCTR_Msk (0xffffu << DACC_TCR_TXCTR_Pos) /**< \brief (DACC_TCR) Transmit Counter Register */
#define DACC_TCR_TXCTR(value) ((DACC_TCR_TXCTR_Msk & ((value) << DACC_TCR_TXCTR_Pos)))
/* -------- DACC_TNPR : (DACC Offset: 0x118) Transmit Next Pointer Register -------- */
#define DACC_TNPR_TXNPTR_Pos 0
#define DACC_TNPR_TXNPTR_Msk (0xffffffffu << DACC_TNPR_TXNPTR_Pos) /**< \brief (DACC_TNPR) Transmit Next Pointer */
#define DACC_TNPR_TXNPTR(value) ((DACC_TNPR_TXNPTR_Msk & ((value) << DACC_TNPR_TXNPTR_Pos)))
/* -------- DACC_TNCR : (DACC Offset: 0x11C) Transmit Next Counter Register -------- */
#define DACC_TNCR_TXNCTR_Pos 0
#define DACC_TNCR_TXNCTR_Msk (0xffffu << DACC_TNCR_TXNCTR_Pos) /**< \brief (DACC_TNCR) Transmit Counter Next */
#define DACC_TNCR_TXNCTR(value) ((DACC_TNCR_TXNCTR_Msk & ((value) << DACC_TNCR_TXNCTR_Pos)))
/* -------- DACC_PTCR : (DACC Offset: 0x120) Transfer Control Register -------- */
#define DACC_PTCR_RXTEN (0x1u << 0) /**< \brief (DACC_PTCR) Receiver Transfer Enable */
#define DACC_PTCR_RXTDIS (0x1u << 1) /**< \brief (DACC_PTCR) Receiver Transfer Disable */
#define DACC_PTCR_TXTEN (0x1u << 8) /**< \brief (DACC_PTCR) Transmitter Transfer Enable */
#define DACC_PTCR_TXTDIS (0x1u << 9) /**< \brief (DACC_PTCR) Transmitter Transfer Disable */
/* -------- DACC_PTSR : (DACC Offset: 0x124) Transfer Status Register -------- */
#define DACC_PTSR_RXTEN (0x1u << 0) /**< \brief (DACC_PTSR) Receiver Transfer Enable */
#define DACC_PTSR_TXTEN (0x1u << 8) /**< \brief (DACC_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_DACC_COMPONENT_ */

#ifndef _SAM3N_EFC_COMPONENT_
#define _SAM3N_EFC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Embedded Flash Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_EFC Embedded Flash Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Efc hardware registers */
typedef struct {
  RwReg EEFC_FMR; /**< \brief (Efc Offset: 0x00) EEFC Flash Mode Register */
  WoReg EEFC_FCR; /**< \brief (Efc Offset: 0x04) EEFC Flash Command Register */
  RoReg EEFC_FSR; /**< \brief (Efc Offset: 0x08) EEFC Flash Status Register */
  RoReg EEFC_FRR; /**< \brief (Efc Offset: 0x0C) EEFC Flash Result Register */
} Efc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- EEFC_FMR : (EFC Offset: 0x00) EEFC Flash Mode Register -------- */
#define EEFC_FMR_FRDY (0x1u << 0) /**< \brief (EEFC_FMR) Ready Interrupt Enable */
#define EEFC_FMR_FWS_Pos 8
#define EEFC_FMR_FWS_Msk (0xfu << EEFC_FMR_FWS_Pos) /**< \brief (EEFC_FMR) Flash Wait State */
#define EEFC_FMR_FWS(value) ((EEFC_FMR_FWS_Msk & ((value) << EEFC_FMR_FWS_Pos)))
#define EEFC_FMR_SCOD (0x1u << 16) /**< \brief (EEFC_FMR) Sequential Code Optimization Disable */
#define EEFC_FMR_FAM (0x1u << 24) /**< \brief (EEFC_FMR) Flash Access Mode */
/* -------- EEFC_FCR : (EFC Offset: 0x04) EEFC Flash Command Register -------- */
#define EEFC_FCR_FCMD_Pos 0
#define EEFC_FCR_FCMD_Msk (0xffu << EEFC_FCR_FCMD_Pos) /**< \brief (EEFC_FCR) Flash Command */
#define EEFC_FCR_FCMD(value) ((EEFC_FCR_FCMD_Msk & ((value) << EEFC_FCR_FCMD_Pos)))
#define EEFC_FCR_FARG_Pos 8
#define EEFC_FCR_FARG_Msk (0xffffu << EEFC_FCR_FARG_Pos) /**< \brief (EEFC_FCR) Flash Command Argument */
#define EEFC_FCR_FARG(value) ((EEFC_FCR_FARG_Msk & ((value) << EEFC_FCR_FARG_Pos)))
#define EEFC_FCR_FKEY_Pos 24
#define EEFC_FCR_FKEY_Msk (0xffu << EEFC_FCR_FKEY_Pos) /**< \brief (EEFC_FCR) Flash Writing Protection Key */
#define EEFC_FCR_FKEY(value) ((EEFC_FCR_FKEY_Msk & ((value) << EEFC_FCR_FKEY_Pos)))
/* -------- EEFC_FSR : (EFC Offset: 0x08) EEFC Flash Status Register -------- */
#define EEFC_FSR_FRDY (0x1u << 0) /**< \brief (EEFC_FSR) Flash Ready Status */
#define EEFC_FSR_FCMDE (0x1u << 1) /**< \brief (EEFC_FSR) Flash Command Error Status */
#define EEFC_FSR_FLOCKE (0x1u << 2) /**< \brief (EEFC_FSR) Flash Lock Error Status */
/* -------- EEFC_FRR : (EFC Offset: 0x0C) EEFC Flash Result Register -------- */
#define EEFC_FRR_FVALUE_Pos 0
#define EEFC_FRR_FVALUE_Msk (0xffffffffu << EEFC_FRR_FVALUE_Pos) /**< \brief (EEFC_FRR) Flash Result Value */

/*@}*/


#endif /* _SAM3N_EFC_COMPONENT_ */

#ifndef _SAM3N_GPBR_COMPONENT_
#define _SAM3N_GPBR_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR General Purpose Backup Register */
/* ============================================================================= */
/** \addtogroup SAM3N_GPBR General Purpose Backup Register */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Gpbr hardware registers */
typedef struct {
  RwReg SYS_GPBR[8]; /**< \brief (Gpbr Offset: 0x0) General Purpose Backup Register */
} Gpbr;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- SYS_GPBR[8] : (GPBR Offset: 0x0) General Purpose Backup Register -------- */
#define SYS_GPBR_GPBR_VALUE_Pos 0
#define SYS_GPBR_GPBR_VALUE_Msk (0xffffffffu << SYS_GPBR_GPBR_VALUE_Pos) /**< \brief (SYS_GPBR[8]) Value of GPBR x */
#define SYS_GPBR_GPBR_VALUE(value) ((SYS_GPBR_GPBR_VALUE_Msk & ((value) << SYS_GPBR_GPBR_VALUE_Pos)))

/*@}*/


#endif /* _SAM3N_GPBR_COMPONENT_ */

#ifndef _SAM3N_MATRIX_COMPONENT_
#define _SAM3N_MATRIX_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR AHB Bus Matrix */
/* ============================================================================= */
/** \addtogroup SAM3N_MATRIX AHB Bus Matrix */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Matrix hardware registers */
typedef struct {
  RwReg MATRIX_MCFG[3]; /**< \brief (Matrix Offset: 0x0000) Master Configuration Register */
  RoReg Reserved1[13];
  RwReg MATRIX_SCFG[4]; /**< \brief (Matrix Offset: 0x0040) Slave Configuration Register */
  RoReg Reserved2[12];
  RwReg MATRIX_PRAS0;   /**< \brief (Matrix Offset: 0x0080) Priority Register A for Slave 0 */
  RoReg Reserved3[1];
  RwReg MATRIX_PRAS1;   /**< \brief (Matrix Offset: 0x0088) Priority Register A for Slave 1 */
  RoReg Reserved4[1];
  RwReg MATRIX_PRAS2;   /**< \brief (Matrix Offset: 0x0090) Priority Register A for Slave 2 */
  RoReg Reserved5[1];
  RwReg MATRIX_PRAS3;   /**< \brief (Matrix Offset: 0x0098) Priority Register A for Slave 3 */
  RoReg Reserved6[1];
  RoReg Reserved7[29];
  RwReg CCFG_SYSIO;     /**< \brief (Matrix Offset: 0x0114) System I/O Configuration register */
  RoReg Reserved8[51];
  RwReg MATRIX_WPMR;    /**< \brief (Matrix Offset: 0x1E4) Write Protect Mode Register */
  RoReg MATRIX_WPSR;    /**< \brief (Matrix Offset: 0x1E8) Write Protect Status Register */
} Matrix;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- MATRIX_MCFG[3] : (MATRIX Offset: 0x0000) Master Configuration Register -------- */
#define MATRIX_MCFG_ULBT_Pos 0
#define MATRIX_MCFG_ULBT_Msk (0x7u << MATRIX_MCFG_ULBT_Pos) /**< \brief (MATRIX_MCFG[3]) Undefined Length Burst Type */
#define MATRIX_MCFG_ULBT(value) ((MATRIX_MCFG_ULBT_Msk & ((value) << MATRIX_MCFG_ULBT_Pos)))
/* -------- MATRIX_SCFG[4] : (MATRIX Offset: 0x0040) Slave Configuration Register -------- */
#define MATRIX_SCFG_SLOT_CYCLE_Pos 0
#define MATRIX_SCFG_SLOT_CYCLE_Msk (0xffu << MATRIX_SCFG_SLOT_CYCLE_Pos) /**< \brief (MATRIX_SCFG[4]) Maximum Number of Allowed Cycles for a Burst */
#define MATRIX_SCFG_SLOT_CYCLE(value) ((MATRIX_SCFG_SLOT_CYCLE_Msk & ((value) << MATRIX_SCFG_SLOT_CYCLE_Pos)))
#define MATRIX_SCFG_DEFMSTR_TYPE_Pos 16
#define MATRIX_SCFG_DEFMSTR_TYPE_Msk (0x3u << MATRIX_SCFG_DEFMSTR_TYPE_Pos) /**< \brief (MATRIX_SCFG[4]) Default Master Type */
#define MATRIX_SCFG_DEFMSTR_TYPE(value) ((MATRIX_SCFG_DEFMSTR_TYPE_Msk & ((value) << MATRIX_SCFG_DEFMSTR_TYPE_Pos)))
#define MATRIX_SCFG_FIXED_DEFMSTR_Pos 18
#define MATRIX_SCFG_FIXED_DEFMSTR_Msk (0x7u << MATRIX_SCFG_FIXED_DEFMSTR_Pos) /**< \brief (MATRIX_SCFG[4]) Fixed Default Master */
#define MATRIX_SCFG_FIXED_DEFMSTR(value) ((MATRIX_SCFG_FIXED_DEFMSTR_Msk & ((value) << MATRIX_SCFG_FIXED_DEFMSTR_Pos)))
#define MATRIX_SCFG_ARBT_Pos 24
#define MATRIX_SCFG_ARBT_Msk (0x3u << MATRIX_SCFG_ARBT_Pos) /**< \brief (MATRIX_SCFG[4]) Arbitration Type */
#define MATRIX_SCFG_ARBT(value) ((MATRIX_SCFG_ARBT_Msk & ((value) << MATRIX_SCFG_ARBT_Pos)))
/* -------- MATRIX_PRAS0 : (MATRIX Offset: 0x0080) Priority Register A for Slave 0 -------- */
#define MATRIX_PRAS0_M0PR_Pos 0
#define MATRIX_PRAS0_M0PR_Msk (0x3u << MATRIX_PRAS0_M0PR_Pos) /**< \brief (MATRIX_PRAS0) Master 0 Priority */
#define MATRIX_PRAS0_M0PR(value) ((MATRIX_PRAS0_M0PR_Msk & ((value) << MATRIX_PRAS0_M0PR_Pos)))
#define MATRIX_PRAS0_M1PR_Pos 4
#define MATRIX_PRAS0_M1PR_Msk (0x3u << MATRIX_PRAS0_M1PR_Pos) /**< \brief (MATRIX_PRAS0) Master 1 Priority */
#define MATRIX_PRAS0_M1PR(value) ((MATRIX_PRAS0_M1PR_Msk & ((value) << MATRIX_PRAS0_M1PR_Pos)))
#define MATRIX_PRAS0_M2PR_Pos 8
#define MATRIX_PRAS0_M2PR_Msk (0x3u << MATRIX_PRAS0_M2PR_Pos) /**< \brief (MATRIX_PRAS0) Master 2 Priority */
#define MATRIX_PRAS0_M2PR(value) ((MATRIX_PRAS0_M2PR_Msk & ((value) << MATRIX_PRAS0_M2PR_Pos)))
#define MATRIX_PRAS0_M3PR_Pos 12
#define MATRIX_PRAS0_M3PR_Msk (0x3u << MATRIX_PRAS0_M3PR_Pos) /**< \brief (MATRIX_PRAS0) Master 3 Priority */
#define MATRIX_PRAS0_M3PR(value) ((MATRIX_PRAS0_M3PR_Msk & ((value) << MATRIX_PRAS0_M3PR_Pos)))
/* -------- MATRIX_PRAS1 : (MATRIX Offset: 0x0088) Priority Register A for Slave 1 -------- */
#define MATRIX_PRAS1_M0PR_Pos 0
#define MATRIX_PRAS1_M0PR_Msk (0x3u << MATRIX_PRAS1_M0PR_Pos) /**< \brief (MATRIX_PRAS1) Master 0 Priority */
#define MATRIX_PRAS1_M0PR(value) ((MATRIX_PRAS1_M0PR_Msk & ((value) << MATRIX_PRAS1_M0PR_Pos)))
#define MATRIX_PRAS1_M1PR_Pos 4
#define MATRIX_PRAS1_M1PR_Msk (0x3u << MATRIX_PRAS1_M1PR_Pos) /**< \brief (MATRIX_PRAS1) Master 1 Priority */
#define MATRIX_PRAS1_M1PR(value) ((MATRIX_PRAS1_M1PR_Msk & ((value) << MATRIX_PRAS1_M1PR_Pos)))
#define MATRIX_PRAS1_M2PR_Pos 8
#define MATRIX_PRAS1_M2PR_Msk (0x3u << MATRIX_PRAS1_M2PR_Pos) /**< \brief (MATRIX_PRAS1) Master 2 Priority */
#define MATRIX_PRAS1_M2PR(value) ((MATRIX_PRAS1_M2PR_Msk & ((value) << MATRIX_PRAS1_M2PR_Pos)))
#define MATRIX_PRAS1_M3PR_Pos 12
#define MATRIX_PRAS1_M3PR_Msk (0x3u << MATRIX_PRAS1_M3PR_Pos) /**< \brief (MATRIX_PRAS1) Master 3 Priority */
#define MATRIX_PRAS1_M3PR(value) ((MATRIX_PRAS1_M3PR_Msk & ((value) << MATRIX_PRAS1_M3PR_Pos)))
/* -------- MATRIX_PRAS2 : (MATRIX Offset: 0x0090) Priority Register A for Slave 2 -------- */
#define MATRIX_PRAS2_M0PR_Pos 0
#define MATRIX_PRAS2_M0PR_Msk (0x3u << MATRIX_PRAS2_M0PR_Pos) /**< \brief (MATRIX_PRAS2) Master 0 Priority */
#define MATRIX_PRAS2_M0PR(value) ((MATRIX_PRAS2_M0PR_Msk & ((value) << MATRIX_PRAS2_M0PR_Pos)))
#define MATRIX_PRAS2_M1PR_Pos 4
#define MATRIX_PRAS2_M1PR_Msk (0x3u << MATRIX_PRAS2_M1PR_Pos) /**< \brief (MATRIX_PRAS2) Master 1 Priority */
#define MATRIX_PRAS2_M1PR(value) ((MATRIX_PRAS2_M1PR_Msk & ((value) << MATRIX_PRAS2_M1PR_Pos)))
#define MATRIX_PRAS2_M2PR_Pos 8
#define MATRIX_PRAS2_M2PR_Msk (0x3u << MATRIX_PRAS2_M2PR_Pos) /**< \brief (MATRIX_PRAS2) Master 2 Priority */
#define MATRIX_PRAS2_M2PR(value) ((MATRIX_PRAS2_M2PR_Msk & ((value) << MATRIX_PRAS2_M2PR_Pos)))
#define MATRIX_PRAS2_M3PR_Pos 12
#define MATRIX_PRAS2_M3PR_Msk (0x3u << MATRIX_PRAS2_M3PR_Pos) /**< \brief (MATRIX_PRAS2) Master 3 Priority */
#define MATRIX_PRAS2_M3PR(value) ((MATRIX_PRAS2_M3PR_Msk & ((value) << MATRIX_PRAS2_M3PR_Pos)))
/* -------- MATRIX_PRAS3 : (MATRIX Offset: 0x0098) Priority Register A for Slave 3 -------- */
#define MATRIX_PRAS3_M0PR_Pos 0
#define MATRIX_PRAS3_M0PR_Msk (0x3u << MATRIX_PRAS3_M0PR_Pos) /**< \brief (MATRIX_PRAS3) Master 0 Priority */
#define MATRIX_PRAS3_M0PR(value) ((MATRIX_PRAS3_M0PR_Msk & ((value) << MATRIX_PRAS3_M0PR_Pos)))
#define MATRIX_PRAS3_M1PR_Pos 4
#define MATRIX_PRAS3_M1PR_Msk (0x3u << MATRIX_PRAS3_M1PR_Pos) /**< \brief (MATRIX_PRAS3) Master 1 Priority */
#define MATRIX_PRAS3_M1PR(value) ((MATRIX_PRAS3_M1PR_Msk & ((value) << MATRIX_PRAS3_M1PR_Pos)))
#define MATRIX_PRAS3_M2PR_Pos 8
#define MATRIX_PRAS3_M2PR_Msk (0x3u << MATRIX_PRAS3_M2PR_Pos) /**< \brief (MATRIX_PRAS3) Master 2 Priority */
#define MATRIX_PRAS3_M2PR(value) ((MATRIX_PRAS3_M2PR_Msk & ((value) << MATRIX_PRAS3_M2PR_Pos)))
#define MATRIX_PRAS3_M3PR_Pos 12
#define MATRIX_PRAS3_M3PR_Msk (0x3u << MATRIX_PRAS3_M3PR_Pos) /**< \brief (MATRIX_PRAS3) Master 3 Priority */
#define MATRIX_PRAS3_M3PR(value) ((MATRIX_PRAS3_M3PR_Msk & ((value) << MATRIX_PRAS3_M3PR_Pos)))
/* -------- CCFG_SYSIO : (MATRIX Offset: 0x0114) System I/O Configuration register -------- */
#define CCFG_SYSIO_SYSIO4 (0x1u << 4) /**< \brief (CCFG_SYSIO) PB4 or TDI Assignment */
#define CCFG_SYSIO_SYSIO5 (0x1u << 5) /**< \brief (CCFG_SYSIO) PB5 or TDO/TRACESWO Assignment */
#define CCFG_SYSIO_SYSIO6 (0x1u << 6) /**< \brief (CCFG_SYSIO) PB6 or TMS/SWDIO Assignment */
#define CCFG_SYSIO_SYSIO7 (0x1u << 7) /**< \brief (CCFG_SYSIO) PB7 or TCK/SWCLK Assignment */
#define CCFG_SYSIO_SYSIO12 (0x1u << 12) /**< \brief (CCFG_SYSIO) PB12 or ERASE Assignment */
/* -------- MATRIX_WPMR : (MATRIX Offset: 0x1E4) Write Protect Mode Register -------- */
#define MATRIX_WPMR_WPEN (0x1u << 0) /**< \brief (MATRIX_WPMR) Write Protect ENable */
#define MATRIX_WPMR_WPKEY_Pos 8
#define MATRIX_WPMR_WPKEY_Msk (0xffffffu << MATRIX_WPMR_WPKEY_Pos) /**< \brief (MATRIX_WPMR) Write Protect KEY (Write-only) */
#define MATRIX_WPMR_WPKEY(value) ((MATRIX_WPMR_WPKEY_Msk & ((value) << MATRIX_WPMR_WPKEY_Pos)))
/* -------- MATRIX_WPSR : (MATRIX Offset: 0x1E8) Write Protect Status Register -------- */
#define MATRIX_WPSR_WPVS (0x1u << 0) /**< \brief (MATRIX_WPSR) Write Protect Violation Status */
#define MATRIX_WPSR_WPVSRC_Pos 8
#define MATRIX_WPSR_WPVSRC_Msk (0xffffu << MATRIX_WPSR_WPVSRC_Pos) /**< \brief (MATRIX_WPSR) Write Protect Violation Source */

/*@}*/


#endif /* _SAM3N_MATRIX_COMPONENT_ */

#ifndef _SAM3N_PDC_COMPONENT_
#define _SAM3N_PDC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Peripheral DMA Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_PDC Peripheral DMA Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Pdc hardware registers */
typedef struct {
  RwReg PERIPH_RPR;  /**< \brief (Pdc Offset: 0x0) Receive Pointer Register */
  RwReg PERIPH_RCR;  /**< \brief (Pdc Offset: 0x4) Receive Counter Register */
  RwReg PERIPH_TPR;  /**< \brief (Pdc Offset: 0x8) Transmit Pointer Register */
  RwReg PERIPH_TCR;  /**< \brief (Pdc Offset: 0xC) Transmit Counter Register */
  RwReg PERIPH_RNPR; /**< \brief (Pdc Offset: 0x10) Receive Next Pointer Register */
  RwReg PERIPH_RNCR; /**< \brief (Pdc Offset: 0x14) Receive Next Counter Register */
  RwReg PERIPH_TNPR; /**< \brief (Pdc Offset: 0x18) Transmit Next Pointer Register */
  RwReg PERIPH_TNCR; /**< \brief (Pdc Offset: 0x1C) Transmit Next Counter Register */
  WoReg PERIPH_PTCR; /**< \brief (Pdc Offset: 0x20) Transfer Control Register */
  RoReg PERIPH_PTSR; /**< \brief (Pdc Offset: 0x24) Transfer Status Register */
} Pdc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- PERIPH_RPR : (PDC Offset: 0x0) Receive Pointer Register -------- */
#define PERIPH_RPR_RXPTR_Pos 0
#define PERIPH_RPR_RXPTR_Msk (0xffffffffu << PERIPH_RPR_RXPTR_Pos) /**< \brief (PERIPH_RPR) Receive Pointer Register */
#define PERIPH_RPR_RXPTR(value) ((PERIPH_RPR_RXPTR_Msk & ((value) << PERIPH_RPR_RXPTR_Pos)))
/* -------- PERIPH_RCR : (PDC Offset: 0x4) Receive Counter Register -------- */
#define PERIPH_RCR_RXCTR_Pos 0
#define PERIPH_RCR_RXCTR_Msk (0xffffu << PERIPH_RCR_RXCTR_Pos) /**< \brief (PERIPH_RCR) Receive Counter Register */
#define PERIPH_RCR_RXCTR(value) ((PERIPH_RCR_RXCTR_Msk & ((value) << PERIPH_RCR_RXCTR_Pos)))
/* -------- PERIPH_TPR : (PDC Offset: 0x8) Transmit Pointer Register -------- */
#define PERIPH_TPR_TXPTR_Pos 0
#define PERIPH_TPR_TXPTR_Msk (0xffffffffu << PERIPH_TPR_TXPTR_Pos) /**< \brief (PERIPH_TPR) Transmit Counter Register */
#define PERIPH_TPR_TXPTR(value) ((PERIPH_TPR_TXPTR_Msk & ((value) << PERIPH_TPR_TXPTR_Pos)))
/* -------- PERIPH_TCR : (PDC Offset: 0xC) Transmit Counter Register -------- */
#define PERIPH_TCR_TXCTR_Pos 0
#define PERIPH_TCR_TXCTR_Msk (0xffffu << PERIPH_TCR_TXCTR_Pos) /**< \brief (PERIPH_TCR) Transmit Counter Register */
#define PERIPH_TCR_TXCTR(value) ((PERIPH_TCR_TXCTR_Msk & ((value) << PERIPH_TCR_TXCTR_Pos)))
/* -------- PERIPH_RNPR : (PDC Offset: 0x10) Receive Next Pointer Register -------- */
#define PERIPH_RNPR_RXNPTR_Pos 0
#define PERIPH_RNPR_RXNPTR_Msk (0xffffffffu << PERIPH_RNPR_RXNPTR_Pos) /**< \brief (PERIPH_RNPR) Receive Next Pointer */
#define PERIPH_RNPR_RXNPTR(value) ((PERIPH_RNPR_RXNPTR_Msk & ((value) << PERIPH_RNPR_RXNPTR_Pos)))
/* -------- PERIPH_RNCR : (PDC Offset: 0x14) Receive Next Counter Register -------- */
#define PERIPH_RNCR_RXNCTR_Pos 0
#define PERIPH_RNCR_RXNCTR_Msk (0xffffu << PERIPH_RNCR_RXNCTR_Pos) /**< \brief (PERIPH_RNCR) Receive Next Counter */
#define PERIPH_RNCR_RXNCTR(value) ((PERIPH_RNCR_RXNCTR_Msk & ((value) << PERIPH_RNCR_RXNCTR_Pos)))
/* -------- PERIPH_TNPR : (PDC Offset: 0x18) Transmit Next Pointer Register -------- */
#define PERIPH_TNPR_TXNPTR_Pos 0
#define PERIPH_TNPR_TXNPTR_Msk (0xffffffffu << PERIPH_TNPR_TXNPTR_Pos) /**< \brief (PERIPH_TNPR) Transmit Next Pointer */
#define PERIPH_TNPR_TXNPTR(value) ((PERIPH_TNPR_TXNPTR_Msk & ((value) << PERIPH_TNPR_TXNPTR_Pos)))
/* -------- PERIPH_TNCR : (PDC Offset: 0x1C) Transmit Next Counter Register -------- */
#define PERIPH_TNCR_TXNCTR_Pos 0
#define PERIPH_TNCR_TXNCTR_Msk (0xffffu << PERIPH_TNCR_TXNCTR_Pos) /**< \brief (PERIPH_TNCR) Transmit Counter Next */
#define PERIPH_TNCR_TXNCTR(value) ((PERIPH_TNCR_TXNCTR_Msk & ((value) << PERIPH_TNCR_TXNCTR_Pos)))
/* -------- PERIPH_PTCR : (PDC Offset: 0x20) Transfer Control Register -------- */
#define PERIPH_PTCR_RXTEN (0x1u << 0) /**< \brief (PERIPH_PTCR) Receiver Transfer Enable */
#define PERIPH_PTCR_RXTDIS (0x1u << 1) /**< \brief (PERIPH_PTCR) Receiver Transfer Disable */
#define PERIPH_PTCR_TXTEN (0x1u << 8) /**< \brief (PERIPH_PTCR) Transmitter Transfer Enable */
#define PERIPH_PTCR_TXTDIS (0x1u << 9) /**< \brief (PERIPH_PTCR) Transmitter Transfer Disable */
/* -------- PERIPH_PTSR : (PDC Offset: 0x24) Transfer Status Register -------- */
#define PERIPH_PTSR_RXTEN (0x1u << 0) /**< \brief (PERIPH_PTSR) Receiver Transfer Enable */
#define PERIPH_PTSR_TXTEN (0x1u << 8) /**< \brief (PERIPH_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_PDC_COMPONENT_ */

#ifndef _SAM3N_PIO_COMPONENT_
#define _SAM3N_PIO_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Parallel Input/Output Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_PIO Parallel Input/Output Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Pio hardware registers */
typedef struct {
  WoReg PIO_PER;       /**< \brief (Pio Offset: 0x0000) PIO Enable Register */
  WoReg PIO_PDR;       /**< \brief (Pio Offset: 0x0004) PIO Disable Register */
  RoReg PIO_PSR;       /**< \brief (Pio Offset: 0x0008) PIO Status Register */
  RoReg Reserved1[1];
  WoReg PIO_OER;       /**< \brief (Pio Offset: 0x0010) Output Enable Register */
  WoReg PIO_ODR;       /**< \brief (Pio Offset: 0x0014) Output Disable Register */
  RoReg PIO_OSR;       /**< \brief (Pio Offset: 0x0018) Output Status Register */
  RoReg Reserved2[1];
  WoReg PIO_IFER;      /**< \brief (Pio Offset: 0x0020) Glitch Input Filter Enable Register */
  WoReg PIO_IFDR;      /**< \brief (Pio Offset: 0x0024) Glitch Input Filter Disable Register */
  RoReg PIO_IFSR;      /**< \brief (Pio Offset: 0x0028) Glitch Input Filter Status Register */
  RoReg Reserved3[1];
  WoReg PIO_SODR;      /**< \brief (Pio Offset: 0x0030) Set Output Data Register */
  WoReg PIO_CODR;      /**< \brief (Pio Offset: 0x0034) Clear Output Data Register */
  RwReg PIO_ODSR;      /**< \brief (Pio Offset: 0x0038) Output Data Status Register */
  RoReg PIO_PDSR;      /**< \brief (Pio Offset: 0x003C) Pin Data Status Register */
  WoReg PIO_IER;       /**< \brief (Pio Offset: 0x0040) Interrupt Enable Register */
  WoReg PIO_IDR;       /**< \brief (Pio Offset: 0x0044) Interrupt Disable Register */
  RoReg PIO_IMR;       /**< \brief (Pio Offset: 0x0048) Interrupt Mask Register */
  RoReg PIO_ISR;       /**< \brief (Pio Offset: 0x004C) Interrupt Status Register */
  WoReg PIO_MDER;      /**< \brief (Pio Offset: 0x0050) Multi-driver Enable Register */
  WoReg PIO_MDDR;      /**< \brief (Pio Offset: 0x0054) Multi-driver Disable Register */
  RoReg PIO_MDSR;      /**< \brief (Pio Offset: 0x0058) Multi-driver Status Register */
  RoReg Reserved4[1];
  WoReg PIO_PUDR;      /**< \brief (Pio Offset: 0x0060) Pull-up Disable Register */
  WoReg PIO_PUER;      /**< \brief (Pio Offset: 0x0064) Pull-up Enable Register */
  RoReg PIO_PUSR;      /**< \brief (Pio Offset: 0x0068) Pad Pull-up Status Register */
  RoReg Reserved5[1];
  RwReg PIO_ABCDSR[2]; /**< \brief (Pio Offset: 0x0070) Peripheral Select Register */
  RoReg Reserved6[2];
  WoReg PIO_IFSCDR;    /**< \brief (Pio Offset: 0x0080) Input Filter Slow Clock Disable Register */
  WoReg PIO_IFSCER;    /**< \brief (Pio Offset: 0x0084) Input Filter Slow Clock Enable Register */
  RoReg PIO_IFSCSR;    /**< \brief (Pio Offset: 0x0088) Input Filter Slow Clock Status Register */
  RwReg PIO_SCDR;      /**< \brief (Pio Offset: 0x008C) Slow Clock Divider Debouncing Register */
  WoReg PIO_PPDDR;     /**< \brief (Pio Offset: 0x0090) Pad Pull-down Disable Register */
  WoReg PIO_PPDER;     /**< \brief (Pio Offset: 0x0094) Pad Pull-down Enable Register */
  RoReg PIO_PPDSR;     /**< \brief (Pio Offset: 0x0098) Pad Pull-down Status Register */
  RoReg Reserved7[1];
  WoReg PIO_OWER;      /**< \brief (Pio Offset: 0x00A0) Output Write Enable */
  WoReg PIO_OWDR;      /**< \brief (Pio Offset: 0x00A4) Output Write Disable */
  RoReg PIO_OWSR;      /**< \brief (Pio Offset: 0x00A8) Output Write Status Register */
  RoReg Reserved8[1];
  WoReg PIO_AIMER;     /**< \brief (Pio Offset: 0x00B0) Additional Interrupt Modes Enable Register */
  WoReg PIO_AIMDR;     /**< \brief (Pio Offset: 0x00B4) Additional Interrupt Modes Disables Register */
  RoReg PIO_AIMMR;     /**< \brief (Pio Offset: 0x00B8) Additional Interrupt Modes Mask Register */
  RoReg Reserved9[1];
  WoReg PIO_ESR;       /**< \brief (Pio Offset: 0x00C0) Edge Select Register */
  WoReg PIO_LSR;       /**< \brief (Pio Offset: 0x00C4) Level Select Register */
  RoReg PIO_ELSR;      /**< \brief (Pio Offset: 0x00C8) Edge/Level Status Register */
  RoReg Reserved10[1];
  WoReg PIO_FELLSR;    /**< \brief (Pio Offset: 0x00D0) Falling Edge/Low Level Select Register */
  WoReg PIO_REHLSR;    /**< \brief (Pio Offset: 0x00D4) Rising Edge/ High Level Select Register */
  RoReg PIO_FRLHSR;    /**< \brief (Pio Offset: 0x00D8) Fall/Rise - Low/High Status Register */
  RoReg Reserved11[1];
  RoReg PIO_LOCKSR;    /**< \brief (Pio Offset: 0x00E0) Lock Status */
  RwReg PIO_WPMR;      /**< \brief (Pio Offset: 0x00E4) Write Protect Mode Register */
  RoReg PIO_WPSR;      /**< \brief (Pio Offset: 0x00E8) Write Protect Status Register */
  RoReg Reserved12[5];
  RwReg PIO_SCHMITT;   /**< \brief (Pio Offset: 0x0100) Schmitt Trigger Register */
} Pio;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- PIO_PER : (PIO Offset: 0x0000) PIO Enable Register -------- */
#define PIO_PER_P0 (0x1u << 0) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P1 (0x1u << 1) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P2 (0x1u << 2) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P3 (0x1u << 3) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P4 (0x1u << 4) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P5 (0x1u << 5) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P6 (0x1u << 6) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P7 (0x1u << 7) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P8 (0x1u << 8) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P9 (0x1u << 9) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P10 (0x1u << 10) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P11 (0x1u << 11) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P12 (0x1u << 12) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P13 (0x1u << 13) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P14 (0x1u << 14) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P15 (0x1u << 15) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P16 (0x1u << 16) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P17 (0x1u << 17) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P18 (0x1u << 18) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P19 (0x1u << 19) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P20 (0x1u << 20) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P21 (0x1u << 21) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P22 (0x1u << 22) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P23 (0x1u << 23) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P24 (0x1u << 24) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P25 (0x1u << 25) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P26 (0x1u << 26) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P27 (0x1u << 27) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P28 (0x1u << 28) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P29 (0x1u << 29) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P30 (0x1u << 30) /**< \brief (PIO_PER) PIO Enable */
#define PIO_PER_P31 (0x1u << 31) /**< \brief (PIO_PER) PIO Enable */
/* -------- PIO_PDR : (PIO Offset: 0x0004) PIO Disable Register -------- */
#define PIO_PDR_P0 (0x1u << 0) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P1 (0x1u << 1) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P2 (0x1u << 2) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P3 (0x1u << 3) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P4 (0x1u << 4) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P5 (0x1u << 5) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P6 (0x1u << 6) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P7 (0x1u << 7) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P8 (0x1u << 8) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P9 (0x1u << 9) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P10 (0x1u << 10) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P11 (0x1u << 11) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P12 (0x1u << 12) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P13 (0x1u << 13) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P14 (0x1u << 14) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P15 (0x1u << 15) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P16 (0x1u << 16) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P17 (0x1u << 17) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P18 (0x1u << 18) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P19 (0x1u << 19) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P20 (0x1u << 20) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P21 (0x1u << 21) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P22 (0x1u << 22) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P23 (0x1u << 23) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P24 (0x1u << 24) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P25 (0x1u << 25) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P26 (0x1u << 26) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P27 (0x1u << 27) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P28 (0x1u << 28) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P29 (0x1u << 29) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P30 (0x1u << 30) /**< \brief (PIO_PDR) PIO Disable */
#define PIO_PDR_P31 (0x1u << 31) /**< \brief (PIO_PDR) PIO Disable */
/* -------- PIO_PSR : (PIO Offset: 0x0008) PIO Status Register -------- */
#define PIO_PSR_P0 (0x1u << 0) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P1 (0x1u << 1) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P2 (0x1u << 2) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P3 (0x1u << 3) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P4 (0x1u << 4) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P5 (0x1u << 5) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P6 (0x1u << 6) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P7 (0x1u << 7) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P8 (0x1u << 8) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P9 (0x1u << 9) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P10 (0x1u << 10) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P11 (0x1u << 11) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P12 (0x1u << 12) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P13 (0x1u << 13) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P14 (0x1u << 14) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P15 (0x1u << 15) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P16 (0x1u << 16) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P17 (0x1u << 17) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P18 (0x1u << 18) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P19 (0x1u << 19) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P20 (0x1u << 20) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P21 (0x1u << 21) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P22 (0x1u << 22) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P23 (0x1u << 23) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P24 (0x1u << 24) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P25 (0x1u << 25) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P26 (0x1u << 26) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P27 (0x1u << 27) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P28 (0x1u << 28) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P29 (0x1u << 29) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P30 (0x1u << 30) /**< \brief (PIO_PSR) PIO Status */
#define PIO_PSR_P31 (0x1u << 31) /**< \brief (PIO_PSR) PIO Status */
/* -------- PIO_OER : (PIO Offset: 0x0010) Output Enable Register -------- */
#define PIO_OER_P0 (0x1u << 0) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P1 (0x1u << 1) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P2 (0x1u << 2) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P3 (0x1u << 3) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P4 (0x1u << 4) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P5 (0x1u << 5) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P6 (0x1u << 6) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P7 (0x1u << 7) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P8 (0x1u << 8) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P9 (0x1u << 9) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P10 (0x1u << 10) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P11 (0x1u << 11) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P12 (0x1u << 12) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P13 (0x1u << 13) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P14 (0x1u << 14) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P15 (0x1u << 15) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P16 (0x1u << 16) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P17 (0x1u << 17) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P18 (0x1u << 18) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P19 (0x1u << 19) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P20 (0x1u << 20) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P21 (0x1u << 21) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P22 (0x1u << 22) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P23 (0x1u << 23) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P24 (0x1u << 24) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P25 (0x1u << 25) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P26 (0x1u << 26) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P27 (0x1u << 27) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P28 (0x1u << 28) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P29 (0x1u << 29) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P30 (0x1u << 30) /**< \brief (PIO_OER) Output Enable */
#define PIO_OER_P31 (0x1u << 31) /**< \brief (PIO_OER) Output Enable */
/* -------- PIO_ODR : (PIO Offset: 0x0014) Output Disable Register -------- */
#define PIO_ODR_P0 (0x1u << 0) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P1 (0x1u << 1) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P2 (0x1u << 2) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P3 (0x1u << 3) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P4 (0x1u << 4) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P5 (0x1u << 5) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P6 (0x1u << 6) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P7 (0x1u << 7) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P8 (0x1u << 8) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P9 (0x1u << 9) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P10 (0x1u << 10) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P11 (0x1u << 11) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P12 (0x1u << 12) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P13 (0x1u << 13) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P14 (0x1u << 14) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P15 (0x1u << 15) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P16 (0x1u << 16) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P17 (0x1u << 17) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P18 (0x1u << 18) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P19 (0x1u << 19) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P20 (0x1u << 20) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P21 (0x1u << 21) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P22 (0x1u << 22) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P23 (0x1u << 23) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P24 (0x1u << 24) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P25 (0x1u << 25) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P26 (0x1u << 26) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P27 (0x1u << 27) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P28 (0x1u << 28) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P29 (0x1u << 29) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P30 (0x1u << 30) /**< \brief (PIO_ODR) Output Disable */
#define PIO_ODR_P31 (0x1u << 31) /**< \brief (PIO_ODR) Output Disable */
/* -------- PIO_OSR : (PIO Offset: 0x0018) Output Status Register -------- */
#define PIO_OSR_P0 (0x1u << 0) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P1 (0x1u << 1) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P2 (0x1u << 2) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P3 (0x1u << 3) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P4 (0x1u << 4) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P5 (0x1u << 5) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P6 (0x1u << 6) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P7 (0x1u << 7) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P8 (0x1u << 8) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P9 (0x1u << 9) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P10 (0x1u << 10) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P11 (0x1u << 11) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P12 (0x1u << 12) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P13 (0x1u << 13) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P14 (0x1u << 14) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P15 (0x1u << 15) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P16 (0x1u << 16) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P17 (0x1u << 17) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P18 (0x1u << 18) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P19 (0x1u << 19) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P20 (0x1u << 20) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P21 (0x1u << 21) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P22 (0x1u << 22) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P23 (0x1u << 23) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P24 (0x1u << 24) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P25 (0x1u << 25) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P26 (0x1u << 26) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P27 (0x1u << 27) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P28 (0x1u << 28) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P29 (0x1u << 29) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P30 (0x1u << 30) /**< \brief (PIO_OSR) Output Status */
#define PIO_OSR_P31 (0x1u << 31) /**< \brief (PIO_OSR) Output Status */
/* -------- PIO_IFER : (PIO Offset: 0x0020) Glitch Input Filter Enable Register -------- */
#define PIO_IFER_P0 (0x1u << 0) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P1 (0x1u << 1) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P2 (0x1u << 2) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P3 (0x1u << 3) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P4 (0x1u << 4) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P5 (0x1u << 5) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P6 (0x1u << 6) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P7 (0x1u << 7) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P8 (0x1u << 8) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P9 (0x1u << 9) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P10 (0x1u << 10) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P11 (0x1u << 11) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P12 (0x1u << 12) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P13 (0x1u << 13) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P14 (0x1u << 14) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P15 (0x1u << 15) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P16 (0x1u << 16) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P17 (0x1u << 17) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P18 (0x1u << 18) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P19 (0x1u << 19) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P20 (0x1u << 20) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P21 (0x1u << 21) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P22 (0x1u << 22) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P23 (0x1u << 23) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P24 (0x1u << 24) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P25 (0x1u << 25) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P26 (0x1u << 26) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P27 (0x1u << 27) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P28 (0x1u << 28) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P29 (0x1u << 29) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P30 (0x1u << 30) /**< \brief (PIO_IFER) Input Filter Enable */
#define PIO_IFER_P31 (0x1u << 31) /**< \brief (PIO_IFER) Input Filter Enable */
/* -------- PIO_IFDR : (PIO Offset: 0x0024) Glitch Input Filter Disable Register -------- */
#define PIO_IFDR_P0 (0x1u << 0) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P1 (0x1u << 1) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P2 (0x1u << 2) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P3 (0x1u << 3) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P4 (0x1u << 4) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P5 (0x1u << 5) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P6 (0x1u << 6) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P7 (0x1u << 7) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P8 (0x1u << 8) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P9 (0x1u << 9) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P10 (0x1u << 10) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P11 (0x1u << 11) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P12 (0x1u << 12) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P13 (0x1u << 13) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P14 (0x1u << 14) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P15 (0x1u << 15) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P16 (0x1u << 16) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P17 (0x1u << 17) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P18 (0x1u << 18) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P19 (0x1u << 19) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P20 (0x1u << 20) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P21 (0x1u << 21) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P22 (0x1u << 22) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P23 (0x1u << 23) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P24 (0x1u << 24) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P25 (0x1u << 25) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P26 (0x1u << 26) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P27 (0x1u << 27) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P28 (0x1u << 28) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P29 (0x1u << 29) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P30 (0x1u << 30) /**< \brief (PIO_IFDR) Input Filter Disable */
#define PIO_IFDR_P31 (0x1u << 31) /**< \brief (PIO_IFDR) Input Filter Disable */
/* -------- PIO_IFSR : (PIO Offset: 0x0028) Glitch Input Filter Status Register -------- */
#define PIO_IFSR_P0 (0x1u << 0) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P1 (0x1u << 1) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P2 (0x1u << 2) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P3 (0x1u << 3) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P4 (0x1u << 4) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P5 (0x1u << 5) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P6 (0x1u << 6) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P7 (0x1u << 7) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P8 (0x1u << 8) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P9 (0x1u << 9) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P10 (0x1u << 10) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P11 (0x1u << 11) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P12 (0x1u << 12) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P13 (0x1u << 13) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P14 (0x1u << 14) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P15 (0x1u << 15) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P16 (0x1u << 16) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P17 (0x1u << 17) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P18 (0x1u << 18) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P19 (0x1u << 19) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P20 (0x1u << 20) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P21 (0x1u << 21) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P22 (0x1u << 22) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P23 (0x1u << 23) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P24 (0x1u << 24) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P25 (0x1u << 25) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P26 (0x1u << 26) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P27 (0x1u << 27) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P28 (0x1u << 28) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P29 (0x1u << 29) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P30 (0x1u << 30) /**< \brief (PIO_IFSR) Input Filer Status */
#define PIO_IFSR_P31 (0x1u << 31) /**< \brief (PIO_IFSR) Input Filer Status */
/* -------- PIO_SODR : (PIO Offset: 0x0030) Set Output Data Register -------- */
#define PIO_SODR_P0 (0x1u << 0) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P1 (0x1u << 1) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P2 (0x1u << 2) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P3 (0x1u << 3) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P4 (0x1u << 4) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P5 (0x1u << 5) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P6 (0x1u << 6) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P7 (0x1u << 7) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P8 (0x1u << 8) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P9 (0x1u << 9) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P10 (0x1u << 10) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P11 (0x1u << 11) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P12 (0x1u << 12) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P13 (0x1u << 13) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P14 (0x1u << 14) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P15 (0x1u << 15) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P16 (0x1u << 16) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P17 (0x1u << 17) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P18 (0x1u << 18) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P19 (0x1u << 19) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P20 (0x1u << 20) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P21 (0x1u << 21) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P22 (0x1u << 22) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P23 (0x1u << 23) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P24 (0x1u << 24) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P25 (0x1u << 25) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P26 (0x1u << 26) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P27 (0x1u << 27) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P28 (0x1u << 28) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P29 (0x1u << 29) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P30 (0x1u << 30) /**< \brief (PIO_SODR) Set Output Data */
#define PIO_SODR_P31 (0x1u << 31) /**< \brief (PIO_SODR) Set Output Data */
/* -------- PIO_CODR : (PIO Offset: 0x0034) Clear Output Data Register -------- */
#define PIO_CODR_P0 (0x1u << 0) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P1 (0x1u << 1) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P2 (0x1u << 2) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P3 (0x1u << 3) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P4 (0x1u << 4) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P5 (0x1u << 5) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P6 (0x1u << 6) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P7 (0x1u << 7) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P8 (0x1u << 8) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P9 (0x1u << 9) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P10 (0x1u << 10) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P11 (0x1u << 11) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P12 (0x1u << 12) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P13 (0x1u << 13) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P14 (0x1u << 14) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P15 (0x1u << 15) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P16 (0x1u << 16) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P17 (0x1u << 17) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P18 (0x1u << 18) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P19 (0x1u << 19) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P20 (0x1u << 20) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P21 (0x1u << 21) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P22 (0x1u << 22) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P23 (0x1u << 23) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P24 (0x1u << 24) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P25 (0x1u << 25) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P26 (0x1u << 26) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P27 (0x1u << 27) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P28 (0x1u << 28) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P29 (0x1u << 29) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P30 (0x1u << 30) /**< \brief (PIO_CODR) Clear Output Data */
#define PIO_CODR_P31 (0x1u << 31) /**< \brief (PIO_CODR) Clear Output Data */
/* -------- PIO_ODSR : (PIO Offset: 0x0038) Output Data Status Register -------- */
#define PIO_ODSR_P0 (0x1u << 0) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P1 (0x1u << 1) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P2 (0x1u << 2) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P3 (0x1u << 3) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P4 (0x1u << 4) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P5 (0x1u << 5) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P6 (0x1u << 6) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P7 (0x1u << 7) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P8 (0x1u << 8) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P9 (0x1u << 9) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P10 (0x1u << 10) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P11 (0x1u << 11) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P12 (0x1u << 12) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P13 (0x1u << 13) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P14 (0x1u << 14) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P15 (0x1u << 15) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P16 (0x1u << 16) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P17 (0x1u << 17) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P18 (0x1u << 18) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P19 (0x1u << 19) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P20 (0x1u << 20) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P21 (0x1u << 21) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P22 (0x1u << 22) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P23 (0x1u << 23) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P24 (0x1u << 24) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P25 (0x1u << 25) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P26 (0x1u << 26) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P27 (0x1u << 27) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P28 (0x1u << 28) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P29 (0x1u << 29) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P30 (0x1u << 30) /**< \brief (PIO_ODSR) Output Data Status */
#define PIO_ODSR_P31 (0x1u << 31) /**< \brief (PIO_ODSR) Output Data Status */
/* -------- PIO_PDSR : (PIO Offset: 0x003C) Pin Data Status Register -------- */
#define PIO_PDSR_P0 (0x1u << 0) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P1 (0x1u << 1) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P2 (0x1u << 2) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P3 (0x1u << 3) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P4 (0x1u << 4) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P5 (0x1u << 5) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P6 (0x1u << 6) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P7 (0x1u << 7) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P8 (0x1u << 8) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P9 (0x1u << 9) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P10 (0x1u << 10) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P11 (0x1u << 11) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P12 (0x1u << 12) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P13 (0x1u << 13) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P14 (0x1u << 14) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P15 (0x1u << 15) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P16 (0x1u << 16) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P17 (0x1u << 17) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P18 (0x1u << 18) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P19 (0x1u << 19) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P20 (0x1u << 20) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P21 (0x1u << 21) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P22 (0x1u << 22) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P23 (0x1u << 23) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P24 (0x1u << 24) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P25 (0x1u << 25) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P26 (0x1u << 26) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P27 (0x1u << 27) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P28 (0x1u << 28) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P29 (0x1u << 29) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P30 (0x1u << 30) /**< \brief (PIO_PDSR) Output Data Status */
#define PIO_PDSR_P31 (0x1u << 31) /**< \brief (PIO_PDSR) Output Data Status */
/* -------- PIO_IER : (PIO Offset: 0x0040) Interrupt Enable Register -------- */
#define PIO_IER_P0 (0x1u << 0) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P1 (0x1u << 1) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P2 (0x1u << 2) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P3 (0x1u << 3) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P4 (0x1u << 4) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P5 (0x1u << 5) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P6 (0x1u << 6) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P7 (0x1u << 7) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P8 (0x1u << 8) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P9 (0x1u << 9) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P10 (0x1u << 10) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P11 (0x1u << 11) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P12 (0x1u << 12) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P13 (0x1u << 13) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P14 (0x1u << 14) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P15 (0x1u << 15) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P16 (0x1u << 16) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P17 (0x1u << 17) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P18 (0x1u << 18) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P19 (0x1u << 19) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P20 (0x1u << 20) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P21 (0x1u << 21) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P22 (0x1u << 22) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P23 (0x1u << 23) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P24 (0x1u << 24) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P25 (0x1u << 25) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P26 (0x1u << 26) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P27 (0x1u << 27) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P28 (0x1u << 28) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P29 (0x1u << 29) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P30 (0x1u << 30) /**< \brief (PIO_IER) Input Change Interrupt Enable */
#define PIO_IER_P31 (0x1u << 31) /**< \brief (PIO_IER) Input Change Interrupt Enable */
/* -------- PIO_IDR : (PIO Offset: 0x0044) Interrupt Disable Register -------- */
#define PIO_IDR_P0 (0x1u << 0) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P1 (0x1u << 1) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P2 (0x1u << 2) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P3 (0x1u << 3) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P4 (0x1u << 4) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P5 (0x1u << 5) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P6 (0x1u << 6) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P7 (0x1u << 7) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P8 (0x1u << 8) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P9 (0x1u << 9) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P10 (0x1u << 10) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P11 (0x1u << 11) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P12 (0x1u << 12) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P13 (0x1u << 13) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P14 (0x1u << 14) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P15 (0x1u << 15) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P16 (0x1u << 16) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P17 (0x1u << 17) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P18 (0x1u << 18) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P19 (0x1u << 19) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P20 (0x1u << 20) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P21 (0x1u << 21) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P22 (0x1u << 22) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P23 (0x1u << 23) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P24 (0x1u << 24) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P25 (0x1u << 25) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P26 (0x1u << 26) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P27 (0x1u << 27) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P28 (0x1u << 28) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P29 (0x1u << 29) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P30 (0x1u << 30) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
#define PIO_IDR_P31 (0x1u << 31) /**< \brief (PIO_IDR) Input Change Interrupt Disable */
/* -------- PIO_IMR : (PIO Offset: 0x0048) Interrupt Mask Register -------- */
#define PIO_IMR_P0 (0x1u << 0) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P1 (0x1u << 1) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P2 (0x1u << 2) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P3 (0x1u << 3) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P4 (0x1u << 4) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P5 (0x1u << 5) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P6 (0x1u << 6) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P7 (0x1u << 7) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P8 (0x1u << 8) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P9 (0x1u << 9) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P10 (0x1u << 10) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P11 (0x1u << 11) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P12 (0x1u << 12) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P13 (0x1u << 13) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P14 (0x1u << 14) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P15 (0x1u << 15) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P16 (0x1u << 16) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P17 (0x1u << 17) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P18 (0x1u << 18) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P19 (0x1u << 19) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P20 (0x1u << 20) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P21 (0x1u << 21) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P22 (0x1u << 22) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P23 (0x1u << 23) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P24 (0x1u << 24) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P25 (0x1u << 25) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P26 (0x1u << 26) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P27 (0x1u << 27) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P28 (0x1u << 28) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P29 (0x1u << 29) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P30 (0x1u << 30) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
#define PIO_IMR_P31 (0x1u << 31) /**< \brief (PIO_IMR) Input Change Interrupt Mask */
/* -------- PIO_ISR : (PIO Offset: 0x004C) Interrupt Status Register -------- */
#define PIO_ISR_P0 (0x1u << 0) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P1 (0x1u << 1) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P2 (0x1u << 2) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P3 (0x1u << 3) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P4 (0x1u << 4) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P5 (0x1u << 5) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P6 (0x1u << 6) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P7 (0x1u << 7) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P8 (0x1u << 8) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P9 (0x1u << 9) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P10 (0x1u << 10) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P11 (0x1u << 11) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P12 (0x1u << 12) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P13 (0x1u << 13) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P14 (0x1u << 14) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P15 (0x1u << 15) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P16 (0x1u << 16) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P17 (0x1u << 17) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P18 (0x1u << 18) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P19 (0x1u << 19) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P20 (0x1u << 20) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P21 (0x1u << 21) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P22 (0x1u << 22) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P23 (0x1u << 23) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P24 (0x1u << 24) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P25 (0x1u << 25) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P26 (0x1u << 26) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P27 (0x1u << 27) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P28 (0x1u << 28) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P29 (0x1u << 29) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P30 (0x1u << 30) /**< \brief (PIO_ISR) Input Change Interrupt Status */
#define PIO_ISR_P31 (0x1u << 31) /**< \brief (PIO_ISR) Input Change Interrupt Status */
/* -------- PIO_MDER : (PIO Offset: 0x0050) Multi-driver Enable Register -------- */
#define PIO_MDER_P0 (0x1u << 0) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P1 (0x1u << 1) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P2 (0x1u << 2) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P3 (0x1u << 3) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P4 (0x1u << 4) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P5 (0x1u << 5) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P6 (0x1u << 6) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P7 (0x1u << 7) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P8 (0x1u << 8) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P9 (0x1u << 9) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P10 (0x1u << 10) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P11 (0x1u << 11) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P12 (0x1u << 12) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P13 (0x1u << 13) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P14 (0x1u << 14) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P15 (0x1u << 15) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P16 (0x1u << 16) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P17 (0x1u << 17) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P18 (0x1u << 18) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P19 (0x1u << 19) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P20 (0x1u << 20) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P21 (0x1u << 21) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P22 (0x1u << 22) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P23 (0x1u << 23) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P24 (0x1u << 24) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P25 (0x1u << 25) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P26 (0x1u << 26) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P27 (0x1u << 27) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P28 (0x1u << 28) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P29 (0x1u << 29) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P30 (0x1u << 30) /**< \brief (PIO_MDER) Multi Drive Enable. */
#define PIO_MDER_P31 (0x1u << 31) /**< \brief (PIO_MDER) Multi Drive Enable. */
/* -------- PIO_MDDR : (PIO Offset: 0x0054) Multi-driver Disable Register -------- */
#define PIO_MDDR_P0 (0x1u << 0) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P1 (0x1u << 1) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P2 (0x1u << 2) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P3 (0x1u << 3) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P4 (0x1u << 4) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P5 (0x1u << 5) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P6 (0x1u << 6) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P7 (0x1u << 7) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P8 (0x1u << 8) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P9 (0x1u << 9) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P10 (0x1u << 10) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P11 (0x1u << 11) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P12 (0x1u << 12) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P13 (0x1u << 13) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P14 (0x1u << 14) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P15 (0x1u << 15) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P16 (0x1u << 16) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P17 (0x1u << 17) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P18 (0x1u << 18) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P19 (0x1u << 19) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P20 (0x1u << 20) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P21 (0x1u << 21) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P22 (0x1u << 22) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P23 (0x1u << 23) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P24 (0x1u << 24) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P25 (0x1u << 25) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P26 (0x1u << 26) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P27 (0x1u << 27) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P28 (0x1u << 28) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P29 (0x1u << 29) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P30 (0x1u << 30) /**< \brief (PIO_MDDR) Multi Drive Disable. */
#define PIO_MDDR_P31 (0x1u << 31) /**< \brief (PIO_MDDR) Multi Drive Disable. */
/* -------- PIO_MDSR : (PIO Offset: 0x0058) Multi-driver Status Register -------- */
#define PIO_MDSR_P0 (0x1u << 0) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P1 (0x1u << 1) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P2 (0x1u << 2) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P3 (0x1u << 3) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P4 (0x1u << 4) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P5 (0x1u << 5) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P6 (0x1u << 6) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P7 (0x1u << 7) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P8 (0x1u << 8) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P9 (0x1u << 9) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P10 (0x1u << 10) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P11 (0x1u << 11) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P12 (0x1u << 12) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P13 (0x1u << 13) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P14 (0x1u << 14) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P15 (0x1u << 15) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P16 (0x1u << 16) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P17 (0x1u << 17) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P18 (0x1u << 18) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P19 (0x1u << 19) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P20 (0x1u << 20) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P21 (0x1u << 21) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P22 (0x1u << 22) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P23 (0x1u << 23) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P24 (0x1u << 24) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P25 (0x1u << 25) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P26 (0x1u << 26) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P27 (0x1u << 27) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P28 (0x1u << 28) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P29 (0x1u << 29) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P30 (0x1u << 30) /**< \brief (PIO_MDSR) Multi Drive Status. */
#define PIO_MDSR_P31 (0x1u << 31) /**< \brief (PIO_MDSR) Multi Drive Status. */
/* -------- PIO_PUDR : (PIO Offset: 0x0060) Pull-up Disable Register -------- */
#define PIO_PUDR_P0 (0x1u << 0) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P1 (0x1u << 1) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P2 (0x1u << 2) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P3 (0x1u << 3) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P4 (0x1u << 4) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P5 (0x1u << 5) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P6 (0x1u << 6) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P7 (0x1u << 7) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P8 (0x1u << 8) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P9 (0x1u << 9) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P10 (0x1u << 10) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P11 (0x1u << 11) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P12 (0x1u << 12) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P13 (0x1u << 13) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P14 (0x1u << 14) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P15 (0x1u << 15) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P16 (0x1u << 16) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P17 (0x1u << 17) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P18 (0x1u << 18) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P19 (0x1u << 19) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P20 (0x1u << 20) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P21 (0x1u << 21) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P22 (0x1u << 22) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P23 (0x1u << 23) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P24 (0x1u << 24) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P25 (0x1u << 25) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P26 (0x1u << 26) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P27 (0x1u << 27) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P28 (0x1u << 28) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P29 (0x1u << 29) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P30 (0x1u << 30) /**< \brief (PIO_PUDR) Pull Up Disable. */
#define PIO_PUDR_P31 (0x1u << 31) /**< \brief (PIO_PUDR) Pull Up Disable. */
/* -------- PIO_PUER : (PIO Offset: 0x0064) Pull-up Enable Register -------- */
#define PIO_PUER_P0 (0x1u << 0) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P1 (0x1u << 1) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P2 (0x1u << 2) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P3 (0x1u << 3) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P4 (0x1u << 4) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P5 (0x1u << 5) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P6 (0x1u << 6) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P7 (0x1u << 7) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P8 (0x1u << 8) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P9 (0x1u << 9) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P10 (0x1u << 10) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P11 (0x1u << 11) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P12 (0x1u << 12) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P13 (0x1u << 13) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P14 (0x1u << 14) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P15 (0x1u << 15) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P16 (0x1u << 16) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P17 (0x1u << 17) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P18 (0x1u << 18) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P19 (0x1u << 19) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P20 (0x1u << 20) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P21 (0x1u << 21) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P22 (0x1u << 22) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P23 (0x1u << 23) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P24 (0x1u << 24) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P25 (0x1u << 25) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P26 (0x1u << 26) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P27 (0x1u << 27) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P28 (0x1u << 28) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P29 (0x1u << 29) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P30 (0x1u << 30) /**< \brief (PIO_PUER) Pull Up Enable. */
#define PIO_PUER_P31 (0x1u << 31) /**< \brief (PIO_PUER) Pull Up Enable. */
/* -------- PIO_PUSR : (PIO Offset: 0x0068) Pad Pull-up Status Register -------- */
#define PIO_PUSR_P0 (0x1u << 0) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P1 (0x1u << 1) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P2 (0x1u << 2) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P3 (0x1u << 3) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P4 (0x1u << 4) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P5 (0x1u << 5) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P6 (0x1u << 6) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P7 (0x1u << 7) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P8 (0x1u << 8) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P9 (0x1u << 9) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P10 (0x1u << 10) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P11 (0x1u << 11) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P12 (0x1u << 12) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P13 (0x1u << 13) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P14 (0x1u << 14) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P15 (0x1u << 15) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P16 (0x1u << 16) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P17 (0x1u << 17) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P18 (0x1u << 18) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P19 (0x1u << 19) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P20 (0x1u << 20) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P21 (0x1u << 21) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P22 (0x1u << 22) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P23 (0x1u << 23) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P24 (0x1u << 24) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P25 (0x1u << 25) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P26 (0x1u << 26) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P27 (0x1u << 27) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P28 (0x1u << 28) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P29 (0x1u << 29) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P30 (0x1u << 30) /**< \brief (PIO_PUSR) Pull Up Status. */
#define PIO_PUSR_P31 (0x1u << 31) /**< \brief (PIO_PUSR) Pull Up Status. */
/* -------- PIO_ABCDSR[2] : (PIO Offset: 0x0070) Peripheral Select Register -------- */
#define PIO_ABCDSR_P0 (0x1u << 0) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P1 (0x1u << 1) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P2 (0x1u << 2) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P3 (0x1u << 3) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P4 (0x1u << 4) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P5 (0x1u << 5) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P6 (0x1u << 6) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P7 (0x1u << 7) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P8 (0x1u << 8) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P9 (0x1u << 9) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P10 (0x1u << 10) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P11 (0x1u << 11) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P12 (0x1u << 12) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P13 (0x1u << 13) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P14 (0x1u << 14) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P15 (0x1u << 15) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P16 (0x1u << 16) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P17 (0x1u << 17) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P18 (0x1u << 18) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P19 (0x1u << 19) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P20 (0x1u << 20) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P21 (0x1u << 21) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P22 (0x1u << 22) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P23 (0x1u << 23) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P24 (0x1u << 24) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P25 (0x1u << 25) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P26 (0x1u << 26) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P27 (0x1u << 27) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P28 (0x1u << 28) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P29 (0x1u << 29) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P30 (0x1u << 30) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
#define PIO_ABCDSR_P31 (0x1u << 31) /**< \brief (PIO_ABCDSR[2]) Peripheral Select. */
/* -------- PIO_IFSCDR : (PIO Offset: 0x0080) Input Filter Slow Clock Disable Register -------- */
#define PIO_IFSCDR_P0 (0x1u << 0) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P1 (0x1u << 1) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P2 (0x1u << 2) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P3 (0x1u << 3) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P4 (0x1u << 4) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P5 (0x1u << 5) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P6 (0x1u << 6) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P7 (0x1u << 7) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P8 (0x1u << 8) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P9 (0x1u << 9) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P10 (0x1u << 10) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P11 (0x1u << 11) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P12 (0x1u << 12) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P13 (0x1u << 13) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P14 (0x1u << 14) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P15 (0x1u << 15) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P16 (0x1u << 16) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P17 (0x1u << 17) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P18 (0x1u << 18) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P19 (0x1u << 19) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P20 (0x1u << 20) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P21 (0x1u << 21) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P22 (0x1u << 22) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P23 (0x1u << 23) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P24 (0x1u << 24) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P25 (0x1u << 25) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P26 (0x1u << 26) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P27 (0x1u << 27) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P28 (0x1u << 28) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P29 (0x1u << 29) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P30 (0x1u << 30) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
#define PIO_IFSCDR_P31 (0x1u << 31) /**< \brief (PIO_IFSCDR) PIO Clock Glitch Filtering Select. */
/* -------- PIO_IFSCER : (PIO Offset: 0x0084) Input Filter Slow Clock Enable Register -------- */
#define PIO_IFSCER_P0 (0x1u << 0) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P1 (0x1u << 1) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P2 (0x1u << 2) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P3 (0x1u << 3) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P4 (0x1u << 4) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P5 (0x1u << 5) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P6 (0x1u << 6) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P7 (0x1u << 7) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P8 (0x1u << 8) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P9 (0x1u << 9) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P10 (0x1u << 10) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P11 (0x1u << 11) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P12 (0x1u << 12) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P13 (0x1u << 13) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P14 (0x1u << 14) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P15 (0x1u << 15) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P16 (0x1u << 16) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P17 (0x1u << 17) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P18 (0x1u << 18) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P19 (0x1u << 19) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P20 (0x1u << 20) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P21 (0x1u << 21) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P22 (0x1u << 22) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P23 (0x1u << 23) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P24 (0x1u << 24) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P25 (0x1u << 25) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P26 (0x1u << 26) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P27 (0x1u << 27) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P28 (0x1u << 28) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P29 (0x1u << 29) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P30 (0x1u << 30) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
#define PIO_IFSCER_P31 (0x1u << 31) /**< \brief (PIO_IFSCER) Debouncing Filtering Select. */
/* -------- PIO_IFSCSR : (PIO Offset: 0x0088) Input Filter Slow Clock Status Register -------- */
#define PIO_IFSCSR_P0 (0x1u << 0) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P1 (0x1u << 1) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P2 (0x1u << 2) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P3 (0x1u << 3) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P4 (0x1u << 4) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P5 (0x1u << 5) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P6 (0x1u << 6) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P7 (0x1u << 7) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P8 (0x1u << 8) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P9 (0x1u << 9) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P10 (0x1u << 10) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P11 (0x1u << 11) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P12 (0x1u << 12) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P13 (0x1u << 13) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P14 (0x1u << 14) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P15 (0x1u << 15) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P16 (0x1u << 16) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P17 (0x1u << 17) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P18 (0x1u << 18) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P19 (0x1u << 19) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P20 (0x1u << 20) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P21 (0x1u << 21) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P22 (0x1u << 22) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P23 (0x1u << 23) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P24 (0x1u << 24) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P25 (0x1u << 25) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P26 (0x1u << 26) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P27 (0x1u << 27) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P28 (0x1u << 28) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P29 (0x1u << 29) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P30 (0x1u << 30) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
#define PIO_IFSCSR_P31 (0x1u << 31) /**< \brief (PIO_IFSCSR) Glitch or Debouncing Filter Selection Status */
/* -------- PIO_SCDR : (PIO Offset: 0x008C) Slow Clock Divider Debouncing Register -------- */
#define PIO_SCDR_DIV_Pos 0
#define PIO_SCDR_DIV_Msk (0x3fffu << PIO_SCDR_DIV_Pos) /**< \brief (PIO_SCDR)  */
#define PIO_SCDR_DIV(value) ((PIO_SCDR_DIV_Msk & ((value) << PIO_SCDR_DIV_Pos)))
/* -------- PIO_PPDDR : (PIO Offset: 0x0090) Pad Pull-down Disable Register -------- */
#define PIO_PPDDR_P0 (0x1u << 0) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P1 (0x1u << 1) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P2 (0x1u << 2) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P3 (0x1u << 3) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P4 (0x1u << 4) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P5 (0x1u << 5) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P6 (0x1u << 6) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P7 (0x1u << 7) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P8 (0x1u << 8) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P9 (0x1u << 9) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P10 (0x1u << 10) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P11 (0x1u << 11) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P12 (0x1u << 12) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P13 (0x1u << 13) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P14 (0x1u << 14) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P15 (0x1u << 15) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P16 (0x1u << 16) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P17 (0x1u << 17) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P18 (0x1u << 18) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P19 (0x1u << 19) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P20 (0x1u << 20) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P21 (0x1u << 21) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P22 (0x1u << 22) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P23 (0x1u << 23) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P24 (0x1u << 24) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P25 (0x1u << 25) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P26 (0x1u << 26) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P27 (0x1u << 27) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P28 (0x1u << 28) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P29 (0x1u << 29) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P30 (0x1u << 30) /**< \brief (PIO_PPDDR) Pull Down Disable. */
#define PIO_PPDDR_P31 (0x1u << 31) /**< \brief (PIO_PPDDR) Pull Down Disable. */
/* -------- PIO_PPDER : (PIO Offset: 0x0094) Pad Pull-down Enable Register -------- */
#define PIO_PPDER_P0 (0x1u << 0) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P1 (0x1u << 1) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P2 (0x1u << 2) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P3 (0x1u << 3) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P4 (0x1u << 4) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P5 (0x1u << 5) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P6 (0x1u << 6) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P7 (0x1u << 7) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P8 (0x1u << 8) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P9 (0x1u << 9) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P10 (0x1u << 10) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P11 (0x1u << 11) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P12 (0x1u << 12) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P13 (0x1u << 13) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P14 (0x1u << 14) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P15 (0x1u << 15) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P16 (0x1u << 16) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P17 (0x1u << 17) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P18 (0x1u << 18) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P19 (0x1u << 19) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P20 (0x1u << 20) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P21 (0x1u << 21) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P22 (0x1u << 22) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P23 (0x1u << 23) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P24 (0x1u << 24) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P25 (0x1u << 25) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P26 (0x1u << 26) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P27 (0x1u << 27) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P28 (0x1u << 28) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P29 (0x1u << 29) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P30 (0x1u << 30) /**< \brief (PIO_PPDER) Pull Down Enable. */
#define PIO_PPDER_P31 (0x1u << 31) /**< \brief (PIO_PPDER) Pull Down Enable. */
/* -------- PIO_PPDSR : (PIO Offset: 0x0098) Pad Pull-down Status Register -------- */
#define PIO_PPDSR_P0 (0x1u << 0) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P1 (0x1u << 1) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P2 (0x1u << 2) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P3 (0x1u << 3) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P4 (0x1u << 4) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P5 (0x1u << 5) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P6 (0x1u << 6) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P7 (0x1u << 7) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P8 (0x1u << 8) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P9 (0x1u << 9) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P10 (0x1u << 10) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P11 (0x1u << 11) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P12 (0x1u << 12) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P13 (0x1u << 13) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P14 (0x1u << 14) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P15 (0x1u << 15) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P16 (0x1u << 16) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P17 (0x1u << 17) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P18 (0x1u << 18) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P19 (0x1u << 19) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P20 (0x1u << 20) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P21 (0x1u << 21) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P22 (0x1u << 22) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P23 (0x1u << 23) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P24 (0x1u << 24) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P25 (0x1u << 25) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P26 (0x1u << 26) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P27 (0x1u << 27) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P28 (0x1u << 28) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P29 (0x1u << 29) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P30 (0x1u << 30) /**< \brief (PIO_PPDSR) Pull Down Status. */
#define PIO_PPDSR_P31 (0x1u << 31) /**< \brief (PIO_PPDSR) Pull Down Status. */
/* -------- PIO_OWER : (PIO Offset: 0x00A0) Output Write Enable -------- */
#define PIO_OWER_P0 (0x1u << 0) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P1 (0x1u << 1) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P2 (0x1u << 2) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P3 (0x1u << 3) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P4 (0x1u << 4) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P5 (0x1u << 5) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P6 (0x1u << 6) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P7 (0x1u << 7) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P8 (0x1u << 8) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P9 (0x1u << 9) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P10 (0x1u << 10) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P11 (0x1u << 11) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P12 (0x1u << 12) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P13 (0x1u << 13) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P14 (0x1u << 14) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P15 (0x1u << 15) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P16 (0x1u << 16) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P17 (0x1u << 17) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P18 (0x1u << 18) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P19 (0x1u << 19) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P20 (0x1u << 20) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P21 (0x1u << 21) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P22 (0x1u << 22) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P23 (0x1u << 23) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P24 (0x1u << 24) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P25 (0x1u << 25) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P26 (0x1u << 26) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P27 (0x1u << 27) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P28 (0x1u << 28) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P29 (0x1u << 29) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P30 (0x1u << 30) /**< \brief (PIO_OWER) Output Write Enable. */
#define PIO_OWER_P31 (0x1u << 31) /**< \brief (PIO_OWER) Output Write Enable. */
/* -------- PIO_OWDR : (PIO Offset: 0x00A4) Output Write Disable -------- */
#define PIO_OWDR_P0 (0x1u << 0) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P1 (0x1u << 1) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P2 (0x1u << 2) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P3 (0x1u << 3) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P4 (0x1u << 4) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P5 (0x1u << 5) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P6 (0x1u << 6) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P7 (0x1u << 7) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P8 (0x1u << 8) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P9 (0x1u << 9) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P10 (0x1u << 10) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P11 (0x1u << 11) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P12 (0x1u << 12) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P13 (0x1u << 13) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P14 (0x1u << 14) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P15 (0x1u << 15) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P16 (0x1u << 16) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P17 (0x1u << 17) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P18 (0x1u << 18) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P19 (0x1u << 19) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P20 (0x1u << 20) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P21 (0x1u << 21) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P22 (0x1u << 22) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P23 (0x1u << 23) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P24 (0x1u << 24) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P25 (0x1u << 25) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P26 (0x1u << 26) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P27 (0x1u << 27) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P28 (0x1u << 28) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P29 (0x1u << 29) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P30 (0x1u << 30) /**< \brief (PIO_OWDR) Output Write Disable. */
#define PIO_OWDR_P31 (0x1u << 31) /**< \brief (PIO_OWDR) Output Write Disable. */
/* -------- PIO_OWSR : (PIO Offset: 0x00A8) Output Write Status Register -------- */
#define PIO_OWSR_P0 (0x1u << 0) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P1 (0x1u << 1) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P2 (0x1u << 2) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P3 (0x1u << 3) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P4 (0x1u << 4) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P5 (0x1u << 5) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P6 (0x1u << 6) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P7 (0x1u << 7) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P8 (0x1u << 8) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P9 (0x1u << 9) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P10 (0x1u << 10) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P11 (0x1u << 11) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P12 (0x1u << 12) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P13 (0x1u << 13) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P14 (0x1u << 14) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P15 (0x1u << 15) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P16 (0x1u << 16) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P17 (0x1u << 17) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P18 (0x1u << 18) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P19 (0x1u << 19) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P20 (0x1u << 20) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P21 (0x1u << 21) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P22 (0x1u << 22) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P23 (0x1u << 23) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P24 (0x1u << 24) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P25 (0x1u << 25) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P26 (0x1u << 26) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P27 (0x1u << 27) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P28 (0x1u << 28) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P29 (0x1u << 29) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P30 (0x1u << 30) /**< \brief (PIO_OWSR) Output Write Status. */
#define PIO_OWSR_P31 (0x1u << 31) /**< \brief (PIO_OWSR) Output Write Status. */
/* -------- PIO_AIMER : (PIO Offset: 0x00B0) Additional Interrupt Modes Enable Register -------- */
#define PIO_AIMER_P0 (0x1u << 0) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P1 (0x1u << 1) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P2 (0x1u << 2) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P3 (0x1u << 3) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P4 (0x1u << 4) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P5 (0x1u << 5) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P6 (0x1u << 6) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P7 (0x1u << 7) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P8 (0x1u << 8) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P9 (0x1u << 9) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P10 (0x1u << 10) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P11 (0x1u << 11) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P12 (0x1u << 12) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P13 (0x1u << 13) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P14 (0x1u << 14) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P15 (0x1u << 15) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P16 (0x1u << 16) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P17 (0x1u << 17) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P18 (0x1u << 18) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P19 (0x1u << 19) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P20 (0x1u << 20) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P21 (0x1u << 21) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P22 (0x1u << 22) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P23 (0x1u << 23) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P24 (0x1u << 24) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P25 (0x1u << 25) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P26 (0x1u << 26) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P27 (0x1u << 27) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P28 (0x1u << 28) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P29 (0x1u << 29) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P30 (0x1u << 30) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
#define PIO_AIMER_P31 (0x1u << 31) /**< \brief (PIO_AIMER) Additional Interrupt Modes Enable. */
/* -------- PIO_AIMDR : (PIO Offset: 0x00B4) Additional Interrupt Modes Disables Register -------- */
#define PIO_AIMDR_P0 (0x1u << 0) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P1 (0x1u << 1) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P2 (0x1u << 2) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P3 (0x1u << 3) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P4 (0x1u << 4) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P5 (0x1u << 5) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P6 (0x1u << 6) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P7 (0x1u << 7) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P8 (0x1u << 8) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P9 (0x1u << 9) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P10 (0x1u << 10) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P11 (0x1u << 11) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P12 (0x1u << 12) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P13 (0x1u << 13) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P14 (0x1u << 14) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P15 (0x1u << 15) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P16 (0x1u << 16) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P17 (0x1u << 17) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P18 (0x1u << 18) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P19 (0x1u << 19) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P20 (0x1u << 20) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P21 (0x1u << 21) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P22 (0x1u << 22) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P23 (0x1u << 23) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P24 (0x1u << 24) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P25 (0x1u << 25) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P26 (0x1u << 26) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P27 (0x1u << 27) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P28 (0x1u << 28) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P29 (0x1u << 29) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P30 (0x1u << 30) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
#define PIO_AIMDR_P31 (0x1u << 31) /**< \brief (PIO_AIMDR) Additional Interrupt Modes Disable. */
/* -------- PIO_AIMMR : (PIO Offset: 0x00B8) Additional Interrupt Modes Mask Register -------- */
#define PIO_AIMMR_P0 (0x1u << 0) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P1 (0x1u << 1) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P2 (0x1u << 2) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P3 (0x1u << 3) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P4 (0x1u << 4) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P5 (0x1u << 5) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P6 (0x1u << 6) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P7 (0x1u << 7) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P8 (0x1u << 8) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P9 (0x1u << 9) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P10 (0x1u << 10) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P11 (0x1u << 11) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P12 (0x1u << 12) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P13 (0x1u << 13) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P14 (0x1u << 14) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P15 (0x1u << 15) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P16 (0x1u << 16) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P17 (0x1u << 17) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P18 (0x1u << 18) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P19 (0x1u << 19) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P20 (0x1u << 20) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P21 (0x1u << 21) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P22 (0x1u << 22) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P23 (0x1u << 23) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P24 (0x1u << 24) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P25 (0x1u << 25) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P26 (0x1u << 26) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P27 (0x1u << 27) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P28 (0x1u << 28) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P29 (0x1u << 29) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P30 (0x1u << 30) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
#define PIO_AIMMR_P31 (0x1u << 31) /**< \brief (PIO_AIMMR) Peripheral CD Status. */
/* -------- PIO_ESR : (PIO Offset: 0x00C0) Edge Select Register -------- */
#define PIO_ESR_P0 (0x1u << 0) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P1 (0x1u << 1) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P2 (0x1u << 2) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P3 (0x1u << 3) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P4 (0x1u << 4) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P5 (0x1u << 5) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P6 (0x1u << 6) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P7 (0x1u << 7) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P8 (0x1u << 8) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P9 (0x1u << 9) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P10 (0x1u << 10) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P11 (0x1u << 11) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P12 (0x1u << 12) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P13 (0x1u << 13) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P14 (0x1u << 14) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P15 (0x1u << 15) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P16 (0x1u << 16) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P17 (0x1u << 17) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P18 (0x1u << 18) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P19 (0x1u << 19) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P20 (0x1u << 20) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P21 (0x1u << 21) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P22 (0x1u << 22) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P23 (0x1u << 23) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P24 (0x1u << 24) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P25 (0x1u << 25) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P26 (0x1u << 26) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P27 (0x1u << 27) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P28 (0x1u << 28) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P29 (0x1u << 29) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P30 (0x1u << 30) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
#define PIO_ESR_P31 (0x1u << 31) /**< \brief (PIO_ESR) Edge Interrupt Selection. */
/* -------- PIO_LSR : (PIO Offset: 0x00C4) Level Select Register -------- */
#define PIO_LSR_P0 (0x1u << 0) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P1 (0x1u << 1) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P2 (0x1u << 2) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P3 (0x1u << 3) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P4 (0x1u << 4) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P5 (0x1u << 5) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P6 (0x1u << 6) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P7 (0x1u << 7) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P8 (0x1u << 8) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P9 (0x1u << 9) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P10 (0x1u << 10) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P11 (0x1u << 11) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P12 (0x1u << 12) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P13 (0x1u << 13) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P14 (0x1u << 14) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P15 (0x1u << 15) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P16 (0x1u << 16) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P17 (0x1u << 17) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P18 (0x1u << 18) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P19 (0x1u << 19) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P20 (0x1u << 20) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P21 (0x1u << 21) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P22 (0x1u << 22) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P23 (0x1u << 23) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P24 (0x1u << 24) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P25 (0x1u << 25) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P26 (0x1u << 26) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P27 (0x1u << 27) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P28 (0x1u << 28) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P29 (0x1u << 29) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P30 (0x1u << 30) /**< \brief (PIO_LSR) Level Interrupt Selection. */
#define PIO_LSR_P31 (0x1u << 31) /**< \brief (PIO_LSR) Level Interrupt Selection. */
/* -------- PIO_ELSR : (PIO Offset: 0x00C8) Edge/Level Status Register -------- */
#define PIO_ELSR_P0 (0x1u << 0) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P1 (0x1u << 1) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P2 (0x1u << 2) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P3 (0x1u << 3) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P4 (0x1u << 4) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P5 (0x1u << 5) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P6 (0x1u << 6) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P7 (0x1u << 7) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P8 (0x1u << 8) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P9 (0x1u << 9) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P10 (0x1u << 10) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P11 (0x1u << 11) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P12 (0x1u << 12) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P13 (0x1u << 13) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P14 (0x1u << 14) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P15 (0x1u << 15) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P16 (0x1u << 16) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P17 (0x1u << 17) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P18 (0x1u << 18) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P19 (0x1u << 19) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P20 (0x1u << 20) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P21 (0x1u << 21) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P22 (0x1u << 22) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P23 (0x1u << 23) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P24 (0x1u << 24) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P25 (0x1u << 25) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P26 (0x1u << 26) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P27 (0x1u << 27) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P28 (0x1u << 28) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P29 (0x1u << 29) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P30 (0x1u << 30) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
#define PIO_ELSR_P31 (0x1u << 31) /**< \brief (PIO_ELSR) Edge/Level Interrupt source selection. */
/* -------- PIO_FELLSR : (PIO Offset: 0x00D0) Falling Edge/Low Level Select Register -------- */
#define PIO_FELLSR_P0 (0x1u << 0) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P1 (0x1u << 1) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P2 (0x1u << 2) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P3 (0x1u << 3) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P4 (0x1u << 4) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P5 (0x1u << 5) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P6 (0x1u << 6) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P7 (0x1u << 7) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P8 (0x1u << 8) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P9 (0x1u << 9) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P10 (0x1u << 10) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P11 (0x1u << 11) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P12 (0x1u << 12) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P13 (0x1u << 13) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P14 (0x1u << 14) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P15 (0x1u << 15) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P16 (0x1u << 16) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P17 (0x1u << 17) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P18 (0x1u << 18) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P19 (0x1u << 19) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P20 (0x1u << 20) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P21 (0x1u << 21) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P22 (0x1u << 22) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P23 (0x1u << 23) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P24 (0x1u << 24) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P25 (0x1u << 25) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P26 (0x1u << 26) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P27 (0x1u << 27) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P28 (0x1u << 28) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P29 (0x1u << 29) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P30 (0x1u << 30) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
#define PIO_FELLSR_P31 (0x1u << 31) /**< \brief (PIO_FELLSR) Falling Edge/Low Level Interrupt Selection. */
/* -------- PIO_REHLSR : (PIO Offset: 0x00D4) Rising Edge/ High Level Select Register -------- */
#define PIO_REHLSR_P0 (0x1u << 0) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P1 (0x1u << 1) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P2 (0x1u << 2) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P3 (0x1u << 3) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P4 (0x1u << 4) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P5 (0x1u << 5) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P6 (0x1u << 6) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P7 (0x1u << 7) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P8 (0x1u << 8) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P9 (0x1u << 9) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P10 (0x1u << 10) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P11 (0x1u << 11) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P12 (0x1u << 12) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P13 (0x1u << 13) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P14 (0x1u << 14) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P15 (0x1u << 15) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P16 (0x1u << 16) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P17 (0x1u << 17) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P18 (0x1u << 18) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P19 (0x1u << 19) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P20 (0x1u << 20) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P21 (0x1u << 21) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P22 (0x1u << 22) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P23 (0x1u << 23) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P24 (0x1u << 24) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P25 (0x1u << 25) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P26 (0x1u << 26) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P27 (0x1u << 27) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P28 (0x1u << 28) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P29 (0x1u << 29) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P30 (0x1u << 30) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
#define PIO_REHLSR_P31 (0x1u << 31) /**< \brief (PIO_REHLSR) Rising Edge /High Level Interrupt Selection. */
/* -------- PIO_FRLHSR : (PIO Offset: 0x00D8) Fall/Rise - Low/High Status Register -------- */
#define PIO_FRLHSR_P0 (0x1u << 0) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P1 (0x1u << 1) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P2 (0x1u << 2) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P3 (0x1u << 3) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P4 (0x1u << 4) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P5 (0x1u << 5) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P6 (0x1u << 6) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P7 (0x1u << 7) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P8 (0x1u << 8) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P9 (0x1u << 9) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P10 (0x1u << 10) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P11 (0x1u << 11) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P12 (0x1u << 12) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P13 (0x1u << 13) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P14 (0x1u << 14) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P15 (0x1u << 15) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P16 (0x1u << 16) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P17 (0x1u << 17) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P18 (0x1u << 18) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P19 (0x1u << 19) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P20 (0x1u << 20) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P21 (0x1u << 21) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P22 (0x1u << 22) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P23 (0x1u << 23) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P24 (0x1u << 24) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P25 (0x1u << 25) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P26 (0x1u << 26) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P27 (0x1u << 27) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P28 (0x1u << 28) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P29 (0x1u << 29) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P30 (0x1u << 30) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
#define PIO_FRLHSR_P31 (0x1u << 31) /**< \brief (PIO_FRLHSR) Edge /Level Interrupt Source Selection. */
/* -------- PIO_LOCKSR : (PIO Offset: 0x00E0) Lock Status -------- */
#define PIO_LOCKSR_P0 (0x1u << 0) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P1 (0x1u << 1) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P2 (0x1u << 2) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P3 (0x1u << 3) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P4 (0x1u << 4) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P5 (0x1u << 5) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P6 (0x1u << 6) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P7 (0x1u << 7) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P8 (0x1u << 8) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P9 (0x1u << 9) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P10 (0x1u << 10) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P11 (0x1u << 11) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P12 (0x1u << 12) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P13 (0x1u << 13) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P14 (0x1u << 14) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P15 (0x1u << 15) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P16 (0x1u << 16) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P17 (0x1u << 17) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P18 (0x1u << 18) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P19 (0x1u << 19) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P20 (0x1u << 20) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P21 (0x1u << 21) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P22 (0x1u << 22) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P23 (0x1u << 23) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P24 (0x1u << 24) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P25 (0x1u << 25) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P26 (0x1u << 26) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P27 (0x1u << 27) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P28 (0x1u << 28) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P29 (0x1u << 29) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P30 (0x1u << 30) /**< \brief (PIO_LOCKSR) Lock Status. */
#define PIO_LOCKSR_P31 (0x1u << 31) /**< \brief (PIO_LOCKSR) Lock Status. */
/* -------- PIO_WPMR : (PIO Offset: 0x00E4) Write Protect Mode Register -------- */
#define PIO_WPMR_WPEN (0x1u << 0) /**< \brief (PIO_WPMR) Write Protect Enable */
#define PIO_WPMR_WPKEY_Pos 8
#define PIO_WPMR_WPKEY_Msk (0xffffffu << PIO_WPMR_WPKEY_Pos) /**< \brief (PIO_WPMR) Write Protect KEY */
#define PIO_WPMR_WPKEY(value) ((PIO_WPMR_WPKEY_Msk & ((value) << PIO_WPMR_WPKEY_Pos)))
/* -------- PIO_WPSR : (PIO Offset: 0x00E8) Write Protect Status Register -------- */
#define PIO_WPSR_WPVS (0x1u << 0) /**< \brief (PIO_WPSR) Write Protect Violation Status */
#define PIO_WPSR_WPVSRC_Pos 8
#define PIO_WPSR_WPVSRC_Msk (0xffffu << PIO_WPSR_WPVSRC_Pos) /**< \brief (PIO_WPSR) Write Protect Violation Source */
/* -------- PIO_SCHMITT : (PIO Offset: 0x0100) Schmitt Trigger Register -------- */
#define PIO_SCHMITT_SCHMITT0 (0x1u << 0) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT1 (0x1u << 1) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT2 (0x1u << 2) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT3 (0x1u << 3) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT4 (0x1u << 4) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT5 (0x1u << 5) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT6 (0x1u << 6) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT7 (0x1u << 7) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT8 (0x1u << 8) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT9 (0x1u << 9) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT10 (0x1u << 10) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT11 (0x1u << 11) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT12 (0x1u << 12) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT13 (0x1u << 13) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT14 (0x1u << 14) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT15 (0x1u << 15) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT16 (0x1u << 16) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT17 (0x1u << 17) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT18 (0x1u << 18) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT19 (0x1u << 19) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT20 (0x1u << 20) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT21 (0x1u << 21) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT22 (0x1u << 22) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT23 (0x1u << 23) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT24 (0x1u << 24) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT25 (0x1u << 25) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT26 (0x1u << 26) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT27 (0x1u << 27) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT28 (0x1u << 28) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT29 (0x1u << 29) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT30 (0x1u << 30) /**< \brief (PIO_SCHMITT)  */
#define PIO_SCHMITT_SCHMITT31 (0x1u << 31) /**< \brief (PIO_SCHMITT)  */

/*@}*/


#endif /* _SAM3N_PIO_COMPONENT_ */

#ifndef _SAM3N_PMC_COMPONENT_
#define _SAM3N_PMC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Power Management Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_PMC Power Management Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Pmc hardware registers */
typedef struct {
  WoReg PMC_SCER;      /**< \brief (Pmc Offset: 0x0000) System Clock Enable Register */
  WoReg PMC_SCDR;      /**< \brief (Pmc Offset: 0x0004) System Clock Disable Register */
  RoReg PMC_SCSR;      /**< \brief (Pmc Offset: 0x0008) System Clock Status Register */
  RoReg Reserved1[1];
  WoReg PMC_PCER0;     /**< \brief (Pmc Offset: 0x0010) Peripheral Clock Enable Register 0 */
  WoReg PMC_PCDR0;     /**< \brief (Pmc Offset: 0x0014) Peripheral Clock Disable Register 0 */
  RoReg PMC_PCSR0;     /**< \brief (Pmc Offset: 0x0018) Peripheral Clock Status Register 0 */
  RoReg Reserved2[1];
  RwReg CKGR_MOR;      /**< \brief (Pmc Offset: 0x0020) Main Oscillator Register */
  RoReg CKGR_MCFR;     /**< \brief (Pmc Offset: 0x0024) Main Clock Frequency Register */
  RwReg CKGR_PLLAR;    /**< \brief (Pmc Offset: 0x0028) PLLA Register */
  RoReg Reserved3[1];
  RwReg PMC_MCKR;      /**< \brief (Pmc Offset: 0x0030) Master Clock Register */
  RoReg Reserved4[3];
  RwReg PMC_PCK[3];    /**< \brief (Pmc Offset: 0x0040) Programmable Clock 0 Register */
  RoReg Reserved5[5];
  WoReg PMC_IER;       /**< \brief (Pmc Offset: 0x0060) Interrupt Enable Register */
  WoReg PMC_IDR;       /**< \brief (Pmc Offset: 0x0064) Interrupt Disable Register */
  RoReg PMC_SR;        /**< \brief (Pmc Offset: 0x0068) Status Register */
  RoReg PMC_IMR;       /**< \brief (Pmc Offset: 0x006C) Interrupt Mask Register */
  RwReg PMC_FSMR;      /**< \brief (Pmc Offset: 0x0070) Fast Startup Mode Register */
  RwReg PMC_FSPR;      /**< \brief (Pmc Offset: 0x0074) Fast Startup Polarity Register */
  WoReg PMC_FOCR;      /**< \brief (Pmc Offset: 0x0078) Fault Output Clear Register */
  RoReg Reserved6[26];
  RwReg PMC_WPMR;      /**< \brief (Pmc Offset: 0x00E4) Write Protect Mode Register */
  RoReg PMC_WPSR;      /**< \brief (Pmc Offset: 0x00E8) Write Protect Status Register */
} Pmc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- PMC_SCER : (PMC Offset: 0x0000) System Clock Enable Register -------- */
#define PMC_SCER_PCK0 (0x1u << 8) /**< \brief (PMC_SCER) Programmable Clock 0 Output Enable */
#define PMC_SCER_PCK1 (0x1u << 9) /**< \brief (PMC_SCER) Programmable Clock 1 Output Enable */
#define PMC_SCER_PCK2 (0x1u << 10) /**< \brief (PMC_SCER) Programmable Clock 2 Output Enable */
/* -------- PMC_SCDR : (PMC Offset: 0x0004) System Clock Disable Register -------- */
#define PMC_SCDR_PCK0 (0x1u << 8) /**< \brief (PMC_SCDR) Programmable Clock 0 Output Disable */
#define PMC_SCDR_PCK1 (0x1u << 9) /**< \brief (PMC_SCDR) Programmable Clock 1 Output Disable */
#define PMC_SCDR_PCK2 (0x1u << 10) /**< \brief (PMC_SCDR) Programmable Clock 2 Output Disable */
/* -------- PMC_SCSR : (PMC Offset: 0x0008) System Clock Status Register -------- */
#define PMC_SCSR_PCK0 (0x1u << 8) /**< \brief (PMC_SCSR) Programmable Clock 0 Output Status */
#define PMC_SCSR_PCK1 (0x1u << 9) /**< \brief (PMC_SCSR) Programmable Clock 1 Output Status */
#define PMC_SCSR_PCK2 (0x1u << 10) /**< \brief (PMC_SCSR) Programmable Clock 2 Output Status */
/* -------- PMC_PCER0 : (PMC Offset: 0x0010) Peripheral Clock Enable Register 0 -------- */
#define PMC_PCER0_PID2 (0x1u << 2) /**< \brief (PMC_PCER0) Peripheral Clock 2 Enable */
#define PMC_PCER0_PID3 (0x1u << 3) /**< \brief (PMC_PCER0) Peripheral Clock 3 Enable */
#define PMC_PCER0_PID4 (0x1u << 4) /**< \brief (PMC_PCER0) Peripheral Clock 4 Enable */
#define PMC_PCER0_PID5 (0x1u << 5) /**< \brief (PMC_PCER0) Peripheral Clock 5 Enable */
#define PMC_PCER0_PID6 (0x1u << 6) /**< \brief (PMC_PCER0) Peripheral Clock 6 Enable */
#define PMC_PCER0_PID7 (0x1u << 7) /**< \brief (PMC_PCER0) Peripheral Clock 7 Enable */
#define PMC_PCER0_PID8 (0x1u << 8) /**< \brief (PMC_PCER0) Peripheral Clock 8 Enable */
#define PMC_PCER0_PID9 (0x1u << 9) /**< \brief (PMC_PCER0) Peripheral Clock 9 Enable */
#define PMC_PCER0_PID10 (0x1u << 10) /**< \brief (PMC_PCER0) Peripheral Clock 10 Enable */
#define PMC_PCER0_PID11 (0x1u << 11) /**< \brief (PMC_PCER0) Peripheral Clock 11 Enable */
#define PMC_PCER0_PID12 (0x1u << 12) /**< \brief (PMC_PCER0) Peripheral Clock 12 Enable */
#define PMC_PCER0_PID13 (0x1u << 13) /**< \brief (PMC_PCER0) Peripheral Clock 13 Enable */
#define PMC_PCER0_PID14 (0x1u << 14) /**< \brief (PMC_PCER0) Peripheral Clock 14 Enable */
#define PMC_PCER0_PID15 (0x1u << 15) /**< \brief (PMC_PCER0) Peripheral Clock 15 Enable */
#define PMC_PCER0_PID19 (0x1u << 19) /**< \brief (PMC_PCER0) Peripheral Clock 19 Enable */
#define PMC_PCER0_PID20 (0x1u << 20) /**< \brief (PMC_PCER0) Peripheral Clock 20 Enable */
#define PMC_PCER0_PID21 (0x1u << 21) /**< \brief (PMC_PCER0) Peripheral Clock 21 Enable */
#define PMC_PCER0_PID23 (0x1u << 23) /**< \brief (PMC_PCER0) Peripheral Clock 23 Enable */
#define PMC_PCER0_PID24 (0x1u << 24) /**< \brief (PMC_PCER0) Peripheral Clock 24 Enable */
#define PMC_PCER0_PID25 (0x1u << 25) /**< \brief (PMC_PCER0) Peripheral Clock 25 Enable */
#define PMC_PCER0_PID26 (0x1u << 26) /**< \brief (PMC_PCER0) Peripheral Clock 26 Enable */
#define PMC_PCER0_PID27 (0x1u << 27) /**< \brief (PMC_PCER0) Peripheral Clock 27 Enable */
#define PMC_PCER0_PID28 (0x1u << 28) /**< \brief (PMC_PCER0) Peripheral Clock 28 Enable */
#define PMC_PCER0_PID29 (0x1u << 29) /**< \brief (PMC_PCER0) Peripheral Clock 29 Enable */
#define PMC_PCER0_PID30 (0x1u << 30) /**< \brief (PMC_PCER0) Peripheral Clock 30 Enable */
#define PMC_PCER0_PID31 (0x1u << 31) /**< \brief (PMC_PCER0) Peripheral Clock 31 Enable */
/* -------- PMC_PCDR0 : (PMC Offset: 0x0014) Peripheral Clock Disable Register 0 -------- */
#define PMC_PCDR0_PID2 (0x1u << 2) /**< \brief (PMC_PCDR0) Peripheral Clock 2 Disable */
#define PMC_PCDR0_PID3 (0x1u << 3) /**< \brief (PMC_PCDR0) Peripheral Clock 3 Disable */
#define PMC_PCDR0_PID4 (0x1u << 4) /**< \brief (PMC_PCDR0) Peripheral Clock 4 Disable */
#define PMC_PCDR0_PID5 (0x1u << 5) /**< \brief (PMC_PCDR0) Peripheral Clock 5 Disable */
#define PMC_PCDR0_PID6 (0x1u << 6) /**< \brief (PMC_PCDR0) Peripheral Clock 6 Disable */
#define PMC_PCDR0_PID7 (0x1u << 7) /**< \brief (PMC_PCDR0) Peripheral Clock 7 Disable */
#define PMC_PCDR0_PID8 (0x1u << 8) /**< \brief (PMC_PCDR0) Peripheral Clock 8 Disable */
#define PMC_PCDR0_PID9 (0x1u << 9) /**< \brief (PMC_PCDR0) Peripheral Clock 9 Disable */
#define PMC_PCDR0_PID10 (0x1u << 10) /**< \brief (PMC_PCDR0) Peripheral Clock 10 Disable */
#define PMC_PCDR0_PID11 (0x1u << 11) /**< \brief (PMC_PCDR0) Peripheral Clock 11 Disable */
#define PMC_PCDR0_PID12 (0x1u << 12) /**< \brief (PMC_PCDR0) Peripheral Clock 12 Disable */
#define PMC_PCDR0_PID13 (0x1u << 13) /**< \brief (PMC_PCDR0) Peripheral Clock 13 Disable */
#define PMC_PCDR0_PID14 (0x1u << 14) /**< \brief (PMC_PCDR0) Peripheral Clock 14 Disable */
#define PMC_PCDR0_PID15 (0x1u << 15) /**< \brief (PMC_PCDR0) Peripheral Clock 15 Disable */
#define PMC_PCDR0_PID19 (0x1u << 19) /**< \brief (PMC_PCDR0) Peripheral Clock 19 Disable */
#define PMC_PCDR0_PID20 (0x1u << 20) /**< \brief (PMC_PCDR0) Peripheral Clock 20 Disable */
#define PMC_PCDR0_PID21 (0x1u << 21) /**< \brief (PMC_PCDR0) Peripheral Clock 21 Disable */
#define PMC_PCDR0_PID23 (0x1u << 23) /**< \brief (PMC_PCDR0) Peripheral Clock 23 Disable */
#define PMC_PCDR0_PID24 (0x1u << 24) /**< \brief (PMC_PCDR0) Peripheral Clock 24 Disable */
#define PMC_PCDR0_PID25 (0x1u << 25) /**< \brief (PMC_PCDR0) Peripheral Clock 25 Disable */
#define PMC_PCDR0_PID26 (0x1u << 26) /**< \brief (PMC_PCDR0) Peripheral Clock 26 Disable */
#define PMC_PCDR0_PID27 (0x1u << 27) /**< \brief (PMC_PCDR0) Peripheral Clock 27 Disable */
#define PMC_PCDR0_PID28 (0x1u << 28) /**< \brief (PMC_PCDR0) Peripheral Clock 28 Disable */
#define PMC_PCDR0_PID29 (0x1u << 29) /**< \brief (PMC_PCDR0) Peripheral Clock 29 Disable */
#define PMC_PCDR0_PID30 (0x1u << 30) /**< \brief (PMC_PCDR0) Peripheral Clock 30 Disable */
#define PMC_PCDR0_PID31 (0x1u << 31) /**< \brief (PMC_PCDR0) Peripheral Clock 31 Disable */
/* -------- PMC_PCSR0 : (PMC Offset: 0x0018) Peripheral Clock Status Register 0 -------- */
#define PMC_PCSR0_PID2 (0x1u << 2) /**< \brief (PMC_PCSR0) Peripheral Clock 2 Status */
#define PMC_PCSR0_PID3 (0x1u << 3) /**< \brief (PMC_PCSR0) Peripheral Clock 3 Status */
#define PMC_PCSR0_PID4 (0x1u << 4) /**< \brief (PMC_PCSR0) Peripheral Clock 4 Status */
#define PMC_PCSR0_PID5 (0x1u << 5) /**< \brief (PMC_PCSR0) Peripheral Clock 5 Status */
#define PMC_PCSR0_PID6 (0x1u << 6) /**< \brief (PMC_PCSR0) Peripheral Clock 6 Status */
#define PMC_PCSR0_PID7 (0x1u << 7) /**< \brief (PMC_PCSR0) Peripheral Clock 7 Status */
#define PMC_PCSR0_PID8 (0x1u << 8) /**< \brief (PMC_PCSR0) Peripheral Clock 8 Status */
#define PMC_PCSR0_PID9 (0x1u << 9) /**< \brief (PMC_PCSR0) Peripheral Clock 9 Status */
#define PMC_PCSR0_PID10 (0x1u << 10) /**< \brief (PMC_PCSR0) Peripheral Clock 10 Status */
#define PMC_PCSR0_PID11 (0x1u << 11) /**< \brief (PMC_PCSR0) Peripheral Clock 11 Status */
#define PMC_PCSR0_PID12 (0x1u << 12) /**< \brief (PMC_PCSR0) Peripheral Clock 12 Status */
#define PMC_PCSR0_PID13 (0x1u << 13) /**< \brief (PMC_PCSR0) Peripheral Clock 13 Status */
#define PMC_PCSR0_PID14 (0x1u << 14) /**< \brief (PMC_PCSR0) Peripheral Clock 14 Status */
#define PMC_PCSR0_PID15 (0x1u << 15) /**< \brief (PMC_PCSR0) Peripheral Clock 15 Status */
#define PMC_PCSR0_PID19 (0x1u << 19) /**< \brief (PMC_PCSR0) Peripheral Clock 19 Status */
#define PMC_PCSR0_PID20 (0x1u << 20) /**< \brief (PMC_PCSR0) Peripheral Clock 20 Status */
#define PMC_PCSR0_PID21 (0x1u << 21) /**< \brief (PMC_PCSR0) Peripheral Clock 21 Status */
#define PMC_PCSR0_PID23 (0x1u << 23) /**< \brief (PMC_PCSR0) Peripheral Clock 23 Status */
#define PMC_PCSR0_PID24 (0x1u << 24) /**< \brief (PMC_PCSR0) Peripheral Clock 24 Status */
#define PMC_PCSR0_PID25 (0x1u << 25) /**< \brief (PMC_PCSR0) Peripheral Clock 25 Status */
#define PMC_PCSR0_PID26 (0x1u << 26) /**< \brief (PMC_PCSR0) Peripheral Clock 26 Status */
#define PMC_PCSR0_PID27 (0x1u << 27) /**< \brief (PMC_PCSR0) Peripheral Clock 27 Status */
#define PMC_PCSR0_PID28 (0x1u << 28) /**< \brief (PMC_PCSR0) Peripheral Clock 28 Status */
#define PMC_PCSR0_PID29 (0x1u << 29) /**< \brief (PMC_PCSR0) Peripheral Clock 29 Status */
#define PMC_PCSR0_PID30 (0x1u << 30) /**< \brief (PMC_PCSR0) Peripheral Clock 30 Status */
#define PMC_PCSR0_PID31 (0x1u << 31) /**< \brief (PMC_PCSR0) Peripheral Clock 31 Status */
/* -------- CKGR_MOR : (PMC Offset: 0x0020) Main Oscillator Register -------- */
#define CKGR_MOR_MOSCXTEN (0x1u << 0) /**< \brief (CKGR_MOR) Main Crystal Oscillator Enable */
#define CKGR_MOR_MOSCXTBY (0x1u << 1) /**< \brief (CKGR_MOR) Main Crystal Oscillator Bypass */
#define CKGR_MOR_MOSCRCEN (0x1u << 3) /**< \brief (CKGR_MOR) Main On-Chip RC Oscillator Enable */
#define CKGR_MOR_MOSCRCF_Pos 4
#define CKGR_MOR_MOSCRCF_Msk (0x7u << CKGR_MOR_MOSCRCF_Pos) /**< \brief (CKGR_MOR) Main On-Chip RC Oscillator Frequency Selection */
#define   CKGR_MOR_MOSCRCF_4_MHz (0x0u << 4) /**< \brief (CKGR_MOR) The Fast RC Oscillator Frequency is at 4 MHz (default) */
#define   CKGR_MOR_MOSCRCF_8_MHz (0x1u << 4) /**< \brief (CKGR_MOR) The Fast RC Oscillator Frequency is at 8 MHz */
#define   CKGR_MOR_MOSCRCF_12_MHz (0x2u << 4) /**< \brief (CKGR_MOR) The Fast RC Oscillator Frequency is at 12 MHz */
#define CKGR_MOR_MOSCXTST_Pos 8
#define CKGR_MOR_MOSCXTST_Msk (0xffu << CKGR_MOR_MOSCXTST_Pos) /**< \brief (CKGR_MOR) Main Crystal Oscillator Start-up Time */
#define CKGR_MOR_MOSCXTST(value) ((CKGR_MOR_MOSCXTST_Msk & ((value) << CKGR_MOR_MOSCXTST_Pos)))
#define CKGR_MOR_KEY_Pos 16
#define CKGR_MOR_KEY_Msk (0xffu << CKGR_MOR_KEY_Pos) /**< \brief (CKGR_MOR) Password */
#define CKGR_MOR_KEY(value) ((CKGR_MOR_KEY_Msk & ((value) << CKGR_MOR_KEY_Pos)))
#define CKGR_MOR_MOSCSEL (0x1u << 24) /**< \brief (CKGR_MOR) Main Oscillator Selection */
#define CKGR_MOR_CFDEN (0x1u << 25) /**< \brief (CKGR_MOR) Clock Failure Detector Enable */
/* -------- CKGR_MCFR : (PMC Offset: 0x0024) Main Clock Frequency Register -------- */
#define CKGR_MCFR_MAINF_Pos 0
#define CKGR_MCFR_MAINF_Msk (0xffffu << CKGR_MCFR_MAINF_Pos) /**< \brief (CKGR_MCFR) Main Clock Frequency */
#define CKGR_MCFR_MAINFRDY (0x1u << 16) /**< \brief (CKGR_MCFR) Main Clock Ready */
/* -------- CKGR_PLLAR : (PMC Offset: 0x0028) PLLA Register -------- */
#define CKGR_PLLAR_DIVA_Pos 0
#define CKGR_PLLAR_DIVA_Msk (0xffu << CKGR_PLLAR_DIVA_Pos) /**< \brief (CKGR_PLLAR) Divider */
#define CKGR_PLLAR_DIVA(value) ((CKGR_PLLAR_DIVA_Msk & ((value) << CKGR_PLLAR_DIVA_Pos)))
#define CKGR_PLLAR_PLLACOUNT_Pos 8
#define CKGR_PLLAR_PLLACOUNT_Msk (0x3fu << CKGR_PLLAR_PLLACOUNT_Pos) /**< \brief (CKGR_PLLAR) PLLA Counter */
#define CKGR_PLLAR_PLLACOUNT(value) ((CKGR_PLLAR_PLLACOUNT_Msk & ((value) << CKGR_PLLAR_PLLACOUNT_Pos)))
#define CKGR_PLLAR_MULA_Pos 16
#define CKGR_PLLAR_MULA_Msk (0x7ffu << CKGR_PLLAR_MULA_Pos) /**< \brief (CKGR_PLLAR) PLLA Multiplier */
#define CKGR_PLLAR_MULA(value) ((CKGR_PLLAR_MULA_Msk & ((value) << CKGR_PLLAR_MULA_Pos)))
#define CKGR_PLLAR_ONE (0x1u << 29) /**< \brief (CKGR_PLLAR) Must Be Set to 1 */
/* -------- PMC_MCKR : (PMC Offset: 0x0030) Master Clock Register -------- */
#define PMC_MCKR_CSS_Pos 0
#define PMC_MCKR_CSS_Msk (0x3u << PMC_MCKR_CSS_Pos) /**< \brief (PMC_MCKR) Master Clock Source Selection */
#define   PMC_MCKR_CSS_SLOW_CLK (0x0u << 0) /**< \brief (PMC_MCKR) Slow Clock is selected */
#define   PMC_MCKR_CSS_MAIN_CLK (0x1u << 0) /**< \brief (PMC_MCKR) Main Clock is selected */
#define   PMC_MCKR_CSS_PLLA_CLK (0x2u << 0) /**< \brief (PMC_MCKR) PLLA Clock is selected */
#define PMC_MCKR_PRES_Pos 4
#define PMC_MCKR_PRES_Msk (0x7u << PMC_MCKR_PRES_Pos) /**< \brief (PMC_MCKR) Processor Clock Prescaler */
#define   PMC_MCKR_PRES_CLK_1 (0x0u << 4) /**< \brief (PMC_MCKR) Selected clock */
#define   PMC_MCKR_PRES_CLK_2 (0x1u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 2 */
#define   PMC_MCKR_PRES_CLK_4 (0x2u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 4 */
#define   PMC_MCKR_PRES_CLK_8 (0x3u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 8 */
#define   PMC_MCKR_PRES_CLK_16 (0x4u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 16 */
#define   PMC_MCKR_PRES_CLK_32 (0x5u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 32 */
#define   PMC_MCKR_PRES_CLK_64 (0x6u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 64 */
#define   PMC_MCKR_PRES_CLK_3 (0x7u << 4) /**< \brief (PMC_MCKR) Selected clock divided by 3 */
#define PMC_MCKR_PLLADIV2 (0x1u << 12) /**< \brief (PMC_MCKR) PLLA Divisor by 2 */
/* -------- PMC_PCK[3] : (PMC Offset: 0x0040) Programmable Clock 0 Register -------- */
#define PMC_PCK_CSS_Pos 0
#define PMC_PCK_CSS_Msk (0x7u << PMC_PCK_CSS_Pos) /**< \brief (PMC_PCK[3]) Master Clock Source Selection */
#define   PMC_PCK_CSS_SLOW_CLK (0x0u << 0) /**< \brief (PMC_PCK[3]) Slow Clock is selected */
#define   PMC_PCK_CSS_MAIN_CLK (0x1u << 0) /**< \brief (PMC_PCK[3]) Main Clock is selected */
#define   PMC_PCK_CSS_PLLA_CLK (0x2u << 0) /**< \brief (PMC_PCK[3]) PLLA Clock is selected */
#define   PMC_PCK_CSS_MCK (0x4u << 0) /**< \brief (PMC_PCK[3]) Master Clock is selected */
#define PMC_PCK_PRES_Pos 4
#define PMC_PCK_PRES_Msk (0x7u << PMC_PCK_PRES_Pos) /**< \brief (PMC_PCK[3]) Programmable Clock Prescaler */
#define   PMC_PCK_PRES_CLK_1 (0x0u << 4) /**< \brief (PMC_PCK[3]) Selected clock */
#define   PMC_PCK_PRES_CLK_2 (0x1u << 4) /**< \brief (PMC_PCK[3]) Selected clock divided by 2 */
#define   PMC_PCK_PRES_CLK_4 (0x2u << 4) /**< \brief (PMC_PCK[3]) Selected clock divided by 4 */
#define   PMC_PCK_PRES_CLK_8 (0x3u << 4) /**< \brief (PMC_PCK[3]) Selected clock divided by 8 */
#define   PMC_PCK_PRES_CLK_16 (0x4u << 4) /**< \brief (PMC_PCK[3]) Selected clock divided by 16 */
#define   PMC_PCK_PRES_CLK_32 (0x5u << 4) /**< \brief (PMC_PCK[3]) Selected clock divided by 32 */
#define   PMC_PCK_PRES_CLK_64 (0x6u << 4) /**< \brief (PMC_PCK[3]) Selected clock divided by 64 */
/* -------- PMC_IER : (PMC Offset: 0x0060) Interrupt Enable Register -------- */
#define PMC_IER_MOSCXTS (0x1u << 0) /**< \brief (PMC_IER) Main Crystal Oscillator Status Interrupt Enable */
#define PMC_IER_LOCKA (0x1u << 1) /**< \brief (PMC_IER) PLLA Lock Interrupt Enable */
#define PMC_IER_MCKRDY (0x1u << 3) /**< \brief (PMC_IER) Master Clock Ready Interrupt Enable */
#define PMC_IER_PCKRDY0 (0x1u << 8) /**< \brief (PMC_IER) Programmable Clock Ready 0 Interrupt Enable */
#define PMC_IER_PCKRDY1 (0x1u << 9) /**< \brief (PMC_IER) Programmable Clock Ready 1 Interrupt Enable */
#define PMC_IER_PCKRDY2 (0x1u << 10) /**< \brief (PMC_IER) Programmable Clock Ready 2 Interrupt Enable */
#define PMC_IER_MOSCSELS (0x1u << 16) /**< \brief (PMC_IER) Main Oscillator Selection Status Interrupt Enable */
#define PMC_IER_MOSCRCS (0x1u << 17) /**< \brief (PMC_IER) Main On-Chip RC Status Interrupt Enable */
#define PMC_IER_CFDEV (0x1u << 18) /**< \brief (PMC_IER) Clock Failure Detector Event Interrupt Enable */
/* -------- PMC_IDR : (PMC Offset: 0x0064) Interrupt Disable Register -------- */
#define PMC_IDR_MOSCXTS (0x1u << 0) /**< \brief (PMC_IDR) Main Crystal Oscillator Status Interrupt Disable */
#define PMC_IDR_LOCKA (0x1u << 1) /**< \brief (PMC_IDR) PLLA Lock Interrupt Disable */
#define PMC_IDR_MCKRDY (0x1u << 3) /**< \brief (PMC_IDR) Master Clock Ready Interrupt Disable */
#define PMC_IDR_PCKRDY0 (0x1u << 8) /**< \brief (PMC_IDR) Programmable Clock Ready 0 Interrupt Disable */
#define PMC_IDR_PCKRDY1 (0x1u << 9) /**< \brief (PMC_IDR) Programmable Clock Ready 1 Interrupt Disable */
#define PMC_IDR_PCKRDY2 (0x1u << 10) /**< \brief (PMC_IDR) Programmable Clock Ready 2 Interrupt Disable */
#define PMC_IDR_MOSCSELS (0x1u << 16) /**< \brief (PMC_IDR) Main Oscillator Selection Status Interrupt Disable */
#define PMC_IDR_MOSCRCS (0x1u << 17) /**< \brief (PMC_IDR) Main On-Chip RC Status Interrupt Disable */
#define PMC_IDR_CFDEV (0x1u << 18) /**< \brief (PMC_IDR) Clock Failure Detector Event Interrupt Disable */
/* -------- PMC_SR : (PMC Offset: 0x0068) Status Register -------- */
#define PMC_SR_MOSCXTS (0x1u << 0) /**< \brief (PMC_SR) Main XTAL Oscillator Status */
#define PMC_SR_LOCKA (0x1u << 1) /**< \brief (PMC_SR) PLLA Lock Status */
#define PMC_SR_MCKRDY (0x1u << 3) /**< \brief (PMC_SR) Master Clock Status */
#define PMC_SR_OSCSELS (0x1u << 7) /**< \brief (PMC_SR) Slow Clock Oscillator Selection */
#define PMC_SR_PCKRDY0 (0x1u << 8) /**< \brief (PMC_SR) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY1 (0x1u << 9) /**< \brief (PMC_SR) Programmable Clock Ready Status */
#define PMC_SR_PCKRDY2 (0x1u << 10) /**< \brief (PMC_SR) Programmable Clock Ready Status */
#define PMC_SR_MOSCSELS (0x1u << 16) /**< \brief (PMC_SR) Main Oscillator Selection Status */
#define PMC_SR_MOSCRCS (0x1u << 17) /**< \brief (PMC_SR) Main On-Chip RC Oscillator Status */
#define PMC_SR_CFDEV (0x1u << 18) /**< \brief (PMC_SR) Clock Failure Detector Event */
#define PMC_SR_CFDS (0x1u << 19) /**< \brief (PMC_SR) Clock Failure Detector Status */
#define PMC_SR_FOS (0x1u << 20) /**< \brief (PMC_SR) Clock Failure Detector Fault Output Status */
/* -------- PMC_IMR : (PMC Offset: 0x006C) Interrupt Mask Register -------- */
#define PMC_IMR_MOSCXTS (0x1u << 0) /**< \brief (PMC_IMR) Main Crystal Oscillator Status Interrupt Mask */
#define PMC_IMR_LOCKA (0x1u << 1) /**< \brief (PMC_IMR) PLLA Lock Interrupt Mask */
#define PMC_IMR_MCKRDY (0x1u << 3) /**< \brief (PMC_IMR) Master Clock Ready Interrupt Mask */
#define PMC_IMR_PCKRDY0 (0x1u << 8) /**< \brief (PMC_IMR) Programmable Clock Ready 0 Interrupt Mask */
#define PMC_IMR_PCKRDY1 (0x1u << 9) /**< \brief (PMC_IMR) Programmable Clock Ready 1 Interrupt Mask */
#define PMC_IMR_PCKRDY2 (0x1u << 10) /**< \brief (PMC_IMR) Programmable Clock Ready 2 Interrupt Mask */
#define PMC_IMR_MOSCSELS (0x1u << 16) /**< \brief (PMC_IMR) Main Oscillator Selection Status Interrupt Mask */
#define PMC_IMR_MOSCRCS (0x1u << 17) /**< \brief (PMC_IMR) Main On-Chip RC Status Interrupt Mask */
#define PMC_IMR_CFDEV (0x1u << 18) /**< \brief (PMC_IMR) Clock Failure Detector Event Interrupt Mask */
/* -------- PMC_FSMR : (PMC Offset: 0x0070) Fast Startup Mode Register -------- */
#define PMC_FSMR_FSTT0 (0x1u << 0) /**< \brief (PMC_FSMR) Fast Startup Input Enable 0 */
#define PMC_FSMR_FSTT1 (0x1u << 1) /**< \brief (PMC_FSMR) Fast Startup Input Enable 1 */
#define PMC_FSMR_FSTT2 (0x1u << 2) /**< \brief (PMC_FSMR) Fast Startup Input Enable 2 */
#define PMC_FSMR_FSTT3 (0x1u << 3) /**< \brief (PMC_FSMR) Fast Startup Input Enable 3 */
#define PMC_FSMR_FSTT4 (0x1u << 4) /**< \brief (PMC_FSMR) Fast Startup Input Enable 4 */
#define PMC_FSMR_FSTT5 (0x1u << 5) /**< \brief (PMC_FSMR) Fast Startup Input Enable 5 */
#define PMC_FSMR_FSTT6 (0x1u << 6) /**< \brief (PMC_FSMR) Fast Startup Input Enable 6 */
#define PMC_FSMR_FSTT7 (0x1u << 7) /**< \brief (PMC_FSMR) Fast Startup Input Enable 7 */
#define PMC_FSMR_FSTT8 (0x1u << 8) /**< \brief (PMC_FSMR) Fast Startup Input Enable 8 */
#define PMC_FSMR_FSTT9 (0x1u << 9) /**< \brief (PMC_FSMR) Fast Startup Input Enable 9 */
#define PMC_FSMR_FSTT10 (0x1u << 10) /**< \brief (PMC_FSMR) Fast Startup Input Enable 10 */
#define PMC_FSMR_FSTT11 (0x1u << 11) /**< \brief (PMC_FSMR) Fast Startup Input Enable 11 */
#define PMC_FSMR_FSTT12 (0x1u << 12) /**< \brief (PMC_FSMR) Fast Startup Input Enable 12 */
#define PMC_FSMR_FSTT13 (0x1u << 13) /**< \brief (PMC_FSMR) Fast Startup Input Enable 13 */
#define PMC_FSMR_FSTT14 (0x1u << 14) /**< \brief (PMC_FSMR) Fast Startup Input Enable 14 */
#define PMC_FSMR_FSTT15 (0x1u << 15) /**< \brief (PMC_FSMR) Fast Startup Input Enable 15 */
#define PMC_FSMR_RTTAL (0x1u << 16) /**< \brief (PMC_FSMR) RTT Alarm Enable */
#define PMC_FSMR_RTCAL (0x1u << 17) /**< \brief (PMC_FSMR) RTC Alarm Enable */
#define PMC_FSMR_LPM (0x1u << 20) /**< \brief (PMC_FSMR) Low Power Mode */
/* -------- PMC_FSPR : (PMC Offset: 0x0074) Fast Startup Polarity Register -------- */
#define PMC_FSPR_FSTP0 (0x1u << 0) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP1 (0x1u << 1) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP2 (0x1u << 2) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP3 (0x1u << 3) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP4 (0x1u << 4) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP5 (0x1u << 5) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP6 (0x1u << 6) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP7 (0x1u << 7) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP8 (0x1u << 8) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP9 (0x1u << 9) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP10 (0x1u << 10) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP11 (0x1u << 11) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP12 (0x1u << 12) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP13 (0x1u << 13) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP14 (0x1u << 14) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
#define PMC_FSPR_FSTP15 (0x1u << 15) /**< \brief (PMC_FSPR) Fast Startup Input Polarityx */
/* -------- PMC_FOCR : (PMC Offset: 0x0078) Fault Output Clear Register -------- */
#define PMC_FOCR_FOCLR (0x1u << 0) /**< \brief (PMC_FOCR) Fault Output Clear */
/* -------- PMC_WPMR : (PMC Offset: 0x00E4) Write Protect Mode Register -------- */
#define PMC_WPMR_WPEN (0x1u << 0) /**< \brief (PMC_WPMR) Write Protect Enable */
#define PMC_WPMR_WPKEY_Pos 8
#define PMC_WPMR_WPKEY_Msk (0xffffffu << PMC_WPMR_WPKEY_Pos) /**< \brief (PMC_WPMR) Write Protect KEY */
#define PMC_WPMR_WPKEY(value) ((PMC_WPMR_WPKEY_Msk & ((value) << PMC_WPMR_WPKEY_Pos)))
/* -------- PMC_WPSR : (PMC Offset: 0x00E8) Write Protect Status Register -------- */
#define PMC_WPSR_WPVS (0x1u << 0) /**< \brief (PMC_WPSR) Write Protect Violation Status */
#define PMC_WPSR_WPVSRC_Pos 8
#define PMC_WPSR_WPVSRC_Msk (0xffffu << PMC_WPSR_WPVSRC_Pos) /**< \brief (PMC_WPSR) Write Protect Violation Source */

/*@}*/


#endif /* _SAM3N_PMC_COMPONENT_ */

#ifndef _SAM3N_PWM_COMPONENT_
#define _SAM3N_PWM_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Pulse Width Modulation Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_PWM Pulse Width Modulation Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief PwmCh_num hardware registers */
typedef struct {
  RwReg      PWM_CMR;        /**< \brief (PwmCh_num Offset: 0x0) PWM Channel Mode Register */
  RwReg      PWM_CDTY;       /**< \brief (PwmCh_num Offset: 0x4) PWM Channel Duty Cycle Register */
  RwReg      PWM_CPRD;       /**< \brief (PwmCh_num Offset: 0x8) PWM Channel Period Register */
  RwReg      PWM_CCNT;       /**< \brief (PwmCh_num Offset: 0xC) PWM Channel Counter Register */
  RwReg      PWM_CUPD;       /**< \brief (PwmCh_num Offset: 0x10) PWM Channel Update Register */
  RoReg      Reserved1[3];
} PwmCh_num;
/** \brief Pwm hardware registers */
#define PWMCH_NUM_NUMBER 4
typedef struct {
  RwReg      PWM_MR;         /**< \brief (Pwm Offset: 0x00) PWM Mode Register */
  WoReg      PWM_ENA;        /**< \brief (Pwm Offset: 0x04) PWM Enable Register */
  WoReg      PWM_DIS;        /**< \brief (Pwm Offset: 0x08) PWM Disable Register */
  RoReg      PWM_SR;         /**< \brief (Pwm Offset: 0x0C) PWM Status Register */
  WoReg      PWM_IER;        /**< \brief (Pwm Offset: 0x10) PWM Interrupt Enable Register */
  WoReg      PWM_IDR;        /**< \brief (Pwm Offset: 0x14) PWM Interrupt Disable Register */
  RoReg      PWM_IMR;        /**< \brief (Pwm Offset: 0x18) PWM Interrupt Mask Register */
  RoReg      PWM_ISR;        /**< \brief (Pwm Offset: 0x1C) PWM Interrupt Status Register */
  RoReg      Reserved1[120];
  PwmCh_num  PWM_CH_NUM[PWMCH_NUM_NUMBER]; /**< \brief (Pwm Offset: 0x200) ch_num = 0 .. 3 */
} Pwm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- PWM_MR : (PWM Offset: 0x00) PWM Mode Register -------- */
#define PWM_MR_DIVA_Pos 0
#define PWM_MR_DIVA_Msk (0xffu << PWM_MR_DIVA_Pos) /**< \brief (PWM_MR) CLKA, CLKB Divide Factor */
#define   PWM_MR_DIVA_CLK_OFF (0x0u << 0) /**< \brief (PWM_MR) CLKA, CLKB clock is turned off */
#define   PWM_MR_DIVA_CLK_DIV1 (0x1u << 0) /**< \brief (PWM_MR) CLKA, CLKB clock is clock selected by PREA, PREB */
#define PWM_MR_PREA_Pos 8
#define PWM_MR_PREA_Msk (0xfu << PWM_MR_PREA_Pos) /**< \brief (PWM_MR)  */
#define   PWM_MR_PREA_MCK (0x0u << 8) /**< \brief (PWM_MR) Master Clock */
#define   PWM_MR_PREA_MCKDIV2 (0x1u << 8) /**< \brief (PWM_MR) Master Clock divided by 2 */
#define   PWM_MR_PREA_MCKDIV4 (0x2u << 8) /**< \brief (PWM_MR) Master Clock divided by 4 */
#define   PWM_MR_PREA_MCKDIV8 (0x3u << 8) /**< \brief (PWM_MR) Master Clock divided by 8 */
#define   PWM_MR_PREA_MCKDIV16 (0x4u << 8) /**< \brief (PWM_MR) Master Clock divided by 16 */
#define   PWM_MR_PREA_MCKDIV32 (0x5u << 8) /**< \brief (PWM_MR) Master Clock divided by 32 */
#define   PWM_MR_PREA_MCKDIV64 (0x6u << 8) /**< \brief (PWM_MR) Master Clock divided by 64 */
#define   PWM_MR_PREA_MCKDIV128 (0x7u << 8) /**< \brief (PWM_MR) Master Clock divided by 128 */
#define   PWM_MR_PREA_MCKDIV256 (0x8u << 8) /**< \brief (PWM_MR) Master Clock divided by 256 */
#define   PWM_MR_PREA_MCKDIV512 (0x9u << 8) /**< \brief (PWM_MR) Master Clock divided by 512 */
#define   PWM_MR_PREA_MCKDIV1024 (0xAu << 8) /**< \brief (PWM_MR) Master Clock divided by 1024 */
#define PWM_MR_DIVB_Pos 16
#define PWM_MR_DIVB_Msk (0xffu << PWM_MR_DIVB_Pos) /**< \brief (PWM_MR) CLKA, CLKB Divide Factor */
#define   PWM_MR_DIVB_CLK_OFF (0x0u << 16) /**< \brief (PWM_MR) CLKA, CLKB clock is turned off */
#define   PWM_MR_DIVB_CLK_DIV1 (0x1u << 16) /**< \brief (PWM_MR) CLKA, CLKB clock is clock selected by PREA, PREB */
#define PWM_MR_PREB_Pos 24
#define PWM_MR_PREB_Msk (0xfu << PWM_MR_PREB_Pos) /**< \brief (PWM_MR)  */
#define   PWM_MR_PREB_MCK (0x0u << 24) /**< \brief (PWM_MR) Master Clock */
#define   PWM_MR_PREB_MCKDIV2 (0x1u << 24) /**< \brief (PWM_MR) Master Clock divided by 2 */
#define   PWM_MR_PREB_MCKDIV4 (0x2u << 24) /**< \brief (PWM_MR) Master Clock divided by 4 */
#define   PWM_MR_PREB_MCKDIV8 (0x3u << 24) /**< \brief (PWM_MR) Master Clock divided by 8 */
#define   PWM_MR_PREB_MCKDIV16 (0x4u << 24) /**< \brief (PWM_MR) Master Clock divided by 16 */
#define   PWM_MR_PREB_MCKDIV32 (0x5u << 24) /**< \brief (PWM_MR) Master Clock divided by 32 */
#define   PWM_MR_PREB_MCKDIV64 (0x6u << 24) /**< \brief (PWM_MR) Master Clock divided by 64 */
#define   PWM_MR_PREB_MCKDIV128 (0x7u << 24) /**< \brief (PWM_MR) Master Clock divided by 128 */
#define   PWM_MR_PREB_MCKDIV256 (0x8u << 24) /**< \brief (PWM_MR) Master Clock divided by 256 */
#define   PWM_MR_PREB_MCKDIV512 (0x9u << 24) /**< \brief (PWM_MR) Master Clock divided by 512 */
#define   PWM_MR_PREB_MCKDIV1024 (0xAu << 24) /**< \brief (PWM_MR) Master Clock divided by 1024 */
/* -------- PWM_ENA : (PWM Offset: 0x04) PWM Enable Register -------- */
#define PWM_ENA_CHID0 (0x1u << 0) /**< \brief (PWM_ENA) Channel ID */
#define PWM_ENA_CHID1 (0x1u << 1) /**< \brief (PWM_ENA) Channel ID */
#define PWM_ENA_CHID2 (0x1u << 2) /**< \brief (PWM_ENA) Channel ID */
#define PWM_ENA_CHID3 (0x1u << 3) /**< \brief (PWM_ENA) Channel ID */
/* -------- PWM_DIS : (PWM Offset: 0x08) PWM Disable Register -------- */
#define PWM_DIS_CHID0 (0x1u << 0) /**< \brief (PWM_DIS) Channel ID */
#define PWM_DIS_CHID1 (0x1u << 1) /**< \brief (PWM_DIS) Channel ID */
#define PWM_DIS_CHID2 (0x1u << 2) /**< \brief (PWM_DIS) Channel ID */
#define PWM_DIS_CHID3 (0x1u << 3) /**< \brief (PWM_DIS) Channel ID */
/* -------- PWM_SR : (PWM Offset: 0x0C) PWM Status Register -------- */
#define PWM_SR_CHID0 (0x1u << 0) /**< \brief (PWM_SR) Channel ID */
#define PWM_SR_CHID1 (0x1u << 1) /**< \brief (PWM_SR) Channel ID */
#define PWM_SR_CHID2 (0x1u << 2) /**< \brief (PWM_SR) Channel ID */
#define PWM_SR_CHID3 (0x1u << 3) /**< \brief (PWM_SR) Channel ID */
/* -------- PWM_IER : (PWM Offset: 0x10) PWM Interrupt Enable Register -------- */
#define PWM_IER_CHID0 (0x1u << 0) /**< \brief (PWM_IER) Channel ID. */
#define PWM_IER_CHID1 (0x1u << 1) /**< \brief (PWM_IER) Channel ID. */
#define PWM_IER_CHID2 (0x1u << 2) /**< \brief (PWM_IER) Channel ID. */
#define PWM_IER_CHID3 (0x1u << 3) /**< \brief (PWM_IER) Channel ID. */
/* -------- PWM_IDR : (PWM Offset: 0x14) PWM Interrupt Disable Register -------- */
#define PWM_IDR_CHID0 (0x1u << 0) /**< \brief (PWM_IDR) Channel ID. */
#define PWM_IDR_CHID1 (0x1u << 1) /**< \brief (PWM_IDR) Channel ID. */
#define PWM_IDR_CHID2 (0x1u << 2) /**< \brief (PWM_IDR) Channel ID. */
#define PWM_IDR_CHID3 (0x1u << 3) /**< \brief (PWM_IDR) Channel ID. */
/* -------- PWM_IMR : (PWM Offset: 0x18) PWM Interrupt Mask Register -------- */
#define PWM_IMR_CHID0 (0x1u << 0) /**< \brief (PWM_IMR) Channel ID. */
#define PWM_IMR_CHID1 (0x1u << 1) /**< \brief (PWM_IMR) Channel ID. */
#define PWM_IMR_CHID2 (0x1u << 2) /**< \brief (PWM_IMR) Channel ID. */
#define PWM_IMR_CHID3 (0x1u << 3) /**< \brief (PWM_IMR) Channel ID. */
/* -------- PWM_ISR : (PWM Offset: 0x1C) PWM Interrupt Status Register -------- */
#define PWM_ISR_CHID0 (0x1u << 0) /**< \brief (PWM_ISR) Channel ID */
#define PWM_ISR_CHID1 (0x1u << 1) /**< \brief (PWM_ISR) Channel ID */
#define PWM_ISR_CHID2 (0x1u << 2) /**< \brief (PWM_ISR) Channel ID */
#define PWM_ISR_CHID3 (0x1u << 3) /**< \brief (PWM_ISR) Channel ID */
/* -------- PWM_CMR : (PWM Offset: N/A) PWM Channel Mode Register -------- */
#define PWM_CMR_CPRE_Pos 0
#define PWM_CMR_CPRE_Msk (0xfu << PWM_CMR_CPRE_Pos) /**< \brief (PWM_CMR) Channel Pre-scaler */
#define   PWM_CMR_CPRE_MCK (0x0u << 0) /**< \brief (PWM_CMR) Master Clock */
#define   PWM_CMR_CPRE_MCKDIV2 (0x1u << 0) /**< \brief (PWM_CMR) Master Clock divided by 2 */
#define   PWM_CMR_CPRE_MCKDIV4 (0x2u << 0) /**< \brief (PWM_CMR) Master Clock divided by 4 */
#define   PWM_CMR_CPRE_MCKDIV8 (0x3u << 0) /**< \brief (PWM_CMR) Master Clock divided by 8 */
#define   PWM_CMR_CPRE_MCKDIV16 (0x4u << 0) /**< \brief (PWM_CMR) Master Clock divided by 16 */
#define   PWM_CMR_CPRE_MCKDIV32 (0x5u << 0) /**< \brief (PWM_CMR) Master Clock divided by 32 */
#define   PWM_CMR_CPRE_MCKDIV64 (0x6u << 0) /**< \brief (PWM_CMR) Master Clock divided by 64 */
#define   PWM_CMR_CPRE_MCKDIV128 (0x7u << 0) /**< \brief (PWM_CMR) Master Clock divided by 128 */
#define   PWM_CMR_CPRE_MCKDIV256 (0x8u << 0) /**< \brief (PWM_CMR) Master Clock divided by 256 */
#define   PWM_CMR_CPRE_MCKDIV512 (0x9u << 0) /**< \brief (PWM_CMR) Master Clock divided by 512 */
#define   PWM_CMR_CPRE_MCKDIV1024 (0xAu << 0) /**< \brief (PWM_CMR) Master Clock divided by 1024 */
#define   PWM_CMR_CPRE_CLKA (0xBu << 0) /**< \brief (PWM_CMR) Clock A */
#define   PWM_CMR_CPRE_CLKB (0xCu << 0) /**< \brief (PWM_CMR) Clock B */
#define PWM_CMR_CALG (0x1u << 8) /**< \brief (PWM_CMR) Channel Alignment */
#define PWM_CMR_CPOL (0x1u << 9) /**< \brief (PWM_CMR) Channel Polarity */
#define PWM_CMR_CPD (0x1u << 10) /**< \brief (PWM_CMR) Channel Update Period */
/* -------- PWM_CDTY : (PWM Offset: N/A) PWM Channel Duty Cycle Register -------- */
#define PWM_CDTY_CDTY_Pos 0
#define PWM_CDTY_CDTY_Msk (0xffffffffu << PWM_CDTY_CDTY_Pos) /**< \brief (PWM_CDTY) Channel Duty Cycle */
#define PWM_CDTY_CDTY(value) ((PWM_CDTY_CDTY_Msk & ((value) << PWM_CDTY_CDTY_Pos)))
/* -------- PWM_CPRD : (PWM Offset: N/A) PWM Channel Period Register -------- */
#define PWM_CPRD_CPRD_Pos 0
#define PWM_CPRD_CPRD_Msk (0xffffffffu << PWM_CPRD_CPRD_Pos) /**< \brief (PWM_CPRD) Channel Period */
#define PWM_CPRD_CPRD(value) ((PWM_CPRD_CPRD_Msk & ((value) << PWM_CPRD_CPRD_Pos)))
/* -------- PWM_CCNT : (PWM Offset: N/A) PWM Channel Counter Register -------- */
#define PWM_CCNT_CNT_Pos 0
#define PWM_CCNT_CNT_Msk (0xffffffffu << PWM_CCNT_CNT_Pos) /**< \brief (PWM_CCNT) Channel Counter Register */
/* -------- PWM_CUPD : (PWM Offset: N/A) PWM Channel Update Register -------- */
#define PWM_CUPD_CUPD_Pos 0
#define PWM_CUPD_CUPD_Msk (0xffffffffu << PWM_CUPD_CUPD_Pos) /**< \brief (PWM_CUPD)  */
#define PWM_CUPD_CUPD(value) ((PWM_CUPD_CUPD_Msk & ((value) << PWM_CUPD_CUPD_Pos)))

/*@}*/


#endif /* _SAM3N_PWM_COMPONENT_ */

#ifndef _SAM3N_RSTC_COMPONENT_
#define _SAM3N_RSTC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Reset Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_RSTC Reset Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Rstc hardware registers */
typedef struct {
  WoReg RSTC_CR; /**< \brief (Rstc Offset: 0x00) Control Register */
  RoReg RSTC_SR; /**< \brief (Rstc Offset: 0x04) Status Register */
  RwReg RSTC_MR; /**< \brief (Rstc Offset: 0x08) Mode Register */
} Rstc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- RSTC_CR : (RSTC Offset: 0x00) Control Register -------- */
#define RSTC_CR_PROCRST (0x1u << 0) /**< \brief (RSTC_CR) Processor Reset */
#define RSTC_CR_PERRST (0x1u << 2) /**< \brief (RSTC_CR) Peripheral Reset */
#define RSTC_CR_EXTRST (0x1u << 3) /**< \brief (RSTC_CR) External Reset */
#define RSTC_CR_KEY_Pos 24
#define RSTC_CR_KEY_Msk (0xffu << RSTC_CR_KEY_Pos) /**< \brief (RSTC_CR) Password */
#define RSTC_CR_KEY(value) ((RSTC_CR_KEY_Msk & ((value) << RSTC_CR_KEY_Pos)))
/* -------- RSTC_SR : (RSTC Offset: 0x04) Status Register -------- */
#define RSTC_SR_URSTS (0x1u << 0) /**< \brief (RSTC_SR) User Reset Status */
#define RSTC_SR_RSTTYP_Pos 8
#define RSTC_SR_RSTTYP_Msk (0x7u << RSTC_SR_RSTTYP_Pos) /**< \brief (RSTC_SR) Reset Type */
#define RSTC_SR_NRSTL (0x1u << 16) /**< \brief (RSTC_SR) NRST Pin Level */
#define RSTC_SR_SRCMP (0x1u << 17) /**< \brief (RSTC_SR) Software Reset Command in Progress */
/* -------- RSTC_MR : (RSTC Offset: 0x08) Mode Register -------- */
#define RSTC_MR_URSTEN (0x1u << 0) /**< \brief (RSTC_MR) User Reset Enable */
#define RSTC_MR_URSTIEN (0x1u << 4) /**< \brief (RSTC_MR) User Reset Interrupt Enable */
#define RSTC_MR_ERSTL_Pos 8
#define RSTC_MR_ERSTL_Msk (0xfu << RSTC_MR_ERSTL_Pos) /**< \brief (RSTC_MR) External Reset Length */
#define RSTC_MR_ERSTL(value) ((RSTC_MR_ERSTL_Msk & ((value) << RSTC_MR_ERSTL_Pos)))
#define RSTC_MR_KEY_Pos 24
#define RSTC_MR_KEY_Msk (0xffu << RSTC_MR_KEY_Pos) /**< \brief (RSTC_MR) Password */
#define RSTC_MR_KEY(value) ((RSTC_MR_KEY_Msk & ((value) << RSTC_MR_KEY_Pos)))

/*@}*/


#endif /* _SAM3N_RSTC_COMPONENT_ */

#ifndef _SAM3N_RTC_COMPONENT_
#define _SAM3N_RTC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Real-time Clock */
/* ============================================================================= */
/** \addtogroup SAM3N_RTC Real-time Clock */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Rtc hardware registers */
typedef struct {
  RwReg RTC_CR;        /**< \brief (Rtc Offset: 0x00) Control Register */
  RwReg RTC_MR;        /**< \brief (Rtc Offset: 0x04) Mode Register */
  RwReg RTC_TIMR;      /**< \brief (Rtc Offset: 0x08) Time Register */
  RwReg RTC_CALR;      /**< \brief (Rtc Offset: 0x0C) Calendar Register */
  RwReg RTC_TIMALR;    /**< \brief (Rtc Offset: 0x10) Time Alarm Register */
  RwReg RTC_CALALR;    /**< \brief (Rtc Offset: 0x14) Calendar Alarm Register */
  RoReg RTC_SR;        /**< \brief (Rtc Offset: 0x18) Status Register */
  WoReg RTC_SCCR;      /**< \brief (Rtc Offset: 0x1C) Status Clear Command Register */
  WoReg RTC_IER;       /**< \brief (Rtc Offset: 0x20) Interrupt Enable Register */
  WoReg RTC_IDR;       /**< \brief (Rtc Offset: 0x24) Interrupt Disable Register */
  RoReg RTC_IMR;       /**< \brief (Rtc Offset: 0x28) Interrupt Mask Register */
  RoReg RTC_VER;       /**< \brief (Rtc Offset: 0x2C) Valid Entry Register */
  RoReg Reserved1[45];
  RwReg RTC_WPMR;      /**< \brief (Rtc Offset: 0xE4) Write Protect Mode Register */
} Rtc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- RTC_CR : (RTC Offset: 0x00) Control Register -------- */
#define RTC_CR_UPDTIM (0x1u << 0) /**< \brief (RTC_CR) Update Request Time Register */
#define RTC_CR_UPDCAL (0x1u << 1) /**< \brief (RTC_CR) Update Request Calendar Register */
#define RTC_CR_TIMEVSEL_Pos 8
#define RTC_CR_TIMEVSEL_Msk (0x3u << RTC_CR_TIMEVSEL_Pos) /**< \brief (RTC_CR) Time Event Selection */
#define   RTC_CR_TIMEVSEL_MINUTE (0x0u << 8) /**< \brief (RTC_CR) Minute change */
#define   RTC_CR_TIMEVSEL_HOUR (0x1u << 8) /**< \brief (RTC_CR) Hour change */
#define   RTC_CR_TIMEVSEL_MIDNIGHT (0x2u << 8) /**< \brief (RTC_CR) Every day at midnight */
#define   RTC_CR_TIMEVSEL_NOON (0x3u << 8) /**< \brief (RTC_CR) Every day at noon */
#define RTC_CR_CALEVSEL_Pos 16
#define RTC_CR_CALEVSEL_Msk (0x3u << RTC_CR_CALEVSEL_Pos) /**< \brief (RTC_CR) Calendar Event Selection */
#define   RTC_CR_CALEVSEL_WEEK (0x0u << 16) /**< \brief (RTC_CR) Week change (every Monday at time 00:00:00) */
#define   RTC_CR_CALEVSEL_MONTH (0x1u << 16) /**< \brief (RTC_CR) Month change (every 01 of each month at time 00:00:00) */
#define   RTC_CR_CALEVSEL_YEAR (0x2u << 16) /**< \brief (RTC_CR) Year change (every January 1 at time 00:00:00) */
/* -------- RTC_MR : (RTC Offset: 0x04) Mode Register -------- */
#define RTC_MR_HRMOD (0x1u << 0) /**< \brief (RTC_MR) 12-/24-hour Mode */
/* -------- RTC_TIMR : (RTC Offset: 0x08) Time Register -------- */
#define RTC_TIMR_SEC_Pos 0
#define RTC_TIMR_SEC_Msk (0x7fu << RTC_TIMR_SEC_Pos) /**< \brief (RTC_TIMR) Current Second */
#define RTC_TIMR_SEC(value) ((RTC_TIMR_SEC_Msk & ((value) << RTC_TIMR_SEC_Pos)))
#define RTC_TIMR_MIN_Pos 8
#define RTC_TIMR_MIN_Msk (0x7fu << RTC_TIMR_MIN_Pos) /**< \brief (RTC_TIMR) Current Minute */
#define RTC_TIMR_MIN(value) ((RTC_TIMR_MIN_Msk & ((value) << RTC_TIMR_MIN_Pos)))
#define RTC_TIMR_HOUR_Pos 16
#define RTC_TIMR_HOUR_Msk (0x3fu << RTC_TIMR_HOUR_Pos) /**< \brief (RTC_TIMR) Current Hour */
#define RTC_TIMR_HOUR(value) ((RTC_TIMR_HOUR_Msk & ((value) << RTC_TIMR_HOUR_Pos)))
#define RTC_TIMR_AMPM (0x1u << 22) /**< \brief (RTC_TIMR) Ante Meridiem Post Meridiem Indicator */
/* -------- RTC_CALR : (RTC Offset: 0x0C) Calendar Register -------- */
#define RTC_CALR_CENT_Pos 0
#define RTC_CALR_CENT_Msk (0x7fu << RTC_CALR_CENT_Pos) /**< \brief (RTC_CALR) Current Century */
#define RTC_CALR_CENT(value) ((RTC_CALR_CENT_Msk & ((value) << RTC_CALR_CENT_Pos)))
#define RTC_CALR_YEAR_Pos 8
#define RTC_CALR_YEAR_Msk (0xffu << RTC_CALR_YEAR_Pos) /**< \brief (RTC_CALR) Current Year */
#define RTC_CALR_YEAR(value) ((RTC_CALR_YEAR_Msk & ((value) << RTC_CALR_YEAR_Pos)))
#define RTC_CALR_MONTH_Pos 16
#define RTC_CALR_MONTH_Msk (0x1fu << RTC_CALR_MONTH_Pos) /**< \brief (RTC_CALR) Current Month */
#define RTC_CALR_MONTH(value) ((RTC_CALR_MONTH_Msk & ((value) << RTC_CALR_MONTH_Pos)))
#define RTC_CALR_DAY_Pos 21
#define RTC_CALR_DAY_Msk (0x7u << RTC_CALR_DAY_Pos) /**< \brief (RTC_CALR) Current Day in Current Week */
#define RTC_CALR_DAY(value) ((RTC_CALR_DAY_Msk & ((value) << RTC_CALR_DAY_Pos)))
#define RTC_CALR_DATE_Pos 24
#define RTC_CALR_DATE_Msk (0x3fu << RTC_CALR_DATE_Pos) /**< \brief (RTC_CALR) Current Day in Current Month */
#define RTC_CALR_DATE(value) ((RTC_CALR_DATE_Msk & ((value) << RTC_CALR_DATE_Pos)))
/* -------- RTC_TIMALR : (RTC Offset: 0x10) Time Alarm Register -------- */
#define RTC_TIMALR_SEC_Pos 0
#define RTC_TIMALR_SEC_Msk (0x7fu << RTC_TIMALR_SEC_Pos) /**< \brief (RTC_TIMALR) Second Alarm */
#define RTC_TIMALR_SEC(value) ((RTC_TIMALR_SEC_Msk & ((value) << RTC_TIMALR_SEC_Pos)))
#define RTC_TIMALR_SECEN (0x1u << 7) /**< \brief (RTC_TIMALR) Second Alarm Enable */
#define RTC_TIMALR_MIN_Pos 8
#define RTC_TIMALR_MIN_Msk (0x7fu << RTC_TIMALR_MIN_Pos) /**< \brief (RTC_TIMALR) Minute Alarm */
#define RTC_TIMALR_MIN(value) ((RTC_TIMALR_MIN_Msk & ((value) << RTC_TIMALR_MIN_Pos)))
#define RTC_TIMALR_MINEN (0x1u << 15) /**< \brief (RTC_TIMALR) Minute Alarm Enable */
#define RTC_TIMALR_HOUR_Pos 16
#define RTC_TIMALR_HOUR_Msk (0x3fu << RTC_TIMALR_HOUR_Pos) /**< \brief (RTC_TIMALR) Hour Alarm */
#define RTC_TIMALR_HOUR(value) ((RTC_TIMALR_HOUR_Msk & ((value) << RTC_TIMALR_HOUR_Pos)))
#define RTC_TIMALR_AMPM (0x1u << 22) /**< \brief (RTC_TIMALR) AM/PM Indicator */
#define RTC_TIMALR_HOUREN (0x1u << 23) /**< \brief (RTC_TIMALR) Hour Alarm Enable */
/* -------- RTC_CALALR : (RTC Offset: 0x14) Calendar Alarm Register -------- */
#define RTC_CALALR_MONTH_Pos 16
#define RTC_CALALR_MONTH_Msk (0x1fu << RTC_CALALR_MONTH_Pos) /**< \brief (RTC_CALALR) Month Alarm */
#define RTC_CALALR_MONTH(value) ((RTC_CALALR_MONTH_Msk & ((value) << RTC_CALALR_MONTH_Pos)))
#define RTC_CALALR_MTHEN (0x1u << 23) /**< \brief (RTC_CALALR) Month Alarm Enable */
#define RTC_CALALR_DATE_Pos 24
#define RTC_CALALR_DATE_Msk (0x3fu << RTC_CALALR_DATE_Pos) /**< \brief (RTC_CALALR) Date Alarm */
#define RTC_CALALR_DATE(value) ((RTC_CALALR_DATE_Msk & ((value) << RTC_CALALR_DATE_Pos)))
#define RTC_CALALR_DATEEN (0x1u << 31) /**< \brief (RTC_CALALR) Date Alarm Enable */
/* -------- RTC_SR : (RTC Offset: 0x18) Status Register -------- */
#define RTC_SR_ACKUPD (0x1u << 0) /**< \brief (RTC_SR) Acknowledge for Update */
#define RTC_SR_ALARM (0x1u << 1) /**< \brief (RTC_SR) Alarm Flag */
#define RTC_SR_SEC (0x1u << 2) /**< \brief (RTC_SR) Second Event */
#define RTC_SR_TIMEV (0x1u << 3) /**< \brief (RTC_SR) Time Event */
#define RTC_SR_CALEV (0x1u << 4) /**< \brief (RTC_SR) Calendar Event */
/* -------- RTC_SCCR : (RTC Offset: 0x1C) Status Clear Command Register -------- */
#define RTC_SCCR_ACKCLR (0x1u << 0) /**< \brief (RTC_SCCR) Acknowledge Clear */
#define RTC_SCCR_ALRCLR (0x1u << 1) /**< \brief (RTC_SCCR) Alarm Clear */
#define RTC_SCCR_SECCLR (0x1u << 2) /**< \brief (RTC_SCCR) Second Clear */
#define RTC_SCCR_TIMCLR (0x1u << 3) /**< \brief (RTC_SCCR) Time Clear */
#define RTC_SCCR_CALCLR (0x1u << 4) /**< \brief (RTC_SCCR) Calendar Clear */
/* -------- RTC_IER : (RTC Offset: 0x20) Interrupt Enable Register -------- */
#define RTC_IER_ACKEN (0x1u << 0) /**< \brief (RTC_IER) Acknowledge Update Interrupt Enable */
#define RTC_IER_ALREN (0x1u << 1) /**< \brief (RTC_IER) Alarm Interrupt Enable */
#define RTC_IER_SECEN (0x1u << 2) /**< \brief (RTC_IER) Second Event Interrupt Enable */
#define RTC_IER_TIMEN (0x1u << 3) /**< \brief (RTC_IER) Time Event Interrupt Enable */
#define RTC_IER_CALEN (0x1u << 4) /**< \brief (RTC_IER) Calendar Event Interrupt Enable */
/* -------- RTC_IDR : (RTC Offset: 0x24) Interrupt Disable Register -------- */
#define RTC_IDR_ACKDIS (0x1u << 0) /**< \brief (RTC_IDR) Acknowledge Update Interrupt Disable */
#define RTC_IDR_ALRDIS (0x1u << 1) /**< \brief (RTC_IDR) Alarm Interrupt Disable */
#define RTC_IDR_SECDIS (0x1u << 2) /**< \brief (RTC_IDR) Second Event Interrupt Disable */
#define RTC_IDR_TIMDIS (0x1u << 3) /**< \brief (RTC_IDR) Time Event Interrupt Disable */
#define RTC_IDR_CALDIS (0x1u << 4) /**< \brief (RTC_IDR) Calendar Event Interrupt Disable */
/* -------- RTC_IMR : (RTC Offset: 0x28) Interrupt Mask Register -------- */
#define RTC_IMR_ACK (0x1u << 0) /**< \brief (RTC_IMR) Acknowledge Update Interrupt Mask */
#define RTC_IMR_ALR (0x1u << 1) /**< \brief (RTC_IMR) Alarm Interrupt Mask */
#define RTC_IMR_SEC (0x1u << 2) /**< \brief (RTC_IMR) Second Event Interrupt Mask */
#define RTC_IMR_TIM (0x1u << 3) /**< \brief (RTC_IMR) Time Event Interrupt Mask */
#define RTC_IMR_CAL (0x1u << 4) /**< \brief (RTC_IMR) Calendar Event Interrupt Mask */
/* -------- RTC_VER : (RTC Offset: 0x2C) Valid Entry Register -------- */
#define RTC_VER_NVTIM (0x1u << 0) /**< \brief (RTC_VER) Non-valid Time */
#define RTC_VER_NVCAL (0x1u << 1) /**< \brief (RTC_VER) Non-valid Calendar */
#define RTC_VER_NVTIMALR (0x1u << 2) /**< \brief (RTC_VER) Non-valid Time Alarm */
#define RTC_VER_NVCALALR (0x1u << 3) /**< \brief (RTC_VER) Non-valid Calendar Alarm */
/* -------- RTC_WPMR : (RTC Offset: 0xE4) Write Protect Mode Register -------- */
#define RTC_WPMR_WPEN (0x1u << 0) /**< \brief (RTC_WPMR) Write Protect Enable */
#define RTC_WPMR_WPKEY_Pos 8
#define RTC_WPMR_WPKEY_Msk (0xffffffu << RTC_WPMR_WPKEY_Pos) /**< \brief (RTC_WPMR)  */
#define RTC_WPMR_WPKEY(value) ((RTC_WPMR_WPKEY_Msk & ((value) << RTC_WPMR_WPKEY_Pos)))

/*@}*/


#endif /* _SAM3N_RTC_COMPONENT_ */

#ifndef _SAM3N_RTT_COMPONENT_
#define _SAM3N_RTT_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Real-time Timer */
/* ============================================================================= */
/** \addtogroup SAM3N_RTT Real-time Timer */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Rtt hardware registers */
typedef struct {
  RwReg RTT_MR; /**< \brief (Rtt Offset: 0x00) Mode Register */
  RwReg RTT_AR; /**< \brief (Rtt Offset: 0x04) Alarm Register */
  RoReg RTT_VR; /**< \brief (Rtt Offset: 0x08) Value Register */
  RoReg RTT_SR; /**< \brief (Rtt Offset: 0x0C) Status Register */
} Rtt;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- RTT_MR : (RTT Offset: 0x00) Mode Register -------- */
#define RTT_MR_RTPRES_Pos 0
#define RTT_MR_RTPRES_Msk (0xffffu << RTT_MR_RTPRES_Pos) /**< \brief (RTT_MR) Real-time Timer Prescaler Value */
#define RTT_MR_RTPRES(value) ((RTT_MR_RTPRES_Msk & ((value) << RTT_MR_RTPRES_Pos)))
#define RTT_MR_ALMIEN (0x1u << 16) /**< \brief (RTT_MR) Alarm Interrupt Enable */
#define RTT_MR_RTTINCIEN (0x1u << 17) /**< \brief (RTT_MR) Real-time Timer Increment Interrupt Enable */
#define RTT_MR_RTTRST (0x1u << 18) /**< \brief (RTT_MR) Real-time Timer Restart */
/* -------- RTT_AR : (RTT Offset: 0x04) Alarm Register -------- */
#define RTT_AR_ALMV_Pos 0
#define RTT_AR_ALMV_Msk (0xffffffffu << RTT_AR_ALMV_Pos) /**< \brief (RTT_AR) Alarm Value */
#define RTT_AR_ALMV(value) ((RTT_AR_ALMV_Msk & ((value) << RTT_AR_ALMV_Pos)))
/* -------- RTT_VR : (RTT Offset: 0x08) Value Register -------- */
#define RTT_VR_CRTV_Pos 0
#define RTT_VR_CRTV_Msk (0xffffffffu << RTT_VR_CRTV_Pos) /**< \brief (RTT_VR) Current Real-time Value */
/* -------- RTT_SR : (RTT Offset: 0x0C) Status Register -------- */
#define RTT_SR_ALMS (0x1u << 0) /**< \brief (RTT_SR) Real-time Alarm Status */
#define RTT_SR_RTTINC (0x1u << 1) /**< \brief (RTT_SR) Real-time Timer Increment */

/*@}*/


#endif /* _SAM3N_RTT_COMPONENT_ */

#ifndef _SAM3N_SPI_COMPONENT_
#define _SAM3N_SPI_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Serial Peripheral Interface */
/* ============================================================================= */
/** \addtogroup SAM3N_SPI Serial Peripheral Interface */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Spi hardware registers */
typedef struct {
  WoReg SPI_CR;        /**< \brief (Spi Offset: 0x00) Control Register */
  RwReg SPI_MR;        /**< \brief (Spi Offset: 0x04) Mode Register */
  RoReg SPI_RDR;       /**< \brief (Spi Offset: 0x08) Receive Data Register */
  WoReg SPI_TDR;       /**< \brief (Spi Offset: 0x0C) Transmit Data Register */
  RoReg SPI_SR;        /**< \brief (Spi Offset: 0x10) Status Register */
  WoReg SPI_IER;       /**< \brief (Spi Offset: 0x14) Interrupt Enable Register */
  WoReg SPI_IDR;       /**< \brief (Spi Offset: 0x18) Interrupt Disable Register */
  RoReg SPI_IMR;       /**< \brief (Spi Offset: 0x1C) Interrupt Mask Register */
  RoReg Reserved1[4];
  RwReg SPI_CSR[4];    /**< \brief (Spi Offset: 0x30) Chip Select Register */
  RoReg Reserved2[41];
  RwReg SPI_WPMR;      /**< \brief (Spi Offset: 0xE4) Write Protection Control Register */
  RoReg SPI_WPSR;      /**< \brief (Spi Offset: 0xE8) Write Protection Status Register */
  RoReg Reserved3[5];
  RwReg SPI_RPR;       /**< \brief (Spi Offset: 0x100) Receive Pointer Register */
  RwReg SPI_RCR;       /**< \brief (Spi Offset: 0x104) Receive Counter Register */
  RwReg SPI_TPR;       /**< \brief (Spi Offset: 0x108) Transmit Pointer Register */
  RwReg SPI_TCR;       /**< \brief (Spi Offset: 0x10C) Transmit Counter Register */
  RwReg SPI_RNPR;      /**< \brief (Spi Offset: 0x110) Receive Next Pointer Register */
  RwReg SPI_RNCR;      /**< \brief (Spi Offset: 0x114) Receive Next Counter Register */
  RwReg SPI_TNPR;      /**< \brief (Spi Offset: 0x118) Transmit Next Pointer Register */
  RwReg SPI_TNCR;      /**< \brief (Spi Offset: 0x11C) Transmit Next Counter Register */
  WoReg SPI_PTCR;      /**< \brief (Spi Offset: 0x120) Transfer Control Register */
  RoReg SPI_PTSR;      /**< \brief (Spi Offset: 0x124) Transfer Status Register */
} Spi;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- SPI_CR : (SPI Offset: 0x00) Control Register -------- */
#define SPI_CR_SPIEN (0x1u << 0) /**< \brief (SPI_CR) SPI Enable */
#define SPI_CR_SPIDIS (0x1u << 1) /**< \brief (SPI_CR) SPI Disable */
#define SPI_CR_SWRST (0x1u << 7) /**< \brief (SPI_CR) SPI Software Reset */
#define SPI_CR_LASTXFER (0x1u << 24) /**< \brief (SPI_CR) Last Transfer */
/* -------- SPI_MR : (SPI Offset: 0x04) Mode Register -------- */
#define SPI_MR_MSTR (0x1u << 0) /**< \brief (SPI_MR) Master/Slave Mode */
#define SPI_MR_PS (0x1u << 1) /**< \brief (SPI_MR) Peripheral Select */
#define SPI_MR_PCSDEC (0x1u << 2) /**< \brief (SPI_MR) Chip Select Decode */
#define SPI_MR_MODFDIS (0x1u << 4) /**< \brief (SPI_MR) Mode Fault Detection */
#define SPI_MR_WDRBT (0x1u << 5) /**< \brief (SPI_MR) Wait Data Read Before Transfer */
#define SPI_MR_LLB (0x1u << 7) /**< \brief (SPI_MR) Local Loopback Enable */
#define SPI_MR_PCS_Pos 16
#define SPI_MR_PCS_Msk (0xfu << SPI_MR_PCS_Pos) /**< \brief (SPI_MR) Peripheral Chip Select */
#define SPI_MR_PCS(value) ((SPI_MR_PCS_Msk & ((value) << SPI_MR_PCS_Pos)))
#define SPI_MR_DLYBCS_Pos 24
#define SPI_MR_DLYBCS_Msk (0xffu << SPI_MR_DLYBCS_Pos) /**< \brief (SPI_MR) Delay Between Chip Selects */
#define SPI_MR_DLYBCS(value) ((SPI_MR_DLYBCS_Msk & ((value) << SPI_MR_DLYBCS_Pos)))
/* -------- SPI_RDR : (SPI Offset: 0x08) Receive Data Register -------- */
#define SPI_RDR_RD_Pos 0
#define SPI_RDR_RD_Msk (0xffffu << SPI_RDR_RD_Pos) /**< \brief (SPI_RDR) Receive Data */
#define SPI_RDR_PCS_Pos 16
#define SPI_RDR_PCS_Msk (0xfu << SPI_RDR_PCS_Pos) /**< \brief (SPI_RDR) Peripheral Chip Select */
/* -------- SPI_TDR : (SPI Offset: 0x0C) Transmit Data Register -------- */
#define SPI_TDR_TD_Pos 0
#define SPI_TDR_TD_Msk (0xffffu << SPI_TDR_TD_Pos) /**< \brief (SPI_TDR) Transmit Data */
#define SPI_TDR_TD(value) ((SPI_TDR_TD_Msk & ((value) << SPI_TDR_TD_Pos)))
#define SPI_TDR_PCS_Pos 16
#define SPI_TDR_PCS_Msk (0xfu << SPI_TDR_PCS_Pos) /**< \brief (SPI_TDR) Peripheral Chip Select */
#define SPI_TDR_PCS(value) ((SPI_TDR_PCS_Msk & ((value) << SPI_TDR_PCS_Pos)))
#define SPI_TDR_LASTXFER (0x1u << 24) /**< \brief (SPI_TDR) Last Transfer */
/* -------- SPI_SR : (SPI Offset: 0x10) Status Register -------- */
#define SPI_SR_RDRF (0x1u << 0) /**< \brief (SPI_SR) Receive Data Register Full */
#define SPI_SR_TDRE (0x1u << 1) /**< \brief (SPI_SR) Transmit Data Register Empty */
#define SPI_SR_MODF (0x1u << 2) /**< \brief (SPI_SR) Mode Fault Error */
#define SPI_SR_OVRES (0x1u << 3) /**< \brief (SPI_SR) Overrun Error Status */
#define SPI_SR_ENDRX (0x1u << 4) /**< \brief (SPI_SR) End of RX buffer */
#define SPI_SR_ENDTX (0x1u << 5) /**< \brief (SPI_SR) End of TX buffer */
#define SPI_SR_RXBUFF (0x1u << 6) /**< \brief (SPI_SR) RX Buffer Full */
#define SPI_SR_TXBUFE (0x1u << 7) /**< \brief (SPI_SR) TX Buffer Empty */
#define SPI_SR_NSSR (0x1u << 8) /**< \brief (SPI_SR) NSS Rising */
#define SPI_SR_TXEMPTY (0x1u << 9) /**< \brief (SPI_SR) Transmission Registers Empty */
#define SPI_SR_UNDES (0x1u << 10) /**< \brief (SPI_SR) Underrun Error Status (Slave Mode Only) */
#define SPI_SR_SPIENS (0x1u << 16) /**< \brief (SPI_SR) SPI Enable Status */
/* -------- SPI_IER : (SPI Offset: 0x14) Interrupt Enable Register -------- */
#define SPI_IER_RDRF (0x1u << 0) /**< \brief (SPI_IER) Receive Data Register Full Interrupt Enable */
#define SPI_IER_TDRE (0x1u << 1) /**< \brief (SPI_IER) SPI Transmit Data Register Empty Interrupt Enable */
#define SPI_IER_MODF (0x1u << 2) /**< \brief (SPI_IER) Mode Fault Error Interrupt Enable */
#define SPI_IER_OVRES (0x1u << 3) /**< \brief (SPI_IER) Overrun Error Interrupt Enable */
#define SPI_IER_ENDRX (0x1u << 4) /**< \brief (SPI_IER) End of Receive Buffer Interrupt Enable */
#define SPI_IER_ENDTX (0x1u << 5) /**< \brief (SPI_IER) End of Transmit Buffer Interrupt Enable */
#define SPI_IER_RXBUFF (0x1u << 6) /**< \brief (SPI_IER) Receive Buffer Full Interrupt Enable */
#define SPI_IER_TXBUFE (0x1u << 7) /**< \brief (SPI_IER) Transmit Buffer Empty Interrupt Enable */
#define SPI_IER_NSSR (0x1u << 8) /**< \brief (SPI_IER) NSS Rising Interrupt Enable */
#define SPI_IER_TXEMPTY (0x1u << 9) /**< \brief (SPI_IER) Transmission Registers Empty Enable */
#define SPI_IER_UNDES (0x1u << 10) /**< \brief (SPI_IER) Underrun Error Interrupt Enable */
/* -------- SPI_IDR : (SPI Offset: 0x18) Interrupt Disable Register -------- */
#define SPI_IDR_RDRF (0x1u << 0) /**< \brief (SPI_IDR) Receive Data Register Full Interrupt Disable */
#define SPI_IDR_TDRE (0x1u << 1) /**< \brief (SPI_IDR) SPI Transmit Data Register Empty Interrupt Disable */
#define SPI_IDR_MODF (0x1u << 2) /**< \brief (SPI_IDR) Mode Fault Error Interrupt Disable */
#define SPI_IDR_OVRES (0x1u << 3) /**< \brief (SPI_IDR) Overrun Error Interrupt Disable */
#define SPI_IDR_ENDRX (0x1u << 4) /**< \brief (SPI_IDR) End of Receive Buffer Interrupt Disable */
#define SPI_IDR_ENDTX (0x1u << 5) /**< \brief (SPI_IDR) End of Transmit Buffer Interrupt Disable */
#define SPI_IDR_RXBUFF (0x1u << 6) /**< \brief (SPI_IDR) Receive Buffer Full Interrupt Disable */
#define SPI_IDR_TXBUFE (0x1u << 7) /**< \brief (SPI_IDR) Transmit Buffer Empty Interrupt Disable */
#define SPI_IDR_NSSR (0x1u << 8) /**< \brief (SPI_IDR) NSS Rising Interrupt Disable */
#define SPI_IDR_TXEMPTY (0x1u << 9) /**< \brief (SPI_IDR) Transmission Registers Empty Disable */
#define SPI_IDR_UNDES (0x1u << 10) /**< \brief (SPI_IDR) Underrun Error Interrupt Disable */
/* -------- SPI_IMR : (SPI Offset: 0x1C) Interrupt Mask Register -------- */
#define SPI_IMR_RDRF (0x1u << 0) /**< \brief (SPI_IMR) Receive Data Register Full Interrupt Mask */
#define SPI_IMR_TDRE (0x1u << 1) /**< \brief (SPI_IMR) SPI Transmit Data Register Empty Interrupt Mask */
#define SPI_IMR_MODF (0x1u << 2) /**< \brief (SPI_IMR) Mode Fault Error Interrupt Mask */
#define SPI_IMR_OVRES (0x1u << 3) /**< \brief (SPI_IMR) Overrun Error Interrupt Mask */
#define SPI_IMR_ENDRX (0x1u << 4) /**< \brief (SPI_IMR) End of Receive Buffer Interrupt Mask */
#define SPI_IMR_ENDTX (0x1u << 5) /**< \brief (SPI_IMR) End of Transmit Buffer Interrupt Mask */
#define SPI_IMR_RXBUFF (0x1u << 6) /**< \brief (SPI_IMR) Receive Buffer Full Interrupt Mask */
#define SPI_IMR_TXBUFE (0x1u << 7) /**< \brief (SPI_IMR) Transmit Buffer Empty Interrupt Mask */
#define SPI_IMR_NSSR (0x1u << 8) /**< \brief (SPI_IMR) NSS Rising Interrupt Mask */
#define SPI_IMR_TXEMPTY (0x1u << 9) /**< \brief (SPI_IMR) Transmission Registers Empty Mask */
#define SPI_IMR_UNDES (0x1u << 10) /**< \brief (SPI_IMR) Underrun Error Interrupt Mask */
/* -------- SPI_CSR[4] : (SPI Offset: 0x30) Chip Select Register -------- */
#define SPI_CSR_CPOL (0x1u << 0) /**< \brief (SPI_CSR[4]) Clock Polarity */
#define SPI_CSR_NCPHA (0x1u << 1) /**< \brief (SPI_CSR[4]) Clock Phase */
#define SPI_CSR_CSNAAT (0x1u << 2) /**< \brief (SPI_CSR[4]) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) */
#define SPI_CSR_CSAAT (0x1u << 3) /**< \brief (SPI_CSR[4]) Chip Select Not Active After Transfer (Ignored if CSAAT = 1) */
#define SPI_CSR_BITS_Pos 4
#define SPI_CSR_BITS_Msk (0xfu << SPI_CSR_BITS_Pos) /**< \brief (SPI_CSR[4]) Bits Per Transfer */
#define   SPI_CSR_BITS_8_BIT (0x0u << 4) /**< \brief (SPI_CSR[4]) 8 bits for transfer */
#define   SPI_CSR_BITS_9_BIT (0x1u << 4) /**< \brief (SPI_CSR[4]) 9 bits for transfer */
#define   SPI_CSR_BITS_10_BIT (0x2u << 4) /**< \brief (SPI_CSR[4]) 10 bits for transfer */
#define   SPI_CSR_BITS_11_BIT (0x3u << 4) /**< \brief (SPI_CSR[4]) 11 bits for transfer */
#define   SPI_CSR_BITS_12_BIT (0x4u << 4) /**< \brief (SPI_CSR[4]) 12 bits for transfer */
#define   SPI_CSR_BITS_13_BIT (0x5u << 4) /**< \brief (SPI_CSR[4]) 13 bits for transfer */
#define   SPI_CSR_BITS_14_BIT (0x6u << 4) /**< \brief (SPI_CSR[4]) 14 bits for transfer */
#define   SPI_CSR_BITS_15_BIT (0x7u << 4) /**< \brief (SPI_CSR[4]) 15 bits for transfer */
#define   SPI_CSR_BITS_16_BIT (0x8u << 4) /**< \brief (SPI_CSR[4]) 16 bits for transfer */
#define SPI_CSR_SCBR_Pos 8
#define SPI_CSR_SCBR_Msk (0xffu << SPI_CSR_SCBR_Pos) /**< \brief (SPI_CSR[4]) Serial Clock Baud Rate */
#define SPI_CSR_SCBR(value) ((SPI_CSR_SCBR_Msk & ((value) << SPI_CSR_SCBR_Pos)))
#define SPI_CSR_DLYBS_Pos 16
#define SPI_CSR_DLYBS_Msk (0xffu << SPI_CSR_DLYBS_Pos) /**< \brief (SPI_CSR[4]) Delay Before SPCK */
#define SPI_CSR_DLYBS(value) ((SPI_CSR_DLYBS_Msk & ((value) << SPI_CSR_DLYBS_Pos)))
#define SPI_CSR_DLYBCT_Pos 24
#define SPI_CSR_DLYBCT_Msk (0xffu << SPI_CSR_DLYBCT_Pos) /**< \brief (SPI_CSR[4]) Delay Between Consecutive Transfers */
#define SPI_CSR_DLYBCT(value) ((SPI_CSR_DLYBCT_Msk & ((value) << SPI_CSR_DLYBCT_Pos)))
/* -------- SPI_WPMR : (SPI Offset: 0xE4) Write Protection Control Register -------- */
#define SPI_WPMR_WPEN (0x1u << 0) /**< \brief (SPI_WPMR) Write Protection Enable */
#define SPI_WPMR_WPKEY_Pos 8
#define SPI_WPMR_WPKEY_Msk (0xffffffu << SPI_WPMR_WPKEY_Pos) /**< \brief (SPI_WPMR) Write Protection Key Password */
#define SPI_WPMR_WPKEY(value) ((SPI_WPMR_WPKEY_Msk & ((value) << SPI_WPMR_WPKEY_Pos)))
/* -------- SPI_WPSR : (SPI Offset: 0xE8) Write Protection Status Register -------- */
#define SPI_WPSR_WPVS (0x1u << 0) /**< \brief (SPI_WPSR) Write Protection Violation Status */
#define SPI_WPSR_WPVS_Pos 0
#define SPI_WPSR_WPVS_Msk (0x1u << SPI_WPSR_WPVS_Pos) /**< \brief (SPI_WPSR) Write Protection Violation Status */
#define SPI_WPSR_WPVSRC_Pos 8
#define SPI_WPSR_WPVSRC_Msk (0xffu << SPI_WPSR_WPVSRC_Pos) /**< \brief (SPI_WPSR) Write Protection Violation Source */
/* -------- SPI_RPR : (SPI Offset: 0x100) Receive Pointer Register -------- */
#define SPI_RPR_RXPTR_Pos 0
#define SPI_RPR_RXPTR_Msk (0xffffffffu << SPI_RPR_RXPTR_Pos) /**< \brief (SPI_RPR) Receive Pointer Register */
#define SPI_RPR_RXPTR(value) ((SPI_RPR_RXPTR_Msk & ((value) << SPI_RPR_RXPTR_Pos)))
/* -------- SPI_RCR : (SPI Offset: 0x104) Receive Counter Register -------- */
#define SPI_RCR_RXCTR_Pos 0
#define SPI_RCR_RXCTR_Msk (0xffffu << SPI_RCR_RXCTR_Pos) /**< \brief (SPI_RCR) Receive Counter Register */
#define SPI_RCR_RXCTR(value) ((SPI_RCR_RXCTR_Msk & ((value) << SPI_RCR_RXCTR_Pos)))
/* -------- SPI_TPR : (SPI Offset: 0x108) Transmit Pointer Register -------- */
#define SPI_TPR_TXPTR_Pos 0
#define SPI_TPR_TXPTR_Msk (0xffffffffu << SPI_TPR_TXPTR_Pos) /**< \brief (SPI_TPR) Transmit Counter Register */
#define SPI_TPR_TXPTR(value) ((SPI_TPR_TXPTR_Msk & ((value) << SPI_TPR_TXPTR_Pos)))
/* -------- SPI_TCR : (SPI Offset: 0x10C) Transmit Counter Register -------- */
#define SPI_TCR_TXCTR_Pos 0
#define SPI_TCR_TXCTR_Msk (0xffffu << SPI_TCR_TXCTR_Pos) /**< \brief (SPI_TCR) Transmit Counter Register */
#define SPI_TCR_TXCTR(value) ((SPI_TCR_TXCTR_Msk & ((value) << SPI_TCR_TXCTR_Pos)))
/* -------- SPI_RNPR : (SPI Offset: 0x110) Receive Next Pointer Register -------- */
#define SPI_RNPR_RXNPTR_Pos 0
#define SPI_RNPR_RXNPTR_Msk (0xffffffffu << SPI_RNPR_RXNPTR_Pos) /**< \brief (SPI_RNPR) Receive Next Pointer */
#define SPI_RNPR_RXNPTR(value) ((SPI_RNPR_RXNPTR_Msk & ((value) << SPI_RNPR_RXNPTR_Pos)))
/* -------- SPI_RNCR : (SPI Offset: 0x114) Receive Next Counter Register -------- */
#define SPI_RNCR_RXNCTR_Pos 0
#define SPI_RNCR_RXNCTR_Msk (0xffffu << SPI_RNCR_RXNCTR_Pos) /**< \brief (SPI_RNCR) Receive Next Counter */
#define SPI_RNCR_RXNCTR(value) ((SPI_RNCR_RXNCTR_Msk & ((value) << SPI_RNCR_RXNCTR_Pos)))
/* -------- SPI_TNPR : (SPI Offset: 0x118) Transmit Next Pointer Register -------- */
#define SPI_TNPR_TXNPTR_Pos 0
#define SPI_TNPR_TXNPTR_Msk (0xffffffffu << SPI_TNPR_TXNPTR_Pos) /**< \brief (SPI_TNPR) Transmit Next Pointer */
#define SPI_TNPR_TXNPTR(value) ((SPI_TNPR_TXNPTR_Msk & ((value) << SPI_TNPR_TXNPTR_Pos)))
/* -------- SPI_TNCR : (SPI Offset: 0x11C) Transmit Next Counter Register -------- */
#define SPI_TNCR_TXNCTR_Pos 0
#define SPI_TNCR_TXNCTR_Msk (0xffffu << SPI_TNCR_TXNCTR_Pos) /**< \brief (SPI_TNCR) Transmit Counter Next */
#define SPI_TNCR_TXNCTR(value) ((SPI_TNCR_TXNCTR_Msk & ((value) << SPI_TNCR_TXNCTR_Pos)))
/* -------- SPI_PTCR : (SPI Offset: 0x120) Transfer Control Register -------- */
#define SPI_PTCR_RXTEN (0x1u << 0) /**< \brief (SPI_PTCR) Receiver Transfer Enable */
#define SPI_PTCR_RXTDIS (0x1u << 1) /**< \brief (SPI_PTCR) Receiver Transfer Disable */
#define SPI_PTCR_TXTEN (0x1u << 8) /**< \brief (SPI_PTCR) Transmitter Transfer Enable */
#define SPI_PTCR_TXTDIS (0x1u << 9) /**< \brief (SPI_PTCR) Transmitter Transfer Disable */
/* -------- SPI_PTSR : (SPI Offset: 0x124) Transfer Status Register -------- */
#define SPI_PTSR_RXTEN (0x1u << 0) /**< \brief (SPI_PTSR) Receiver Transfer Enable */
#define SPI_PTSR_TXTEN (0x1u << 8) /**< \brief (SPI_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_SPI_COMPONENT_ */

#ifndef _SAM3N_SUPC_COMPONENT_
#define _SAM3N_SUPC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Supply Controller */
/* ============================================================================= */
/** \addtogroup SAM3N_SUPC Supply Controller */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Supc hardware registers */
typedef struct {
  WoReg SUPC_CR;   /**< \brief (Supc Offset: 0x00) Supply Controller Control Register */
  RwReg SUPC_SMMR; /**< \brief (Supc Offset: 0x04) Supply Controller Supply Monitor Mode Register */
  RwReg SUPC_MR;   /**< \brief (Supc Offset: 0x08) Supply Controller Mode Register */
  RwReg SUPC_WUMR; /**< \brief (Supc Offset: 0x0C) Supply Controller Wake Up Mode Register */
  RwReg SUPC_WUIR; /**< \brief (Supc Offset: 0x10) Supply Controller Wake Up Inputs Register */
  RoReg SUPC_SR;   /**< \brief (Supc Offset: 0x14) Supply Controller Status Register */
} Supc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- SUPC_CR : (SUPC Offset: 0x00) Supply Controller Control Register -------- */
#define SUPC_CR_VROFF (0x1u << 2) /**< \brief (SUPC_CR) Voltage Regulator Off */
#define   SUPC_CR_VROFF_NO_EFFECT (0x0u << 2) /**< \brief (SUPC_CR) no effect. */
#define   SUPC_CR_VROFF_STOP_VREG (0x1u << 2) /**< \brief (SUPC_CR) if KEY is correct, asserts vddcore_nreset and stops the voltage regulator. */
#define SUPC_CR_XTALSEL (0x1u << 3) /**< \brief (SUPC_CR) Crystal Oscillator Select */
#define   SUPC_CR_XTALSEL_NO_EFFECT (0x0u << 3) /**< \brief (SUPC_CR) no effect. */
#define   SUPC_CR_XTALSEL_CRYSTAL_SEL (0x1u << 3) /**< \brief (SUPC_CR) if KEY is correct, switches the slow clock on the crystal oscillator output. */
#define SUPC_CR_KEY_Pos 24
#define SUPC_CR_KEY_Msk (0xffu << SUPC_CR_KEY_Pos) /**< \brief (SUPC_CR) Password */
#define SUPC_CR_KEY(value) ((SUPC_CR_KEY_Msk & ((value) << SUPC_CR_KEY_Pos)))
/* -------- SUPC_SMMR : (SUPC Offset: 0x04) Supply Controller Supply Monitor Mode Register -------- */
#define SUPC_SMMR_SMTH_Pos 0
#define SUPC_SMMR_SMTH_Msk (0xfu << SUPC_SMMR_SMTH_Pos) /**< \brief (SUPC_SMMR) Supply Monitor Threshold */
#define   SUPC_SMMR_SMTH_1_9V (0x0u << 0) /**< \brief (SUPC_SMMR) 1.9 V */
#define   SUPC_SMMR_SMTH_2_0V (0x1u << 0) /**< \brief (SUPC_SMMR) 2.0 V */
#define   SUPC_SMMR_SMTH_2_1V (0x2u << 0) /**< \brief (SUPC_SMMR) 2.1 V */
#define   SUPC_SMMR_SMTH_2_2V (0x3u << 0) /**< \brief (SUPC_SMMR) 2.2 V */
#define   SUPC_SMMR_SMTH_2_3V (0x4u << 0) /**< \brief (SUPC_SMMR) 2.3 V */
#define   SUPC_SMMR_SMTH_2_4V (0x5u << 0) /**< \brief (SUPC_SMMR) 2.4 V */
#define   SUPC_SMMR_SMTH_2_5V (0x6u << 0) /**< \brief (SUPC_SMMR) 2.5 V */
#define   SUPC_SMMR_SMTH_2_6V (0x7u << 0) /**< \brief (SUPC_SMMR) 2.6 V */
#define   SUPC_SMMR_SMTH_2_7V (0x8u << 0) /**< \brief (SUPC_SMMR) 2.7 V */
#define   SUPC_SMMR_SMTH_2_8V (0x9u << 0) /**< \brief (SUPC_SMMR) 2.8 V */
#define   SUPC_SMMR_SMTH_2_9V (0xAu << 0) /**< \brief (SUPC_SMMR) 2.9 V */
#define   SUPC_SMMR_SMTH_3_0V (0xBu << 0) /**< \brief (SUPC_SMMR) 3.0 V */
#define   SUPC_SMMR_SMTH_3_1V (0xCu << 0) /**< \brief (SUPC_SMMR) 3.1 V */
#define   SUPC_SMMR_SMTH_3_2V (0xDu << 0) /**< \brief (SUPC_SMMR) 3.2 V */
#define   SUPC_SMMR_SMTH_3_3V (0xEu << 0) /**< \brief (SUPC_SMMR) 3.3 V */
#define   SUPC_SMMR_SMTH_3_4V (0xFu << 0) /**< \brief (SUPC_SMMR) 3.4 V */
#define SUPC_SMMR_SMSMPL_Pos 8
#define SUPC_SMMR_SMSMPL_Msk (0x7u << SUPC_SMMR_SMSMPL_Pos) /**< \brief (SUPC_SMMR) Supply Monitor Sampling Period */
#define   SUPC_SMMR_SMSMPL_SMD (0x0u << 8) /**< \brief (SUPC_SMMR) Supply Monitor disabled */
#define   SUPC_SMMR_SMSMPL_CSM (0x1u << 8) /**< \brief (SUPC_SMMR) Continuous Supply Monitor */
#define   SUPC_SMMR_SMSMPL_32SLCK (0x2u << 8) /**< \brief (SUPC_SMMR) Supply Monitor enabled one SLCK period every 32 SLCK periods */
#define   SUPC_SMMR_SMSMPL_256SLCK (0x3u << 8) /**< \brief (SUPC_SMMR) Supply Monitor enabled one SLCK period every 256 SLCK periods */
#define   SUPC_SMMR_SMSMPL_2048SLCK (0x4u << 8) /**< \brief (SUPC_SMMR) Supply Monitor enabled one SLCK period every 2,048 SLCK periods */
#define SUPC_SMMR_SMRSTEN (0x1u << 12) /**< \brief (SUPC_SMMR) Supply Monitor Reset Enable */
#define   SUPC_SMMR_SMRSTEN_NOT_ENABLE (0x0u << 12) /**< \brief (SUPC_SMMR) the core reset signal "vddcore_nreset" is not affected when a supply monitor detection occurs. */
#define   SUPC_SMMR_SMRSTEN_ENABLE (0x1u << 12) /**< \brief (SUPC_SMMR) the core reset signal, vddcore_nreset is asserted when a supply monitor detection occurs. */
#define SUPC_SMMR_SMIEN (0x1u << 13) /**< \brief (SUPC_SMMR) Supply Monitor Interrupt Enable */
#define   SUPC_SMMR_SMIEN_NOT_ENABLE (0x0u << 13) /**< \brief (SUPC_SMMR) the SUPC interrupt signal is not affected when a supply monitor detection occurs. */
#define   SUPC_SMMR_SMIEN_ENABLE (0x1u << 13) /**< \brief (SUPC_SMMR) the SUPC interrupt signal is asserted when a supply monitor detection occurs. */
/* -------- SUPC_MR : (SUPC Offset: 0x08) Supply Controller Mode Register -------- */
#define SUPC_MR_BODRSTEN (0x1u << 12) /**< \brief (SUPC_MR) Brownout Detector Reset Enable */
#define   SUPC_MR_BODRSTEN_NOT_ENABLE (0x0u << 12) /**< \brief (SUPC_MR) the core reset signal "vddcore_nreset" is not affected when a brownout detection occurs. */
#define   SUPC_MR_BODRSTEN_ENABLE (0x1u << 12) /**< \brief (SUPC_MR) the core reset signal, vddcore_nreset is asserted when a brownout detection occurs. */
#define SUPC_MR_BODDIS (0x1u << 13) /**< \brief (SUPC_MR) Brownout Detector Disable */
#define   SUPC_MR_BODDIS_ENABLE (0x0u << 13) /**< \brief (SUPC_MR) the core brownout detector is enabled. */
#define   SUPC_MR_BODDIS_DISABLE (0x1u << 13) /**< \brief (SUPC_MR) the core brownout detector is disabled. */
#define SUPC_MR_ONREG (0x1u << 14) /**< \brief (SUPC_MR) Voltage Regulator enable */
#define   SUPC_MR_ONREG_ONREG_UNUSED (0x0u << 14) /**< \brief (SUPC_MR) Voltage Regulator is not used */
#define   SUPC_MR_ONREG_ONREG_USED (0x1u << 14) /**< \brief (SUPC_MR) Voltage Regulator is used */
#define SUPC_MR_OSCBYPASS (0x1u << 20) /**< \brief (SUPC_MR) Oscillator Bypass */
#define   SUPC_MR_OSCBYPASS_NO_EFFECT (0x0u << 20) /**< \brief (SUPC_MR) no effect. Clock selection depends on XTALSEL value. */
#define   SUPC_MR_OSCBYPASS_BYPASS (0x1u << 20) /**< \brief (SUPC_MR) the 32-KHz XTAL oscillator is selected and is put in bypass mode. */
#define SUPC_MR_KEY_Pos 24
#define SUPC_MR_KEY_Msk (0xffu << SUPC_MR_KEY_Pos) /**< \brief (SUPC_MR) Password Key */
#define SUPC_MR_KEY(value) ((SUPC_MR_KEY_Msk & ((value) << SUPC_MR_KEY_Pos)))
/* -------- SUPC_WUMR : (SUPC Offset: 0x0C) Supply Controller Wake Up Mode Register -------- */
#define SUPC_WUMR_SMEN (0x1u << 1) /**< \brief (SUPC_WUMR) Supply Monitor Wake Up Enable */
#define   SUPC_WUMR_SMEN_NOT_ENABLE (0x0u << 1) /**< \brief (SUPC_WUMR) the supply monitor detection has no wake up effect. */
#define   SUPC_WUMR_SMEN_ENABLE (0x1u << 1) /**< \brief (SUPC_WUMR) the supply monitor detection forces the wake up of the core power supply. */
#define SUPC_WUMR_RTTEN (0x1u << 2) /**< \brief (SUPC_WUMR) Real Time Timer Wake Up Enable */
#define   SUPC_WUMR_RTTEN_NOT_ENABLE (0x0u << 2) /**< \brief (SUPC_WUMR) the RTT alarm signal has no wake up effect. */
#define   SUPC_WUMR_RTTEN_ENABLE (0x1u << 2) /**< \brief (SUPC_WUMR) the RTT alarm signal forces the wake up of the core power supply. */
#define SUPC_WUMR_RTCEN (0x1u << 3) /**< \brief (SUPC_WUMR) Real Time Clock Wake Up Enable */
#define   SUPC_WUMR_RTCEN_NOT_ENABLE (0x0u << 3) /**< \brief (SUPC_WUMR) the RTC alarm signal has no wake up effect. */
#define   SUPC_WUMR_RTCEN_ENABLE (0x1u << 3) /**< \brief (SUPC_WUMR) the RTC alarm signal forces the wake up of the core power supply. */
#define SUPC_WUMR_WKUPDBC_Pos 12
#define SUPC_WUMR_WKUPDBC_Msk (0x7u << SUPC_WUMR_WKUPDBC_Pos) /**< \brief (SUPC_WUMR) Wake Up Inputs Debouncer Period */
#define   SUPC_WUMR_WKUPDBC_IMMEDIATE (0x0u << 12) /**< \brief (SUPC_WUMR) Immediate, no debouncing, detected active at least on one Slow Clock edge. */
#define   SUPC_WUMR_WKUPDBC_3_SCLK (0x1u << 12) /**< \brief (SUPC_WUMR) WKUPx shall be in its active state for at least 3 SLCK periods */
#define   SUPC_WUMR_WKUPDBC_32_SCLK (0x2u << 12) /**< \brief (SUPC_WUMR) WKUPx shall be in its active state for at least 32 SLCK periods */
#define   SUPC_WUMR_WKUPDBC_512_SCLK (0x3u << 12) /**< \brief (SUPC_WUMR) WKUPx shall be in its active state for at least 512 SLCK periods */
#define   SUPC_WUMR_WKUPDBC_4096_SCLK (0x4u << 12) /**< \brief (SUPC_WUMR) WKUPx shall be in its active state for at least 4,096 SLCK periods */
#define   SUPC_WUMR_WKUPDBC_32768_SCLK (0x5u << 12) /**< \brief (SUPC_WUMR) WKUPx shall be in its active state for at least 32,768 SLCK periods */
/* -------- SUPC_WUIR : (SUPC Offset: 0x10) Supply Controller Wake Up Inputs Register -------- */
#define SUPC_WUIR_WKUPEN0 (0x1u << 0) /**< \brief (SUPC_WUIR) Wake Up Input Enable 0 */
#define   SUPC_WUIR_WKUPEN0_NOT_ENABLE (0x0u << 0) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN0_ENABLE (0x1u << 0) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN1 (0x1u << 1) /**< \brief (SUPC_WUIR) Wake Up Input Enable 1 */
#define   SUPC_WUIR_WKUPEN1_NOT_ENABLE (0x0u << 1) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN1_ENABLE (0x1u << 1) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN2 (0x1u << 2) /**< \brief (SUPC_WUIR) Wake Up Input Enable 2 */
#define   SUPC_WUIR_WKUPEN2_NOT_ENABLE (0x0u << 2) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN2_ENABLE (0x1u << 2) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN3 (0x1u << 3) /**< \brief (SUPC_WUIR) Wake Up Input Enable 3 */
#define   SUPC_WUIR_WKUPEN3_NOT_ENABLE (0x0u << 3) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN3_ENABLE (0x1u << 3) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN4 (0x1u << 4) /**< \brief (SUPC_WUIR) Wake Up Input Enable 4 */
#define   SUPC_WUIR_WKUPEN4_NOT_ENABLE (0x0u << 4) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN4_ENABLE (0x1u << 4) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN5 (0x1u << 5) /**< \brief (SUPC_WUIR) Wake Up Input Enable 5 */
#define   SUPC_WUIR_WKUPEN5_NOT_ENABLE (0x0u << 5) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN5_ENABLE (0x1u << 5) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN6 (0x1u << 6) /**< \brief (SUPC_WUIR) Wake Up Input Enable 6 */
#define   SUPC_WUIR_WKUPEN6_NOT_ENABLE (0x0u << 6) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN6_ENABLE (0x1u << 6) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN7 (0x1u << 7) /**< \brief (SUPC_WUIR) Wake Up Input Enable 7 */
#define   SUPC_WUIR_WKUPEN7_NOT_ENABLE (0x0u << 7) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN7_ENABLE (0x1u << 7) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN8 (0x1u << 8) /**< \brief (SUPC_WUIR) Wake Up Input Enable 8 */
#define   SUPC_WUIR_WKUPEN8_NOT_ENABLE (0x0u << 8) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN8_ENABLE (0x1u << 8) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN9 (0x1u << 9) /**< \brief (SUPC_WUIR) Wake Up Input Enable 9 */
#define   SUPC_WUIR_WKUPEN9_NOT_ENABLE (0x0u << 9) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN9_ENABLE (0x1u << 9) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN10 (0x1u << 10) /**< \brief (SUPC_WUIR) Wake Up Input Enable 10 */
#define   SUPC_WUIR_WKUPEN10_NOT_ENABLE (0x0u << 10) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN10_ENABLE (0x1u << 10) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN11 (0x1u << 11) /**< \brief (SUPC_WUIR) Wake Up Input Enable 11 */
#define   SUPC_WUIR_WKUPEN11_NOT_ENABLE (0x0u << 11) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN11_ENABLE (0x1u << 11) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN12 (0x1u << 12) /**< \brief (SUPC_WUIR) Wake Up Input Enable 12 */
#define   SUPC_WUIR_WKUPEN12_NOT_ENABLE (0x0u << 12) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN12_ENABLE (0x1u << 12) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN13 (0x1u << 13) /**< \brief (SUPC_WUIR) Wake Up Input Enable 13 */
#define   SUPC_WUIR_WKUPEN13_NOT_ENABLE (0x0u << 13) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN13_ENABLE (0x1u << 13) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN14 (0x1u << 14) /**< \brief (SUPC_WUIR) Wake Up Input Enable 14 */
#define   SUPC_WUIR_WKUPEN14_NOT_ENABLE (0x0u << 14) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN14_ENABLE (0x1u << 14) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPEN15 (0x1u << 15) /**< \brief (SUPC_WUIR) Wake Up Input Enable 15 */
#define   SUPC_WUIR_WKUPEN15_NOT_ENABLE (0x0u << 15) /**< \brief (SUPC_WUIR) the corresponding wake-up input has no wake up effect. */
#define   SUPC_WUIR_WKUPEN15_ENABLE (0x1u << 15) /**< \brief (SUPC_WUIR) the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT0 (0x1u << 16) /**< \brief (SUPC_WUIR) Wake Up Input Transition 0 */
#define   SUPC_WUIR_WKUPT0_HIGH_TO_LOW (0x0u << 16) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT0_LOW_TO_HIGH (0x1u << 16) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT1 (0x1u << 17) /**< \brief (SUPC_WUIR) Wake Up Input Transition 1 */
#define   SUPC_WUIR_WKUPT1_HIGH_TO_LOW (0x0u << 17) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT1_LOW_TO_HIGH (0x1u << 17) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT2 (0x1u << 18) /**< \brief (SUPC_WUIR) Wake Up Input Transition 2 */
#define   SUPC_WUIR_WKUPT2_HIGH_TO_LOW (0x0u << 18) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT2_LOW_TO_HIGH (0x1u << 18) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT3 (0x1u << 19) /**< \brief (SUPC_WUIR) Wake Up Input Transition 3 */
#define   SUPC_WUIR_WKUPT3_HIGH_TO_LOW (0x0u << 19) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT3_LOW_TO_HIGH (0x1u << 19) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT4 (0x1u << 20) /**< \brief (SUPC_WUIR) Wake Up Input Transition 4 */
#define   SUPC_WUIR_WKUPT4_HIGH_TO_LOW (0x0u << 20) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT4_LOW_TO_HIGH (0x1u << 20) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT5 (0x1u << 21) /**< \brief (SUPC_WUIR) Wake Up Input Transition 5 */
#define   SUPC_WUIR_WKUPT5_HIGH_TO_LOW (0x0u << 21) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT5_LOW_TO_HIGH (0x1u << 21) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT6 (0x1u << 22) /**< \brief (SUPC_WUIR) Wake Up Input Transition 6 */
#define   SUPC_WUIR_WKUPT6_HIGH_TO_LOW (0x0u << 22) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT6_LOW_TO_HIGH (0x1u << 22) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT7 (0x1u << 23) /**< \brief (SUPC_WUIR) Wake Up Input Transition 7 */
#define   SUPC_WUIR_WKUPT7_HIGH_TO_LOW (0x0u << 23) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT7_LOW_TO_HIGH (0x1u << 23) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT8 (0x1u << 24) /**< \brief (SUPC_WUIR) Wake Up Input Transition 8 */
#define   SUPC_WUIR_WKUPT8_HIGH_TO_LOW (0x0u << 24) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT8_LOW_TO_HIGH (0x1u << 24) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT9 (0x1u << 25) /**< \brief (SUPC_WUIR) Wake Up Input Transition 9 */
#define   SUPC_WUIR_WKUPT9_HIGH_TO_LOW (0x0u << 25) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT9_LOW_TO_HIGH (0x1u << 25) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT10 (0x1u << 26) /**< \brief (SUPC_WUIR) Wake Up Input Transition 10 */
#define   SUPC_WUIR_WKUPT10_HIGH_TO_LOW (0x0u << 26) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT10_LOW_TO_HIGH (0x1u << 26) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT11 (0x1u << 27) /**< \brief (SUPC_WUIR) Wake Up Input Transition 11 */
#define   SUPC_WUIR_WKUPT11_HIGH_TO_LOW (0x0u << 27) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT11_LOW_TO_HIGH (0x1u << 27) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT12 (0x1u << 28) /**< \brief (SUPC_WUIR) Wake Up Input Transition 12 */
#define   SUPC_WUIR_WKUPT12_HIGH_TO_LOW (0x0u << 28) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT12_LOW_TO_HIGH (0x1u << 28) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT13 (0x1u << 29) /**< \brief (SUPC_WUIR) Wake Up Input Transition 13 */
#define   SUPC_WUIR_WKUPT13_HIGH_TO_LOW (0x0u << 29) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT13_LOW_TO_HIGH (0x1u << 29) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT14 (0x1u << 30) /**< \brief (SUPC_WUIR) Wake Up Input Transition 14 */
#define   SUPC_WUIR_WKUPT14_HIGH_TO_LOW (0x0u << 30) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT14_LOW_TO_HIGH (0x1u << 30) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define SUPC_WUIR_WKUPT15 (0x1u << 31) /**< \brief (SUPC_WUIR) Wake Up Input Transition 15 */
#define   SUPC_WUIR_WKUPT15_HIGH_TO_LOW (0x0u << 31) /**< \brief (SUPC_WUIR) a high to low level transition on the corresponding wake-up input forces the wake up of the core power supply. */
#define   SUPC_WUIR_WKUPT15_LOW_TO_HIGH (0x1u << 31) /**< \brief (SUPC_WUIR) a low to high level transition on the corresponding wake-up input forces the wake up of the core power supply. */
/* -------- SUPC_SR : (SUPC Offset: 0x14) Supply Controller Status Register -------- */
#define SUPC_SR_WKUPS (0x1u << 1) /**< \brief (SUPC_SR) WKUP Wake Up Status */
#define   SUPC_SR_WKUPS_NO (0x0u << 1) /**< \brief (SUPC_SR) no wake up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR. */
#define   SUPC_SR_WKUPS_PRESENT (0x1u << 1) /**< \brief (SUPC_SR) at least one wake up due to the assertion of the WKUP pins has occurred since the last read of SUPC_SR. */
#define SUPC_SR_SMWS (0x1u << 2) /**< \brief (SUPC_SR) Supply Monitor Detection Wake Up Status */
#define   SUPC_SR_SMWS_NO (0x0u << 2) /**< \brief (SUPC_SR) no wake up due to a supply monitor detection has occurred since the last read of SUPC_SR. */
#define   SUPC_SR_SMWS_PRESENT (0x1u << 2) /**< \brief (SUPC_SR) at least one wake up due to a supply monitor detection has occurred since the last read of SUPC_SR. */
#define SUPC_SR_BODRSTS (0x1u << 3) /**< \brief (SUPC_SR) Brownout Detector Reset Status */
#define   SUPC_SR_BODRSTS_NO (0x0u << 3) /**< \brief (SUPC_SR) no core brownout rising edge event has been detected since the last read of the SUPC_SR. */
#define   SUPC_SR_BODRSTS_PRESENT (0x1u << 3) /**< \brief (SUPC_SR) at least one brownout output rising edge event has been detected since the last read of the SUPC_SR. */
#define SUPC_SR_SMRSTS (0x1u << 4) /**< \brief (SUPC_SR) Supply Monitor Reset Status */
#define   SUPC_SR_SMRSTS_NO (0x0u << 4) /**< \brief (SUPC_SR) no supply monitor detection has generated a core reset since the last read of the SUPC_SR. */
#define   SUPC_SR_SMRSTS_PRESENT (0x1u << 4) /**< \brief (SUPC_SR) at least one supply monitor detection has generated a core reset since the last read of the SUPC_SR. */
#define SUPC_SR_SMS (0x1u << 5) /**< \brief (SUPC_SR) Supply Monitor Status */
#define   SUPC_SR_SMS_NO (0x0u << 5) /**< \brief (SUPC_SR) no supply monitor detection since the last read of SUPC_SR. */
#define   SUPC_SR_SMS_PRESENT (0x1u << 5) /**< \brief (SUPC_SR) at least one supply monitor detection since the last read of SUPC_SR. */
#define SUPC_SR_SMOS (0x1u << 6) /**< \brief (SUPC_SR) Supply Monitor Output Status */
#define   SUPC_SR_SMOS_HIGH (0x0u << 6) /**< \brief (SUPC_SR) the supply monitor detected VDDIO higher than its threshold at its last measurement. */
#define   SUPC_SR_SMOS_LOW (0x1u << 6) /**< \brief (SUPC_SR) the supply monitor detected VDDIO lower than its threshold at its last measurement. */
#define SUPC_SR_OSCSEL (0x1u << 7) /**< \brief (SUPC_SR) 32-kHz Oscillator Selection Status */
#define   SUPC_SR_OSCSEL_RC (0x0u << 7) /**< \brief (SUPC_SR) the slow clock, SLCK is generated by the embedded 32-kHz RC oscillator. */
#define   SUPC_SR_OSCSEL_CRYST (0x1u << 7) /**< \brief (SUPC_SR) the slow clock, SLCK is generated by the 32-kHz crystal oscillator. */
#define SUPC_SR_WKUPIS0 (0x1u << 16) /**< \brief (SUPC_SR) WKUP Input Status 0 */
#define   SUPC_SR_WKUPIS0_DIS (0x0u << 16) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS0_EN (0x1u << 16) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS1 (0x1u << 17) /**< \brief (SUPC_SR) WKUP Input Status 1 */
#define   SUPC_SR_WKUPIS1_DIS (0x0u << 17) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS1_EN (0x1u << 17) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS2 (0x1u << 18) /**< \brief (SUPC_SR) WKUP Input Status 2 */
#define   SUPC_SR_WKUPIS2_DIS (0x0u << 18) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS2_EN (0x1u << 18) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS3 (0x1u << 19) /**< \brief (SUPC_SR) WKUP Input Status 3 */
#define   SUPC_SR_WKUPIS3_DIS (0x0u << 19) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS3_EN (0x1u << 19) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS4 (0x1u << 20) /**< \brief (SUPC_SR) WKUP Input Status 4 */
#define   SUPC_SR_WKUPIS4_DIS (0x0u << 20) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS4_EN (0x1u << 20) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS5 (0x1u << 21) /**< \brief (SUPC_SR) WKUP Input Status 5 */
#define   SUPC_SR_WKUPIS5_DIS (0x0u << 21) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS5_EN (0x1u << 21) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS6 (0x1u << 22) /**< \brief (SUPC_SR) WKUP Input Status 6 */
#define   SUPC_SR_WKUPIS6_DIS (0x0u << 22) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS6_EN (0x1u << 22) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS7 (0x1u << 23) /**< \brief (SUPC_SR) WKUP Input Status 7 */
#define   SUPC_SR_WKUPIS7_DIS (0x0u << 23) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS7_EN (0x1u << 23) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS8 (0x1u << 24) /**< \brief (SUPC_SR) WKUP Input Status 8 */
#define   SUPC_SR_WKUPIS8_DIS (0x0u << 24) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS8_EN (0x1u << 24) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS9 (0x1u << 25) /**< \brief (SUPC_SR) WKUP Input Status 9 */
#define   SUPC_SR_WKUPIS9_DIS (0x0u << 25) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS9_EN (0x1u << 25) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS10 (0x1u << 26) /**< \brief (SUPC_SR) WKUP Input Status 10 */
#define   SUPC_SR_WKUPIS10_DIS (0x0u << 26) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS10_EN (0x1u << 26) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS11 (0x1u << 27) /**< \brief (SUPC_SR) WKUP Input Status 11 */
#define   SUPC_SR_WKUPIS11_DIS (0x0u << 27) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS11_EN (0x1u << 27) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS12 (0x1u << 28) /**< \brief (SUPC_SR) WKUP Input Status 12 */
#define   SUPC_SR_WKUPIS12_DIS (0x0u << 28) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS12_EN (0x1u << 28) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS13 (0x1u << 29) /**< \brief (SUPC_SR) WKUP Input Status 13 */
#define   SUPC_SR_WKUPIS13_DIS (0x0u << 29) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS13_EN (0x1u << 29) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS14 (0x1u << 30) /**< \brief (SUPC_SR) WKUP Input Status 14 */
#define   SUPC_SR_WKUPIS14_DIS (0x0u << 30) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS14_EN (0x1u << 30) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */
#define SUPC_SR_WKUPIS15 (0x1u << 31) /**< \brief (SUPC_SR) WKUP Input Status 15 */
#define   SUPC_SR_WKUPIS15_DIS (0x0u << 31) /**< \brief (SUPC_SR) the corresponding wake-up input is disabled, or was inactive at the time the debouncer triggered a wake up event. */
#define   SUPC_SR_WKUPIS15_EN (0x1u << 31) /**< \brief (SUPC_SR) the corresponding wake-up input was active at the time the debouncer triggered a wake up event. */

/*@}*/


#endif /* _SAM3N_SUPC_COMPONENT_ */

#ifndef _SAM3N_TC_COMPONENT_
#define _SAM3N_TC_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Timer Counter */
/* ============================================================================= */
/** \addtogroup SAM3N_TC Timer Counter */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief TcChannel hardware registers */
typedef struct {
  RwReg      TC_CCR;        /**< \brief (TcChannel Offset: 0x0) Channel Control Register */
  RwReg      TC_CMR;        /**< \brief (TcChannel Offset: 0x4) Channel Mode Register */
  RwReg      TC_SMMR;       /**< \brief (TcChannel Offset: 0x8) Stepper Motor Mode Register */
  RoReg      Reserved1[1];
  RwReg      TC_CV;         /**< \brief (TcChannel Offset: 0x10) Counter Value */
  RwReg      TC_RA;         /**< \brief (TcChannel Offset: 0x14) Register A */
  RwReg      TC_RB;         /**< \brief (TcChannel Offset: 0x18) Register B */
  RwReg      TC_RC;         /**< \brief (TcChannel Offset: 0x1C) Register C */
  RwReg      TC_SR;         /**< \brief (TcChannel Offset: 0x20) Status Register */
  RwReg      TC_IER;        /**< \brief (TcChannel Offset: 0x24) Interrupt Enable Register */
  RwReg      TC_IDR;        /**< \brief (TcChannel Offset: 0x28) Interrupt Disable Register */
  RwReg      TC_IMR;        /**< \brief (TcChannel Offset: 0x2C) Interrupt Mask Register */
  RoReg      Reserved2[4];
} TcChannel;
/** \brief Tc hardware registers */
#define TCCHANNEL_NUMBER 3
typedef struct {
  TcChannel  TC_CHANNEL[TCCHANNEL_NUMBER]; /**< \brief (Tc Offset: 0x0) channel = 0 .. 2 */
  WoReg      TC_BCR;        /**< \brief (Tc Offset: 0xC0) Block Control Register */
  RwReg      TC_BMR;        /**< \brief (Tc Offset: 0xC4) Block Mode Register */
  WoReg      TC_QIER;       /**< \brief (Tc Offset: 0xC8) QDEC Interrupt Enable Register */
  WoReg      TC_QIDR;       /**< \brief (Tc Offset: 0xCC) QDEC Interrupt Disable Register */
  RoReg      TC_QIMR;       /**< \brief (Tc Offset: 0xD0) QDEC Interrupt Mask Register */
  RoReg      TC_QISR;       /**< \brief (Tc Offset: 0xD4) QDEC Interrupt Status Register */
  RoReg      Reserved1[3];
  RwReg      TC_WPMR;       /**< \brief (Tc Offset: 0xE4) Write Protect Mode Register */
} Tc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- TC_CCR : (TC Offset: N/A) Channel Control Register -------- */
#define TC_CCR_CLKEN (0x1u << 0) /**< \brief (TC_CCR) Counter Clock Enable Command */
#define TC_CCR_CLKDIS (0x1u << 1) /**< \brief (TC_CCR) Counter Clock Disable Command */
#define TC_CCR_SWTRG (0x1u << 2) /**< \brief (TC_CCR) Software Trigger Command */
/* -------- TC_CMR : (TC Offset: N/A) Channel Mode Register -------- */
#define TC_CMR_TCCLKS_Pos 0
#define TC_CMR_TCCLKS_Msk (0x7u << TC_CMR_TCCLKS_Pos) /**< \brief (TC_CMR) Clock Selection */
#define   TC_CMR_TCCLKS_TIMER_CLOCK1 (0x0u << 0) /**< \brief (TC_CMR) Clock selected: TCLK1 */
#define   TC_CMR_TCCLKS_TIMER_CLOCK2 (0x1u << 0) /**< \brief (TC_CMR) Clock selected: TCLK2 */
#define   TC_CMR_TCCLKS_TIMER_CLOCK3 (0x2u << 0) /**< \brief (TC_CMR) Clock selected: TCLK3 */
#define   TC_CMR_TCCLKS_TIMER_CLOCK4 (0x3u << 0) /**< \brief (TC_CMR) Clock selected: TCLK4 */
#define   TC_CMR_TCCLKS_TIMER_CLOCK5 (0x4u << 0) /**< \brief (TC_CMR) Clock selected: TCLK5 */
#define   TC_CMR_TCCLKS_XC0 (0x5u << 0) /**< \brief (TC_CMR) Clock selected: XC0 */
#define   TC_CMR_TCCLKS_XC1 (0x6u << 0) /**< \brief (TC_CMR) Clock selected: XC1 */
#define   TC_CMR_TCCLKS_XC2 (0x7u << 0) /**< \brief (TC_CMR) Clock selected: XC2 */
#define TC_CMR_CLKI (0x1u << 3) /**< \brief (TC_CMR) Clock Invert */
#define TC_CMR_BURST_Pos 4
#define TC_CMR_BURST_Msk (0x3u << TC_CMR_BURST_Pos) /**< \brief (TC_CMR) Burst Signal Selection */
#define   TC_CMR_BURST_NONE (0x0u << 4) /**< \brief (TC_CMR) The clock is not gated by an external signal. */
#define   TC_CMR_BURST_XC0 (0x1u << 4) /**< \brief (TC_CMR) XC0 is ANDed with the selected clock. */
#define   TC_CMR_BURST_XC1 (0x2u << 4) /**< \brief (TC_CMR) XC1 is ANDed with the selected clock. */
#define   TC_CMR_BURST_XC2 (0x3u << 4) /**< \brief (TC_CMR) XC2 is ANDed with the selected clock. */
#define TC_CMR_LDBSTOP (0x1u << 6) /**< \brief (TC_CMR) Counter Clock Stopped with RB Loading */
#define TC_CMR_LDBDIS (0x1u << 7) /**< \brief (TC_CMR) Counter Clock Disable with RB Loading */
#define TC_CMR_ETRGEDG_Pos 8
#define TC_CMR_ETRGEDG_Msk (0x3u << TC_CMR_ETRGEDG_Pos) /**< \brief (TC_CMR) External Trigger Edge Selection */
#define   TC_CMR_ETRGEDG_NONE (0x0u << 8) /**< \brief (TC_CMR) The clock is not gated by an external signal. */
#define   TC_CMR_ETRGEDG_RISING (0x1u << 8) /**< \brief (TC_CMR) Rising edge */
#define   TC_CMR_ETRGEDG_FALLING (0x2u << 8) /**< \brief (TC_CMR) Falling edge */
#define   TC_CMR_ETRGEDG_EDGE (0x3u << 8) /**< \brief (TC_CMR) Each edge */
#define TC_CMR_ABETRG (0x1u << 10) /**< \brief (TC_CMR) TIOA or TIOB External Trigger Selection */
#define TC_CMR_CPCTRG (0x1u << 14) /**< \brief (TC_CMR) RC Compare Trigger Enable */
#define TC_CMR_WAVE (0x1u << 15) /**< \brief (TC_CMR) Waveform Mode */
#define TC_CMR_LDRA_Pos 16
#define TC_CMR_LDRA_Msk (0x3u << TC_CMR_LDRA_Pos) /**< \brief (TC_CMR) RA Loading Edge Selection */
#define   TC_CMR_LDRA_NONE (0x0u << 16) /**< \brief (TC_CMR) None */
#define   TC_CMR_LDRA_RISING (0x1u << 16) /**< \brief (TC_CMR) Rising edge of TIOA */
#define   TC_CMR_LDRA_FALLING (0x2u << 16) /**< \brief (TC_CMR) Falling edge of TIOA */
#define   TC_CMR_LDRA_EDGE (0x3u << 16) /**< \brief (TC_CMR) Each edge of TIOA */
#define TC_CMR_LDRB_Pos 18
#define TC_CMR_LDRB_Msk (0x3u << TC_CMR_LDRB_Pos) /**< \brief (TC_CMR) RB Loading Edge Selection */
#define   TC_CMR_LDRB_NONE (0x0u << 18) /**< \brief (TC_CMR) None */
#define   TC_CMR_LDRB_RISING (0x1u << 18) /**< \brief (TC_CMR) Rising edge of TIOA */
#define   TC_CMR_LDRB_FALLING (0x2u << 18) /**< \brief (TC_CMR) Falling edge of TIOA */
#define   TC_CMR_LDRB_EDGE (0x3u << 18) /**< \brief (TC_CMR) Each edge of TIOA */
#define TC_CMR_CPCSTOP (0x1u << 6) /**< \brief (TC_CMR) Counter Clock Stopped with RC Compare */
#define TC_CMR_CPCDIS (0x1u << 7) /**< \brief (TC_CMR) Counter Clock Disable with RC Compare */
#define TC_CMR_EEVTEDG_Pos 8
#define TC_CMR_EEVTEDG_Msk (0x3u << TC_CMR_EEVTEDG_Pos) /**< \brief (TC_CMR) External Event Edge Selection */
#define   TC_CMR_EEVTEDG_NONE (0x0u << 8) /**< \brief (TC_CMR) None */
#define   TC_CMR_EEVTEDG_RISING (0x1u << 8) /**< \brief (TC_CMR) Rising edge */
#define   TC_CMR_EEVTEDG_FALLING (0x2u << 8) /**< \brief (TC_CMR) Falling edge */
#define   TC_CMR_EEVTEDG_EDGE (0x3u << 8) /**< \brief (TC_CMR) Each edge */
#define TC_CMR_EEVT_Pos 10
#define TC_CMR_EEVT_Msk (0x3u << TC_CMR_EEVT_Pos) /**< \brief (TC_CMR) External Event Selection */
#define   TC_CMR_EEVT_TIOB (0x0u << 10) /**< \brief (TC_CMR) TIOB */
#define   TC_CMR_EEVT_XC0 (0x1u << 10) /**< \brief (TC_CMR) XC0 */
#define   TC_CMR_EEVT_XC1 (0x2u << 10) /**< \brief (TC_CMR) XC1 */
#define   TC_CMR_EEVT_XC2 (0x3u << 10) /**< \brief (TC_CMR) XC2 */
#define TC_CMR_ENETRG (0x1u << 12) /**< \brief (TC_CMR) External Event Trigger Enable */
#define TC_CMR_WAVSEL_Pos 13
#define TC_CMR_WAVSEL_Msk (0x3u << TC_CMR_WAVSEL_Pos) /**< \brief (TC_CMR) Waveform Selection */
#define   TC_CMR_WAVSEL_UP (0x0u << 13) /**< \brief (TC_CMR) UP mode without automatic trigger on RC Compare */
#define   TC_CMR_WAVSEL_UPDOWN (0x1u << 13) /**< \brief (TC_CMR) UPDOWN mode without automatic trigger on RC Compare */
#define   TC_CMR_WAVSEL_UP_RC (0x2u << 13) /**< \brief (TC_CMR) UP mode with automatic trigger on RC Compare */
#define   TC_CMR_WAVSEL_UPDOWN_RC (0x3u << 13) /**< \brief (TC_CMR) UPDOWN mode with automatic trigger on RC Compare */
#define TC_CMR_ACPA_Pos 16
#define TC_CMR_ACPA_Msk (0x3u << TC_CMR_ACPA_Pos) /**< \brief (TC_CMR) RA Compare Effect on TIOA */
#define   TC_CMR_ACPA_NONE (0x0u << 16) /**< \brief (TC_CMR) None */
#define   TC_CMR_ACPA_SET (0x1u << 16) /**< \brief (TC_CMR) Set */
#define   TC_CMR_ACPA_CLEAR (0x2u << 16) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_ACPA_TOGGLE (0x3u << 16) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_ACPC_Pos 18
#define TC_CMR_ACPC_Msk (0x3u << TC_CMR_ACPC_Pos) /**< \brief (TC_CMR) RC Compare Effect on TIOA */
#define   TC_CMR_ACPC_NONE (0x0u << 18) /**< \brief (TC_CMR) None */
#define   TC_CMR_ACPC_SET (0x1u << 18) /**< \brief (TC_CMR) Set */
#define   TC_CMR_ACPC_CLEAR (0x2u << 18) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_ACPC_TOGGLE (0x3u << 18) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_AEEVT_Pos 20
#define TC_CMR_AEEVT_Msk (0x3u << TC_CMR_AEEVT_Pos) /**< \brief (TC_CMR) External Event Effect on TIOA */
#define   TC_CMR_AEEVT_NONE (0x0u << 20) /**< \brief (TC_CMR) None */
#define   TC_CMR_AEEVT_SET (0x1u << 20) /**< \brief (TC_CMR) Set */
#define   TC_CMR_AEEVT_CLEAR (0x2u << 20) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_AEEVT_TOGGLE (0x3u << 20) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_ASWTRG_Pos 22
#define TC_CMR_ASWTRG_Msk (0x3u << TC_CMR_ASWTRG_Pos) /**< \brief (TC_CMR) Software Trigger Effect on TIOA */
#define   TC_CMR_ASWTRG_NONE (0x0u << 22) /**< \brief (TC_CMR) None */
#define   TC_CMR_ASWTRG_SET (0x1u << 22) /**< \brief (TC_CMR) Set */
#define   TC_CMR_ASWTRG_CLEAR (0x2u << 22) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_ASWTRG_TOGGLE (0x3u << 22) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_BCPB_Pos 24
#define TC_CMR_BCPB_Msk (0x3u << TC_CMR_BCPB_Pos) /**< \brief (TC_CMR) RB Compare Effect on TIOB */
#define   TC_CMR_BCPB_NONE (0x0u << 24) /**< \brief (TC_CMR) None */
#define   TC_CMR_BCPB_SET (0x1u << 24) /**< \brief (TC_CMR) Set */
#define   TC_CMR_BCPB_CLEAR (0x2u << 24) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_BCPB_TOGGLE (0x3u << 24) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_BCPC_Pos 26
#define TC_CMR_BCPC_Msk (0x3u << TC_CMR_BCPC_Pos) /**< \brief (TC_CMR) RC Compare Effect on TIOB */
#define   TC_CMR_BCPC_NONE (0x0u << 26) /**< \brief (TC_CMR) None */
#define   TC_CMR_BCPC_SET (0x1u << 26) /**< \brief (TC_CMR) Set */
#define   TC_CMR_BCPC_CLEAR (0x2u << 26) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_BCPC_TOGGLE (0x3u << 26) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_BEEVT_Pos 28
#define TC_CMR_BEEVT_Msk (0x3u << TC_CMR_BEEVT_Pos) /**< \brief (TC_CMR) External Event Effect on TIOB */
#define   TC_CMR_BEEVT_NONE (0x0u << 28) /**< \brief (TC_CMR) None */
#define   TC_CMR_BEEVT_SET (0x1u << 28) /**< \brief (TC_CMR) Set */
#define   TC_CMR_BEEVT_CLEAR (0x2u << 28) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_BEEVT_TOGGLE (0x3u << 28) /**< \brief (TC_CMR) Toggle */
#define TC_CMR_BSWTRG_Pos 30
#define TC_CMR_BSWTRG_Msk (0x3u << TC_CMR_BSWTRG_Pos) /**< \brief (TC_CMR) Software Trigger Effect on TIOB */
#define   TC_CMR_BSWTRG_NONE (0x0u << 30) /**< \brief (TC_CMR) None */
#define   TC_CMR_BSWTRG_SET (0x1u << 30) /**< \brief (TC_CMR) Set */
#define   TC_CMR_BSWTRG_CLEAR (0x2u << 30) /**< \brief (TC_CMR) Clear */
#define   TC_CMR_BSWTRG_TOGGLE (0x3u << 30) /**< \brief (TC_CMR) Toggle */
/* -------- TC_SMMR : (TC Offset: N/A) Stepper Motor Mode Register -------- */
#define TC_SMMR_GCEN (0x1u << 0) /**< \brief (TC_SMMR) Gray Count Enable */
#define TC_SMMR_DOWN (0x1u << 1) /**< \brief (TC_SMMR) DOWN Count */
/* -------- TC_CV : (TC Offset: N/A) Counter Value -------- */
#define TC_CV_CV_Pos 0
#define TC_CV_CV_Msk (0xffffffffu << TC_CV_CV_Pos) /**< \brief (TC_CV) Counter Value */
/* -------- TC_RA : (TC Offset: N/A) Register A -------- */
#define TC_RA_RA_Pos 0
#define TC_RA_RA_Msk (0xffffffffu << TC_RA_RA_Pos) /**< \brief (TC_RA) Register A */
#define TC_RA_RA(value) ((TC_RA_RA_Msk & ((value) << TC_RA_RA_Pos)))
/* -------- TC_RB : (TC Offset: N/A) Register B -------- */
#define TC_RB_RB_Pos 0
#define TC_RB_RB_Msk (0xffffffffu << TC_RB_RB_Pos) /**< \brief (TC_RB) Register B */
#define TC_RB_RB(value) ((TC_RB_RB_Msk & ((value) << TC_RB_RB_Pos)))
/* -------- TC_RC : (TC Offset: N/A) Register C -------- */
#define TC_RC_RC_Pos 0
#define TC_RC_RC_Msk (0xffffffffu << TC_RC_RC_Pos) /**< \brief (TC_RC) Register C */
#define TC_RC_RC(value) ((TC_RC_RC_Msk & ((value) << TC_RC_RC_Pos)))
/* -------- TC_SR : (TC Offset: N/A) Status Register -------- */
#define TC_SR_COVFS (0x1u << 0) /**< \brief (TC_SR) Counter Overflow Status */
#define TC_SR_LOVRS (0x1u << 1) /**< \brief (TC_SR) Load Overrun Status */
#define TC_SR_CPAS (0x1u << 2) /**< \brief (TC_SR) RA Compare Status */
#define TC_SR_CPBS (0x1u << 3) /**< \brief (TC_SR) RB Compare Status */
#define TC_SR_CPCS (0x1u << 4) /**< \brief (TC_SR) RC Compare Status */
#define TC_SR_LDRAS (0x1u << 5) /**< \brief (TC_SR) RA Loading Status */
#define TC_SR_LDRBS (0x1u << 6) /**< \brief (TC_SR) RB Loading Status */
#define TC_SR_ETRGS (0x1u << 7) /**< \brief (TC_SR) External Trigger Status */
#define TC_SR_CLKSTA (0x1u << 16) /**< \brief (TC_SR) Clock Enabling Status */
#define TC_SR_MTIOA (0x1u << 17) /**< \brief (TC_SR) TIOA Mirror */
#define TC_SR_MTIOB (0x1u << 18) /**< \brief (TC_SR) TIOB Mirror */
/* -------- TC_IER : (TC Offset: N/A) Interrupt Enable Register -------- */
#define TC_IER_COVFS (0x1u << 0) /**< \brief (TC_IER) Counter Overflow */
#define TC_IER_LOVRS (0x1u << 1) /**< \brief (TC_IER) Load Overrun */
#define TC_IER_CPAS (0x1u << 2) /**< \brief (TC_IER) RA Compare */
#define TC_IER_CPBS (0x1u << 3) /**< \brief (TC_IER) RB Compare */
#define TC_IER_CPCS (0x1u << 4) /**< \brief (TC_IER) RC Compare */
#define TC_IER_LDRAS (0x1u << 5) /**< \brief (TC_IER) RA Loading */
#define TC_IER_LDRBS (0x1u << 6) /**< \brief (TC_IER) RB Loading */
#define TC_IER_ETRGS (0x1u << 7) /**< \brief (TC_IER) External Trigger */
/* -------- TC_IDR : (TC Offset: N/A) Interrupt Disable Register -------- */
#define TC_IDR_COVFS (0x1u << 0) /**< \brief (TC_IDR) Counter Overflow */
#define TC_IDR_LOVRS (0x1u << 1) /**< \brief (TC_IDR) Load Overrun */
#define TC_IDR_CPAS (0x1u << 2) /**< \brief (TC_IDR) RA Compare */
#define TC_IDR_CPBS (0x1u << 3) /**< \brief (TC_IDR) RB Compare */
#define TC_IDR_CPCS (0x1u << 4) /**< \brief (TC_IDR) RC Compare */
#define TC_IDR_LDRAS (0x1u << 5) /**< \brief (TC_IDR) RA Loading */
#define TC_IDR_LDRBS (0x1u << 6) /**< \brief (TC_IDR) RB Loading */
#define TC_IDR_ETRGS (0x1u << 7) /**< \brief (TC_IDR) External Trigger */
/* -------- TC_IMR : (TC Offset: N/A) Interrupt Mask Register -------- */
#define TC_IMR_COVFS (0x1u << 0) /**< \brief (TC_IMR) Counter Overflow */
#define TC_IMR_LOVRS (0x1u << 1) /**< \brief (TC_IMR) Load Overrun */
#define TC_IMR_CPAS (0x1u << 2) /**< \brief (TC_IMR) RA Compare */
#define TC_IMR_CPBS (0x1u << 3) /**< \brief (TC_IMR) RB Compare */
#define TC_IMR_CPCS (0x1u << 4) /**< \brief (TC_IMR) RC Compare */
#define TC_IMR_LDRAS (0x1u << 5) /**< \brief (TC_IMR) RA Loading */
#define TC_IMR_LDRBS (0x1u << 6) /**< \brief (TC_IMR) RB Loading */
#define TC_IMR_ETRGS (0x1u << 7) /**< \brief (TC_IMR) External Trigger */
/* -------- TC_BCR : (TC Offset: 0xC0) Block Control Register -------- */
#define TC_BCR_SYNC (0x1u << 0) /**< \brief (TC_BCR) Synchro Command */
/* -------- TC_BMR : (TC Offset: 0xC4) Block Mode Register -------- */
#define TC_BMR_TC0XC0S_Pos 0
#define TC_BMR_TC0XC0S_Msk (0x3u << TC_BMR_TC0XC0S_Pos) /**< \brief (TC_BMR) External Clock Signal 0 Selection */
#define   TC_BMR_TC0XC0S_TCLK0 (0x0u << 0) /**< \brief (TC_BMR) Signal connected to XC0: TCLK0 */
#define   TC_BMR_TC0XC0S_TIOA1 (0x2u << 0) /**< \brief (TC_BMR) Signal connected to XC0: TIOA1 */
#define   TC_BMR_TC0XC0S_TIOA2 (0x3u << 0) /**< \brief (TC_BMR) Signal connected to XC0: TIOA2 */
#define TC_BMR_TC1XC1S_Pos 2
#define TC_BMR_TC1XC1S_Msk (0x3u << TC_BMR_TC1XC1S_Pos) /**< \brief (TC_BMR) External Clock Signal 1 Selection */
#define   TC_BMR_TC1XC1S_TCLK1 (0x0u << 2) /**< \brief (TC_BMR) Signal connected to XC1: TCLK1 */
#define   TC_BMR_TC1XC1S_TIOA0 (0x2u << 2) /**< \brief (TC_BMR) Signal connected to XC1: TIOA0 */
#define   TC_BMR_TC1XC1S_TIOA2 (0x3u << 2) /**< \brief (TC_BMR) Signal connected to XC1: TIOA2 */
#define TC_BMR_TC2XC2S_Pos 4
#define TC_BMR_TC2XC2S_Msk (0x3u << TC_BMR_TC2XC2S_Pos) /**< \brief (TC_BMR) External Clock Signal 2 Selection */
#define   TC_BMR_TC2XC2S_TCLK2 (0x0u << 4) /**< \brief (TC_BMR) Signal connected to XC2: TCLK2 */
#define   TC_BMR_TC2XC2S_TIOA1 (0x2u << 4) /**< \brief (TC_BMR) Signal connected to XC2: TIOA1 */
#define   TC_BMR_TC2XC2S_TIOA2 (0x3u << 4) /**< \brief (TC_BMR) Signal connected to XC2: TIOA2 */
#define TC_BMR_QDEN (0x1u << 8) /**< \brief (TC_BMR) Quadrature Decoder ENabled */
#define TC_BMR_POSEN (0x1u << 9) /**< \brief (TC_BMR) POSition ENabled */
#define TC_BMR_SPEEDEN (0x1u << 10) /**< \brief (TC_BMR) SPEED ENabled */
#define TC_BMR_QDTRANS (0x1u << 11) /**< \brief (TC_BMR) Quadrature Decoding TRANSparent */
#define TC_BMR_EDGPHA (0x1u << 12) /**< \brief (TC_BMR) EDGe on PHA count mode */
#define TC_BMR_INVA (0x1u << 13) /**< \brief (TC_BMR) INVerted phA */
#define TC_BMR_INVB (0x1u << 14) /**< \brief (TC_BMR) INVerted phB */
#define TC_BMR_INVIDX (0x1u << 15) /**< \brief (TC_BMR) INVerted InDeX */
#define TC_BMR_SWAP (0x1u << 16) /**< \brief (TC_BMR) SWAP PHA and PHB */
#define TC_BMR_IDXPHB (0x1u << 17) /**< \brief (TC_BMR) InDeX pin is PHB pin */
#define TC_BMR_FILTER (0x1u << 19) /**< \brief (TC_BMR)  */
#define TC_BMR_MAXFILT_Pos 20
#define TC_BMR_MAXFILT_Msk (0x3fu << TC_BMR_MAXFILT_Pos) /**< \brief (TC_BMR) MAXimum FILTer */
#define TC_BMR_MAXFILT(value) ((TC_BMR_MAXFILT_Msk & ((value) << TC_BMR_MAXFILT_Pos)))
/* -------- TC_QIER : (TC Offset: 0xC8) QDEC Interrupt Enable Register -------- */
#define TC_QIER_IDX (0x1u << 0) /**< \brief (TC_QIER) InDeX */
#define TC_QIER_DIRCHG (0x1u << 1) /**< \brief (TC_QIER) DIRection CHanGe */
#define TC_QIER_QERR (0x1u << 2) /**< \brief (TC_QIER) Quadrature ERRor */
/* -------- TC_QIDR : (TC Offset: 0xCC) QDEC Interrupt Disable Register -------- */
#define TC_QIDR_IDX (0x1u << 0) /**< \brief (TC_QIDR) InDeX */
#define TC_QIDR_DIRCHG (0x1u << 1) /**< \brief (TC_QIDR) DIRection CHanGe */
#define TC_QIDR_QERR (0x1u << 2) /**< \brief (TC_QIDR) Quadrature ERRor */
/* -------- TC_QIMR : (TC Offset: 0xD0) QDEC Interrupt Mask Register -------- */
#define TC_QIMR_IDX (0x1u << 0) /**< \brief (TC_QIMR) InDeX */
#define TC_QIMR_DIRCHG (0x1u << 1) /**< \brief (TC_QIMR) DIRection CHanGe */
#define TC_QIMR_QERR (0x1u << 2) /**< \brief (TC_QIMR) Quadrature ERRor */
/* -------- TC_QISR : (TC Offset: 0xD4) QDEC Interrupt Status Register -------- */
#define TC_QISR_IDX (0x1u << 0) /**< \brief (TC_QISR) InDeX */
#define TC_QISR_DIRCHG (0x1u << 1) /**< \brief (TC_QISR) DIRection CHanGe */
#define TC_QISR_QERR (0x1u << 2) /**< \brief (TC_QISR) Quadrature ERRor */
#define TC_QISR_DIR (0x1u << 8) /**< \brief (TC_QISR) Direction */
/* -------- TC_WPMR : (TC Offset: 0xE4) Write Protect Mode Register -------- */
#define TC_WPMR_WPEN (0x1u << 0) /**< \brief (TC_WPMR) Write Protect Enable */
#define TC_WPMR_WPKEY_Pos 8
#define TC_WPMR_WPKEY_Msk (0xffffffu << TC_WPMR_WPKEY_Pos) /**< \brief (TC_WPMR) Write Protect KEY */
#define TC_WPMR_WPKEY(value) ((TC_WPMR_WPKEY_Msk & ((value) << TC_WPMR_WPKEY_Pos)))

/*@}*/


#endif /* _SAM3N_TC_COMPONENT_ */

#ifndef _SAM3N_TWI_COMPONENT_
#define _SAM3N_TWI_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Two-wire Interface */
/* ============================================================================= */
/** \addtogroup SAM3N_TWI Two-wire Interface */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Twi hardware registers */
typedef struct {
  WoReg TWI_CR;        /**< \brief (Twi Offset: 0x00) Control Register */
  RwReg TWI_MMR;       /**< \brief (Twi Offset: 0x04) Master Mode Register */
  RwReg TWI_SMR;       /**< \brief (Twi Offset: 0x08) Slave Mode Register */
  RwReg TWI_IADR;      /**< \brief (Twi Offset: 0x0C) Internal Address Register */
  RwReg TWI_CWGR;      /**< \brief (Twi Offset: 0x10) Clock Waveform Generator Register */
  RoReg Reserved1[3];
  RoReg TWI_SR;        /**< \brief (Twi Offset: 0x20) Status Register */
  WoReg TWI_IER;       /**< \brief (Twi Offset: 0x24) Interrupt Enable Register */
  WoReg TWI_IDR;       /**< \brief (Twi Offset: 0x28) Interrupt Disable Register */
  RoReg TWI_IMR;       /**< \brief (Twi Offset: 0x2C) Interrupt Mask Register */
  RoReg TWI_RHR;       /**< \brief (Twi Offset: 0x30) Receive Holding Register */
  WoReg TWI_THR;       /**< \brief (Twi Offset: 0x34) Transmit Holding Register */
  RoReg Reserved2[50];
  RwReg TWI_RPR;       /**< \brief (Twi Offset: 0x100) Receive Pointer Register */
  RwReg TWI_RCR;       /**< \brief (Twi Offset: 0x104) Receive Counter Register */
  RwReg TWI_TPR;       /**< \brief (Twi Offset: 0x108) Transmit Pointer Register */
  RwReg TWI_TCR;       /**< \brief (Twi Offset: 0x10C) Transmit Counter Register */
  RwReg TWI_RNPR;      /**< \brief (Twi Offset: 0x110) Receive Next Pointer Register */
  RwReg TWI_RNCR;      /**< \brief (Twi Offset: 0x114) Receive Next Counter Register */
  RwReg TWI_TNPR;      /**< \brief (Twi Offset: 0x118) Transmit Next Pointer Register */
  RwReg TWI_TNCR;      /**< \brief (Twi Offset: 0x11C) Transmit Next Counter Register */
  WoReg TWI_PTCR;      /**< \brief (Twi Offset: 0x120) Transfer Control Register */
  RoReg TWI_PTSR;      /**< \brief (Twi Offset: 0x124) Transfer Status Register */
} Twi;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- TWI_CR : (TWI Offset: 0x00) Control Register -------- */
#define TWI_CR_START (0x1u << 0) /**< \brief (TWI_CR) Send a START Condition */
#define TWI_CR_STOP (0x1u << 1) /**< \brief (TWI_CR) Send a STOP Condition */
#define TWI_CR_MSEN (0x1u << 2) /**< \brief (TWI_CR) TWI Master Mode Enabled */
#define TWI_CR_MSDIS (0x1u << 3) /**< \brief (TWI_CR) TWI Master Mode Disabled */
#define TWI_CR_SVEN (0x1u << 4) /**< \brief (TWI_CR) TWI Slave Mode Enabled */
#define TWI_CR_SVDIS (0x1u << 5) /**< \brief (TWI_CR) TWI Slave Mode Disabled */
#define TWI_CR_QUICK (0x1u << 6) /**< \brief (TWI_CR) SMBUS Quick Command */
#define TWI_CR_SWRST (0x1u << 7) /**< \brief (TWI_CR) Software Reset */
/* -------- TWI_MMR : (TWI Offset: 0x04) Master Mode Register -------- */
#define TWI_MMR_IADRSZ_Pos 8
#define TWI_MMR_IADRSZ_Msk (0x3u << TWI_MMR_IADRSZ_Pos) /**< \brief (TWI_MMR) Internal Device Address Size */
#define   TWI_MMR_IADRSZ_NONE (0x0u << 8) /**< \brief (TWI_MMR) No internal device address */
#define   TWI_MMR_IADRSZ_1_BYTE (0x1u << 8) /**< \brief (TWI_MMR) One-byte internal device address */
#define   TWI_MMR_IADRSZ_2_BYTE (0x2u << 8) /**< \brief (TWI_MMR) Two-byte internal device address */
#define   TWI_MMR_IADRSZ_3_BYTE (0x3u << 8) /**< \brief (TWI_MMR) Three-byte internal device address */
#define TWI_MMR_MREAD (0x1u << 12) /**< \brief (TWI_MMR) Master Read Direction */
#define TWI_MMR_DADR_Pos 16
#define TWI_MMR_DADR_Msk (0x7fu << TWI_MMR_DADR_Pos) /**< \brief (TWI_MMR) Device Address */
#define TWI_MMR_DADR(value) ((TWI_MMR_DADR_Msk & ((value) << TWI_MMR_DADR_Pos)))
/* -------- TWI_SMR : (TWI Offset: 0x08) Slave Mode Register -------- */
#define TWI_SMR_SADR_Pos 16
#define TWI_SMR_SADR_Msk (0x7fu << TWI_SMR_SADR_Pos) /**< \brief (TWI_SMR) Slave Address */
#define TWI_SMR_SADR(value) ((TWI_SMR_SADR_Msk & ((value) << TWI_SMR_SADR_Pos)))
/* -------- TWI_IADR : (TWI Offset: 0x0C) Internal Address Register -------- */
#define TWI_IADR_IADR_Pos 0
#define TWI_IADR_IADR_Msk (0xffffffu << TWI_IADR_IADR_Pos) /**< \brief (TWI_IADR) Internal Address */
#define TWI_IADR_IADR(value) ((TWI_IADR_IADR_Msk & ((value) << TWI_IADR_IADR_Pos)))
/* -------- TWI_CWGR : (TWI Offset: 0x10) Clock Waveform Generator Register -------- */
#define TWI_CWGR_CLDIV_Pos 0
#define TWI_CWGR_CLDIV_Msk (0xffu << TWI_CWGR_CLDIV_Pos) /**< \brief (TWI_CWGR) Clock Low Divider */
#define TWI_CWGR_CLDIV(value) ((TWI_CWGR_CLDIV_Msk & ((value) << TWI_CWGR_CLDIV_Pos)))
#define TWI_CWGR_CHDIV_Pos 8
#define TWI_CWGR_CHDIV_Msk (0xffu << TWI_CWGR_CHDIV_Pos) /**< \brief (TWI_CWGR) Clock High Divider */
#define TWI_CWGR_CHDIV(value) ((TWI_CWGR_CHDIV_Msk & ((value) << TWI_CWGR_CHDIV_Pos)))
#define TWI_CWGR_CKDIV_Pos 16
#define TWI_CWGR_CKDIV_Msk (0x7u << TWI_CWGR_CKDIV_Pos) /**< \brief (TWI_CWGR) Clock Divider */
#define TWI_CWGR_CKDIV(value) ((TWI_CWGR_CKDIV_Msk & ((value) << TWI_CWGR_CKDIV_Pos)))
/* -------- TWI_SR : (TWI Offset: 0x20) Status Register -------- */
#define TWI_SR_TXCOMP (0x1u << 0) /**< \brief (TWI_SR) Transmission Completed (automatically set / reset) */
#define TWI_SR_RXRDY (0x1u << 1) /**< \brief (TWI_SR) Receive Holding Register Ready (automatically set / reset) */
#define TWI_SR_TXRDY (0x1u << 2) /**< \brief (TWI_SR) Transmit Holding Register Ready (automatically set / reset) */
#define TWI_SR_SVREAD (0x1u << 3) /**< \brief (TWI_SR) Slave Read (automatically set / reset) */
#define TWI_SR_SVACC (0x1u << 4) /**< \brief (TWI_SR) Slave Access (automatically set / reset) */
#define TWI_SR_GACC (0x1u << 5) /**< \brief (TWI_SR) General Call Access (clear on read) */
#define TWI_SR_OVRE (0x1u << 6) /**< \brief (TWI_SR) Overrun Error (clear on read) */
#define TWI_SR_NACK (0x1u << 8) /**< \brief (TWI_SR) Not Acknowledged (clear on read) */
#define TWI_SR_ARBLST (0x1u << 9) /**< \brief (TWI_SR) Arbitration Lost (clear on read) */
#define TWI_SR_SCLWS (0x1u << 10) /**< \brief (TWI_SR) Clock Wait State (automatically set / reset) */
#define TWI_SR_EOSACC (0x1u << 11) /**< \brief (TWI_SR) End Of Slave Access (clear on read) */
#define TWI_SR_ENDRX (0x1u << 12) /**< \brief (TWI_SR) End of RX buffer */
#define TWI_SR_ENDTX (0x1u << 13) /**< \brief (TWI_SR) End of TX buffer */
#define TWI_SR_RXBUFF (0x1u << 14) /**< \brief (TWI_SR) RX Buffer Full */
#define TWI_SR_TXBUFE (0x1u << 15) /**< \brief (TWI_SR) TX Buffer Empty */
/* -------- TWI_IER : (TWI Offset: 0x24) Interrupt Enable Register -------- */
#define TWI_IER_TXCOMP (0x1u << 0) /**< \brief (TWI_IER) Transmission Completed Interrupt Enable */
#define TWI_IER_RXRDY (0x1u << 1) /**< \brief (TWI_IER) Receive Holding Register Ready Interrupt Enable */
#define TWI_IER_TXRDY (0x1u << 2) /**< \brief (TWI_IER) Transmit Holding Register Ready Interrupt Enable */
#define TWI_IER_SVACC (0x1u << 4) /**< \brief (TWI_IER) Slave Access Interrupt Enable */
#define TWI_IER_GACC (0x1u << 5) /**< \brief (TWI_IER) General Call Access Interrupt Enable */
#define TWI_IER_OVRE (0x1u << 6) /**< \brief (TWI_IER) Overrun Error Interrupt Enable */
#define TWI_IER_NACK (0x1u << 8) /**< \brief (TWI_IER) Not Acknowledge Interrupt Enable */
#define TWI_IER_ARBLST (0x1u << 9) /**< \brief (TWI_IER) Arbitration Lost Interrupt Enable */
#define TWI_IER_SCL_WS (0x1u << 10) /**< \brief (TWI_IER) Clock Wait State Interrupt Enable */
#define TWI_IER_EOSACC (0x1u << 11) /**< \brief (TWI_IER) End Of Slave Access Interrupt Enable */
#define TWI_IER_ENDRX (0x1u << 12) /**< \brief (TWI_IER) End of Receive Buffer Interrupt Enable */
#define TWI_IER_ENDTX (0x1u << 13) /**< \brief (TWI_IER) End of Transmit Buffer Interrupt Enable */
#define TWI_IER_RXBUFF (0x1u << 14) /**< \brief (TWI_IER) Receive Buffer Full Interrupt Enable */
#define TWI_IER_TXBUFE (0x1u << 15) /**< \brief (TWI_IER) Transmit Buffer Empty Interrupt Enable */
/* -------- TWI_IDR : (TWI Offset: 0x28) Interrupt Disable Register -------- */
#define TWI_IDR_TXCOMP (0x1u << 0) /**< \brief (TWI_IDR) Transmission Completed Interrupt Disable */
#define TWI_IDR_RXRDY (0x1u << 1) /**< \brief (TWI_IDR) Receive Holding Register Ready Interrupt Disable */
#define TWI_IDR_TXRDY (0x1u << 2) /**< \brief (TWI_IDR) Transmit Holding Register Ready Interrupt Disable */
#define TWI_IDR_SVACC (0x1u << 4) /**< \brief (TWI_IDR) Slave Access Interrupt Disable */
#define TWI_IDR_GACC (0x1u << 5) /**< \brief (TWI_IDR) General Call Access Interrupt Disable */
#define TWI_IDR_OVRE (0x1u << 6) /**< \brief (TWI_IDR) Overrun Error Interrupt Disable */
#define TWI_IDR_NACK (0x1u << 8) /**< \brief (TWI_IDR) Not Acknowledge Interrupt Disable */
#define TWI_IDR_ARBLST (0x1u << 9) /**< \brief (TWI_IDR) Arbitration Lost Interrupt Disable */
#define TWI_IDR_SCL_WS (0x1u << 10) /**< \brief (TWI_IDR) Clock Wait State Interrupt Disable */
#define TWI_IDR_EOSACC (0x1u << 11) /**< \brief (TWI_IDR) End Of Slave Access Interrupt Disable */
#define TWI_IDR_ENDRX (0x1u << 12) /**< \brief (TWI_IDR) End of Receive Buffer Interrupt Disable */
#define TWI_IDR_ENDTX (0x1u << 13) /**< \brief (TWI_IDR) End of Transmit Buffer Interrupt Disable */
#define TWI_IDR_RXBUFF (0x1u << 14) /**< \brief (TWI_IDR) Receive Buffer Full Interrupt Disable */
#define TWI_IDR_TXBUFE (0x1u << 15) /**< \brief (TWI_IDR) Transmit Buffer Empty Interrupt Disable */
/* -------- TWI_IMR : (TWI Offset: 0x2C) Interrupt Mask Register -------- */
#define TWI_IMR_TXCOMP (0x1u << 0) /**< \brief (TWI_IMR) Transmission Completed Interrupt Mask */
#define TWI_IMR_RXRDY (0x1u << 1) /**< \brief (TWI_IMR) Receive Holding Register Ready Interrupt Mask */
#define TWI_IMR_TXRDY (0x1u << 2) /**< \brief (TWI_IMR) Transmit Holding Register Ready Interrupt Mask */
#define TWI_IMR_SVACC (0x1u << 4) /**< \brief (TWI_IMR) Slave Access Interrupt Mask */
#define TWI_IMR_GACC (0x1u << 5) /**< \brief (TWI_IMR) General Call Access Interrupt Mask */
#define TWI_IMR_OVRE (0x1u << 6) /**< \brief (TWI_IMR) Overrun Error Interrupt Mask */
#define TWI_IMR_NACK (0x1u << 8) /**< \brief (TWI_IMR) Not Acknowledge Interrupt Mask */
#define TWI_IMR_ARBLST (0x1u << 9) /**< \brief (TWI_IMR) Arbitration Lost Interrupt Mask */
#define TWI_IMR_SCL_WS (0x1u << 10) /**< \brief (TWI_IMR) Clock Wait State Interrupt Mask */
#define TWI_IMR_EOSACC (0x1u << 11) /**< \brief (TWI_IMR) End Of Slave Access Interrupt Mask */
#define TWI_IMR_ENDRX (0x1u << 12) /**< \brief (TWI_IMR) End of Receive Buffer Interrupt Mask */
#define TWI_IMR_ENDTX (0x1u << 13) /**< \brief (TWI_IMR) End of Transmit Buffer Interrupt Mask */
#define TWI_IMR_RXBUFF (0x1u << 14) /**< \brief (TWI_IMR) Receive Buffer Full Interrupt Mask */
#define TWI_IMR_TXBUFE (0x1u << 15) /**< \brief (TWI_IMR) Transmit Buffer Empty Interrupt Mask */
/* -------- TWI_RHR : (TWI Offset: 0x30) Receive Holding Register -------- */
#define TWI_RHR_RXDATA_Pos 0
#define TWI_RHR_RXDATA_Msk (0xffu << TWI_RHR_RXDATA_Pos) /**< \brief (TWI_RHR) Master or Slave Receive Holding Data */
/* -------- TWI_THR : (TWI Offset: 0x34) Transmit Holding Register -------- */
#define TWI_THR_TXDATA_Pos 0
#define TWI_THR_TXDATA_Msk (0xffu << TWI_THR_TXDATA_Pos) /**< \brief (TWI_THR) Master or Slave Transmit Holding Data */
#define TWI_THR_TXDATA(value) ((TWI_THR_TXDATA_Msk & ((value) << TWI_THR_TXDATA_Pos)))
/* -------- TWI_RPR : (TWI Offset: 0x100) Receive Pointer Register -------- */
#define TWI_RPR_RXPTR_Pos 0
#define TWI_RPR_RXPTR_Msk (0xffffffffu << TWI_RPR_RXPTR_Pos) /**< \brief (TWI_RPR) Receive Pointer Register */
#define TWI_RPR_RXPTR(value) ((TWI_RPR_RXPTR_Msk & ((value) << TWI_RPR_RXPTR_Pos)))
/* -------- TWI_RCR : (TWI Offset: 0x104) Receive Counter Register -------- */
#define TWI_RCR_RXCTR_Pos 0
#define TWI_RCR_RXCTR_Msk (0xffffu << TWI_RCR_RXCTR_Pos) /**< \brief (TWI_RCR) Receive Counter Register */
#define TWI_RCR_RXCTR(value) ((TWI_RCR_RXCTR_Msk & ((value) << TWI_RCR_RXCTR_Pos)))
/* -------- TWI_TPR : (TWI Offset: 0x108) Transmit Pointer Register -------- */
#define TWI_TPR_TXPTR_Pos 0
#define TWI_TPR_TXPTR_Msk (0xffffffffu << TWI_TPR_TXPTR_Pos) /**< \brief (TWI_TPR) Transmit Counter Register */
#define TWI_TPR_TXPTR(value) ((TWI_TPR_TXPTR_Msk & ((value) << TWI_TPR_TXPTR_Pos)))
/* -------- TWI_TCR : (TWI Offset: 0x10C) Transmit Counter Register -------- */
#define TWI_TCR_TXCTR_Pos 0
#define TWI_TCR_TXCTR_Msk (0xffffu << TWI_TCR_TXCTR_Pos) /**< \brief (TWI_TCR) Transmit Counter Register */
#define TWI_TCR_TXCTR(value) ((TWI_TCR_TXCTR_Msk & ((value) << TWI_TCR_TXCTR_Pos)))
/* -------- TWI_RNPR : (TWI Offset: 0x110) Receive Next Pointer Register -------- */
#define TWI_RNPR_RXNPTR_Pos 0
#define TWI_RNPR_RXNPTR_Msk (0xffffffffu << TWI_RNPR_RXNPTR_Pos) /**< \brief (TWI_RNPR) Receive Next Pointer */
#define TWI_RNPR_RXNPTR(value) ((TWI_RNPR_RXNPTR_Msk & ((value) << TWI_RNPR_RXNPTR_Pos)))
/* -------- TWI_RNCR : (TWI Offset: 0x114) Receive Next Counter Register -------- */
#define TWI_RNCR_RXNCTR_Pos 0
#define TWI_RNCR_RXNCTR_Msk (0xffffu << TWI_RNCR_RXNCTR_Pos) /**< \brief (TWI_RNCR) Receive Next Counter */
#define TWI_RNCR_RXNCTR(value) ((TWI_RNCR_RXNCTR_Msk & ((value) << TWI_RNCR_RXNCTR_Pos)))
/* -------- TWI_TNPR : (TWI Offset: 0x118) Transmit Next Pointer Register -------- */
#define TWI_TNPR_TXNPTR_Pos 0
#define TWI_TNPR_TXNPTR_Msk (0xffffffffu << TWI_TNPR_TXNPTR_Pos) /**< \brief (TWI_TNPR) Transmit Next Pointer */
#define TWI_TNPR_TXNPTR(value) ((TWI_TNPR_TXNPTR_Msk & ((value) << TWI_TNPR_TXNPTR_Pos)))
/* -------- TWI_TNCR : (TWI Offset: 0x11C) Transmit Next Counter Register -------- */
#define TWI_TNCR_TXNCTR_Pos 0
#define TWI_TNCR_TXNCTR_Msk (0xffffu << TWI_TNCR_TXNCTR_Pos) /**< \brief (TWI_TNCR) Transmit Counter Next */
#define TWI_TNCR_TXNCTR(value) ((TWI_TNCR_TXNCTR_Msk & ((value) << TWI_TNCR_TXNCTR_Pos)))
/* -------- TWI_PTCR : (TWI Offset: 0x120) Transfer Control Register -------- */
#define TWI_PTCR_RXTEN (0x1u << 0) /**< \brief (TWI_PTCR) Receiver Transfer Enable */
#define TWI_PTCR_RXTDIS (0x1u << 1) /**< \brief (TWI_PTCR) Receiver Transfer Disable */
#define TWI_PTCR_TXTEN (0x1u << 8) /**< \brief (TWI_PTCR) Transmitter Transfer Enable */
#define TWI_PTCR_TXTDIS (0x1u << 9) /**< \brief (TWI_PTCR) Transmitter Transfer Disable */
/* -------- TWI_PTSR : (TWI Offset: 0x124) Transfer Status Register -------- */
#define TWI_PTSR_RXTEN (0x1u << 0) /**< \brief (TWI_PTSR) Receiver Transfer Enable */
#define TWI_PTSR_TXTEN (0x1u << 8) /**< \brief (TWI_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_TWI_COMPONENT_ */

#ifndef _SAM3N_UART_COMPONENT_
#define _SAM3N_UART_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Universal Asynchronous Receiver Transmitter */
/* ============================================================================= */
/** \addtogroup SAM3N_UART Universal Asynchronous Receiver Transmitter */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Uart hardware registers */
typedef struct {
  WoReg UART_CR;       /**< \brief (Uart Offset: 0x0000) Control Register */
  RwReg UART_MR;       /**< \brief (Uart Offset: 0x0004) Mode Register */
  WoReg UART_IER;      /**< \brief (Uart Offset: 0x0008) Interrupt Enable Register */
  WoReg UART_IDR;      /**< \brief (Uart Offset: 0x000C) Interrupt Disable Register */
  RoReg UART_IMR;      /**< \brief (Uart Offset: 0x0010) Interrupt Mask Register */
  RoReg UART_SR;       /**< \brief (Uart Offset: 0x0014) Status Register */
  RoReg UART_RHR;      /**< \brief (Uart Offset: 0x0018) Receive Holding Register */
  WoReg UART_THR;      /**< \brief (Uart Offset: 0x001C) Transmit Holding Register */
  RwReg UART_BRGR;     /**< \brief (Uart Offset: 0x0020) Baud Rate Generator Register */
  RoReg Reserved1[55];
  RwReg UART_RPR;      /**< \brief (Uart Offset: 0x100) Receive Pointer Register */
  RwReg UART_RCR;      /**< \brief (Uart Offset: 0x104) Receive Counter Register */
  RwReg UART_TPR;      /**< \brief (Uart Offset: 0x108) Transmit Pointer Register */
  RwReg UART_TCR;      /**< \brief (Uart Offset: 0x10C) Transmit Counter Register */
  RwReg UART_RNPR;     /**< \brief (Uart Offset: 0x110) Receive Next Pointer Register */
  RwReg UART_RNCR;     /**< \brief (Uart Offset: 0x114) Receive Next Counter Register */
  RwReg UART_TNPR;     /**< \brief (Uart Offset: 0x118) Transmit Next Pointer Register */
  RwReg UART_TNCR;     /**< \brief (Uart Offset: 0x11C) Transmit Next Counter Register */
  WoReg UART_PTCR;     /**< \brief (Uart Offset: 0x120) Transfer Control Register */
  RoReg UART_PTSR;     /**< \brief (Uart Offset: 0x124) Transfer Status Register */
} Uart;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- UART_CR : (UART Offset: 0x0000) Control Register -------- */
#define UART_CR_RSTRX (0x1u << 2) /**< \brief (UART_CR) Reset Receiver */
#define UART_CR_RSTTX (0x1u << 3) /**< \brief (UART_CR) Reset Transmitter */
#define UART_CR_RXEN (0x1u << 4) /**< \brief (UART_CR) Receiver Enable */
#define UART_CR_RXDIS (0x1u << 5) /**< \brief (UART_CR) Receiver Disable */
#define UART_CR_TXEN (0x1u << 6) /**< \brief (UART_CR) Transmitter Enable */
#define UART_CR_TXDIS (0x1u << 7) /**< \brief (UART_CR) Transmitter Disable */
#define UART_CR_RSTSTA (0x1u << 8) /**< \brief (UART_CR) Reset Status Bits */
/* -------- UART_MR : (UART Offset: 0x0004) Mode Register -------- */
#define UART_MR_PAR_Pos 9
#define UART_MR_PAR_Msk (0x7u << UART_MR_PAR_Pos) /**< \brief (UART_MR) Parity Type */
#define   UART_MR_PAR_EVEN (0x0u << 9) /**< \brief (UART_MR) Even parity */
#define   UART_MR_PAR_ODD (0x1u << 9) /**< \brief (UART_MR) Odd parity */
#define   UART_MR_PAR_SPACE (0x2u << 9) /**< \brief (UART_MR) Space: parity forced to 0 */
#define   UART_MR_PAR_MARK (0x3u << 9) /**< \brief (UART_MR) Mark: parity forced to 1 */
#define   UART_MR_PAR_NO (0x4u << 9) /**< \brief (UART_MR) No parity */
#define UART_MR_CHMODE_Pos 14
#define UART_MR_CHMODE_Msk (0x3u << UART_MR_CHMODE_Pos) /**< \brief (UART_MR) Channel Mode */
#define   UART_MR_CHMODE_NORMAL (0x0u << 14) /**< \brief (UART_MR) Normal Mode */
#define   UART_MR_CHMODE_AUTOMATIC (0x1u << 14) /**< \brief (UART_MR) Automatic Echo */
#define   UART_MR_CHMODE_LOCAL_LOOPBACK (0x2u << 14) /**< \brief (UART_MR) Local Loopback */
#define   UART_MR_CHMODE_REMOTE_LOOPBACK (0x3u << 14) /**< \brief (UART_MR) Remote Loopback */
/* -------- UART_IER : (UART Offset: 0x0008) Interrupt Enable Register -------- */
#define UART_IER_RXRDY (0x1u << 0) /**< \brief (UART_IER) Enable RXRDY Interrupt */
#define UART_IER_TXRDY (0x1u << 1) /**< \brief (UART_IER) Enable TXRDY Interrupt */
#define UART_IER_ENDRX (0x1u << 3) /**< \brief (UART_IER) Enable End of Receive Transfer Interrupt */
#define UART_IER_ENDTX (0x1u << 4) /**< \brief (UART_IER) Enable End of Transmit Interrupt */
#define UART_IER_OVRE (0x1u << 5) /**< \brief (UART_IER) Enable Overrun Error Interrupt */
#define UART_IER_FRAME (0x1u << 6) /**< \brief (UART_IER) Enable Framing Error Interrupt */
#define UART_IER_PARE (0x1u << 7) /**< \brief (UART_IER) Enable Parity Error Interrupt */
#define UART_IER_TXEMPTY (0x1u << 9) /**< \brief (UART_IER) Enable TXEMPTY Interrupt */
#define UART_IER_TXBUFE (0x1u << 11) /**< \brief (UART_IER) Enable Buffer Empty Interrupt */
#define UART_IER_RXBUFF (0x1u << 12) /**< \brief (UART_IER) Enable Buffer Full Interrupt */
/* -------- UART_IDR : (UART Offset: 0x000C) Interrupt Disable Register -------- */
#define UART_IDR_RXRDY (0x1u << 0) /**< \brief (UART_IDR) Disable RXRDY Interrupt */
#define UART_IDR_TXRDY (0x1u << 1) /**< \brief (UART_IDR) Disable TXRDY Interrupt */
#define UART_IDR_ENDRX (0x1u << 3) /**< \brief (UART_IDR) Disable End of Receive Transfer Interrupt */
#define UART_IDR_ENDTX (0x1u << 4) /**< \brief (UART_IDR) Disable End of Transmit Interrupt */
#define UART_IDR_OVRE (0x1u << 5) /**< \brief (UART_IDR) Disable Overrun Error Interrupt */
#define UART_IDR_FRAME (0x1u << 6) /**< \brief (UART_IDR) Disable Framing Error Interrupt */
#define UART_IDR_PARE (0x1u << 7) /**< \brief (UART_IDR) Disable Parity Error Interrupt */
#define UART_IDR_TXEMPTY (0x1u << 9) /**< \brief (UART_IDR) Disable TXEMPTY Interrupt */
#define UART_IDR_TXBUFE (0x1u << 11) /**< \brief (UART_IDR) Disable Buffer Empty Interrupt */
#define UART_IDR_RXBUFF (0x1u << 12) /**< \brief (UART_IDR) Disable Buffer Full Interrupt */
/* -------- UART_IMR : (UART Offset: 0x0010) Interrupt Mask Register -------- */
#define UART_IMR_RXRDY (0x1u << 0) /**< \brief (UART_IMR) Mask RXRDY Interrupt */
#define UART_IMR_TXRDY (0x1u << 1) /**< \brief (UART_IMR) Disable TXRDY Interrupt */
#define UART_IMR_ENDRX (0x1u << 3) /**< \brief (UART_IMR) Mask End of Receive Transfer Interrupt */
#define UART_IMR_ENDTX (0x1u << 4) /**< \brief (UART_IMR) Mask End of Transmit Interrupt */
#define UART_IMR_OVRE (0x1u << 5) /**< \brief (UART_IMR) Mask Overrun Error Interrupt */
#define UART_IMR_FRAME (0x1u << 6) /**< \brief (UART_IMR) Mask Framing Error Interrupt */
#define UART_IMR_PARE (0x1u << 7) /**< \brief (UART_IMR) Mask Parity Error Interrupt */
#define UART_IMR_TXEMPTY (0x1u << 9) /**< \brief (UART_IMR) Mask TXEMPTY Interrupt */
#define UART_IMR_TXBUFE (0x1u << 11) /**< \brief (UART_IMR) Mask TXBUFE Interrupt */
#define UART_IMR_RXBUFF (0x1u << 12) /**< \brief (UART_IMR) Mask RXBUFF Interrupt */
/* -------- UART_SR : (UART Offset: 0x0014) Status Register -------- */
#define UART_SR_RXRDY (0x1u << 0) /**< \brief (UART_SR) Receiver Ready */
#define UART_SR_TXRDY (0x1u << 1) /**< \brief (UART_SR) Transmitter Ready */
#define UART_SR_ENDRX (0x1u << 3) /**< \brief (UART_SR) End of Receiver Transfer */
#define UART_SR_ENDTX (0x1u << 4) /**< \brief (UART_SR) End of Transmitter Transfer */
#define UART_SR_OVRE (0x1u << 5) /**< \brief (UART_SR) Overrun Error */
#define UART_SR_FRAME (0x1u << 6) /**< \brief (UART_SR) Framing Error */
#define UART_SR_PARE (0x1u << 7) /**< \brief (UART_SR) Parity Error */
#define UART_SR_TXEMPTY (0x1u << 9) /**< \brief (UART_SR) Transmitter Empty */
#define UART_SR_TXBUFE (0x1u << 11) /**< \brief (UART_SR) Transmission Buffer Empty */
#define UART_SR_RXBUFF (0x1u << 12) /**< \brief (UART_SR) Receive Buffer Full */
/* -------- UART_RHR : (UART Offset: 0x0018) Receive Holding Register -------- */
#define UART_RHR_RXCHR_Pos 0
#define UART_RHR_RXCHR_Msk (0xffu << UART_RHR_RXCHR_Pos) /**< \brief (UART_RHR) Received Character */
/* -------- UART_THR : (UART Offset: 0x001C) Transmit Holding Register -------- */
#define UART_THR_TXCHR_Pos 0
#define UART_THR_TXCHR_Msk (0xffu << UART_THR_TXCHR_Pos) /**< \brief (UART_THR) Character to be Transmitted */
#define UART_THR_TXCHR(value) ((UART_THR_TXCHR_Msk & ((value) << UART_THR_TXCHR_Pos)))
/* -------- UART_BRGR : (UART Offset: 0x0020) Baud Rate Generator Register -------- */
#define UART_BRGR_CD_Pos 0
#define UART_BRGR_CD_Msk (0xffffu << UART_BRGR_CD_Pos) /**< \brief (UART_BRGR) Clock Divisor */
#define UART_BRGR_CD(value) ((UART_BRGR_CD_Msk & ((value) << UART_BRGR_CD_Pos)))
/* -------- UART_RPR : (UART Offset: 0x100) Receive Pointer Register -------- */
#define UART_RPR_RXPTR_Pos 0
#define UART_RPR_RXPTR_Msk (0xffffffffu << UART_RPR_RXPTR_Pos) /**< \brief (UART_RPR) Receive Pointer Register */
#define UART_RPR_RXPTR(value) ((UART_RPR_RXPTR_Msk & ((value) << UART_RPR_RXPTR_Pos)))
/* -------- UART_RCR : (UART Offset: 0x104) Receive Counter Register -------- */
#define UART_RCR_RXCTR_Pos 0
#define UART_RCR_RXCTR_Msk (0xffffu << UART_RCR_RXCTR_Pos) /**< \brief (UART_RCR) Receive Counter Register */
#define UART_RCR_RXCTR(value) ((UART_RCR_RXCTR_Msk & ((value) << UART_RCR_RXCTR_Pos)))
/* -------- UART_TPR : (UART Offset: 0x108) Transmit Pointer Register -------- */
#define UART_TPR_TXPTR_Pos 0
#define UART_TPR_TXPTR_Msk (0xffffffffu << UART_TPR_TXPTR_Pos) /**< \brief (UART_TPR) Transmit Counter Register */
#define UART_TPR_TXPTR(value) ((UART_TPR_TXPTR_Msk & ((value) << UART_TPR_TXPTR_Pos)))
/* -------- UART_TCR : (UART Offset: 0x10C) Transmit Counter Register -------- */
#define UART_TCR_TXCTR_Pos 0
#define UART_TCR_TXCTR_Msk (0xffffu << UART_TCR_TXCTR_Pos) /**< \brief (UART_TCR) Transmit Counter Register */
#define UART_TCR_TXCTR(value) ((UART_TCR_TXCTR_Msk & ((value) << UART_TCR_TXCTR_Pos)))
/* -------- UART_RNPR : (UART Offset: 0x110) Receive Next Pointer Register -------- */
#define UART_RNPR_RXNPTR_Pos 0
#define UART_RNPR_RXNPTR_Msk (0xffffffffu << UART_RNPR_RXNPTR_Pos) /**< \brief (UART_RNPR) Receive Next Pointer */
#define UART_RNPR_RXNPTR(value) ((UART_RNPR_RXNPTR_Msk & ((value) << UART_RNPR_RXNPTR_Pos)))
/* -------- UART_RNCR : (UART Offset: 0x114) Receive Next Counter Register -------- */
#define UART_RNCR_RXNCTR_Pos 0
#define UART_RNCR_RXNCTR_Msk (0xffffu << UART_RNCR_RXNCTR_Pos) /**< \brief (UART_RNCR) Receive Next Counter */
#define UART_RNCR_RXNCTR(value) ((UART_RNCR_RXNCTR_Msk & ((value) << UART_RNCR_RXNCTR_Pos)))
/* -------- UART_TNPR : (UART Offset: 0x118) Transmit Next Pointer Register -------- */
#define UART_TNPR_TXNPTR_Pos 0
#define UART_TNPR_TXNPTR_Msk (0xffffffffu << UART_TNPR_TXNPTR_Pos) /**< \brief (UART_TNPR) Transmit Next Pointer */
#define UART_TNPR_TXNPTR(value) ((UART_TNPR_TXNPTR_Msk & ((value) << UART_TNPR_TXNPTR_Pos)))
/* -------- UART_TNCR : (UART Offset: 0x11C) Transmit Next Counter Register -------- */
#define UART_TNCR_TXNCTR_Pos 0
#define UART_TNCR_TXNCTR_Msk (0xffffu << UART_TNCR_TXNCTR_Pos) /**< \brief (UART_TNCR) Transmit Counter Next */
#define UART_TNCR_TXNCTR(value) ((UART_TNCR_TXNCTR_Msk & ((value) << UART_TNCR_TXNCTR_Pos)))
/* -------- UART_PTCR : (UART Offset: 0x120) Transfer Control Register -------- */
#define UART_PTCR_RXTEN (0x1u << 0) /**< \brief (UART_PTCR) Receiver Transfer Enable */
#define UART_PTCR_RXTDIS (0x1u << 1) /**< \brief (UART_PTCR) Receiver Transfer Disable */
#define UART_PTCR_TXTEN (0x1u << 8) /**< \brief (UART_PTCR) Transmitter Transfer Enable */
#define UART_PTCR_TXTDIS (0x1u << 9) /**< \brief (UART_PTCR) Transmitter Transfer Disable */
/* -------- UART_PTSR : (UART Offset: 0x124) Transfer Status Register -------- */
#define UART_PTSR_RXTEN (0x1u << 0) /**< \brief (UART_PTSR) Receiver Transfer Enable */
#define UART_PTSR_TXTEN (0x1u << 8) /**< \brief (UART_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_UART_COMPONENT_ */

#ifndef _SAM3N_USART_COMPONENT_
#define _SAM3N_USART_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Universal Synchronous Asynchronous Receiver Transmitter */
/* ============================================================================= */
/** \addtogroup SAM3N_USART Universal Synchronous Asynchronous Receiver Transmitter */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Usart hardware registers */
typedef struct {
  WoReg US_CR;         /**< \brief (Usart Offset: 0x0000) Control Register */
  RwReg US_MR;         /**< \brief (Usart Offset: 0x0004) Mode Register */
  WoReg US_IER;        /**< \brief (Usart Offset: 0x0008) Interrupt Enable Register */
  WoReg US_IDR;        /**< \brief (Usart Offset: 0x000C) Interrupt Disable Register */
  RoReg US_IMR;        /**< \brief (Usart Offset: 0x0010) Interrupt Mask Register */
  RoReg US_CSR;        /**< \brief (Usart Offset: 0x0014) Channel Status Register */
  RoReg US_RHR;        /**< \brief (Usart Offset: 0x0018) Receiver Holding Register */
  WoReg US_THR;        /**< \brief (Usart Offset: 0x001C) Transmitter Holding Register */
  RwReg US_BRGR;       /**< \brief (Usart Offset: 0x0020) Baud Rate Generator Register */
  RwReg US_RTOR;       /**< \brief (Usart Offset: 0x0024) Receiver Time-out Register */
  RwReg US_TTGR;       /**< \brief (Usart Offset: 0x0028) Transmitter Timeguard Register */
  RoReg Reserved1[5];
  RwReg US_FIDI;       /**< \brief (Usart Offset: 0x0040) FI DI Ratio Register */
  RoReg US_NER;        /**< \brief (Usart Offset: 0x0044) Number of Errors Register */
  RoReg Reserved2[1];
  RwReg US_IF;         /**< \brief (Usart Offset: 0x004C) IrDA Filter Register */
  RoReg Reserved3[37];
  RwReg US_WPMR;       /**< \brief (Usart Offset: 0xE4) Write Protect Mode Register */
  RoReg US_WPSR;       /**< \brief (Usart Offset: 0xE8) Write Protect Status Register */
  RoReg Reserved4[5];
  RwReg US_RPR;        /**< \brief (Usart Offset: 0x100) Receive Pointer Register */
  RwReg US_RCR;        /**< \brief (Usart Offset: 0x104) Receive Counter Register */
  RwReg US_TPR;        /**< \brief (Usart Offset: 0x108) Transmit Pointer Register */
  RwReg US_TCR;        /**< \brief (Usart Offset: 0x10C) Transmit Counter Register */
  RwReg US_RNPR;       /**< \brief (Usart Offset: 0x110) Receive Next Pointer Register */
  RwReg US_RNCR;       /**< \brief (Usart Offset: 0x114) Receive Next Counter Register */
  RwReg US_TNPR;       /**< \brief (Usart Offset: 0x118) Transmit Next Pointer Register */
  RwReg US_TNCR;       /**< \brief (Usart Offset: 0x11C) Transmit Next Counter Register */
  WoReg US_PTCR;       /**< \brief (Usart Offset: 0x120) Transfer Control Register */
  RoReg US_PTSR;       /**< \brief (Usart Offset: 0x124) Transfer Status Register */
} Usart;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- US_CR : (USART Offset: 0x0000) Control Register -------- */
#define US_CR_RSTRX (0x1u << 2) /**< \brief (US_CR) Reset Receiver */
#define US_CR_RSTTX (0x1u << 3) /**< \brief (US_CR) Reset Transmitter */
#define US_CR_RXEN (0x1u << 4) /**< \brief (US_CR) Receiver Enable */
#define US_CR_RXDIS (0x1u << 5) /**< \brief (US_CR) Receiver Disable */
#define US_CR_TXEN (0x1u << 6) /**< \brief (US_CR) Transmitter Enable */
#define US_CR_TXDIS (0x1u << 7) /**< \brief (US_CR) Transmitter Disable */
#define US_CR_RSTSTA (0x1u << 8) /**< \brief (US_CR) Reset Status Bits */
#define US_CR_STTBRK (0x1u << 9) /**< \brief (US_CR) Start Break */
#define US_CR_STPBRK (0x1u << 10) /**< \brief (US_CR) Stop Break */
#define US_CR_STTTO (0x1u << 11) /**< \brief (US_CR) Start Time-out */
#define US_CR_SENDA (0x1u << 12) /**< \brief (US_CR) Send Address */
#define US_CR_RSTIT (0x1u << 13) /**< \brief (US_CR) Reset Iterations */
#define US_CR_RSTNACK (0x1u << 14) /**< \brief (US_CR) Reset Non Acknowledge */
#define US_CR_RETTO (0x1u << 15) /**< \brief (US_CR) Rearm Time-out */
#define US_CR_RTSEN (0x1u << 18) /**< \brief (US_CR) Request to Send Enable */
#define US_CR_FCS (0x1u << 18) /**< \brief (US_CR) Force SPI Chip Select */
#define US_CR_RTSDIS (0x1u << 19) /**< \brief (US_CR) Request to Send Disable */
#define US_CR_RCS (0x1u << 19) /**< \brief (US_CR) Release SPI Chip Select */
/* -------- US_MR : (USART Offset: 0x0004) Mode Register -------- */
#define US_MR_USART_MODE_Pos 0
#define US_MR_USART_MODE_Msk (0xfu << US_MR_USART_MODE_Pos) /**< \brief (US_MR)  */
#define   US_MR_USART_MODE_NORMAL (0x0u << 0) /**< \brief (US_MR) Normal mode */
#define   US_MR_USART_MODE_RS485 (0x1u << 0) /**< \brief (US_MR) RS485 */
#define   US_MR_USART_MODE_HW_HANDSHAKING (0x2u << 0) /**< \brief (US_MR) Hardware Handshaking */
#define   US_MR_USART_MODE_IS07816_T_0 (0x4u << 0) /**< \brief (US_MR) IS07816 Protocol: T = 0 */
#define   US_MR_USART_MODE_IS07816_T_1 (0x6u << 0) /**< \brief (US_MR) IS07816 Protocol: T = 1 */
#define   US_MR_USART_MODE_IRDA (0x8u << 0) /**< \brief (US_MR) IrDA */
#define   US_MR_USART_MODE_SPI_MASTER (0xEu << 0) /**< \brief (US_MR) SPI Master */
#define   US_MR_USART_MODE_SPI_SLAVE (0xFu << 0) /**< \brief (US_MR) SPI Slave */
#define US_MR_USCLKS_Pos 4
#define US_MR_USCLKS_Msk (0x3u << US_MR_USCLKS_Pos) /**< \brief (US_MR) Clock Selection */
#define   US_MR_USCLKS_MCK (0x0u << 4) /**< \brief (US_MR) Master Clock MCK is selected */
#define   US_MR_USCLKS_DIV (0x1u << 4) /**< \brief (US_MR) Internal Clock Divided MCK/DIV (DIV=8) is selected */
#define   US_MR_USCLKS_SCK (0x3u << 4) /**< \brief (US_MR) Serial Clock SLK is selected */
#define US_MR_CHRL_Pos 6
#define US_MR_CHRL_Msk (0x3u << US_MR_CHRL_Pos) /**< \brief (US_MR) Character Length. */
#define   US_MR_CHRL_5_BIT (0x0u << 6) /**< \brief (US_MR) Character length is 5 bits */
#define   US_MR_CHRL_6_BIT (0x1u << 6) /**< \brief (US_MR) Character length is 6 bits */
#define   US_MR_CHRL_7_BIT (0x2u << 6) /**< \brief (US_MR) Character length is 7 bits */
#define   US_MR_CHRL_8_BIT (0x3u << 6) /**< \brief (US_MR) Character length is 8 bits */
#define US_MR_SYNC (0x1u << 8) /**< \brief (US_MR) Synchronous Mode Select */
#define US_MR_CPHA (0x1u << 8) /**< \brief (US_MR) SPI Clock Phase */
#define US_MR_PAR_Pos 9
#define US_MR_PAR_Msk (0x7u << US_MR_PAR_Pos) /**< \brief (US_MR) Parity Type */
#define   US_MR_PAR_EVEN (0x0u << 9) /**< \brief (US_MR) Even parity */
#define   US_MR_PAR_ODD (0x1u << 9) /**< \brief (US_MR) Odd parity */
#define   US_MR_PAR_SPACE (0x2u << 9) /**< \brief (US_MR) Parity forced to 0 (Space) */
#define   US_MR_PAR_MARK (0x3u << 9) /**< \brief (US_MR) Parity forced to 1 (Mark) */
#define   US_MR_PAR_NO (0x4u << 9) /**< \brief (US_MR) No parity */
#define   US_MR_PAR_MULTIDROP (0x6u << 9) /**< \brief (US_MR) Multidrop mode */
#define US_MR_NBSTOP_Pos 12
#define US_MR_NBSTOP_Msk (0x3u << US_MR_NBSTOP_Pos) /**< \brief (US_MR) Number of Stop Bits */
#define   US_MR_NBSTOP_1_BIT (0x0u << 12) /**< \brief (US_MR) 1 stop bit */
#define   US_MR_NBSTOP_1_5_BIT (0x1u << 12) /**< \brief (US_MR) 1.5 stop bit (SYNC = 0) or reserved (SYNC = 1) */
#define   US_MR_NBSTOP_2_BIT (0x2u << 12) /**< \brief (US_MR) 2 stop bits */
#define US_MR_CHMODE_Pos 14
#define US_MR_CHMODE_Msk (0x3u << US_MR_CHMODE_Pos) /**< \brief (US_MR) Channel Mode */
#define   US_MR_CHMODE_NORMAL (0x0u << 14) /**< \brief (US_MR) Normal Mode */
#define   US_MR_CHMODE_AUTOMATIC (0x1u << 14) /**< \brief (US_MR) Automatic Echo. Receiver input is connected to the TXD pin. */
#define   US_MR_CHMODE_LOCAL_LOOPBACK (0x2u << 14) /**< \brief (US_MR) Local Loopback. Transmitter output is connected to the Receiver Input. */
#define   US_MR_CHMODE_REMOTE_LOOPBACK (0x3u << 14) /**< \brief (US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin. */
#define US_MR_MSBF (0x1u << 16) /**< \brief (US_MR) Bit Order */
#define US_MR_CPOL (0x1u << 16) /**< \brief (US_MR) SPI Clock Polarity */
#define US_MR_MODE9 (0x1u << 17) /**< \brief (US_MR) 9-bit Character Length */
#define US_MR_CLKO (0x1u << 18) /**< \brief (US_MR) Clock Output Select */
#define US_MR_OVER (0x1u << 19) /**< \brief (US_MR) Oversampling Mode */
#define US_MR_INACK (0x1u << 20) /**< \brief (US_MR) Inhibit Non Acknowledge */
#define US_MR_DSNACK (0x1u << 21) /**< \brief (US_MR) Disable Successive NACK */
#define US_MR_INVDATA (0x1u << 23) /**< \brief (US_MR) INverted Data */
#define US_MR_MAX_ITERATION_Pos 24
#define US_MR_MAX_ITERATION_Msk (0x7u << US_MR_MAX_ITERATION_Pos) /**< \brief (US_MR)  */
#define US_MR_MAX_ITERATION(value) ((US_MR_MAX_ITERATION_Msk & ((value) << US_MR_MAX_ITERATION_Pos)))
#define US_MR_FILTER (0x1u << 28) /**< \brief (US_MR) Infrared Receive Line Filter */
/* -------- US_IER : (USART Offset: 0x0008) Interrupt Enable Register -------- */
#define US_IER_RXRDY (0x1u << 0) /**< \brief (US_IER) RXRDY Interrupt Enable */
#define US_IER_TXRDY (0x1u << 1) /**< \brief (US_IER) TXRDY Interrupt Enable */
#define US_IER_RXBRK (0x1u << 2) /**< \brief (US_IER) Receiver Break Interrupt Enable */
#define US_IER_ENDRX (0x1u << 3) /**< \brief (US_IER) End of Receive Transfer Interrupt Enable */
#define US_IER_ENDTX (0x1u << 4) /**< \brief (US_IER) End of Transmit Interrupt Enable */
#define US_IER_OVRE (0x1u << 5) /**< \brief (US_IER) Overrun Error Interrupt Enable */
#define US_IER_FRAME (0x1u << 6) /**< \brief (US_IER) Framing Error Interrupt Enable */
#define US_IER_PARE (0x1u << 7) /**< \brief (US_IER) Parity Error Interrupt Enable */
#define US_IER_TIMEOUT (0x1u << 8) /**< \brief (US_IER) Time-out Interrupt Enable */
#define US_IER_TXEMPTY (0x1u << 9) /**< \brief (US_IER) TXEMPTY Interrupt Enable */
#define US_IER_ITER (0x1u << 10) /**< \brief (US_IER) Max number of Repetitions Reached */
#define US_IER_UNRE (0x1u << 10) /**< \brief (US_IER) SPI Underrun Error */
#define US_IER_TXBUFE (0x1u << 11) /**< \brief (US_IER) Buffer Empty Interrupt Enable */
#define US_IER_RXBUFF (0x1u << 12) /**< \brief (US_IER) Buffer Full Interrupt Enable */
#define US_IER_NACK (0x1u << 13) /**< \brief (US_IER) Non AcknowledgeInterrupt Enable */
#define US_IER_CTSIC (0x1u << 19) /**< \brief (US_IER) Clear to Send Input Change Interrupt Enable */
/* -------- US_IDR : (USART Offset: 0x000C) Interrupt Disable Register -------- */
#define US_IDR_RXRDY (0x1u << 0) /**< \brief (US_IDR) RXRDY Interrupt Disable */
#define US_IDR_TXRDY (0x1u << 1) /**< \brief (US_IDR) TXRDY Interrupt Disable */
#define US_IDR_RXBRK (0x1u << 2) /**< \brief (US_IDR) Receiver Break Interrupt Disable */
#define US_IDR_ENDRX (0x1u << 3) /**< \brief (US_IDR) End of Receive Transfer Interrupt Disable */
#define US_IDR_ENDTX (0x1u << 4) /**< \brief (US_IDR) End of Transmit Interrupt Disable */
#define US_IDR_OVRE (0x1u << 5) /**< \brief (US_IDR) Overrun Error Interrupt Disable */
#define US_IDR_FRAME (0x1u << 6) /**< \brief (US_IDR) Framing Error Interrupt Disable */
#define US_IDR_PARE (0x1u << 7) /**< \brief (US_IDR) Parity Error Interrupt Disable */
#define US_IDR_TIMEOUT (0x1u << 8) /**< \brief (US_IDR) Time-out Interrupt Disable */
#define US_IDR_TXEMPTY (0x1u << 9) /**< \brief (US_IDR) TXEMPTY Interrupt Disable */
#define US_IDR_ITER (0x1u << 10) /**< \brief (US_IDR) Max number of Repetitions Reached Disable */
#define US_IDR_UNRE (0x1u << 10) /**< \brief (US_IDR) SPI Underrun Error Disable */
#define US_IDR_TXBUFE (0x1u << 11) /**< \brief (US_IDR) Buffer Empty Interrupt Disable */
#define US_IDR_RXBUFF (0x1u << 12) /**< \brief (US_IDR) Buffer Full Interrupt Disable */
#define US_IDR_NACK (0x1u << 13) /**< \brief (US_IDR) Non AcknowledgeInterrupt Disable */
#define US_IDR_CTSIC (0x1u << 19) /**< \brief (US_IDR) Clear to Send Input Change Interrupt Disable */
/* -------- US_IMR : (USART Offset: 0x0010) Interrupt Mask Register -------- */
#define US_IMR_RXRDY (0x1u << 0) /**< \brief (US_IMR) RXRDY Interrupt Mask */
#define US_IMR_TXRDY (0x1u << 1) /**< \brief (US_IMR) TXRDY Interrupt Mask */
#define US_IMR_RXBRK (0x1u << 2) /**< \brief (US_IMR) Receiver Break Interrupt Mask */
#define US_IMR_ENDRX (0x1u << 3) /**< \brief (US_IMR) End of Receive Transfer Interrupt Mask */
#define US_IMR_ENDTX (0x1u << 4) /**< \brief (US_IMR) End of Transmit Interrupt Mask */
#define US_IMR_OVRE (0x1u << 5) /**< \brief (US_IMR) Overrun Error Interrupt Mask */
#define US_IMR_FRAME (0x1u << 6) /**< \brief (US_IMR) Framing Error Interrupt Mask */
#define US_IMR_PARE (0x1u << 7) /**< \brief (US_IMR) Parity Error Interrupt Mask */
#define US_IMR_TIMEOUT (0x1u << 8) /**< \brief (US_IMR) Time-out Interrupt Mask */
#define US_IMR_TXEMPTY (0x1u << 9) /**< \brief (US_IMR) TXEMPTY Interrupt Mask */
#define US_IMR_ITER (0x1u << 10) /**< \brief (US_IMR) Max number of Repetitions Reached Mask */
#define US_IMR_UNRE (0x1u << 10) /**< \brief (US_IMR) SPI Underrun Error Mask */
#define US_IMR_TXBUFE (0x1u << 11) /**< \brief (US_IMR) Buffer Empty Interrupt Mask */
#define US_IMR_RXBUFF (0x1u << 12) /**< \brief (US_IMR) Buffer Full Interrupt Mask */
#define US_IMR_NACK (0x1u << 13) /**< \brief (US_IMR) Non AcknowledgeInterrupt Mask */
#define US_IMR_CTSIC (0x1u << 19) /**< \brief (US_IMR) Clear to Send Input Change Interrupt Mask */
/* -------- US_CSR : (USART Offset: 0x0014) Channel Status Register -------- */
#define US_CSR_RXRDY (0x1u << 0) /**< \brief (US_CSR) Receiver Ready */
#define US_CSR_TXRDY (0x1u << 1) /**< \brief (US_CSR) Transmitter Ready */
#define US_CSR_RXBRK (0x1u << 2) /**< \brief (US_CSR) Break Received/End of Break */
#define US_CSR_ENDRX (0x1u << 3) /**< \brief (US_CSR) End of Receiver Transfer */
#define US_CSR_ENDTX (0x1u << 4) /**< \brief (US_CSR) End of Transmitter Transfer */
#define US_CSR_OVRE (0x1u << 5) /**< \brief (US_CSR) Overrun Error */
#define US_CSR_FRAME (0x1u << 6) /**< \brief (US_CSR) Framing Error */
#define US_CSR_PARE (0x1u << 7) /**< \brief (US_CSR) Parity Error */
#define US_CSR_TIMEOUT (0x1u << 8) /**< \brief (US_CSR) Receiver Time-out */
#define US_CSR_TXEMPTY (0x1u << 9) /**< \brief (US_CSR) Transmitter Empty */
#define US_CSR_ITER (0x1u << 10) /**< \brief (US_CSR) Max number of Repetitions Reached */
#define US_CSR_UNRE (0x1u << 10) /**< \brief (US_CSR) SPI Underrun Error */
#define US_CSR_TXBUFE (0x1u << 11) /**< \brief (US_CSR) Transmission Buffer Empty */
#define US_CSR_RXBUFF (0x1u << 12) /**< \brief (US_CSR) Reception Buffer Full */
#define US_CSR_NACK (0x1u << 13) /**< \brief (US_CSR) Non AcknowledgeInterrupt */
#define US_CSR_CTSIC (0x1u << 19) /**< \brief (US_CSR) Clear to Send Input Change Flag */
#define US_CSR_CTS (0x1u << 23) /**< \brief (US_CSR) Image of CTS Input */
/* -------- US_RHR : (USART Offset: 0x0018) Receiver Holding Register -------- */
#define US_RHR_RXCHR_Pos 0
#define US_RHR_RXCHR_Msk (0x1ffu << US_RHR_RXCHR_Pos) /**< \brief (US_RHR) Received Character */
#define US_RHR_RXSYNH (0x1u << 15) /**< \brief (US_RHR) Received Sync */
/* -------- US_THR : (USART Offset: 0x001C) Transmitter Holding Register -------- */
#define US_THR_TXCHR_Pos 0
#define US_THR_TXCHR_Msk (0x1ffu << US_THR_TXCHR_Pos) /**< \brief (US_THR) Character to be Transmitted */
#define US_THR_TXCHR(value) ((US_THR_TXCHR_Msk & ((value) << US_THR_TXCHR_Pos)))
#define US_THR_TXSYNH (0x1u << 15) /**< \brief (US_THR) Sync Field to be transmitted */
/* -------- US_BRGR : (USART Offset: 0x0020) Baud Rate Generator Register -------- */
#define US_BRGR_CD_Pos 0
#define US_BRGR_CD_Msk (0xffffu << US_BRGR_CD_Pos) /**< \brief (US_BRGR) Clock Divider */
#define US_BRGR_CD(value) ((US_BRGR_CD_Msk & ((value) << US_BRGR_CD_Pos)))
#define US_BRGR_FP_Pos 16
#define US_BRGR_FP_Msk (0x7u << US_BRGR_FP_Pos) /**< \brief (US_BRGR) Fractional Part */
#define US_BRGR_FP(value) ((US_BRGR_FP_Msk & ((value) << US_BRGR_FP_Pos)))
/* -------- US_RTOR : (USART Offset: 0x0024) Receiver Time-out Register -------- */
#define US_RTOR_TO_Pos 0
#define US_RTOR_TO_Msk (0xffffu << US_RTOR_TO_Pos) /**< \brief (US_RTOR) Time-out Value */
#define US_RTOR_TO(value) ((US_RTOR_TO_Msk & ((value) << US_RTOR_TO_Pos)))
/* -------- US_TTGR : (USART Offset: 0x0028) Transmitter Timeguard Register -------- */
#define US_TTGR_TG_Pos 0
#define US_TTGR_TG_Msk (0xffu << US_TTGR_TG_Pos) /**< \brief (US_TTGR) Timeguard Value */
#define US_TTGR_TG(value) ((US_TTGR_TG_Msk & ((value) << US_TTGR_TG_Pos)))
/* -------- US_FIDI : (USART Offset: 0x0040) FI DI Ratio Register -------- */
#define US_FIDI_FI_DI_RATIO_Pos 0
#define US_FIDI_FI_DI_RATIO_Msk (0x7ffu << US_FIDI_FI_DI_RATIO_Pos) /**< \brief (US_FIDI) FI Over DI Ratio Value */
#define US_FIDI_FI_DI_RATIO(value) ((US_FIDI_FI_DI_RATIO_Msk & ((value) << US_FIDI_FI_DI_RATIO_Pos)))
/* -------- US_NER : (USART Offset: 0x0044) Number of Errors Register -------- */
#define US_NER_NB_ERRORS_Pos 0
#define US_NER_NB_ERRORS_Msk (0xffu << US_NER_NB_ERRORS_Pos) /**< \brief (US_NER) Number of Errors */
/* -------- US_IF : (USART Offset: 0x004C) IrDA Filter Register -------- */
#define US_IF_IRDA_FILTER_Pos 0
#define US_IF_IRDA_FILTER_Msk (0xffu << US_IF_IRDA_FILTER_Pos) /**< \brief (US_IF) IrDA Filter */
#define US_IF_IRDA_FILTER(value) ((US_IF_IRDA_FILTER_Msk & ((value) << US_IF_IRDA_FILTER_Pos)))
/* -------- US_WPMR : (USART Offset: 0xE4) Write Protect Mode Register -------- */
#define US_WPMR_WPEN (0x1u << 0) /**< \brief (US_WPMR) Write Protect Enable */
#define US_WPMR_WPKEY_Pos 8
#define US_WPMR_WPKEY_Msk (0xffffffu << US_WPMR_WPKEY_Pos) /**< \brief (US_WPMR) Write Protect KEY */
#define US_WPMR_WPKEY(value) ((US_WPMR_WPKEY_Msk & ((value) << US_WPMR_WPKEY_Pos)))
/* -------- US_WPSR : (USART Offset: 0xE8) Write Protect Status Register -------- */
#define US_WPSR_WPVS (0x1u << 0) /**< \brief (US_WPSR) Write Protect Violation Status */
#define US_WPSR_WPVSRC_Pos 8
#define US_WPSR_WPVSRC_Msk (0xffffu << US_WPSR_WPVSRC_Pos) /**< \brief (US_WPSR) Write Protect Violation Source */
/* -------- US_RPR : (USART Offset: 0x100) Receive Pointer Register -------- */
#define US_RPR_RXPTR_Pos 0
#define US_RPR_RXPTR_Msk (0xffffffffu << US_RPR_RXPTR_Pos) /**< \brief (US_RPR) Receive Pointer Register */
#define US_RPR_RXPTR(value) ((US_RPR_RXPTR_Msk & ((value) << US_RPR_RXPTR_Pos)))
/* -------- US_RCR : (USART Offset: 0x104) Receive Counter Register -------- */
#define US_RCR_RXCTR_Pos 0
#define US_RCR_RXCTR_Msk (0xffffu << US_RCR_RXCTR_Pos) /**< \brief (US_RCR) Receive Counter Register */
#define US_RCR_RXCTR(value) ((US_RCR_RXCTR_Msk & ((value) << US_RCR_RXCTR_Pos)))
/* -------- US_TPR : (USART Offset: 0x108) Transmit Pointer Register -------- */
#define US_TPR_TXPTR_Pos 0
#define US_TPR_TXPTR_Msk (0xffffffffu << US_TPR_TXPTR_Pos) /**< \brief (US_TPR) Transmit Counter Register */
#define US_TPR_TXPTR(value) ((US_TPR_TXPTR_Msk & ((value) << US_TPR_TXPTR_Pos)))
/* -------- US_TCR : (USART Offset: 0x10C) Transmit Counter Register -------- */
#define US_TCR_TXCTR_Pos 0
#define US_TCR_TXCTR_Msk (0xffffu << US_TCR_TXCTR_Pos) /**< \brief (US_TCR) Transmit Counter Register */
#define US_TCR_TXCTR(value) ((US_TCR_TXCTR_Msk & ((value) << US_TCR_TXCTR_Pos)))
/* -------- US_RNPR : (USART Offset: 0x110) Receive Next Pointer Register -------- */
#define US_RNPR_RXNPTR_Pos 0
#define US_RNPR_RXNPTR_Msk (0xffffffffu << US_RNPR_RXNPTR_Pos) /**< \brief (US_RNPR) Receive Next Pointer */
#define US_RNPR_RXNPTR(value) ((US_RNPR_RXNPTR_Msk & ((value) << US_RNPR_RXNPTR_Pos)))
/* -------- US_RNCR : (USART Offset: 0x114) Receive Next Counter Register -------- */
#define US_RNCR_RXNCTR_Pos 0
#define US_RNCR_RXNCTR_Msk (0xffffu << US_RNCR_RXNCTR_Pos) /**< \brief (US_RNCR) Receive Next Counter */
#define US_RNCR_RXNCTR(value) ((US_RNCR_RXNCTR_Msk & ((value) << US_RNCR_RXNCTR_Pos)))
/* -------- US_TNPR : (USART Offset: 0x118) Transmit Next Pointer Register -------- */
#define US_TNPR_TXNPTR_Pos 0
#define US_TNPR_TXNPTR_Msk (0xffffffffu << US_TNPR_TXNPTR_Pos) /**< \brief (US_TNPR) Transmit Next Pointer */
#define US_TNPR_TXNPTR(value) ((US_TNPR_TXNPTR_Msk & ((value) << US_TNPR_TXNPTR_Pos)))
/* -------- US_TNCR : (USART Offset: 0x11C) Transmit Next Counter Register -------- */
#define US_TNCR_TXNCTR_Pos 0
#define US_TNCR_TXNCTR_Msk (0xffffu << US_TNCR_TXNCTR_Pos) /**< \brief (US_TNCR) Transmit Counter Next */
#define US_TNCR_TXNCTR(value) ((US_TNCR_TXNCTR_Msk & ((value) << US_TNCR_TXNCTR_Pos)))
/* -------- US_PTCR : (USART Offset: 0x120) Transfer Control Register -------- */
#define US_PTCR_RXTEN (0x1u << 0) /**< \brief (US_PTCR) Receiver Transfer Enable */
#define US_PTCR_RXTDIS (0x1u << 1) /**< \brief (US_PTCR) Receiver Transfer Disable */
#define US_PTCR_TXTEN (0x1u << 8) /**< \brief (US_PTCR) Transmitter Transfer Enable */
#define US_PTCR_TXTDIS (0x1u << 9) /**< \brief (US_PTCR) Transmitter Transfer Disable */
/* -------- US_PTSR : (USART Offset: 0x124) Transfer Status Register -------- */
#define US_PTSR_RXTEN (0x1u << 0) /**< \brief (US_PTSR) Receiver Transfer Enable */
#define US_PTSR_TXTEN (0x1u << 8) /**< \brief (US_PTSR) Transmitter Transfer Enable */

/*@}*/


#endif /* _SAM3N_USART_COMPONENT_ */

#ifndef _SAM3N_WDT_COMPONENT_
#define _SAM3N_WDT_COMPONENT_

/* ============================================================================= */
/**  SOFTWARE API DEFINITION FOR Watchdog Timer */
/* ============================================================================= */
/** \addtogroup SAM3N_WDT Watchdog Timer */
/*@{*/

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief Wdt hardware registers */
typedef struct {
  WoReg WDT_CR; /**< \brief (Wdt Offset: 0x00) Control Register */
  RwReg WDT_MR; /**< \brief (Wdt Offset: 0x04) Mode Register */
  RoReg WDT_SR; /**< \brief (Wdt Offset: 0x08) Status Register */
} Wdt;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/* -------- WDT_CR : (WDT Offset: 0x00) Control Register -------- */
#define WDT_CR_WDRSTT (0x1u << 0) /**< \brief (WDT_CR) Watchdog Restart */
#define WDT_CR_KEY_Pos 24
#define WDT_CR_KEY_Msk (0xffu << WDT_CR_KEY_Pos) /**< \brief (WDT_CR) Password */
#define WDT_CR_KEY(value) ((WDT_CR_KEY_Msk & ((value) << WDT_CR_KEY_Pos)))
/* -------- WDT_MR : (WDT Offset: 0x04) Mode Register -------- */
#define WDT_MR_WDV_Pos 0
#define WDT_MR_WDV_Msk (0xfffu << WDT_MR_WDV_Pos) /**< \brief (WDT_MR) Watchdog Counter Value */
#define WDT_MR_WDV(value) ((WDT_MR_WDV_Msk & ((value) << WDT_MR_WDV_Pos)))
#define WDT_MR_WDFIEN (0x1u << 12) /**< \brief (WDT_MR) Watchdog Fault Interrupt Enable */
#define WDT_MR_WDRSTEN (0x1u << 13) /**< \brief (WDT_MR) Watchdog Reset Enable */
#define WDT_MR_WDRPROC (0x1u << 14) /**< \brief (WDT_MR) Watchdog Reset Processor */
#define WDT_MR_WDDIS (0x1u << 15) /**< \brief (WDT_MR) Watchdog Disable */
#define WDT_MR_WDD_Pos 16
#define WDT_MR_WDD_Msk (0xfffu << WDT_MR_WDD_Pos) /**< \brief (WDT_MR) Watchdog Delta Value */
#define WDT_MR_WDD(value) ((WDT_MR_WDD_Msk & ((value) << WDT_MR_WDD_Pos)))
#define WDT_MR_WDDBGHLT (0x1u << 28) /**< \brief (WDT_MR) Watchdog Debug Halt */
#define WDT_MR_WDIDLEHLT (0x1u << 29) /**< \brief (WDT_MR) Watchdog Idle Halt */
/* -------- WDT_SR : (WDT Offset: 0x08) Status Register -------- */
#define WDT_SR_WDUNF (0x1u << 0) /**< \brief (WDT_SR) Watchdog Underflow */
#define WDT_SR_WDERR (0x1u << 1) /**< \brief (WDT_SR) Watchdog Error */

/*@}*/


#endif /* _SAM3N_WDT_COMPONENT_ */

#ifndef _SAM3N_ADC_INSTANCE_
#define _SAM3N_ADC_INSTANCE_

/* ========== Register definition for ADC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ADC_CR               (0x40038000U) /**< \brief (ADC) Control Register */
#define REG_ADC_MR               (0x40038004U) /**< \brief (ADC) Mode Register */
#define REG_ADC_SEQR1            (0x40038008U) /**< \brief (ADC) Channel Sequence Register 1 */
#define REG_ADC_SEQR2            (0x4003800CU) /**< \brief (ADC) Channel Sequence Register 2 */
#define REG_ADC_CHER             (0x40038010U) /**< \brief (ADC) Channel Enable Register */
#define REG_ADC_CHDR             (0x40038014U) /**< \brief (ADC) Channel Disable Register */
#define REG_ADC_CHSR             (0x40038018U) /**< \brief (ADC) Channel Status Register */
#define REG_ADC_LCDR             (0x40038020U) /**< \brief (ADC) Last Converted Data Register */
#define REG_ADC_IER              (0x40038024U) /**< \brief (ADC) Interrupt Enable Register */
#define REG_ADC_IDR              (0x40038028U) /**< \brief (ADC) Interrupt Disable Register */
#define REG_ADC_IMR              (0x4003802CU) /**< \brief (ADC) Interrupt Mask Register */
#define REG_ADC_ISR              (0x40038030U) /**< \brief (ADC) Interrupt Status Register */
#define REG_ADC_OVER             (0x4003803CU) /**< \brief (ADC) Overrun Status Register */
#define REG_ADC_EMR              (0x40038040U) /**< \brief (ADC) Extended Mode Register */
#define REG_ADC_CWR              (0x40038044U) /**< \brief (ADC) Compare Window Register */
#define REG_ADC_CDR              (0x40038050U) /**< \brief (ADC) Channel Data Register */
#define REG_ADC_WPMR             (0x400380E4U) /**< \brief (ADC) Write Protect Mode Register */
#define REG_ADC_WPSR             (0x400380E8U) /**< \brief (ADC) Write Protect Status Register */
#define REG_ADC_RPR              (0x40038100U) /**< \brief (ADC) Receive Pointer Register */
#define REG_ADC_RCR              (0x40038104U) /**< \brief (ADC) Receive Counter Register */
#define REG_ADC_RNPR             (0x40038110U) /**< \brief (ADC) Receive Next Pointer Register */
#define REG_ADC_RNCR             (0x40038114U) /**< \brief (ADC) Receive Next Counter Register */
#define REG_ADC_PTCR             (0x40038120U) /**< \brief (ADC) Transfer Control Register */
#define REG_ADC_PTSR             (0x40038124U) /**< \brief (ADC) Transfer Status Register */
#else
#define REG_ADC_CR      (*(WoReg*)0x40038000U) /**< \brief (ADC) Control Register */
#define REG_ADC_MR      (*(RwReg*)0x40038004U) /**< \brief (ADC) Mode Register */
#define REG_ADC_SEQR1   (*(RwReg*)0x40038008U) /**< \brief (ADC) Channel Sequence Register 1 */
#define REG_ADC_SEQR2   (*(RwReg*)0x4003800CU) /**< \brief (ADC) Channel Sequence Register 2 */
#define REG_ADC_CHER    (*(WoReg*)0x40038010U) /**< \brief (ADC) Channel Enable Register */
#define REG_ADC_CHDR    (*(WoReg*)0x40038014U) /**< \brief (ADC) Channel Disable Register */
#define REG_ADC_CHSR    (*(RoReg*)0x40038018U) /**< \brief (ADC) Channel Status Register */
#define REG_ADC_LCDR    (*(RoReg*)0x40038020U) /**< \brief (ADC) Last Converted Data Register */
#define REG_ADC_IER     (*(WoReg*)0x40038024U) /**< \brief (ADC) Interrupt Enable Register */
#define REG_ADC_IDR     (*(WoReg*)0x40038028U) /**< \brief (ADC) Interrupt Disable Register */
#define REG_ADC_IMR     (*(RoReg*)0x4003802CU) /**< \brief (ADC) Interrupt Mask Register */
#define REG_ADC_ISR     (*(RoReg*)0x40038030U) /**< \brief (ADC) Interrupt Status Register */
#define REG_ADC_OVER    (*(RoReg*)0x4003803CU) /**< \brief (ADC) Overrun Status Register */
#define REG_ADC_EMR     (*(RwReg*)0x40038040U) /**< \brief (ADC) Extended Mode Register */
#define REG_ADC_CWR     (*(RwReg*)0x40038044U) /**< \brief (ADC) Compare Window Register */
#define REG_ADC_CDR     (*(RoReg*)0x40038050U) /**< \brief (ADC) Channel Data Register */
#define REG_ADC_WPMR    (*(RwReg*)0x400380E4U) /**< \brief (ADC) Write Protect Mode Register */
#define REG_ADC_WPSR    (*(RoReg*)0x400380E8U) /**< \brief (ADC) Write Protect Status Register */
#define REG_ADC_RPR     (*(RwReg*)0x40038100U) /**< \brief (ADC) Receive Pointer Register */
#define REG_ADC_RCR     (*(RwReg*)0x40038104U) /**< \brief (ADC) Receive Counter Register */
#define REG_ADC_RNPR    (*(RwReg*)0x40038110U) /**< \brief (ADC) Receive Next Pointer Register */
#define REG_ADC_RNCR    (*(RwReg*)0x40038114U) /**< \brief (ADC) Receive Next Counter Register */
#define REG_ADC_PTCR    (*(WoReg*)0x40038120U) /**< \brief (ADC) Transfer Control Register */
#define REG_ADC_PTSR    (*(RoReg*)0x40038124U) /**< \brief (ADC) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_ADC_INSTANCE_ */

#ifndef _SAM3N_CHIPID_INSTANCE_
#define _SAM3N_CHIPID_INSTANCE_

/* ========== Register definition for CHIPID peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_CHIPID_CIDR          (0x400E0740U) /**< \brief (CHIPID) Chip ID Register */
#define REG_CHIPID_EXID          (0x400E0744U) /**< \brief (CHIPID) Chip ID Extension Register */
#else
#define REG_CHIPID_CIDR (*(RoReg*)0x400E0740U) /**< \brief (CHIPID) Chip ID Register */
#define REG_CHIPID_EXID (*(RoReg*)0x400E0744U) /**< \brief (CHIPID) Chip ID Extension Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_CHIPID_INSTANCE_ */

#ifndef _SAM3N_DACC_INSTANCE_
#define _SAM3N_DACC_INSTANCE_

/* ========== Register definition for DACC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DACC_CR            (0x4003C000U) /**< \brief (DACC) Control Register */
#define REG_DACC_MR            (0x4003C004U) /**< \brief (DACC) Mode Register */
#define REG_DACC_CDR           (0x4003C008U) /**< \brief (DACC) Conversion Data Register */
#define REG_DACC_IER           (0x4003C00CU) /**< \brief (DACC) Interrupt Enable Register */
#define REG_DACC_IDR           (0x4003C010U) /**< \brief (DACC) Interrupt Disable Register */
#define REG_DACC_IMR           (0x4003C014U) /**< \brief (DACC) Interrupt Mask Register */
#define REG_DACC_ISR           (0x4003C018U) /**< \brief (DACC) Interrupt Status Register */
#define REG_DACC_WPMR          (0x4003C0E4U) /**< \brief (DACC) Write Protect Mode Register */
#define REG_DACC_WPSR          (0x4003C0E8U) /**< \brief (DACC) Write Protect Status Register */
#define REG_DACC_TPR           (0x4003C108U) /**< \brief (DACC) Transmit Pointer Register */
#define REG_DACC_TCR           (0x4003C10CU) /**< \brief (DACC) Transmit Counter Register */
#define REG_DACC_TNPR          (0x4003C118U) /**< \brief (DACC) Transmit Next Pointer Register */
#define REG_DACC_TNCR          (0x4003C11CU) /**< \brief (DACC) Transmit Next Counter Register */
#define REG_DACC_PTCR          (0x4003C120U) /**< \brief (DACC) Transfer Control Register */
#define REG_DACC_PTSR          (0x4003C124U) /**< \brief (DACC) Transfer Status Register */
#else
#define REG_DACC_CR   (*(WoReg*)0x4003C000U) /**< \brief (DACC) Control Register */
#define REG_DACC_MR   (*(RwReg*)0x4003C004U) /**< \brief (DACC) Mode Register */
#define REG_DACC_CDR  (*(WoReg*)0x4003C008U) /**< \brief (DACC) Conversion Data Register */
#define REG_DACC_IER  (*(WoReg*)0x4003C00CU) /**< \brief (DACC) Interrupt Enable Register */
#define REG_DACC_IDR  (*(WoReg*)0x4003C010U) /**< \brief (DACC) Interrupt Disable Register */
#define REG_DACC_IMR  (*(RoReg*)0x4003C014U) /**< \brief (DACC) Interrupt Mask Register */
#define REG_DACC_ISR  (*(RoReg*)0x4003C018U) /**< \brief (DACC) Interrupt Status Register */
#define REG_DACC_WPMR (*(RwReg*)0x4003C0E4U) /**< \brief (DACC) Write Protect Mode Register */
#define REG_DACC_WPSR (*(RoReg*)0x4003C0E8U) /**< \brief (DACC) Write Protect Status Register */
#define REG_DACC_TPR  (*(RwReg*)0x4003C108U) /**< \brief (DACC) Transmit Pointer Register */
#define REG_DACC_TCR  (*(RwReg*)0x4003C10CU) /**< \brief (DACC) Transmit Counter Register */
#define REG_DACC_TNPR (*(RwReg*)0x4003C118U) /**< \brief (DACC) Transmit Next Pointer Register */
#define REG_DACC_TNCR (*(RwReg*)0x4003C11CU) /**< \brief (DACC) Transmit Next Counter Register */
#define REG_DACC_PTCR (*(WoReg*)0x4003C120U) /**< \brief (DACC) Transfer Control Register */
#define REG_DACC_PTSR (*(RoReg*)0x4003C124U) /**< \brief (DACC) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_DACC_INSTANCE_ */

#ifndef _SAM3N_EFC_INSTANCE_
#define _SAM3N_EFC_INSTANCE_

/* ========== Register definition for EFC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_EFC_FMR           (0x400E0A00U) /**< \brief (EFC) EEFC Flash Mode Register */
#define REG_EFC_FCR           (0x400E0A04U) /**< \brief (EFC) EEFC Flash Command Register */
#define REG_EFC_FSR           (0x400E0A08U) /**< \brief (EFC) EEFC Flash Status Register */
#define REG_EFC_FRR           (0x400E0A0CU) /**< \brief (EFC) EEFC Flash Result Register */
#else
#define REG_EFC_FMR  (*(RwReg*)0x400E0A00U) /**< \brief (EFC) EEFC Flash Mode Register */
#define REG_EFC_FCR  (*(WoReg*)0x400E0A04U) /**< \brief (EFC) EEFC Flash Command Register */
#define REG_EFC_FSR  (*(RoReg*)0x400E0A08U) /**< \brief (EFC) EEFC Flash Status Register */
#define REG_EFC_FRR  (*(RoReg*)0x400E0A0CU) /**< \brief (EFC) EEFC Flash Result Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_EFC_INSTANCE_ */

#ifndef _SAM3N_GPBR_INSTANCE_
#define _SAM3N_GPBR_INSTANCE_

/* ========== Register definition for GPBR peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_GPBR_GPBR            (0x400E1490U) /**< \brief (GPBR) General Purpose Backup Register */
#else
#define REG_GPBR_GPBR   (*(RwReg*)0x400E1490U) /**< \brief (GPBR) General Purpose Backup Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_GPBR_INSTANCE_ */

#ifndef _SAM3N_MATRIX_INSTANCE_
#define _SAM3N_MATRIX_INSTANCE_

/* ========== Register definition for MATRIX peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_MATRIX_MCFG             (0x400E0200U) /**< \brief (MATRIX) Master Configuration Register */
#define REG_MATRIX_SCFG             (0x400E0240U) /**< \brief (MATRIX) Slave Configuration Register */
#define REG_MATRIX_PRAS0            (0x400E0280U) /**< \brief (MATRIX) Priority Register A for Slave 0 */
#define REG_MATRIX_PRAS1            (0x400E0288U) /**< \brief (MATRIX) Priority Register A for Slave 1 */
#define REG_MATRIX_PRAS2            (0x400E0290U) /**< \brief (MATRIX) Priority Register A for Slave 2 */
#define REG_MATRIX_PRAS3            (0x400E0298U) /**< \brief (MATRIX) Priority Register A for Slave 3 */
#define REG_CCFG_SYSIO              (0x400E0314U) /**< \brief (MATRIX) System I/O Configuration register */
#define REG_MATRIX_WPMR             (0x400E03E4U) /**< \brief (MATRIX) Write Protect Mode Register */
#define REG_MATRIX_WPSR             (0x400E03E8U) /**< \brief (MATRIX) Write Protect Status Register */
#else
#define REG_MATRIX_MCFG    (*(RwReg*)0x400E0200U) /**< \brief (MATRIX) Master Configuration Register */
#define REG_MATRIX_SCFG    (*(RwReg*)0x400E0240U) /**< \brief (MATRIX) Slave Configuration Register */
#define REG_MATRIX_PRAS0   (*(RwReg*)0x400E0280U) /**< \brief (MATRIX) Priority Register A for Slave 0 */
#define REG_MATRIX_PRAS1   (*(RwReg*)0x400E0288U) /**< \brief (MATRIX) Priority Register A for Slave 1 */
#define REG_MATRIX_PRAS2   (*(RwReg*)0x400E0290U) /**< \brief (MATRIX) Priority Register A for Slave 2 */
#define REG_MATRIX_PRAS3   (*(RwReg*)0x400E0298U) /**< \brief (MATRIX) Priority Register A for Slave 3 */
#define REG_CCFG_SYSIO     (*(RwReg*)0x400E0314U) /**< \brief (MATRIX) System I/O Configuration register */
#define REG_MATRIX_WPMR    (*(RwReg*)0x400E03E4U) /**< \brief (MATRIX) Write Protect Mode Register */
#define REG_MATRIX_WPSR    (*(RoReg*)0x400E03E8U) /**< \brief (MATRIX) Write Protect Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_MATRIX_INSTANCE_ */

#ifndef _SAM3N_PIOA_INSTANCE_
#define _SAM3N_PIOA_INSTANCE_

/* ========== Register definition for PIOA peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PIOA_PER                (0x400E0E00U) /**< \brief (PIOA) PIO Enable Register */
#define REG_PIOA_PDR                (0x400E0E04U) /**< \brief (PIOA) PIO Disable Register */
#define REG_PIOA_PSR                (0x400E0E08U) /**< \brief (PIOA) PIO Status Register */
#define REG_PIOA_OER                (0x400E0E10U) /**< \brief (PIOA) Output Enable Register */
#define REG_PIOA_ODR                (0x400E0E14U) /**< \brief (PIOA) Output Disable Register */
#define REG_PIOA_OSR                (0x400E0E18U) /**< \brief (PIOA) Output Status Register */
#define REG_PIOA_IFER               (0x400E0E20U) /**< \brief (PIOA) Glitch Input Filter Enable Register */
#define REG_PIOA_IFDR               (0x400E0E24U) /**< \brief (PIOA) Glitch Input Filter Disable Register */
#define REG_PIOA_IFSR               (0x400E0E28U) /**< \brief (PIOA) Glitch Input Filter Status Register */
#define REG_PIOA_SODR               (0x400E0E30U) /**< \brief (PIOA) Set Output Data Register */
#define REG_PIOA_CODR               (0x400E0E34U) /**< \brief (PIOA) Clear Output Data Register */
#define REG_PIOA_ODSR               (0x400E0E38U) /**< \brief (PIOA) Output Data Status Register */
#define REG_PIOA_PDSR               (0x400E0E3CU) /**< \brief (PIOA) Pin Data Status Register */
#define REG_PIOA_IER                (0x400E0E40U) /**< \brief (PIOA) Interrupt Enable Register */
#define REG_PIOA_IDR                (0x400E0E44U) /**< \brief (PIOA) Interrupt Disable Register */
#define REG_PIOA_IMR                (0x400E0E48U) /**< \brief (PIOA) Interrupt Mask Register */
#define REG_PIOA_ISR                (0x400E0E4CU) /**< \brief (PIOA) Interrupt Status Register */
#define REG_PIOA_MDER               (0x400E0E50U) /**< \brief (PIOA) Multi-driver Enable Register */
#define REG_PIOA_MDDR               (0x400E0E54U) /**< \brief (PIOA) Multi-driver Disable Register */
#define REG_PIOA_MDSR               (0x400E0E58U) /**< \brief (PIOA) Multi-driver Status Register */
#define REG_PIOA_PUDR               (0x400E0E60U) /**< \brief (PIOA) Pull-up Disable Register */
#define REG_PIOA_PUER               (0x400E0E64U) /**< \brief (PIOA) Pull-up Enable Register */
#define REG_PIOA_PUSR               (0x400E0E68U) /**< \brief (PIOA) Pad Pull-up Status Register */
#define REG_PIOA_ABCDSR             (0x400E0E70U) /**< \brief (PIOA) Peripheral Select Register */
#define REG_PIOA_IFSCDR             (0x400E0E80U) /**< \brief (PIOA) Input Filter Slow Clock Disable Register */
#define REG_PIOA_IFSCER             (0x400E0E84U) /**< \brief (PIOA) Input Filter Slow Clock Enable Register */
#define REG_PIOA_IFSCSR             (0x400E0E88U) /**< \brief (PIOA) Input Filter Slow Clock Status Register */
#define REG_PIOA_SCDR               (0x400E0E8CU) /**< \brief (PIOA) Slow Clock Divider Debouncing Register */
#define REG_PIOA_PPDDR              (0x400E0E90U) /**< \brief (PIOA) Pad Pull-down Disable Register */
#define REG_PIOA_PPDER              (0x400E0E94U) /**< \brief (PIOA) Pad Pull-down Enable Register */
#define REG_PIOA_PPDSR              (0x400E0E98U) /**< \brief (PIOA) Pad Pull-down Status Register */
#define REG_PIOA_OWER               (0x400E0EA0U) /**< \brief (PIOA) Output Write Enable */
#define REG_PIOA_OWDR               (0x400E0EA4U) /**< \brief (PIOA) Output Write Disable */
#define REG_PIOA_OWSR               (0x400E0EA8U) /**< \brief (PIOA) Output Write Status Register */
#define REG_PIOA_AIMER              (0x400E0EB0U) /**< \brief (PIOA) Additional Interrupt Modes Enable Register */
#define REG_PIOA_AIMDR              (0x400E0EB4U) /**< \brief (PIOA) Additional Interrupt Modes Disables Register */
#define REG_PIOA_AIMMR              (0x400E0EB8U) /**< \brief (PIOA) Additional Interrupt Modes Mask Register */
#define REG_PIOA_ESR                (0x400E0EC0U) /**< \brief (PIOA) Edge Select Register */
#define REG_PIOA_LSR                (0x400E0EC4U) /**< \brief (PIOA) Level Select Register */
#define REG_PIOA_ELSR               (0x400E0EC8U) /**< \brief (PIOA) Edge/Level Status Register */
#define REG_PIOA_FELLSR             (0x400E0ED0U) /**< \brief (PIOA) Falling Edge/Low Level Select Register */
#define REG_PIOA_REHLSR             (0x400E0ED4U) /**< \brief (PIOA) Rising Edge/ High Level Select Register */
#define REG_PIOA_FRLHSR             (0x400E0ED8U) /**< \brief (PIOA) Fall/Rise - Low/High Status Register */
#define REG_PIOA_LOCKSR             (0x400E0EE0U) /**< \brief (PIOA) Lock Status */
#define REG_PIOA_WPMR               (0x400E0EE4U) /**< \brief (PIOA) Write Protect Mode Register */
#define REG_PIOA_WPSR               (0x400E0EE8U) /**< \brief (PIOA) Write Protect Status Register */
#define REG_PIOA_SCHMITT            (0x400E0F00U) /**< \brief (PIOA) Schmitt Trigger Register */
#else
#define REG_PIOA_PER       (*(WoReg*)0x400E0E00U) /**< \brief (PIOA) PIO Enable Register */
#define REG_PIOA_PDR       (*(WoReg*)0x400E0E04U) /**< \brief (PIOA) PIO Disable Register */
#define REG_PIOA_PSR       (*(RoReg*)0x400E0E08U) /**< \brief (PIOA) PIO Status Register */
#define REG_PIOA_OER       (*(WoReg*)0x400E0E10U) /**< \brief (PIOA) Output Enable Register */
#define REG_PIOA_ODR       (*(WoReg*)0x400E0E14U) /**< \brief (PIOA) Output Disable Register */
#define REG_PIOA_OSR       (*(RoReg*)0x400E0E18U) /**< \brief (PIOA) Output Status Register */
#define REG_PIOA_IFER      (*(WoReg*)0x400E0E20U) /**< \brief (PIOA) Glitch Input Filter Enable Register */
#define REG_PIOA_IFDR      (*(WoReg*)0x400E0E24U) /**< \brief (PIOA) Glitch Input Filter Disable Register */
#define REG_PIOA_IFSR      (*(RoReg*)0x400E0E28U) /**< \brief (PIOA) Glitch Input Filter Status Register */
#define REG_PIOA_SODR      (*(WoReg*)0x400E0E30U) /**< \brief (PIOA) Set Output Data Register */
#define REG_PIOA_CODR      (*(WoReg*)0x400E0E34U) /**< \brief (PIOA) Clear Output Data Register */
#define REG_PIOA_ODSR      (*(RwReg*)0x400E0E38U) /**< \brief (PIOA) Output Data Status Register */
#define REG_PIOA_PDSR      (*(RoReg*)0x400E0E3CU) /**< \brief (PIOA) Pin Data Status Register */
#define REG_PIOA_IER       (*(WoReg*)0x400E0E40U) /**< \brief (PIOA) Interrupt Enable Register */
#define REG_PIOA_IDR       (*(WoReg*)0x400E0E44U) /**< \brief (PIOA) Interrupt Disable Register */
#define REG_PIOA_IMR       (*(RoReg*)0x400E0E48U) /**< \brief (PIOA) Interrupt Mask Register */
#define REG_PIOA_ISR       (*(RoReg*)0x400E0E4CU) /**< \brief (PIOA) Interrupt Status Register */
#define REG_PIOA_MDER      (*(WoReg*)0x400E0E50U) /**< \brief (PIOA) Multi-driver Enable Register */
#define REG_PIOA_MDDR      (*(WoReg*)0x400E0E54U) /**< \brief (PIOA) Multi-driver Disable Register */
#define REG_PIOA_MDSR      (*(RoReg*)0x400E0E58U) /**< \brief (PIOA) Multi-driver Status Register */
#define REG_PIOA_PUDR      (*(WoReg*)0x400E0E60U) /**< \brief (PIOA) Pull-up Disable Register */
#define REG_PIOA_PUER      (*(WoReg*)0x400E0E64U) /**< \brief (PIOA) Pull-up Enable Register */
#define REG_PIOA_PUSR      (*(RoReg*)0x400E0E68U) /**< \brief (PIOA) Pad Pull-up Status Register */
#define REG_PIOA_ABCDSR    (*(RwReg*)0x400E0E70U) /**< \brief (PIOA) Peripheral Select Register */
#define REG_PIOA_IFSCDR    (*(WoReg*)0x400E0E80U) /**< \brief (PIOA) Input Filter Slow Clock Disable Register */
#define REG_PIOA_IFSCER    (*(WoReg*)0x400E0E84U) /**< \brief (PIOA) Input Filter Slow Clock Enable Register */
#define REG_PIOA_IFSCSR    (*(RoReg*)0x400E0E88U) /**< \brief (PIOA) Input Filter Slow Clock Status Register */
#define REG_PIOA_SCDR      (*(RwReg*)0x400E0E8CU) /**< \brief (PIOA) Slow Clock Divider Debouncing Register */
#define REG_PIOA_PPDDR     (*(WoReg*)0x400E0E90U) /**< \brief (PIOA) Pad Pull-down Disable Register */
#define REG_PIOA_PPDER     (*(WoReg*)0x400E0E94U) /**< \brief (PIOA) Pad Pull-down Enable Register */
#define REG_PIOA_PPDSR     (*(RoReg*)0x400E0E98U) /**< \brief (PIOA) Pad Pull-down Status Register */
#define REG_PIOA_OWER      (*(WoReg*)0x400E0EA0U) /**< \brief (PIOA) Output Write Enable */
#define REG_PIOA_OWDR      (*(WoReg*)0x400E0EA4U) /**< \brief (PIOA) Output Write Disable */
#define REG_PIOA_OWSR      (*(RoReg*)0x400E0EA8U) /**< \brief (PIOA) Output Write Status Register */
#define REG_PIOA_AIMER     (*(WoReg*)0x400E0EB0U) /**< \brief (PIOA) Additional Interrupt Modes Enable Register */
#define REG_PIOA_AIMDR     (*(WoReg*)0x400E0EB4U) /**< \brief (PIOA) Additional Interrupt Modes Disables Register */
#define REG_PIOA_AIMMR     (*(RoReg*)0x400E0EB8U) /**< \brief (PIOA) Additional Interrupt Modes Mask Register */
#define REG_PIOA_ESR       (*(WoReg*)0x400E0EC0U) /**< \brief (PIOA) Edge Select Register */
#define REG_PIOA_LSR       (*(WoReg*)0x400E0EC4U) /**< \brief (PIOA) Level Select Register */
#define REG_PIOA_ELSR      (*(RoReg*)0x400E0EC8U) /**< \brief (PIOA) Edge/Level Status Register */
#define REG_PIOA_FELLSR    (*(WoReg*)0x400E0ED0U) /**< \brief (PIOA) Falling Edge/Low Level Select Register */
#define REG_PIOA_REHLSR    (*(WoReg*)0x400E0ED4U) /**< \brief (PIOA) Rising Edge/ High Level Select Register */
#define REG_PIOA_FRLHSR    (*(RoReg*)0x400E0ED8U) /**< \brief (PIOA) Fall/Rise - Low/High Status Register */
#define REG_PIOA_LOCKSR    (*(RoReg*)0x400E0EE0U) /**< \brief (PIOA) Lock Status */
#define REG_PIOA_WPMR      (*(RwReg*)0x400E0EE4U) /**< \brief (PIOA) Write Protect Mode Register */
#define REG_PIOA_WPSR      (*(RoReg*)0x400E0EE8U) /**< \brief (PIOA) Write Protect Status Register */
#define REG_PIOA_SCHMITT   (*(RwReg*)0x400E0F00U) /**< \brief (PIOA) Schmitt Trigger Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_PIOA_INSTANCE_ */

#ifndef _SAM3N_PIOB_INSTANCE_
#define _SAM3N_PIOB_INSTANCE_

/* ========== Register definition for PIOB peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PIOB_PER                (0x400E1000U) /**< \brief (PIOB) PIO Enable Register */
#define REG_PIOB_PDR                (0x400E1004U) /**< \brief (PIOB) PIO Disable Register */
#define REG_PIOB_PSR                (0x400E1008U) /**< \brief (PIOB) PIO Status Register */
#define REG_PIOB_OER                (0x400E1010U) /**< \brief (PIOB) Output Enable Register */
#define REG_PIOB_ODR                (0x400E1014U) /**< \brief (PIOB) Output Disable Register */
#define REG_PIOB_OSR                (0x400E1018U) /**< \brief (PIOB) Output Status Register */
#define REG_PIOB_IFER               (0x400E1020U) /**< \brief (PIOB) Glitch Input Filter Enable Register */
#define REG_PIOB_IFDR               (0x400E1024U) /**< \brief (PIOB) Glitch Input Filter Disable Register */
#define REG_PIOB_IFSR               (0x400E1028U) /**< \brief (PIOB) Glitch Input Filter Status Register */
#define REG_PIOB_SODR               (0x400E1030U) /**< \brief (PIOB) Set Output Data Register */
#define REG_PIOB_CODR               (0x400E1034U) /**< \brief (PIOB) Clear Output Data Register */
#define REG_PIOB_ODSR               (0x400E1038U) /**< \brief (PIOB) Output Data Status Register */
#define REG_PIOB_PDSR               (0x400E103CU) /**< \brief (PIOB) Pin Data Status Register */
#define REG_PIOB_IER                (0x400E1040U) /**< \brief (PIOB) Interrupt Enable Register */
#define REG_PIOB_IDR                (0x400E1044U) /**< \brief (PIOB) Interrupt Disable Register */
#define REG_PIOB_IMR                (0x400E1048U) /**< \brief (PIOB) Interrupt Mask Register */
#define REG_PIOB_ISR                (0x400E104CU) /**< \brief (PIOB) Interrupt Status Register */
#define REG_PIOB_MDER               (0x400E1050U) /**< \brief (PIOB) Multi-driver Enable Register */
#define REG_PIOB_MDDR               (0x400E1054U) /**< \brief (PIOB) Multi-driver Disable Register */
#define REG_PIOB_MDSR               (0x400E1058U) /**< \brief (PIOB) Multi-driver Status Register */
#define REG_PIOB_PUDR               (0x400E1060U) /**< \brief (PIOB) Pull-up Disable Register */
#define REG_PIOB_PUER               (0x400E1064U) /**< \brief (PIOB) Pull-up Enable Register */
#define REG_PIOB_PUSR               (0x400E1068U) /**< \brief (PIOB) Pad Pull-up Status Register */
#define REG_PIOB_ABCDSR             (0x400E1070U) /**< \brief (PIOB) Peripheral Select Register */
#define REG_PIOB_IFSCDR             (0x400E1080U) /**< \brief (PIOB) Input Filter Slow Clock Disable Register */
#define REG_PIOB_IFSCER             (0x400E1084U) /**< \brief (PIOB) Input Filter Slow Clock Enable Register */
#define REG_PIOB_IFSCSR             (0x400E1088U) /**< \brief (PIOB) Input Filter Slow Clock Status Register */
#define REG_PIOB_SCDR               (0x400E108CU) /**< \brief (PIOB) Slow Clock Divider Debouncing Register */
#define REG_PIOB_PPDDR              (0x400E1090U) /**< \brief (PIOB) Pad Pull-down Disable Register */
#define REG_PIOB_PPDER              (0x400E1094U) /**< \brief (PIOB) Pad Pull-down Enable Register */
#define REG_PIOB_PPDSR              (0x400E1098U) /**< \brief (PIOB) Pad Pull-down Status Register */
#define REG_PIOB_OWER               (0x400E10A0U) /**< \brief (PIOB) Output Write Enable */
#define REG_PIOB_OWDR               (0x400E10A4U) /**< \brief (PIOB) Output Write Disable */
#define REG_PIOB_OWSR               (0x400E10A8U) /**< \brief (PIOB) Output Write Status Register */
#define REG_PIOB_AIMER              (0x400E10B0U) /**< \brief (PIOB) Additional Interrupt Modes Enable Register */
#define REG_PIOB_AIMDR              (0x400E10B4U) /**< \brief (PIOB) Additional Interrupt Modes Disables Register */
#define REG_PIOB_AIMMR              (0x400E10B8U) /**< \brief (PIOB) Additional Interrupt Modes Mask Register */
#define REG_PIOB_ESR                (0x400E10C0U) /**< \brief (PIOB) Edge Select Register */
#define REG_PIOB_LSR                (0x400E10C4U) /**< \brief (PIOB) Level Select Register */
#define REG_PIOB_ELSR               (0x400E10C8U) /**< \brief (PIOB) Edge/Level Status Register */
#define REG_PIOB_FELLSR             (0x400E10D0U) /**< \brief (PIOB) Falling Edge/Low Level Select Register */
#define REG_PIOB_REHLSR             (0x400E10D4U) /**< \brief (PIOB) Rising Edge/ High Level Select Register */
#define REG_PIOB_FRLHSR             (0x400E10D8U) /**< \brief (PIOB) Fall/Rise - Low/High Status Register */
#define REG_PIOB_LOCKSR             (0x400E10E0U) /**< \brief (PIOB) Lock Status */
#define REG_PIOB_WPMR               (0x400E10E4U) /**< \brief (PIOB) Write Protect Mode Register */
#define REG_PIOB_WPSR               (0x400E10E8U) /**< \brief (PIOB) Write Protect Status Register */
#define REG_PIOB_SCHMITT            (0x400E1100U) /**< \brief (PIOB) Schmitt Trigger Register */
#else
#define REG_PIOB_PER       (*(WoReg*)0x400E1000U) /**< \brief (PIOB) PIO Enable Register */
#define REG_PIOB_PDR       (*(WoReg*)0x400E1004U) /**< \brief (PIOB) PIO Disable Register */
#define REG_PIOB_PSR       (*(RoReg*)0x400E1008U) /**< \brief (PIOB) PIO Status Register */
#define REG_PIOB_OER       (*(WoReg*)0x400E1010U) /**< \brief (PIOB) Output Enable Register */
#define REG_PIOB_ODR       (*(WoReg*)0x400E1014U) /**< \brief (PIOB) Output Disable Register */
#define REG_PIOB_OSR       (*(RoReg*)0x400E1018U) /**< \brief (PIOB) Output Status Register */
#define REG_PIOB_IFER      (*(WoReg*)0x400E1020U) /**< \brief (PIOB) Glitch Input Filter Enable Register */
#define REG_PIOB_IFDR      (*(WoReg*)0x400E1024U) /**< \brief (PIOB) Glitch Input Filter Disable Register */
#define REG_PIOB_IFSR      (*(RoReg*)0x400E1028U) /**< \brief (PIOB) Glitch Input Filter Status Register */
#define REG_PIOB_SODR      (*(WoReg*)0x400E1030U) /**< \brief (PIOB) Set Output Data Register */
#define REG_PIOB_CODR      (*(WoReg*)0x400E1034U) /**< \brief (PIOB) Clear Output Data Register */
#define REG_PIOB_ODSR      (*(RwReg*)0x400E1038U) /**< \brief (PIOB) Output Data Status Register */
#define REG_PIOB_PDSR      (*(RoReg*)0x400E103CU) /**< \brief (PIOB) Pin Data Status Register */
#define REG_PIOB_IER       (*(WoReg*)0x400E1040U) /**< \brief (PIOB) Interrupt Enable Register */
#define REG_PIOB_IDR       (*(WoReg*)0x400E1044U) /**< \brief (PIOB) Interrupt Disable Register */
#define REG_PIOB_IMR       (*(RoReg*)0x400E1048U) /**< \brief (PIOB) Interrupt Mask Register */
#define REG_PIOB_ISR       (*(RoReg*)0x400E104CU) /**< \brief (PIOB) Interrupt Status Register */
#define REG_PIOB_MDER      (*(WoReg*)0x400E1050U) /**< \brief (PIOB) Multi-driver Enable Register */
#define REG_PIOB_MDDR      (*(WoReg*)0x400E1054U) /**< \brief (PIOB) Multi-driver Disable Register */
#define REG_PIOB_MDSR      (*(RoReg*)0x400E1058U) /**< \brief (PIOB) Multi-driver Status Register */
#define REG_PIOB_PUDR      (*(WoReg*)0x400E1060U) /**< \brief (PIOB) Pull-up Disable Register */
#define REG_PIOB_PUER      (*(WoReg*)0x400E1064U) /**< \brief (PIOB) Pull-up Enable Register */
#define REG_PIOB_PUSR      (*(RoReg*)0x400E1068U) /**< \brief (PIOB) Pad Pull-up Status Register */
#define REG_PIOB_ABCDSR    (*(RwReg*)0x400E1070U) /**< \brief (PIOB) Peripheral Select Register */
#define REG_PIOB_IFSCDR    (*(WoReg*)0x400E1080U) /**< \brief (PIOB) Input Filter Slow Clock Disable Register */
#define REG_PIOB_IFSCER    (*(WoReg*)0x400E1084U) /**< \brief (PIOB) Input Filter Slow Clock Enable Register */
#define REG_PIOB_IFSCSR    (*(RoReg*)0x400E1088U) /**< \brief (PIOB) Input Filter Slow Clock Status Register */
#define REG_PIOB_SCDR      (*(RwReg*)0x400E108CU) /**< \brief (PIOB) Slow Clock Divider Debouncing Register */
#define REG_PIOB_PPDDR     (*(WoReg*)0x400E1090U) /**< \brief (PIOB) Pad Pull-down Disable Register */
#define REG_PIOB_PPDER     (*(WoReg*)0x400E1094U) /**< \brief (PIOB) Pad Pull-down Enable Register */
#define REG_PIOB_PPDSR     (*(RoReg*)0x400E1098U) /**< \brief (PIOB) Pad Pull-down Status Register */
#define REG_PIOB_OWER      (*(WoReg*)0x400E10A0U) /**< \brief (PIOB) Output Write Enable */
#define REG_PIOB_OWDR      (*(WoReg*)0x400E10A4U) /**< \brief (PIOB) Output Write Disable */
#define REG_PIOB_OWSR      (*(RoReg*)0x400E10A8U) /**< \brief (PIOB) Output Write Status Register */
#define REG_PIOB_AIMER     (*(WoReg*)0x400E10B0U) /**< \brief (PIOB) Additional Interrupt Modes Enable Register */
#define REG_PIOB_AIMDR     (*(WoReg*)0x400E10B4U) /**< \brief (PIOB) Additional Interrupt Modes Disables Register */
#define REG_PIOB_AIMMR     (*(RoReg*)0x400E10B8U) /**< \brief (PIOB) Additional Interrupt Modes Mask Register */
#define REG_PIOB_ESR       (*(WoReg*)0x400E10C0U) /**< \brief (PIOB) Edge Select Register */
#define REG_PIOB_LSR       (*(WoReg*)0x400E10C4U) /**< \brief (PIOB) Level Select Register */
#define REG_PIOB_ELSR      (*(RoReg*)0x400E10C8U) /**< \brief (PIOB) Edge/Level Status Register */
#define REG_PIOB_FELLSR    (*(WoReg*)0x400E10D0U) /**< \brief (PIOB) Falling Edge/Low Level Select Register */
#define REG_PIOB_REHLSR    (*(WoReg*)0x400E10D4U) /**< \brief (PIOB) Rising Edge/ High Level Select Register */
#define REG_PIOB_FRLHSR    (*(RoReg*)0x400E10D8U) /**< \brief (PIOB) Fall/Rise - Low/High Status Register */
#define REG_PIOB_LOCKSR    (*(RoReg*)0x400E10E0U) /**< \brief (PIOB) Lock Status */
#define REG_PIOB_WPMR      (*(RwReg*)0x400E10E4U) /**< \brief (PIOB) Write Protect Mode Register */
#define REG_PIOB_WPSR      (*(RoReg*)0x400E10E8U) /**< \brief (PIOB) Write Protect Status Register */
#define REG_PIOB_SCHMITT   (*(RwReg*)0x400E1100U) /**< \brief (PIOB) Schmitt Trigger Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_PIOB_INSTANCE_ */

#ifndef _SAM3N_PIOC_INSTANCE_
#define _SAM3N_PIOC_INSTANCE_

/* ========== Register definition for PIOC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PIOC_PER                (0x400E1200U) /**< \brief (PIOC) PIO Enable Register */
#define REG_PIOC_PDR                (0x400E1204U) /**< \brief (PIOC) PIO Disable Register */
#define REG_PIOC_PSR                (0x400E1208U) /**< \brief (PIOC) PIO Status Register */
#define REG_PIOC_OER                (0x400E1210U) /**< \brief (PIOC) Output Enable Register */
#define REG_PIOC_ODR                (0x400E1214U) /**< \brief (PIOC) Output Disable Register */
#define REG_PIOC_OSR                (0x400E1218U) /**< \brief (PIOC) Output Status Register */
#define REG_PIOC_IFER               (0x400E1220U) /**< \brief (PIOC) Glitch Input Filter Enable Register */
#define REG_PIOC_IFDR               (0x400E1224U) /**< \brief (PIOC) Glitch Input Filter Disable Register */
#define REG_PIOC_IFSR               (0x400E1228U) /**< \brief (PIOC) Glitch Input Filter Status Register */
#define REG_PIOC_SODR               (0x400E1230U) /**< \brief (PIOC) Set Output Data Register */
#define REG_PIOC_CODR               (0x400E1234U) /**< \brief (PIOC) Clear Output Data Register */
#define REG_PIOC_ODSR               (0x400E1238U) /**< \brief (PIOC) Output Data Status Register */
#define REG_PIOC_PDSR               (0x400E123CU) /**< \brief (PIOC) Pin Data Status Register */
#define REG_PIOC_IER                (0x400E1240U) /**< \brief (PIOC) Interrupt Enable Register */
#define REG_PIOC_IDR                (0x400E1244U) /**< \brief (PIOC) Interrupt Disable Register */
#define REG_PIOC_IMR                (0x400E1248U) /**< \brief (PIOC) Interrupt Mask Register */
#define REG_PIOC_ISR                (0x400E124CU) /**< \brief (PIOC) Interrupt Status Register */
#define REG_PIOC_MDER               (0x400E1250U) /**< \brief (PIOC) Multi-driver Enable Register */
#define REG_PIOC_MDDR               (0x400E1254U) /**< \brief (PIOC) Multi-driver Disable Register */
#define REG_PIOC_MDSR               (0x400E1258U) /**< \brief (PIOC) Multi-driver Status Register */
#define REG_PIOC_PUDR               (0x400E1260U) /**< \brief (PIOC) Pull-up Disable Register */
#define REG_PIOC_PUER               (0x400E1264U) /**< \brief (PIOC) Pull-up Enable Register */
#define REG_PIOC_PUSR               (0x400E1268U) /**< \brief (PIOC) Pad Pull-up Status Register */
#define REG_PIOC_ABCDSR             (0x400E1270U) /**< \brief (PIOC) Peripheral Select Register */
#define REG_PIOC_IFSCDR             (0x400E1280U) /**< \brief (PIOC) Input Filter Slow Clock Disable Register */
#define REG_PIOC_IFSCER             (0x400E1284U) /**< \brief (PIOC) Input Filter Slow Clock Enable Register */
#define REG_PIOC_IFSCSR             (0x400E1288U) /**< \brief (PIOC) Input Filter Slow Clock Status Register */
#define REG_PIOC_SCDR               (0x400E128CU) /**< \brief (PIOC) Slow Clock Divider Debouncing Register */
#define REG_PIOC_PPDDR              (0x400E1290U) /**< \brief (PIOC) Pad Pull-down Disable Register */
#define REG_PIOC_PPDER              (0x400E1294U) /**< \brief (PIOC) Pad Pull-down Enable Register */
#define REG_PIOC_PPDSR              (0x400E1298U) /**< \brief (PIOC) Pad Pull-down Status Register */
#define REG_PIOC_OWER               (0x400E12A0U) /**< \brief (PIOC) Output Write Enable */
#define REG_PIOC_OWDR               (0x400E12A4U) /**< \brief (PIOC) Output Write Disable */
#define REG_PIOC_OWSR               (0x400E12A8U) /**< \brief (PIOC) Output Write Status Register */
#define REG_PIOC_AIMER              (0x400E12B0U) /**< \brief (PIOC) Additional Interrupt Modes Enable Register */
#define REG_PIOC_AIMDR              (0x400E12B4U) /**< \brief (PIOC) Additional Interrupt Modes Disables Register */
#define REG_PIOC_AIMMR              (0x400E12B8U) /**< \brief (PIOC) Additional Interrupt Modes Mask Register */
#define REG_PIOC_ESR                (0x400E12C0U) /**< \brief (PIOC) Edge Select Register */
#define REG_PIOC_LSR                (0x400E12C4U) /**< \brief (PIOC) Level Select Register */
#define REG_PIOC_ELSR               (0x400E12C8U) /**< \brief (PIOC) Edge/Level Status Register */
#define REG_PIOC_FELLSR             (0x400E12D0U) /**< \brief (PIOC) Falling Edge/Low Level Select Register */
#define REG_PIOC_REHLSR             (0x400E12D4U) /**< \brief (PIOC) Rising Edge/ High Level Select Register */
#define REG_PIOC_FRLHSR             (0x400E12D8U) /**< \brief (PIOC) Fall/Rise - Low/High Status Register */
#define REG_PIOC_LOCKSR             (0x400E12E0U) /**< \brief (PIOC) Lock Status */
#define REG_PIOC_WPMR               (0x400E12E4U) /**< \brief (PIOC) Write Protect Mode Register */
#define REG_PIOC_WPSR               (0x400E12E8U) /**< \brief (PIOC) Write Protect Status Register */
#define REG_PIOC_SCHMITT            (0x400E1300U) /**< \brief (PIOC) Schmitt Trigger Register */
#else
#define REG_PIOC_PER       (*(WoReg*)0x400E1200U) /**< \brief (PIOC) PIO Enable Register */
#define REG_PIOC_PDR       (*(WoReg*)0x400E1204U) /**< \brief (PIOC) PIO Disable Register */
#define REG_PIOC_PSR       (*(RoReg*)0x400E1208U) /**< \brief (PIOC) PIO Status Register */
#define REG_PIOC_OER       (*(WoReg*)0x400E1210U) /**< \brief (PIOC) Output Enable Register */
#define REG_PIOC_ODR       (*(WoReg*)0x400E1214U) /**< \brief (PIOC) Output Disable Register */
#define REG_PIOC_OSR       (*(RoReg*)0x400E1218U) /**< \brief (PIOC) Output Status Register */
#define REG_PIOC_IFER      (*(WoReg*)0x400E1220U) /**< \brief (PIOC) Glitch Input Filter Enable Register */
#define REG_PIOC_IFDR      (*(WoReg*)0x400E1224U) /**< \brief (PIOC) Glitch Input Filter Disable Register */
#define REG_PIOC_IFSR      (*(RoReg*)0x400E1228U) /**< \brief (PIOC) Glitch Input Filter Status Register */
#define REG_PIOC_SODR      (*(WoReg*)0x400E1230U) /**< \brief (PIOC) Set Output Data Register */
#define REG_PIOC_CODR      (*(WoReg*)0x400E1234U) /**< \brief (PIOC) Clear Output Data Register */
#define REG_PIOC_ODSR      (*(RwReg*)0x400E1238U) /**< \brief (PIOC) Output Data Status Register */
#define REG_PIOC_PDSR      (*(RoReg*)0x400E123CU) /**< \brief (PIOC) Pin Data Status Register */
#define REG_PIOC_IER       (*(WoReg*)0x400E1240U) /**< \brief (PIOC) Interrupt Enable Register */
#define REG_PIOC_IDR       (*(WoReg*)0x400E1244U) /**< \brief (PIOC) Interrupt Disable Register */
#define REG_PIOC_IMR       (*(RoReg*)0x400E1248U) /**< \brief (PIOC) Interrupt Mask Register */
#define REG_PIOC_ISR       (*(RoReg*)0x400E124CU) /**< \brief (PIOC) Interrupt Status Register */
#define REG_PIOC_MDER      (*(WoReg*)0x400E1250U) /**< \brief (PIOC) Multi-driver Enable Register */
#define REG_PIOC_MDDR      (*(WoReg*)0x400E1254U) /**< \brief (PIOC) Multi-driver Disable Register */
#define REG_PIOC_MDSR      (*(RoReg*)0x400E1258U) /**< \brief (PIOC) Multi-driver Status Register */
#define REG_PIOC_PUDR      (*(WoReg*)0x400E1260U) /**< \brief (PIOC) Pull-up Disable Register */
#define REG_PIOC_PUER      (*(WoReg*)0x400E1264U) /**< \brief (PIOC) Pull-up Enable Register */
#define REG_PIOC_PUSR      (*(RoReg*)0x400E1268U) /**< \brief (PIOC) Pad Pull-up Status Register */
#define REG_PIOC_ABCDSR    (*(RwReg*)0x400E1270U) /**< \brief (PIOC) Peripheral Select Register */
#define REG_PIOC_IFSCDR    (*(WoReg*)0x400E1280U) /**< \brief (PIOC) Input Filter Slow Clock Disable Register */
#define REG_PIOC_IFSCER    (*(WoReg*)0x400E1284U) /**< \brief (PIOC) Input Filter Slow Clock Enable Register */
#define REG_PIOC_IFSCSR    (*(RoReg*)0x400E1288U) /**< \brief (PIOC) Input Filter Slow Clock Status Register */
#define REG_PIOC_SCDR      (*(RwReg*)0x400E128CU) /**< \brief (PIOC) Slow Clock Divider Debouncing Register */
#define REG_PIOC_PPDDR     (*(WoReg*)0x400E1290U) /**< \brief (PIOC) Pad Pull-down Disable Register */
#define REG_PIOC_PPDER     (*(WoReg*)0x400E1294U) /**< \brief (PIOC) Pad Pull-down Enable Register */
#define REG_PIOC_PPDSR     (*(RoReg*)0x400E1298U) /**< \brief (PIOC) Pad Pull-down Status Register */
#define REG_PIOC_OWER      (*(WoReg*)0x400E12A0U) /**< \brief (PIOC) Output Write Enable */
#define REG_PIOC_OWDR      (*(WoReg*)0x400E12A4U) /**< \brief (PIOC) Output Write Disable */
#define REG_PIOC_OWSR      (*(RoReg*)0x400E12A8U) /**< \brief (PIOC) Output Write Status Register */
#define REG_PIOC_AIMER     (*(WoReg*)0x400E12B0U) /**< \brief (PIOC) Additional Interrupt Modes Enable Register */
#define REG_PIOC_AIMDR     (*(WoReg*)0x400E12B4U) /**< \brief (PIOC) Additional Interrupt Modes Disables Register */
#define REG_PIOC_AIMMR     (*(RoReg*)0x400E12B8U) /**< \brief (PIOC) Additional Interrupt Modes Mask Register */
#define REG_PIOC_ESR       (*(WoReg*)0x400E12C0U) /**< \brief (PIOC) Edge Select Register */
#define REG_PIOC_LSR       (*(WoReg*)0x400E12C4U) /**< \brief (PIOC) Level Select Register */
#define REG_PIOC_ELSR      (*(RoReg*)0x400E12C8U) /**< \brief (PIOC) Edge/Level Status Register */
#define REG_PIOC_FELLSR    (*(WoReg*)0x400E12D0U) /**< \brief (PIOC) Falling Edge/Low Level Select Register */
#define REG_PIOC_REHLSR    (*(WoReg*)0x400E12D4U) /**< \brief (PIOC) Rising Edge/ High Level Select Register */
#define REG_PIOC_FRLHSR    (*(RoReg*)0x400E12D8U) /**< \brief (PIOC) Fall/Rise - Low/High Status Register */
#define REG_PIOC_LOCKSR    (*(RoReg*)0x400E12E0U) /**< \brief (PIOC) Lock Status */
#define REG_PIOC_WPMR      (*(RwReg*)0x400E12E4U) /**< \brief (PIOC) Write Protect Mode Register */
#define REG_PIOC_WPSR      (*(RoReg*)0x400E12E8U) /**< \brief (PIOC) Write Protect Status Register */
#define REG_PIOC_SCHMITT   (*(RwReg*)0x400E1300U) /**< \brief (PIOC) Schmitt Trigger Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_PIOC_INSTANCE_ */

#ifndef _SAM3N_PMC_INSTANCE_
#define _SAM3N_PMC_INSTANCE_

/* ========== Register definition for PMC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PMC_SCER            (0x400E0400U) /**< \brief (PMC) System Clock Enable Register */
#define REG_PMC_SCDR            (0x400E0404U) /**< \brief (PMC) System Clock Disable Register */
#define REG_PMC_SCSR            (0x400E0408U) /**< \brief (PMC) System Clock Status Register */
#define REG_PMC_PCER0           (0x400E0410U) /**< \brief (PMC) Peripheral Clock Enable Register 0 */
#define REG_PMC_PCDR0           (0x400E0414U) /**< \brief (PMC) Peripheral Clock Disable Register 0 */
#define REG_PMC_PCSR0           (0x400E0418U) /**< \brief (PMC) Peripheral Clock Status Register 0 */
#define REG_CKGR_MOR            (0x400E0420U) /**< \brief (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR           (0x400E0424U) /**< \brief (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLAR          (0x400E0428U) /**< \brief (PMC) PLLA Register */
#define REG_PMC_MCKR            (0x400E0430U) /**< \brief (PMC) Master Clock Register */
#define REG_PMC_PCK             (0x400E0440U) /**< \brief (PMC) Programmable Clock 0 Register */
#define REG_PMC_IER             (0x400E0460U) /**< \brief (PMC) Interrupt Enable Register */
#define REG_PMC_IDR             (0x400E0464U) /**< \brief (PMC) Interrupt Disable Register */
#define REG_PMC_SR              (0x400E0468U) /**< \brief (PMC) Status Register */
#define REG_PMC_IMR             (0x400E046CU) /**< \brief (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR            (0x400E0470U) /**< \brief (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR            (0x400E0474U) /**< \brief (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR            (0x400E0478U) /**< \brief (PMC) Fault Output Clear Register */
#define REG_PMC_WPMR            (0x400E04E4U) /**< \brief (PMC) Write Protect Mode Register */
#define REG_PMC_WPSR            (0x400E04E8U) /**< \brief (PMC) Write Protect Status Register */
#else
#define REG_PMC_SCER   (*(WoReg*)0x400E0400U) /**< \brief (PMC) System Clock Enable Register */
#define REG_PMC_SCDR   (*(WoReg*)0x400E0404U) /**< \brief (PMC) System Clock Disable Register */
#define REG_PMC_SCSR   (*(RoReg*)0x400E0408U) /**< \brief (PMC) System Clock Status Register */
#define REG_PMC_PCER0  (*(WoReg*)0x400E0410U) /**< \brief (PMC) Peripheral Clock Enable Register 0 */
#define REG_PMC_PCDR0  (*(WoReg*)0x400E0414U) /**< \brief (PMC) Peripheral Clock Disable Register 0 */
#define REG_PMC_PCSR0  (*(RoReg*)0x400E0418U) /**< \brief (PMC) Peripheral Clock Status Register 0 */
#define REG_CKGR_MOR   (*(RwReg*)0x400E0420U) /**< \brief (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR  (*(RoReg*)0x400E0424U) /**< \brief (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLAR (*(RwReg*)0x400E0428U) /**< \brief (PMC) PLLA Register */
#define REG_PMC_MCKR   (*(RwReg*)0x400E0430U) /**< \brief (PMC) Master Clock Register */
#define REG_PMC_PCK    (*(RwReg*)0x400E0440U) /**< \brief (PMC) Programmable Clock 0 Register */
#define REG_PMC_IER    (*(WoReg*)0x400E0460U) /**< \brief (PMC) Interrupt Enable Register */
#define REG_PMC_IDR    (*(WoReg*)0x400E0464U) /**< \brief (PMC) Interrupt Disable Register */
#define REG_PMC_SR     (*(RoReg*)0x400E0468U) /**< \brief (PMC) Status Register */
#define REG_PMC_IMR    (*(RoReg*)0x400E046CU) /**< \brief (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR   (*(RwReg*)0x400E0470U) /**< \brief (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR   (*(RwReg*)0x400E0474U) /**< \brief (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR   (*(WoReg*)0x400E0478U) /**< \brief (PMC) Fault Output Clear Register */
#define REG_PMC_WPMR   (*(RwReg*)0x400E04E4U) /**< \brief (PMC) Write Protect Mode Register */
#define REG_PMC_WPSR   (*(RoReg*)0x400E04E8U) /**< \brief (PMC) Write Protect Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_PMC_INSTANCE_ */

#ifndef _SAM3N_PWM_INSTANCE_
#define _SAM3N_PWM_INSTANCE_

/* ========== Register definition for PWM peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PWM_MR             (0x40020000U) /**< \brief (PWM) PWM Mode Register */
#define REG_PWM_ENA            (0x40020004U) /**< \brief (PWM) PWM Enable Register */
#define REG_PWM_DIS            (0x40020008U) /**< \brief (PWM) PWM Disable Register */
#define REG_PWM_SR             (0x4002000CU) /**< \brief (PWM) PWM Status Register */
#define REG_PWM_IER            (0x40020010U) /**< \brief (PWM) PWM Interrupt Enable Register */
#define REG_PWM_IDR            (0x40020014U) /**< \brief (PWM) PWM Interrupt Disable Register */
#define REG_PWM_IMR            (0x40020018U) /**< \brief (PWM) PWM Interrupt Mask Register */
#define REG_PWM_ISR            (0x4002001CU) /**< \brief (PWM) PWM Interrupt Status Register */
#define REG_PWM_CMR0           (0x40020200U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 0) */
#define REG_PWM_CDTY0          (0x40020204U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 0) */
#define REG_PWM_CPRD0          (0x40020208U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 0) */
#define REG_PWM_CCNT0          (0x4002020CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 0) */
#define REG_PWM_CUPD0          (0x40020210U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 0) */
#define REG_PWM_CMR1           (0x40020220U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 1) */
#define REG_PWM_CDTY1          (0x40020224U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 1) */
#define REG_PWM_CPRD1          (0x40020228U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 1) */
#define REG_PWM_CCNT1          (0x4002022CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 1) */
#define REG_PWM_CUPD1          (0x40020230U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 1) */
#define REG_PWM_CMR2           (0x40020240U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 2) */
#define REG_PWM_CDTY2          (0x40020244U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 2) */
#define REG_PWM_CPRD2          (0x40020248U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 2) */
#define REG_PWM_CCNT2          (0x4002024CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 2) */
#define REG_PWM_CUPD2          (0x40020250U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 2) */
#define REG_PWM_CMR3           (0x40020260U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 3) */
#define REG_PWM_CDTY3          (0x40020264U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 3) */
#define REG_PWM_CPRD3          (0x40020268U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 3) */
#define REG_PWM_CCNT3          (0x4002026CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 3) */
#define REG_PWM_CUPD3          (0x40020270U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 3) */
#else
#define REG_PWM_MR    (*(RwReg*)0x40020000U) /**< \brief (PWM) PWM Mode Register */
#define REG_PWM_ENA   (*(WoReg*)0x40020004U) /**< \brief (PWM) PWM Enable Register */
#define REG_PWM_DIS   (*(WoReg*)0x40020008U) /**< \brief (PWM) PWM Disable Register */
#define REG_PWM_SR    (*(RoReg*)0x4002000CU) /**< \brief (PWM) PWM Status Register */
#define REG_PWM_IER   (*(WoReg*)0x40020010U) /**< \brief (PWM) PWM Interrupt Enable Register */
#define REG_PWM_IDR   (*(WoReg*)0x40020014U) /**< \brief (PWM) PWM Interrupt Disable Register */
#define REG_PWM_IMR   (*(RoReg*)0x40020018U) /**< \brief (PWM) PWM Interrupt Mask Register */
#define REG_PWM_ISR   (*(RoReg*)0x4002001CU) /**< \brief (PWM) PWM Interrupt Status Register */
#define REG_PWM_CMR0  (*(RwReg*)0x40020200U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 0) */
#define REG_PWM_CDTY0 (*(RwReg*)0x40020204U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 0) */
#define REG_PWM_CPRD0 (*(RwReg*)0x40020208U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 0) */
#define REG_PWM_CCNT0 (*(RoReg*)0x4002020CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 0) */
#define REG_PWM_CUPD0 (*(WoReg*)0x40020210U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 0) */
#define REG_PWM_CMR1  (*(RwReg*)0x40020220U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 1) */
#define REG_PWM_CDTY1 (*(RwReg*)0x40020224U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 1) */
#define REG_PWM_CPRD1 (*(RwReg*)0x40020228U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 1) */
#define REG_PWM_CCNT1 (*(RoReg*)0x4002022CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 1) */
#define REG_PWM_CUPD1 (*(WoReg*)0x40020230U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 1) */
#define REG_PWM_CMR2  (*(RwReg*)0x40020240U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 2) */
#define REG_PWM_CDTY2 (*(RwReg*)0x40020244U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 2) */
#define REG_PWM_CPRD2 (*(RwReg*)0x40020248U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 2) */
#define REG_PWM_CCNT2 (*(RoReg*)0x4002024CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 2) */
#define REG_PWM_CUPD2 (*(WoReg*)0x40020250U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 2) */
#define REG_PWM_CMR3  (*(RwReg*)0x40020260U) /**< \brief (PWM) PWM Channel Mode Register (ch_num = 3) */
#define REG_PWM_CDTY3 (*(RwReg*)0x40020264U) /**< \brief (PWM) PWM Channel Duty Cycle Register (ch_num = 3) */
#define REG_PWM_CPRD3 (*(RwReg*)0x40020268U) /**< \brief (PWM) PWM Channel Period Register (ch_num = 3) */
#define REG_PWM_CCNT3 (*(RoReg*)0x4002026CU) /**< \brief (PWM) PWM Channel Counter Register (ch_num = 3) */
#define REG_PWM_CUPD3 (*(WoReg*)0x40020270U) /**< \brief (PWM) PWM Channel Update Register (ch_num = 3) */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_PWM_INSTANCE_ */

#ifndef _SAM3N_RSTC_INSTANCE_
#define _SAM3N_RSTC_INSTANCE_

/* ========== Register definition for RSTC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_RSTC_CR          (0x400E1400U) /**< \brief (RSTC) Control Register */
#define REG_RSTC_SR          (0x400E1404U) /**< \brief (RSTC) Status Register */
#define REG_RSTC_MR          (0x400E1408U) /**< \brief (RSTC) Mode Register */
#else
#define REG_RSTC_CR (*(WoReg*)0x400E1400U) /**< \brief (RSTC) Control Register */
#define REG_RSTC_SR (*(RoReg*)0x400E1404U) /**< \brief (RSTC) Status Register */
#define REG_RSTC_MR (*(RwReg*)0x400E1408U) /**< \brief (RSTC) Mode Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_RSTC_INSTANCE_ */

#ifndef _SAM3N_RTC_INSTANCE_
#define _SAM3N_RTC_INSTANCE_

/* ========== Register definition for RTC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_RTC_CR              (0x400E1460U) /**< \brief (RTC) Control Register */
#define REG_RTC_MR              (0x400E1464U) /**< \brief (RTC) Mode Register */
#define REG_RTC_TIMR            (0x400E1468U) /**< \brief (RTC) Time Register */
#define REG_RTC_CALR            (0x400E146CU) /**< \brief (RTC) Calendar Register */
#define REG_RTC_TIMALR          (0x400E1470U) /**< \brief (RTC) Time Alarm Register */
#define REG_RTC_CALALR          (0x400E1474U) /**< \brief (RTC) Calendar Alarm Register */
#define REG_RTC_SR              (0x400E1478U) /**< \brief (RTC) Status Register */
#define REG_RTC_SCCR            (0x400E147CU) /**< \brief (RTC) Status Clear Command Register */
#define REG_RTC_IER             (0x400E1480U) /**< \brief (RTC) Interrupt Enable Register */
#define REG_RTC_IDR             (0x400E1484U) /**< \brief (RTC) Interrupt Disable Register */
#define REG_RTC_IMR             (0x400E1488U) /**< \brief (RTC) Interrupt Mask Register */
#define REG_RTC_VER             (0x400E148CU) /**< \brief (RTC) Valid Entry Register */
#define REG_RTC_WPMR            (0x400E1544U) /**< \brief (RTC) Write Protect Mode Register */
#else
#define REG_RTC_CR     (*(RwReg*)0x400E1460U) /**< \brief (RTC) Control Register */
#define REG_RTC_MR     (*(RwReg*)0x400E1464U) /**< \brief (RTC) Mode Register */
#define REG_RTC_TIMR   (*(RwReg*)0x400E1468U) /**< \brief (RTC) Time Register */
#define REG_RTC_CALR   (*(RwReg*)0x400E146CU) /**< \brief (RTC) Calendar Register */
#define REG_RTC_TIMALR (*(RwReg*)0x400E1470U) /**< \brief (RTC) Time Alarm Register */
#define REG_RTC_CALALR (*(RwReg*)0x400E1474U) /**< \brief (RTC) Calendar Alarm Register */
#define REG_RTC_SR     (*(RoReg*)0x400E1478U) /**< \brief (RTC) Status Register */
#define REG_RTC_SCCR   (*(WoReg*)0x400E147CU) /**< \brief (RTC) Status Clear Command Register */
#define REG_RTC_IER    (*(WoReg*)0x400E1480U) /**< \brief (RTC) Interrupt Enable Register */
#define REG_RTC_IDR    (*(WoReg*)0x400E1484U) /**< \brief (RTC) Interrupt Disable Register */
#define REG_RTC_IMR    (*(RoReg*)0x400E1488U) /**< \brief (RTC) Interrupt Mask Register */
#define REG_RTC_VER    (*(RoReg*)0x400E148CU) /**< \brief (RTC) Valid Entry Register */
#define REG_RTC_WPMR   (*(RwReg*)0x400E1544U) /**< \brief (RTC) Write Protect Mode Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_RTC_INSTANCE_ */

#ifndef _SAM3N_RTT_INSTANCE_
#define _SAM3N_RTT_INSTANCE_

/* ========== Register definition for RTT peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_RTT_MR          (0x400E1430U) /**< \brief (RTT) Mode Register */
#define REG_RTT_AR          (0x400E1434U) /**< \brief (RTT) Alarm Register */
#define REG_RTT_VR          (0x400E1438U) /**< \brief (RTT) Value Register */
#define REG_RTT_SR          (0x400E143CU) /**< \brief (RTT) Status Register */
#else
#define REG_RTT_MR (*(RwReg*)0x400E1430U) /**< \brief (RTT) Mode Register */
#define REG_RTT_AR (*(RwReg*)0x400E1434U) /**< \brief (RTT) Alarm Register */
#define REG_RTT_VR (*(RoReg*)0x400E1438U) /**< \brief (RTT) Value Register */
#define REG_RTT_SR (*(RoReg*)0x400E143CU) /**< \brief (RTT) Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_RTT_INSTANCE_ */

#ifndef _SAM3N_SPI_INSTANCE_
#define _SAM3N_SPI_INSTANCE_

/* ========== Register definition for SPI peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SPI_CR              (0x40008000U) /**< \brief (SPI) Control Register */
#define REG_SPI_MR              (0x40008004U) /**< \brief (SPI) Mode Register */
#define REG_SPI_RDR             (0x40008008U) /**< \brief (SPI) Receive Data Register */
#define REG_SPI_TDR             (0x4000800CU) /**< \brief (SPI) Transmit Data Register */
#define REG_SPI_SR              (0x40008010U) /**< \brief (SPI) Status Register */
#define REG_SPI_IER             (0x40008014U) /**< \brief (SPI) Interrupt Enable Register */
#define REG_SPI_IDR             (0x40008018U) /**< \brief (SPI) Interrupt Disable Register */
#define REG_SPI_IMR             (0x4000801CU) /**< \brief (SPI) Interrupt Mask Register */
#define REG_SPI_CSR             (0x40008030U) /**< \brief (SPI) Chip Select Register */
#define REG_SPI_WPMR            (0x400080E4U) /**< \brief (SPI) Write Protection Control Register */
#define REG_SPI_WPSR            (0x400080E8U) /**< \brief (SPI) Write Protection Status Register */
#define REG_SPI_RPR             (0x40008100U) /**< \brief (SPI) Receive Pointer Register */
#define REG_SPI_RCR             (0x40008104U) /**< \brief (SPI) Receive Counter Register */
#define REG_SPI_TPR             (0x40008108U) /**< \brief (SPI) Transmit Pointer Register */
#define REG_SPI_TCR             (0x4000810CU) /**< \brief (SPI) Transmit Counter Register */
#define REG_SPI_RNPR            (0x40008110U) /**< \brief (SPI) Receive Next Pointer Register */
#define REG_SPI_RNCR            (0x40008114U) /**< \brief (SPI) Receive Next Counter Register */
#define REG_SPI_TNPR            (0x40008118U) /**< \brief (SPI) Transmit Next Pointer Register */
#define REG_SPI_TNCR            (0x4000811CU) /**< \brief (SPI) Transmit Next Counter Register */
#define REG_SPI_PTCR            (0x40008120U) /**< \brief (SPI) Transfer Control Register */
#define REG_SPI_PTSR            (0x40008124U) /**< \brief (SPI) Transfer Status Register */
#else
#define REG_SPI_CR     (*(WoReg*)0x40008000U) /**< \brief (SPI) Control Register */
#define REG_SPI_MR     (*(RwReg*)0x40008004U) /**< \brief (SPI) Mode Register */
#define REG_SPI_RDR    (*(RoReg*)0x40008008U) /**< \brief (SPI) Receive Data Register */
#define REG_SPI_TDR    (*(WoReg*)0x4000800CU) /**< \brief (SPI) Transmit Data Register */
#define REG_SPI_SR     (*(RoReg*)0x40008010U) /**< \brief (SPI) Status Register */
#define REG_SPI_IER    (*(WoReg*)0x40008014U) /**< \brief (SPI) Interrupt Enable Register */
#define REG_SPI_IDR    (*(WoReg*)0x40008018U) /**< \brief (SPI) Interrupt Disable Register */
#define REG_SPI_IMR    (*(RoReg*)0x4000801CU) /**< \brief (SPI) Interrupt Mask Register */
#define REG_SPI_CSR    (*(RwReg*)0x40008030U) /**< \brief (SPI) Chip Select Register */
#define REG_SPI_WPMR   (*(RwReg*)0x400080E4U) /**< \brief (SPI) Write Protection Control Register */
#define REG_SPI_WPSR   (*(RoReg*)0x400080E8U) /**< \brief (SPI) Write Protection Status Register */
#define REG_SPI_RPR    (*(RwReg*)0x40008100U) /**< \brief (SPI) Receive Pointer Register */
#define REG_SPI_RCR    (*(RwReg*)0x40008104U) /**< \brief (SPI) Receive Counter Register */
#define REG_SPI_TPR    (*(RwReg*)0x40008108U) /**< \brief (SPI) Transmit Pointer Register */
#define REG_SPI_TCR    (*(RwReg*)0x4000810CU) /**< \brief (SPI) Transmit Counter Register */
#define REG_SPI_RNPR   (*(RwReg*)0x40008110U) /**< \brief (SPI) Receive Next Pointer Register */
#define REG_SPI_RNCR   (*(RwReg*)0x40008114U) /**< \brief (SPI) Receive Next Counter Register */
#define REG_SPI_TNPR   (*(RwReg*)0x40008118U) /**< \brief (SPI) Transmit Next Pointer Register */
#define REG_SPI_TNCR   (*(RwReg*)0x4000811CU) /**< \brief (SPI) Transmit Next Counter Register */
#define REG_SPI_PTCR   (*(WoReg*)0x40008120U) /**< \brief (SPI) Transfer Control Register */
#define REG_SPI_PTSR   (*(RoReg*)0x40008124U) /**< \brief (SPI) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_SPI_INSTANCE_ */

#ifndef _SAM3N_SUPC_INSTANCE_
#define _SAM3N_SUPC_INSTANCE_

/* ========== Register definition for SUPC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SUPC_CR            (0x400E1410U) /**< \brief (SUPC) Supply Controller Control Register */
#define REG_SUPC_SMMR          (0x400E1414U) /**< \brief (SUPC) Supply Controller Supply Monitor Mode Register */
#define REG_SUPC_MR            (0x400E1418U) /**< \brief (SUPC) Supply Controller Mode Register */
#define REG_SUPC_WUMR          (0x400E141CU) /**< \brief (SUPC) Supply Controller Wake Up Mode Register */
#define REG_SUPC_WUIR          (0x400E1420U) /**< \brief (SUPC) Supply Controller Wake Up Inputs Register */
#define REG_SUPC_SR            (0x400E1424U) /**< \brief (SUPC) Supply Controller Status Register */
#else
#define REG_SUPC_CR   (*(WoReg*)0x400E1410U) /**< \brief (SUPC) Supply Controller Control Register */
#define REG_SUPC_SMMR (*(RwReg*)0x400E1414U) /**< \brief (SUPC) Supply Controller Supply Monitor Mode Register */
#define REG_SUPC_MR   (*(RwReg*)0x400E1418U) /**< \brief (SUPC) Supply Controller Mode Register */
#define REG_SUPC_WUMR (*(RwReg*)0x400E141CU) /**< \brief (SUPC) Supply Controller Wake Up Mode Register */
#define REG_SUPC_WUIR (*(RwReg*)0x400E1420U) /**< \brief (SUPC) Supply Controller Wake Up Inputs Register */
#define REG_SUPC_SR   (*(RoReg*)0x400E1424U) /**< \brief (SUPC) Supply Controller Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_SUPC_INSTANCE_ */

#ifndef _SAM3N_TC0_INSTANCE_
#define _SAM3N_TC0_INSTANCE_

/* ========== Register definition for TC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC0_CCR0           (0x40010000U) /**< \brief (TC0) Channel Control Register (channel = 0) */
#define REG_TC0_CMR0           (0x40010004U) /**< \brief (TC0) Channel Mode Register (channel = 0) */
#define REG_TC0_SMMR0          (0x40010008U) /**< \brief (TC0) Stepper Motor Mode Register (channel = 0) */
#define REG_TC0_CV0            (0x40010010U) /**< \brief (TC0) Counter Value (channel = 0) */
#define REG_TC0_RA0            (0x40010014U) /**< \brief (TC0) Register A (channel = 0) */
#define REG_TC0_RB0            (0x40010018U) /**< \brief (TC0) Register B (channel = 0) */
#define REG_TC0_RC0            (0x4001001CU) /**< \brief (TC0) Register C (channel = 0) */
#define REG_TC0_SR0            (0x40010020U) /**< \brief (TC0) Status Register (channel = 0) */
#define REG_TC0_IER0           (0x40010024U) /**< \brief (TC0) Interrupt Enable Register (channel = 0) */
#define REG_TC0_IDR0           (0x40010028U) /**< \brief (TC0) Interrupt Disable Register (channel = 0) */
#define REG_TC0_IMR0           (0x4001002CU) /**< \brief (TC0) Interrupt Mask Register (channel = 0) */
#define REG_TC0_CCR1           (0x40010040U) /**< \brief (TC0) Channel Control Register (channel = 1) */
#define REG_TC0_CMR1           (0x40010044U) /**< \brief (TC0) Channel Mode Register (channel = 1) */
#define REG_TC0_SMMR1          (0x40010048U) /**< \brief (TC0) Stepper Motor Mode Register (channel = 1) */
#define REG_TC0_CV1            (0x40010050U) /**< \brief (TC0) Counter Value (channel = 1) */
#define REG_TC0_RA1            (0x40010054U) /**< \brief (TC0) Register A (channel = 1) */
#define REG_TC0_RB1            (0x40010058U) /**< \brief (TC0) Register B (channel = 1) */
#define REG_TC0_RC1            (0x4001005CU) /**< \brief (TC0) Register C (channel = 1) */
#define REG_TC0_SR1            (0x40010060U) /**< \brief (TC0) Status Register (channel = 1) */
#define REG_TC0_IER1           (0x40010064U) /**< \brief (TC0) Interrupt Enable Register (channel = 1) */
#define REG_TC0_IDR1           (0x40010068U) /**< \brief (TC0) Interrupt Disable Register (channel = 1) */
#define REG_TC0_IMR1           (0x4001006CU) /**< \brief (TC0) Interrupt Mask Register (channel = 1) */
#define REG_TC0_CCR2           (0x40010080U) /**< \brief (TC0) Channel Control Register (channel = 2) */
#define REG_TC0_CMR2           (0x40010084U) /**< \brief (TC0) Channel Mode Register (channel = 2) */
#define REG_TC0_SMMR2          (0x40010088U) /**< \brief (TC0) Stepper Motor Mode Register (channel = 2) */
#define REG_TC0_CV2            (0x40010090U) /**< \brief (TC0) Counter Value (channel = 2) */
#define REG_TC0_RA2            (0x40010094U) /**< \brief (TC0) Register A (channel = 2) */
#define REG_TC0_RB2            (0x40010098U) /**< \brief (TC0) Register B (channel = 2) */
#define REG_TC0_RC2            (0x4001009CU) /**< \brief (TC0) Register C (channel = 2) */
#define REG_TC0_SR2            (0x400100A0U) /**< \brief (TC0) Status Register (channel = 2) */
#define REG_TC0_IER2           (0x400100A4U) /**< \brief (TC0) Interrupt Enable Register (channel = 2) */
#define REG_TC0_IDR2           (0x400100A8U) /**< \brief (TC0) Interrupt Disable Register (channel = 2) */
#define REG_TC0_IMR2           (0x400100ACU) /**< \brief (TC0) Interrupt Mask Register (channel = 2) */
#define REG_TC0_BCR            (0x400100C0U) /**< \brief (TC0) Block Control Register */
#define REG_TC0_BMR            (0x400100C4U) /**< \brief (TC0) Block Mode Register */
#define REG_TC0_QIER           (0x400100C8U) /**< \brief (TC0) QDEC Interrupt Enable Register */
#define REG_TC0_QIDR           (0x400100CCU) /**< \brief (TC0) QDEC Interrupt Disable Register */
#define REG_TC0_QIMR           (0x400100D0U) /**< \brief (TC0) QDEC Interrupt Mask Register */
#define REG_TC0_QISR           (0x400100D4U) /**< \brief (TC0) QDEC Interrupt Status Register */
#define REG_TC0_WPMR           (0x400100E4U) /**< \brief (TC0) Write Protect Mode Register */
#else
#define REG_TC0_CCR0  (*(WoReg*)0x40010000U) /**< \brief (TC0) Channel Control Register (channel = 0) */
#define REG_TC0_CMR0  (*(RwReg*)0x40010004U) /**< \brief (TC0) Channel Mode Register (channel = 0) */
#define REG_TC0_SMMR0 (*(RwReg*)0x40010008U) /**< \brief (TC0) Stepper Motor Mode Register (channel = 0) */
#define REG_TC0_CV0   (*(RoReg*)0x40010010U) /**< \brief (TC0) Counter Value (channel = 0) */
#define REG_TC0_RA0   (*(RwReg*)0x40010014U) /**< \brief (TC0) Register A (channel = 0) */
#define REG_TC0_RB0   (*(RwReg*)0x40010018U) /**< \brief (TC0) Register B (channel = 0) */
#define REG_TC0_RC0   (*(RwReg*)0x4001001CU) /**< \brief (TC0) Register C (channel = 0) */
#define REG_TC0_SR0   (*(RoReg*)0x40010020U) /**< \brief (TC0) Status Register (channel = 0) */
#define REG_TC0_IER0  (*(WoReg*)0x40010024U) /**< \brief (TC0) Interrupt Enable Register (channel = 0) */
#define REG_TC0_IDR0  (*(WoReg*)0x40010028U) /**< \brief (TC0) Interrupt Disable Register (channel = 0) */
#define REG_TC0_IMR0  (*(RoReg*)0x4001002CU) /**< \brief (TC0) Interrupt Mask Register (channel = 0) */
#define REG_TC0_CCR1  (*(WoReg*)0x40010040U) /**< \brief (TC0) Channel Control Register (channel = 1) */
#define REG_TC0_CMR1  (*(RwReg*)0x40010044U) /**< \brief (TC0) Channel Mode Register (channel = 1) */
#define REG_TC0_SMMR1 (*(RwReg*)0x40010048U) /**< \brief (TC0) Stepper Motor Mode Register (channel = 1) */
#define REG_TC0_CV1   (*(RoReg*)0x40010050U) /**< \brief (TC0) Counter Value (channel = 1) */
#define REG_TC0_RA1   (*(RwReg*)0x40010054U) /**< \brief (TC0) Register A (channel = 1) */
#define REG_TC0_RB1   (*(RwReg*)0x40010058U) /**< \brief (TC0) Register B (channel = 1) */
#define REG_TC0_RC1   (*(RwReg*)0x4001005CU) /**< \brief (TC0) Register C (channel = 1) */
#define REG_TC0_SR1   (*(RoReg*)0x40010060U) /**< \brief (TC0) Status Register (channel = 1) */
#define REG_TC0_IER1  (*(WoReg*)0x40010064U) /**< \brief (TC0) Interrupt Enable Register (channel = 1) */
#define REG_TC0_IDR1  (*(WoReg*)0x40010068U) /**< \brief (TC0) Interrupt Disable Register (channel = 1) */
#define REG_TC0_IMR1  (*(RoReg*)0x4001006CU) /**< \brief (TC0) Interrupt Mask Register (channel = 1) */
#define REG_TC0_CCR2  (*(WoReg*)0x40010080U) /**< \brief (TC0) Channel Control Register (channel = 2) */
#define REG_TC0_CMR2  (*(RwReg*)0x40010084U) /**< \brief (TC0) Channel Mode Register (channel = 2) */
#define REG_TC0_SMMR2 (*(RwReg*)0x40010088U) /**< \brief (TC0) Stepper Motor Mode Register (channel = 2) */
#define REG_TC0_CV2   (*(RoReg*)0x40010090U) /**< \brief (TC0) Counter Value (channel = 2) */
#define REG_TC0_RA2   (*(RwReg*)0x40010094U) /**< \brief (TC0) Register A (channel = 2) */
#define REG_TC0_RB2   (*(RwReg*)0x40010098U) /**< \brief (TC0) Register B (channel = 2) */
#define REG_TC0_RC2   (*(RwReg*)0x4001009CU) /**< \brief (TC0) Register C (channel = 2) */
#define REG_TC0_SR2   (*(RoReg*)0x400100A0U) /**< \brief (TC0) Status Register (channel = 2) */
#define REG_TC0_IER2  (*(WoReg*)0x400100A4U) /**< \brief (TC0) Interrupt Enable Register (channel = 2) */
#define REG_TC0_IDR2  (*(WoReg*)0x400100A8U) /**< \brief (TC0) Interrupt Disable Register (channel = 2) */
#define REG_TC0_IMR2  (*(RoReg*)0x400100ACU) /**< \brief (TC0) Interrupt Mask Register (channel = 2) */
#define REG_TC0_BCR   (*(WoReg*)0x400100C0U) /**< \brief (TC0) Block Control Register */
#define REG_TC0_BMR   (*(RwReg*)0x400100C4U) /**< \brief (TC0) Block Mode Register */
#define REG_TC0_QIER  (*(WoReg*)0x400100C8U) /**< \brief (TC0) QDEC Interrupt Enable Register */
#define REG_TC0_QIDR  (*(WoReg*)0x400100CCU) /**< \brief (TC0) QDEC Interrupt Disable Register */
#define REG_TC0_QIMR  (*(RoReg*)0x400100D0U) /**< \brief (TC0) QDEC Interrupt Mask Register */
#define REG_TC0_QISR  (*(RoReg*)0x400100D4U) /**< \brief (TC0) QDEC Interrupt Status Register */
#define REG_TC0_WPMR  (*(RwReg*)0x400100E4U) /**< \brief (TC0) Write Protect Mode Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_TC0_INSTANCE_ */

#ifndef _SAM3N_TC1_INSTANCE_
#define _SAM3N_TC1_INSTANCE_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC1_CCR0           (0x40014000U) /**< \brief (TC1) Channel Control Register (channel = 0) */
#define REG_TC1_CMR0           (0x40014004U) /**< \brief (TC1) Channel Mode Register (channel = 0) */
#define REG_TC1_SMMR0          (0x40014008U) /**< \brief (TC1) Stepper Motor Mode Register (channel = 0) */
#define REG_TC1_CV0            (0x40014010U) /**< \brief (TC1) Counter Value (channel = 0) */
#define REG_TC1_RA0            (0x40014014U) /**< \brief (TC1) Register A (channel = 0) */
#define REG_TC1_RB0            (0x40014018U) /**< \brief (TC1) Register B (channel = 0) */
#define REG_TC1_RC0            (0x4001401CU) /**< \brief (TC1) Register C (channel = 0) */
#define REG_TC1_SR0            (0x40014020U) /**< \brief (TC1) Status Register (channel = 0) */
#define REG_TC1_IER0           (0x40014024U) /**< \brief (TC1) Interrupt Enable Register (channel = 0) */
#define REG_TC1_IDR0           (0x40014028U) /**< \brief (TC1) Interrupt Disable Register (channel = 0) */
#define REG_TC1_IMR0           (0x4001402CU) /**< \brief (TC1) Interrupt Mask Register (channel = 0) */
#define REG_TC1_CCR1           (0x40014040U) /**< \brief (TC1) Channel Control Register (channel = 1) */
#define REG_TC1_CMR1           (0x40014044U) /**< \brief (TC1) Channel Mode Register (channel = 1) */
#define REG_TC1_SMMR1          (0x40014048U) /**< \brief (TC1) Stepper Motor Mode Register (channel = 1) */
#define REG_TC1_CV1            (0x40014050U) /**< \brief (TC1) Counter Value (channel = 1) */
#define REG_TC1_RA1            (0x40014054U) /**< \brief (TC1) Register A (channel = 1) */
#define REG_TC1_RB1            (0x40014058U) /**< \brief (TC1) Register B (channel = 1) */
#define REG_TC1_RC1            (0x4001405CU) /**< \brief (TC1) Register C (channel = 1) */
#define REG_TC1_SR1            (0x40014060U) /**< \brief (TC1) Status Register (channel = 1) */
#define REG_TC1_IER1           (0x40014064U) /**< \brief (TC1) Interrupt Enable Register (channel = 1) */
#define REG_TC1_IDR1           (0x40014068U) /**< \brief (TC1) Interrupt Disable Register (channel = 1) */
#define REG_TC1_IMR1           (0x4001406CU) /**< \brief (TC1) Interrupt Mask Register (channel = 1) */
#define REG_TC1_CCR2           (0x40014080U) /**< \brief (TC1) Channel Control Register (channel = 2) */
#define REG_TC1_CMR2           (0x40014084U) /**< \brief (TC1) Channel Mode Register (channel = 2) */
#define REG_TC1_SMMR2          (0x40014088U) /**< \brief (TC1) Stepper Motor Mode Register (channel = 2) */
#define REG_TC1_CV2            (0x40014090U) /**< \brief (TC1) Counter Value (channel = 2) */
#define REG_TC1_RA2            (0x40014094U) /**< \brief (TC1) Register A (channel = 2) */
#define REG_TC1_RB2            (0x40014098U) /**< \brief (TC1) Register B (channel = 2) */
#define REG_TC1_RC2            (0x4001409CU) /**< \brief (TC1) Register C (channel = 2) */
#define REG_TC1_SR2            (0x400140A0U) /**< \brief (TC1) Status Register (channel = 2) */
#define REG_TC1_IER2           (0x400140A4U) /**< \brief (TC1) Interrupt Enable Register (channel = 2) */
#define REG_TC1_IDR2           (0x400140A8U) /**< \brief (TC1) Interrupt Disable Register (channel = 2) */
#define REG_TC1_IMR2           (0x400140ACU) /**< \brief (TC1) Interrupt Mask Register (channel = 2) */
#define REG_TC1_BCR            (0x400140C0U) /**< \brief (TC1) Block Control Register */
#define REG_TC1_BMR            (0x400140C4U) /**< \brief (TC1) Block Mode Register */
#define REG_TC1_QIER           (0x400140C8U) /**< \brief (TC1) QDEC Interrupt Enable Register */
#define REG_TC1_QIDR           (0x400140CCU) /**< \brief (TC1) QDEC Interrupt Disable Register */
#define REG_TC1_QIMR           (0x400140D0U) /**< \brief (TC1) QDEC Interrupt Mask Register */
#define REG_TC1_QISR           (0x400140D4U) /**< \brief (TC1) QDEC Interrupt Status Register */
#define REG_TC1_WPMR           (0x400140E4U) /**< \brief (TC1) Write Protect Mode Register */
#else
#define REG_TC1_CCR0  (*(WoReg*)0x40014000U) /**< \brief (TC1) Channel Control Register (channel = 0) */
#define REG_TC1_CMR0  (*(RwReg*)0x40014004U) /**< \brief (TC1) Channel Mode Register (channel = 0) */
#define REG_TC1_SMMR0 (*(RwReg*)0x40014008U) /**< \brief (TC1) Stepper Motor Mode Register (channel = 0) */
#define REG_TC1_CV0   (*(RoReg*)0x40014010U) /**< \brief (TC1) Counter Value (channel = 0) */
#define REG_TC1_RA0   (*(RwReg*)0x40014014U) /**< \brief (TC1) Register A (channel = 0) */
#define REG_TC1_RB0   (*(RwReg*)0x40014018U) /**< \brief (TC1) Register B (channel = 0) */
#define REG_TC1_RC0   (*(RwReg*)0x4001401CU) /**< \brief (TC1) Register C (channel = 0) */
#define REG_TC1_SR0   (*(RoReg*)0x40014020U) /**< \brief (TC1) Status Register (channel = 0) */
#define REG_TC1_IER0  (*(WoReg*)0x40014024U) /**< \brief (TC1) Interrupt Enable Register (channel = 0) */
#define REG_TC1_IDR0  (*(WoReg*)0x40014028U) /**< \brief (TC1) Interrupt Disable Register (channel = 0) */
#define REG_TC1_IMR0  (*(RoReg*)0x4001402CU) /**< \brief (TC1) Interrupt Mask Register (channel = 0) */
#define REG_TC1_CCR1  (*(WoReg*)0x40014040U) /**< \brief (TC1) Channel Control Register (channel = 1) */
#define REG_TC1_CMR1  (*(RwReg*)0x40014044U) /**< \brief (TC1) Channel Mode Register (channel = 1) */
#define REG_TC1_SMMR1 (*(RwReg*)0x40014048U) /**< \brief (TC1) Stepper Motor Mode Register (channel = 1) */
#define REG_TC1_CV1   (*(RoReg*)0x40014050U) /**< \brief (TC1) Counter Value (channel = 1) */
#define REG_TC1_RA1   (*(RwReg*)0x40014054U) /**< \brief (TC1) Register A (channel = 1) */
#define REG_TC1_RB1   (*(RwReg*)0x40014058U) /**< \brief (TC1) Register B (channel = 1) */
#define REG_TC1_RC1   (*(RwReg*)0x4001405CU) /**< \brief (TC1) Register C (channel = 1) */
#define REG_TC1_SR1   (*(RoReg*)0x40014060U) /**< \brief (TC1) Status Register (channel = 1) */
#define REG_TC1_IER1  (*(WoReg*)0x40014064U) /**< \brief (TC1) Interrupt Enable Register (channel = 1) */
#define REG_TC1_IDR1  (*(WoReg*)0x40014068U) /**< \brief (TC1) Interrupt Disable Register (channel = 1) */
#define REG_TC1_IMR1  (*(RoReg*)0x4001406CU) /**< \brief (TC1) Interrupt Mask Register (channel = 1) */
#define REG_TC1_CCR2  (*(WoReg*)0x40014080U) /**< \brief (TC1) Channel Control Register (channel = 2) */
#define REG_TC1_CMR2  (*(RwReg*)0x40014084U) /**< \brief (TC1) Channel Mode Register (channel = 2) */
#define REG_TC1_SMMR2 (*(RwReg*)0x40014088U) /**< \brief (TC1) Stepper Motor Mode Register (channel = 2) */
#define REG_TC1_CV2   (*(RoReg*)0x40014090U) /**< \brief (TC1) Counter Value (channel = 2) */
#define REG_TC1_RA2   (*(RwReg*)0x40014094U) /**< \brief (TC1) Register A (channel = 2) */
#define REG_TC1_RB2   (*(RwReg*)0x40014098U) /**< \brief (TC1) Register B (channel = 2) */
#define REG_TC1_RC2   (*(RwReg*)0x4001409CU) /**< \brief (TC1) Register C (channel = 2) */
#define REG_TC1_SR2   (*(RoReg*)0x400140A0U) /**< \brief (TC1) Status Register (channel = 2) */
#define REG_TC1_IER2  (*(WoReg*)0x400140A4U) /**< \brief (TC1) Interrupt Enable Register (channel = 2) */
#define REG_TC1_IDR2  (*(WoReg*)0x400140A8U) /**< \brief (TC1) Interrupt Disable Register (channel = 2) */
#define REG_TC1_IMR2  (*(RoReg*)0x400140ACU) /**< \brief (TC1) Interrupt Mask Register (channel = 2) */
#define REG_TC1_BCR   (*(WoReg*)0x400140C0U) /**< \brief (TC1) Block Control Register */
#define REG_TC1_BMR   (*(RwReg*)0x400140C4U) /**< \brief (TC1) Block Mode Register */
#define REG_TC1_QIER  (*(WoReg*)0x400140C8U) /**< \brief (TC1) QDEC Interrupt Enable Register */
#define REG_TC1_QIDR  (*(WoReg*)0x400140CCU) /**< \brief (TC1) QDEC Interrupt Disable Register */
#define REG_TC1_QIMR  (*(RoReg*)0x400140D0U) /**< \brief (TC1) QDEC Interrupt Mask Register */
#define REG_TC1_QISR  (*(RoReg*)0x400140D4U) /**< \brief (TC1) QDEC Interrupt Status Register */
#define REG_TC1_WPMR  (*(RwReg*)0x400140E4U) /**< \brief (TC1) Write Protect Mode Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_TC1_INSTANCE_ */

#ifndef _SAM3N_TWI0_INSTANCE_
#define _SAM3N_TWI0_INSTANCE_

/* ========== Register definition for TWI0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWI0_CR            (0x40018000U) /**< \brief (TWI0) Control Register */
#define REG_TWI0_MMR           (0x40018004U) /**< \brief (TWI0) Master Mode Register */
#define REG_TWI0_SMR           (0x40018008U) /**< \brief (TWI0) Slave Mode Register */
#define REG_TWI0_IADR          (0x4001800CU) /**< \brief (TWI0) Internal Address Register */
#define REG_TWI0_CWGR          (0x40018010U) /**< \brief (TWI0) Clock Waveform Generator Register */
#define REG_TWI0_SR            (0x40018020U) /**< \brief (TWI0) Status Register */
#define REG_TWI0_IER           (0x40018024U) /**< \brief (TWI0) Interrupt Enable Register */
#define REG_TWI0_IDR           (0x40018028U) /**< \brief (TWI0) Interrupt Disable Register */
#define REG_TWI0_IMR           (0x4001802CU) /**< \brief (TWI0) Interrupt Mask Register */
#define REG_TWI0_RHR           (0x40018030U) /**< \brief (TWI0) Receive Holding Register */
#define REG_TWI0_THR           (0x40018034U) /**< \brief (TWI0) Transmit Holding Register */
#define REG_TWI0_RPR           (0x40018100U) /**< \brief (TWI0) Receive Pointer Register */
#define REG_TWI0_RCR           (0x40018104U) /**< \brief (TWI0) Receive Counter Register */
#define REG_TWI0_TPR           (0x40018108U) /**< \brief (TWI0) Transmit Pointer Register */
#define REG_TWI0_TCR           (0x4001810CU) /**< \brief (TWI0) Transmit Counter Register */
#define REG_TWI0_RNPR          (0x40018110U) /**< \brief (TWI0) Receive Next Pointer Register */
#define REG_TWI0_RNCR          (0x40018114U) /**< \brief (TWI0) Receive Next Counter Register */
#define REG_TWI0_TNPR          (0x40018118U) /**< \brief (TWI0) Transmit Next Pointer Register */
#define REG_TWI0_TNCR          (0x4001811CU) /**< \brief (TWI0) Transmit Next Counter Register */
#define REG_TWI0_PTCR          (0x40018120U) /**< \brief (TWI0) Transfer Control Register */
#define REG_TWI0_PTSR          (0x40018124U) /**< \brief (TWI0) Transfer Status Register */
#else
#define REG_TWI0_CR   (*(WoReg*)0x40018000U) /**< \brief (TWI0) Control Register */
#define REG_TWI0_MMR  (*(RwReg*)0x40018004U) /**< \brief (TWI0) Master Mode Register */
#define REG_TWI0_SMR  (*(RwReg*)0x40018008U) /**< \brief (TWI0) Slave Mode Register */
#define REG_TWI0_IADR (*(RwReg*)0x4001800CU) /**< \brief (TWI0) Internal Address Register */
#define REG_TWI0_CWGR (*(RwReg*)0x40018010U) /**< \brief (TWI0) Clock Waveform Generator Register */
#define REG_TWI0_SR   (*(RoReg*)0x40018020U) /**< \brief (TWI0) Status Register */
#define REG_TWI0_IER  (*(WoReg*)0x40018024U) /**< \brief (TWI0) Interrupt Enable Register */
#define REG_TWI0_IDR  (*(WoReg*)0x40018028U) /**< \brief (TWI0) Interrupt Disable Register */
#define REG_TWI0_IMR  (*(RoReg*)0x4001802CU) /**< \brief (TWI0) Interrupt Mask Register */
#define REG_TWI0_RHR  (*(RoReg*)0x40018030U) /**< \brief (TWI0) Receive Holding Register */
#define REG_TWI0_THR  (*(WoReg*)0x40018034U) /**< \brief (TWI0) Transmit Holding Register */
#define REG_TWI0_RPR  (*(RwReg*)0x40018100U) /**< \brief (TWI0) Receive Pointer Register */
#define REG_TWI0_RCR  (*(RwReg*)0x40018104U) /**< \brief (TWI0) Receive Counter Register */
#define REG_TWI0_TPR  (*(RwReg*)0x40018108U) /**< \brief (TWI0) Transmit Pointer Register */
#define REG_TWI0_TCR  (*(RwReg*)0x4001810CU) /**< \brief (TWI0) Transmit Counter Register */
#define REG_TWI0_RNPR (*(RwReg*)0x40018110U) /**< \brief (TWI0) Receive Next Pointer Register */
#define REG_TWI0_RNCR (*(RwReg*)0x40018114U) /**< \brief (TWI0) Receive Next Counter Register */
#define REG_TWI0_TNPR (*(RwReg*)0x40018118U) /**< \brief (TWI0) Transmit Next Pointer Register */
#define REG_TWI0_TNCR (*(RwReg*)0x4001811CU) /**< \brief (TWI0) Transmit Next Counter Register */
#define REG_TWI0_PTCR (*(WoReg*)0x40018120U) /**< \brief (TWI0) Transfer Control Register */
#define REG_TWI0_PTSR (*(RoReg*)0x40018124U) /**< \brief (TWI0) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_TWI0_INSTANCE_ */

#ifndef _SAM3N_TWI1_INSTANCE_
#define _SAM3N_TWI1_INSTANCE_

/* ========== Register definition for TWI1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWI1_CR            (0x4001C000U) /**< \brief (TWI1) Control Register */
#define REG_TWI1_MMR           (0x4001C004U) /**< \brief (TWI1) Master Mode Register */
#define REG_TWI1_SMR           (0x4001C008U) /**< \brief (TWI1) Slave Mode Register */
#define REG_TWI1_IADR          (0x4001C00CU) /**< \brief (TWI1) Internal Address Register */
#define REG_TWI1_CWGR          (0x4001C010U) /**< \brief (TWI1) Clock Waveform Generator Register */
#define REG_TWI1_SR            (0x4001C020U) /**< \brief (TWI1) Status Register */
#define REG_TWI1_IER           (0x4001C024U) /**< \brief (TWI1) Interrupt Enable Register */
#define REG_TWI1_IDR           (0x4001C028U) /**< \brief (TWI1) Interrupt Disable Register */
#define REG_TWI1_IMR           (0x4001C02CU) /**< \brief (TWI1) Interrupt Mask Register */
#define REG_TWI1_RHR           (0x4001C030U) /**< \brief (TWI1) Receive Holding Register */
#define REG_TWI1_THR           (0x4001C034U) /**< \brief (TWI1) Transmit Holding Register */
#else
#define REG_TWI1_CR   (*(WoReg*)0x4001C000U) /**< \brief (TWI1) Control Register */
#define REG_TWI1_MMR  (*(RwReg*)0x4001C004U) /**< \brief (TWI1) Master Mode Register */
#define REG_TWI1_SMR  (*(RwReg*)0x4001C008U) /**< \brief (TWI1) Slave Mode Register */
#define REG_TWI1_IADR (*(RwReg*)0x4001C00CU) /**< \brief (TWI1) Internal Address Register */
#define REG_TWI1_CWGR (*(RwReg*)0x4001C010U) /**< \brief (TWI1) Clock Waveform Generator Register */
#define REG_TWI1_SR   (*(RoReg*)0x4001C020U) /**< \brief (TWI1) Status Register */
#define REG_TWI1_IER  (*(WoReg*)0x4001C024U) /**< \brief (TWI1) Interrupt Enable Register */
#define REG_TWI1_IDR  (*(WoReg*)0x4001C028U) /**< \brief (TWI1) Interrupt Disable Register */
#define REG_TWI1_IMR  (*(RoReg*)0x4001C02CU) /**< \brief (TWI1) Interrupt Mask Register */
#define REG_TWI1_RHR  (*(RoReg*)0x4001C030U) /**< \brief (TWI1) Receive Holding Register */
#define REG_TWI1_THR  (*(WoReg*)0x4001C034U) /**< \brief (TWI1) Transmit Holding Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_TWI1_INSTANCE_ */

#ifndef _SAM3N_UART0_INSTANCE_
#define _SAM3N_UART0_INSTANCE_

/* ========== Register definition for UART0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_UART0_CR            (0x400E0600U) /**< \brief (UART0) Control Register */
#define REG_UART0_MR            (0x400E0604U) /**< \brief (UART0) Mode Register */
#define REG_UART0_IER           (0x400E0608U) /**< \brief (UART0) Interrupt Enable Register */
#define REG_UART0_IDR           (0x400E060CU) /**< \brief (UART0) Interrupt Disable Register */
#define REG_UART0_IMR           (0x400E0610U) /**< \brief (UART0) Interrupt Mask Register */
#define REG_UART0_SR            (0x400E0614U) /**< \brief (UART0) Status Register */
#define REG_UART0_RHR           (0x400E0618U) /**< \brief (UART0) Receive Holding Register */
#define REG_UART0_THR           (0x400E061CU) /**< \brief (UART0) Transmit Holding Register */
#define REG_UART0_BRGR          (0x400E0620U) /**< \brief (UART0) Baud Rate Generator Register */
#define REG_UART0_RPR           (0x400E0700U) /**< \brief (UART0) Receive Pointer Register */
#define REG_UART0_RCR           (0x400E0704U) /**< \brief (UART0) Receive Counter Register */
#define REG_UART0_TPR           (0x400E0708U) /**< \brief (UART0) Transmit Pointer Register */
#define REG_UART0_TCR           (0x400E070CU) /**< \brief (UART0) Transmit Counter Register */
#define REG_UART0_RNPR          (0x400E0710U) /**< \brief (UART0) Receive Next Pointer Register */
#define REG_UART0_RNCR          (0x400E0714U) /**< \brief (UART0) Receive Next Counter Register */
#define REG_UART0_TNPR          (0x400E0718U) /**< \brief (UART0) Transmit Next Pointer Register */
#define REG_UART0_TNCR          (0x400E071CU) /**< \brief (UART0) Transmit Next Counter Register */
#define REG_UART0_PTCR          (0x400E0720U) /**< \brief (UART0) Transfer Control Register */
#define REG_UART0_PTSR          (0x400E0724U) /**< \brief (UART0) Transfer Status Register */
#else
#define REG_UART0_CR   (*(WoReg*)0x400E0600U) /**< \brief (UART0) Control Register */
#define REG_UART0_MR   (*(RwReg*)0x400E0604U) /**< \brief (UART0) Mode Register */
#define REG_UART0_IER  (*(WoReg*)0x400E0608U) /**< \brief (UART0) Interrupt Enable Register */
#define REG_UART0_IDR  (*(WoReg*)0x400E060CU) /**< \brief (UART0) Interrupt Disable Register */
#define REG_UART0_IMR  (*(RoReg*)0x400E0610U) /**< \brief (UART0) Interrupt Mask Register */
#define REG_UART0_SR   (*(RoReg*)0x400E0614U) /**< \brief (UART0) Status Register */
#define REG_UART0_RHR  (*(RoReg*)0x400E0618U) /**< \brief (UART0) Receive Holding Register */
#define REG_UART0_THR  (*(WoReg*)0x400E061CU) /**< \brief (UART0) Transmit Holding Register */
#define REG_UART0_BRGR (*(RwReg*)0x400E0620U) /**< \brief (UART0) Baud Rate Generator Register */
#define REG_UART0_RPR  (*(RwReg*)0x400E0700U) /**< \brief (UART0) Receive Pointer Register */
#define REG_UART0_RCR  (*(RwReg*)0x400E0704U) /**< \brief (UART0) Receive Counter Register */
#define REG_UART0_TPR  (*(RwReg*)0x400E0708U) /**< \brief (UART0) Transmit Pointer Register */
#define REG_UART0_TCR  (*(RwReg*)0x400E070CU) /**< \brief (UART0) Transmit Counter Register */
#define REG_UART0_RNPR (*(RwReg*)0x400E0710U) /**< \brief (UART0) Receive Next Pointer Register */
#define REG_UART0_RNCR (*(RwReg*)0x400E0714U) /**< \brief (UART0) Receive Next Counter Register */
#define REG_UART0_TNPR (*(RwReg*)0x400E0718U) /**< \brief (UART0) Transmit Next Pointer Register */
#define REG_UART0_TNCR (*(RwReg*)0x400E071CU) /**< \brief (UART0) Transmit Next Counter Register */
#define REG_UART0_PTCR (*(WoReg*)0x400E0720U) /**< \brief (UART0) Transfer Control Register */
#define REG_UART0_PTSR (*(RoReg*)0x400E0724U) /**< \brief (UART0) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_UART0_INSTANCE_ */

#ifndef _SAM3N_UART1_INSTANCE_
#define _SAM3N_UART1_INSTANCE_

/* ========== Register definition for UART1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_UART1_CR            (0x400E0800U) /**< \brief (UART1) Control Register */
#define REG_UART1_MR            (0x400E0804U) /**< \brief (UART1) Mode Register */
#define REG_UART1_IER           (0x400E0808U) /**< \brief (UART1) Interrupt Enable Register */
#define REG_UART1_IDR           (0x400E080CU) /**< \brief (UART1) Interrupt Disable Register */
#define REG_UART1_IMR           (0x400E0810U) /**< \brief (UART1) Interrupt Mask Register */
#define REG_UART1_SR            (0x400E0814U) /**< \brief (UART1) Status Register */
#define REG_UART1_RHR           (0x400E0818U) /**< \brief (UART1) Receive Holding Register */
#define REG_UART1_THR           (0x400E081CU) /**< \brief (UART1) Transmit Holding Register */
#define REG_UART1_BRGR          (0x400E0820U) /**< \brief (UART1) Baud Rate Generator Register */
#else
#define REG_UART1_CR   (*(WoReg*)0x400E0800U) /**< \brief (UART1) Control Register */
#define REG_UART1_MR   (*(RwReg*)0x400E0804U) /**< \brief (UART1) Mode Register */
#define REG_UART1_IER  (*(WoReg*)0x400E0808U) /**< \brief (UART1) Interrupt Enable Register */
#define REG_UART1_IDR  (*(WoReg*)0x400E080CU) /**< \brief (UART1) Interrupt Disable Register */
#define REG_UART1_IMR  (*(RoReg*)0x400E0810U) /**< \brief (UART1) Interrupt Mask Register */
#define REG_UART1_SR   (*(RoReg*)0x400E0814U) /**< \brief (UART1) Status Register */
#define REG_UART1_RHR  (*(RoReg*)0x400E0818U) /**< \brief (UART1) Receive Holding Register */
#define REG_UART1_THR  (*(WoReg*)0x400E081CU) /**< \brief (UART1) Transmit Holding Register */
#define REG_UART1_BRGR (*(RwReg*)0x400E0820U) /**< \brief (UART1) Baud Rate Generator Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_UART1_INSTANCE_ */

#ifndef _SAM3N_USART0_INSTANCE_
#define _SAM3N_USART0_INSTANCE_

/* ========== Register definition for USART0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USART0_CR          (0x40024000U) /**< \brief (USART0) Control Register */
#define REG_USART0_MR          (0x40024004U) /**< \brief (USART0) Mode Register */
#define REG_USART0_IER          (0x40024008U) /**< \brief (USART0) Interrupt Enable Register */
#define REG_USART0_IDR          (0x4002400CU) /**< \brief (USART0) Interrupt Disable Register */
#define REG_USART0_IMR          (0x40024010U) /**< \brief (USART0) Interrupt Mask Register */
#define REG_USART0_CSR          (0x40024014U) /**< \brief (USART0) Channel Status Register */
#define REG_USART0_RHR          (0x40024018U) /**< \brief (USART0) Receiver Holding Register */
#define REG_USART0_THR          (0x4002401CU) /**< \brief (USART0) Transmitter Holding Register */
#define REG_USART0_BRGR          (0x40024020U) /**< \brief (USART0) Baud Rate Generator Register */
#define REG_USART0_RTOR          (0x40024024U) /**< \brief (USART0) Receiver Time-out Register */
#define REG_USART0_TTGR          (0x40024028U) /**< \brief (USART0) Transmitter Timeguard Register */
#define REG_USART0_FIDI          (0x40024040U) /**< \brief (USART0) FI DI Ratio Register */
#define REG_USART0_NER          (0x40024044U) /**< \brief (USART0) Number of Errors Register */
#define REG_USART0_IF          (0x4002404CU) /**< \brief (USART0) IrDA Filter Register */
#define REG_USART0_WPMR          (0x400240E4U) /**< \brief (USART0) Write Protect Mode Register */
#define REG_USART0_WPSR          (0x400240E8U) /**< \brief (USART0) Write Protect Status Register */
#define REG_USART0_RPR          (0x40024100U) /**< \brief (USART0) Receive Pointer Register */
#define REG_USART0_RCR          (0x40024104U) /**< \brief (USART0) Receive Counter Register */
#define REG_USART0_TPR          (0x40024108U) /**< \brief (USART0) Transmit Pointer Register */
#define REG_USART0_TCR          (0x4002410CU) /**< \brief (USART0) Transmit Counter Register */
#define REG_USART0_RNPR          (0x40024110U) /**< \brief (USART0) Receive Next Pointer Register */
#define REG_USART0_RNCR          (0x40024114U) /**< \brief (USART0) Receive Next Counter Register */
#define REG_USART0_TNPR          (0x40024118U) /**< \brief (USART0) Transmit Next Pointer Register */
#define REG_USART0_TNCR          (0x4002411CU) /**< \brief (USART0) Transmit Next Counter Register */
#define REG_USART0_PTCR          (0x40024120U) /**< \brief (USART0) Transfer Control Register */
#define REG_USART0_PTSR          (0x40024124U) /**< \brief (USART0) Transfer Status Register */
#else
#define REG_USART0_CR (*(WoReg*)0x40024000U) /**< \brief (USART0) Control Register */
#define REG_USART0_MR (*(RwReg*)0x40024004U) /**< \brief (USART0) Mode Register */
#define REG_USART0_IER (*(WoReg*)0x40024008U) /**< \brief (USART0) Interrupt Enable Register */
#define REG_USART0_IDR (*(WoReg*)0x4002400CU) /**< \brief (USART0) Interrupt Disable Register */
#define REG_USART0_IMR (*(RoReg*)0x40024010U) /**< \brief (USART0) Interrupt Mask Register */
#define REG_USART0_CSR (*(RoReg*)0x40024014U) /**< \brief (USART0) Channel Status Register */
#define REG_USART0_RHR (*(RoReg*)0x40024018U) /**< \brief (USART0) Receiver Holding Register */
#define REG_USART0_THR (*(WoReg*)0x4002401CU) /**< \brief (USART0) Transmitter Holding Register */
#define REG_USART0_BRGR (*(RwReg*)0x40024020U) /**< \brief (USART0) Baud Rate Generator Register */
#define REG_USART0_RTOR (*(RwReg*)0x40024024U) /**< \brief (USART0) Receiver Time-out Register */
#define REG_USART0_TTGR (*(RwReg*)0x40024028U) /**< \brief (USART0) Transmitter Timeguard Register */
#define REG_USART0_FIDI (*(RwReg*)0x40024040U) /**< \brief (USART0) FI DI Ratio Register */
#define REG_USART0_NER (*(RoReg*)0x40024044U) /**< \brief (USART0) Number of Errors Register */
#define REG_USART0_IF (*(RwReg*)0x4002404CU) /**< \brief (USART0) IrDA Filter Register */
#define REG_USART0_WPMR (*(RwReg*)0x400240E4U) /**< \brief (USART0) Write Protect Mode Register */
#define REG_USART0_WPSR (*(RoReg*)0x400240E8U) /**< \brief (USART0) Write Protect Status Register */
#define REG_USART0_RPR (*(RwReg*)0x40024100U) /**< \brief (USART0) Receive Pointer Register */
#define REG_USART0_RCR (*(RwReg*)0x40024104U) /**< \brief (USART0) Receive Counter Register */
#define REG_USART0_TPR (*(RwReg*)0x40024108U) /**< \brief (USART0) Transmit Pointer Register */
#define REG_USART0_TCR (*(RwReg*)0x4002410CU) /**< \brief (USART0) Transmit Counter Register */
#define REG_USART0_RNPR (*(RwReg*)0x40024110U) /**< \brief (USART0) Receive Next Pointer Register */
#define REG_USART0_RNCR (*(RwReg*)0x40024114U) /**< \brief (USART0) Receive Next Counter Register */
#define REG_USART0_TNPR (*(RwReg*)0x40024118U) /**< \brief (USART0) Transmit Next Pointer Register */
#define REG_USART0_TNCR (*(RwReg*)0x4002411CU) /**< \brief (USART0) Transmit Next Counter Register */
#define REG_USART0_PTCR (*(WoReg*)0x40024120U) /**< \brief (USART0) Transfer Control Register */
#define REG_USART0_PTSR (*(RoReg*)0x40024124U) /**< \brief (USART0) Transfer Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_USART0_INSTANCE_ */

#ifndef _SAM3N_USART1_INSTANCE_
#define _SAM3N_USART1_INSTANCE_

/* ========== Register definition for USART1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USART1_CR          (0x40028000U) /**< \brief (USART1) Control Register */
#define REG_USART1_MR          (0x40028004U) /**< \brief (USART1) Mode Register */
#define REG_USART1_IER          (0x40028008U) /**< \brief (USART1) Interrupt Enable Register */
#define REG_USART1_IDR          (0x4002800CU) /**< \brief (USART1) Interrupt Disable Register */
#define REG_USART1_IMR          (0x40028010U) /**< \brief (USART1) Interrupt Mask Register */
#define REG_USART1_CSR          (0x40028014U) /**< \brief (USART1) Channel Status Register */
#define REG_USART1_RHR          (0x40028018U) /**< \brief (USART1) Receiver Holding Register */
#define REG_USART1_THR          (0x4002801CU) /**< \brief (USART1) Transmitter Holding Register */
#define REG_USART1_BRGR          (0x40028020U) /**< \brief (USART1) Baud Rate Generator Register */
#define REG_USART1_RTOR          (0x40028024U) /**< \brief (USART1) Receiver Time-out Register */
#define REG_USART1_TTGR          (0x40028028U) /**< \brief (USART1) Transmitter Timeguard Register */
#define REG_USART1_FIDI          (0x40028040U) /**< \brief (USART1) FI DI Ratio Register */
#define REG_USART1_NER          (0x40028044U) /**< \brief (USART1) Number of Errors Register */
#define REG_USART1_IF          (0x4002804CU) /**< \brief (USART1) IrDA Filter Register */
#define REG_USART1_WPMR          (0x400280E4U) /**< \brief (USART1) Write Protect Mode Register */
#define REG_USART1_WPSR          (0x400280E8U) /**< \brief (USART1) Write Protect Status Register */
#else
#define REG_USART1_CR (*(WoReg*)0x40028000U) /**< \brief (USART1) Control Register */
#define REG_USART1_MR (*(RwReg*)0x40028004U) /**< \brief (USART1) Mode Register */
#define REG_USART1_IER (*(WoReg*)0x40028008U) /**< \brief (USART1) Interrupt Enable Register */
#define REG_USART1_IDR (*(WoReg*)0x4002800CU) /**< \brief (USART1) Interrupt Disable Register */
#define REG_USART1_IMR (*(RoReg*)0x40028010U) /**< \brief (USART1) Interrupt Mask Register */
#define REG_USART1_CSR (*(RoReg*)0x40028014U) /**< \brief (USART1) Channel Status Register */
#define REG_USART1_RHR (*(RoReg*)0x40028018U) /**< \brief (USART1) Receiver Holding Register */
#define REG_USART1_THR (*(WoReg*)0x4002801CU) /**< \brief (USART1) Transmitter Holding Register */
#define REG_USART1_BRGR (*(RwReg*)0x40028020U) /**< \brief (USART1) Baud Rate Generator Register */
#define REG_USART1_RTOR (*(RwReg*)0x40028024U) /**< \brief (USART1) Receiver Time-out Register */
#define REG_USART1_TTGR (*(RwReg*)0x40028028U) /**< \brief (USART1) Transmitter Timeguard Register */
#define REG_USART1_FIDI (*(RwReg*)0x40028040U) /**< \brief (USART1) FI DI Ratio Register */
#define REG_USART1_NER (*(RoReg*)0x40028044U) /**< \brief (USART1) Number of Errors Register */
#define REG_USART1_IF (*(RwReg*)0x4002804CU) /**< \brief (USART1) IrDA Filter Register */
#define REG_USART1_WPMR (*(RwReg*)0x400280E4U) /**< \brief (USART1) Write Protect Mode Register */
#define REG_USART1_WPSR (*(RoReg*)0x400280E8U) /**< \brief (USART1) Write Protect Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_USART1_INSTANCE_ */

#ifndef _SAM3N_WDT_INSTANCE_
#define _SAM3N_WDT_INSTANCE_

/* ========== Register definition for WDT peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_WDT_CR          (0x400E1450U) /**< \brief (WDT) Control Register */
#define REG_WDT_MR          (0x400E1454U) /**< \brief (WDT) Mode Register */
#define REG_WDT_SR          (0x400E1458U) /**< \brief (WDT) Status Register */
#else
#define REG_WDT_CR (*(WoReg*)0x400E1450U) /**< \brief (WDT) Control Register */
#define REG_WDT_MR (*(RwReg*)0x400E1454U) /**< \brief (WDT) Mode Register */
#define REG_WDT_SR (*(RoReg*)0x400E1458U) /**< \brief (WDT) Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAM3N_WDT_INSTANCE_ */

#ifndef _SAM3N_PIO_
#define _SAM3N_PIO_

#define PIO_PA0           (1u << 0)  /**< \brief Pin Controlled by PA0 */
#define PIO_PA1           (1u << 1)  /**< \brief Pin Controlled by PA1 */
#define PIO_PA2           (1u << 2)  /**< \brief Pin Controlled by PA2 */
#define PIO_PA3           (1u << 3)  /**< \brief Pin Controlled by PA3 */
#define PIO_PA4           (1u << 4)  /**< \brief Pin Controlled by PA4 */
#define PIO_PA5           (1u << 5)  /**< \brief Pin Controlled by PA5 */
#define PIO_PA6           (1u << 6)  /**< \brief Pin Controlled by PA6 */
#define PIO_PA7           (1u << 7)  /**< \brief Pin Controlled by PA7 */
#define PIO_PA8           (1u << 8)  /**< \brief Pin Controlled by PA8 */
#define PIO_PA9           (1u << 9)  /**< \brief Pin Controlled by PA9 */
#define PIO_PA10          (1u << 10) /**< \brief Pin Controlled by PA10 */
#define PIO_PA11          (1u << 11) /**< \brief Pin Controlled by PA11 */
#define PIO_PA12          (1u << 12) /**< \brief Pin Controlled by PA12 */
#define PIO_PA13          (1u << 13) /**< \brief Pin Controlled by PA13 */
#define PIO_PA14          (1u << 14) /**< \brief Pin Controlled by PA14 */
#define PIO_PA15          (1u << 15) /**< \brief Pin Controlled by PA15 */
#define PIO_PA16          (1u << 16) /**< \brief Pin Controlled by PA16 */
#define PIO_PA17          (1u << 17) /**< \brief Pin Controlled by PA17 */
#define PIO_PA18          (1u << 18) /**< \brief Pin Controlled by PA18 */
#define PIO_PA19          (1u << 19) /**< \brief Pin Controlled by PA19 */
#define PIO_PA20          (1u << 20) /**< \brief Pin Controlled by PA20 */
#define PIO_PA21          (1u << 21) /**< \brief Pin Controlled by PA21 */
#define PIO_PA22          (1u << 22) /**< \brief Pin Controlled by PA22 */
#define PIO_PA23          (1u << 23) /**< \brief Pin Controlled by PA23 */
#define PIO_PA24          (1u << 24) /**< \brief Pin Controlled by PA24 */
#define PIO_PA25          (1u << 25) /**< \brief Pin Controlled by PA25 */
#define PIO_PA26          (1u << 26) /**< \brief Pin Controlled by PA26 */
#define PIO_PA27          (1u << 27) /**< \brief Pin Controlled by PA27 */
#define PIO_PA28          (1u << 28) /**< \brief Pin Controlled by PA28 */
#define PIO_PA29          (1u << 29) /**< \brief Pin Controlled by PA29 */
#define PIO_PA30          (1u << 30) /**< \brief Pin Controlled by PA30 */
#define PIO_PA31          (1u << 31) /**< \brief Pin Controlled by PA31 */
#define PIO_PB0           (1u << 0)  /**< \brief Pin Controlled by PB0 */
#define PIO_PB1           (1u << 1)  /**< \brief Pin Controlled by PB1 */
#define PIO_PB2           (1u << 2)  /**< \brief Pin Controlled by PB2 */
#define PIO_PB3           (1u << 3)  /**< \brief Pin Controlled by PB3 */
#define PIO_PB4           (1u << 4)  /**< \brief Pin Controlled by PB4 */
#define PIO_PB5           (1u << 5)  /**< \brief Pin Controlled by PB5 */
#define PIO_PB6           (1u << 6)  /**< \brief Pin Controlled by PB6 */
#define PIO_PB7           (1u << 7)  /**< \brief Pin Controlled by PB7 */
#define PIO_PB8           (1u << 8)  /**< \brief Pin Controlled by PB8 */
#define PIO_PB9           (1u << 9)  /**< \brief Pin Controlled by PB9 */
#define PIO_PB10          (1u << 10) /**< \brief Pin Controlled by PB10 */
#define PIO_PB11          (1u << 11) /**< \brief Pin Controlled by PB11 */
#define PIO_PB12          (1u << 12) /**< \brief Pin Controlled by PB12 */
#define PIO_PB13          (1u << 13) /**< \brief Pin Controlled by PB13 */
#define PIO_PB14          (1u << 14) /**< \brief Pin Controlled by PB14 */
#define PIO_PC0           (1u << 0)  /**< \brief Pin Controlled by PC0 */
#define PIO_PC1           (1u << 1)  /**< \brief Pin Controlled by PC1 */
#define PIO_PC2           (1u << 2)  /**< \brief Pin Controlled by PC2 */
#define PIO_PC3           (1u << 3)  /**< \brief Pin Controlled by PC3 */
#define PIO_PC4           (1u << 4)  /**< \brief Pin Controlled by PC4 */
#define PIO_PC5           (1u << 5)  /**< \brief Pin Controlled by PC5 */
#define PIO_PC6           (1u << 6)  /**< \brief Pin Controlled by PC6 */
#define PIO_PC7           (1u << 7)  /**< \brief Pin Controlled by PC7 */
#define PIO_PC8           (1u << 8)  /**< \brief Pin Controlled by PC8 */
#define PIO_PC9           (1u << 9)  /**< \brief Pin Controlled by PC9 */
#define PIO_PC10          (1u << 10) /**< \brief Pin Controlled by PC10 */
#define PIO_PC11          (1u << 11) /**< \brief Pin Controlled by PC11 */
#define PIO_PC12          (1u << 12) /**< \brief Pin Controlled by PC12 */
#define PIO_PC13          (1u << 13) /**< \brief Pin Controlled by PC13 */
#define PIO_PC14          (1u << 14) /**< \brief Pin Controlled by PC14 */
#define PIO_PC15          (1u << 15) /**< \brief Pin Controlled by PC15 */
#define PIO_PC16          (1u << 16) /**< \brief Pin Controlled by PC16 */
#define PIO_PC17          (1u << 17) /**< \brief Pin Controlled by PC17 */
#define PIO_PC18          (1u << 18) /**< \brief Pin Controlled by PC18 */
#define PIO_PC19          (1u << 19) /**< \brief Pin Controlled by PC19 */
#define PIO_PC20          (1u << 20) /**< \brief Pin Controlled by PC20 */
#define PIO_PC21          (1u << 21) /**< \brief Pin Controlled by PC21 */
#define PIO_PC22          (1u << 22) /**< \brief Pin Controlled by PC22 */
#define PIO_PC23          (1u << 23) /**< \brief Pin Controlled by PC23 */
#define PIO_PC24          (1u << 24) /**< \brief Pin Controlled by PC24 */
#define PIO_PC25          (1u << 25) /**< \brief Pin Controlled by PC25 */
#define PIO_PC26          (1u << 26) /**< \brief Pin Controlled by PC26 */
#define PIO_PC27          (1u << 27) /**< \brief Pin Controlled by PC27 */
#define PIO_PC28          (1u << 28) /**< \brief Pin Controlled by PC28 */
#define PIO_PC29          (1u << 29) /**< \brief Pin Controlled by PC29 */
#define PIO_PC30          (1u << 30) /**< \brief Pin Controlled by PC30 */
#define PIO_PC31          (1u << 31) /**< \brief Pin Controlled by PC31 */
/* ========== Pio definition for ADC peripheral ========== */
#define PIO_PA17X1_AD0    (1u << 17) /**< \brief Adc signal: AD0 */
#define PIO_PA18X1_AD1    (1u << 18) /**< \brief Adc signal: AD1 */
#define PIO_PC13X1_AD10   (1u << 13) /**< \brief Adc signal: AD10 */
#define PIO_PC15X1_AD11   (1u << 15) /**< \brief Adc signal: AD11 */
#define PIO_PC12X1_AD12   (1u << 12) /**< \brief Adc signal: AD12 */
#define PIO_PC29X1_AD13   (1u << 29) /**< \brief Adc signal: AD13 */
#define PIO_PC30X1_AD14   (1u << 30) /**< \brief Adc signal: AD14 */
#define PIO_PC31X1_AD15   (1u << 31) /**< \brief Adc signal: AD15 */
#define PIO_PA19X1_AD2    (1u << 19) /**< \brief Adc signal: AD2/WKUP9 */
#define PIO_PA19X1_WKUP9  (1u << 19) /**< \brief Adc signal: AD2/WKUP9 */
#define PIO_PA20X1_AD3    (1u << 20) /**< \brief Adc signal: AD3/WKUP10 */
#define PIO_PA20X1_WKUP10 (1u << 20) /**< \brief Adc signal: AD3/WKUP10 */
#define PIO_PB0X1_AD4     (1u << 0)  /**< \brief Adc signal: AD4 */
#define PIO_PB1X1_AD5     (1u << 1)  /**< \brief Adc signal: AD5 */
#define PIO_PB2X1_AD6     (1u << 2)  /**< \brief Adc signal: AD6/WKUP12 */
#define PIO_PB2X1_WKUP12  (1u << 2)  /**< \brief Adc signal: AD6/WKUP12 */
#define PIO_PB3X1_AD7     (1u << 3)  /**< \brief Adc signal: AD7 */
#define PIO_PA21X1_AD8    (1u << 21) /**< \brief Adc signal: AD8 */
#define PIO_PA22X1_AD9    (1u << 22) /**< \brief Adc signal: AD9 */
#define PIO_PA8B_ADTRG    (1u << 8)  /**< \brief Adc signal: ADTRG */
/* ========== Pio definition for DACC peripheral ========== */
#define PIO_PB13X1_DAC0   (1u << 13) /**< \brief Dacc signal: DAC0 */
#define PIO_PA2C_DATRG    (1u << 2)  /**< \brief Dacc signal: DATRG */
/* ========== Pio definition for PMC peripheral ========== */
#define PIO_PA6B_PCK0     (1u << 6)  /**< \brief Pmc signal: PCK0 */
#define PIO_PB13B_PCK0    (1u << 13) /**< \brief Pmc signal: PCK0 */
#define PIO_PC16B_PCK0    (1u << 16) /**< \brief Pmc signal: PCK0 */
#define PIO_PA17B_PCK1    (1u << 17) /**< \brief Pmc signal: PCK1 */
#define PIO_PA21B_PCK1    (1u << 21) /**< \brief Pmc signal: PCK1 */
#define PIO_PC17B_PCK1    (1u << 17) /**< \brief Pmc signal: PCK1 */
#define PIO_PA18B_PCK2    (1u << 18) /**< \brief Pmc signal: PCK2 */
#define PIO_PA31B_PCK2    (1u << 31) /**< \brief Pmc signal: PCK2 */
#define PIO_PB3B_PCK2     (1u << 3)  /**< \brief Pmc signal: PCK2 */
#define PIO_PC14B_PCK2    (1u << 14) /**< \brief Pmc signal: PCK2 */
/* ========== Pio definition for PWM peripheral ========== */
#define PIO_PA0A_PWM0     (1u << 0)  /**< \brief Pwm signal: PWM0 */
#define PIO_PA11B_PWM0    (1u << 11) /**< \brief Pwm signal: PWM0 */
#define PIO_PA23B_PWM0    (1u << 23) /**< \brief Pwm signal: PWM0 */
#define PIO_PB0A_PWM0     (1u << 0)  /**< \brief Pwm signal: PWM0 */
#define PIO_PC8B_PWM0     (1u << 8)  /**< \brief Pwm signal: PWM0 */
#define PIO_PC18B_PWM0    (1u << 18) /**< \brief Pwm signal: PWM0 */
#define PIO_PC22B_PWM0    (1u << 22) /**< \brief Pwm signal: PWM0 */
#define PIO_PA1A_PWM1     (1u << 1)  /**< \brief Pwm signal: PWM1 */
#define PIO_PA12B_PWM1    (1u << 12) /**< \brief Pwm signal: PWM1 */
#define PIO_PA24B_PWM1    (1u << 24) /**< \brief Pwm signal: PWM1 */
#define PIO_PB1A_PWM1     (1u << 1)  /**< \brief Pwm signal: PWM1 */
#define PIO_PC9B_PWM1     (1u << 9)  /**< \brief Pwm signal: PWM1 */
#define PIO_PC19B_PWM1    (1u << 19) /**< \brief Pwm signal: PWM1 */
#define PIO_PA2A_PWM2     (1u << 2)  /**< \brief Pwm signal: PWM2 */
#define PIO_PA13B_PWM2    (1u << 13) /**< \brief Pwm signal: PWM2 */
#define PIO_PA25B_PWM2    (1u << 25) /**< \brief Pwm signal: PWM2 */
#define PIO_PB4B_PWM2     (1u << 4)  /**< \brief Pwm signal: PWM2 */
#define PIO_PC10B_PWM2    (1u << 10) /**< \brief Pwm signal: PWM2 */
#define PIO_PC20B_PWM2    (1u << 20) /**< \brief Pwm signal: PWM2 */
#define PIO_PA7B_PWM3     (1u << 7)  /**< \brief Pwm signal: PWM3 */
#define PIO_PA14B_PWM3    (1u << 14) /**< \brief Pwm signal: PWM3 */
#define PIO_PB14B_PWM3    (1u << 14) /**< \brief Pwm signal: PWM3 */
#define PIO_PC11B_PWM3    (1u << 11) /**< \brief Pwm signal: PWM3 */
#define PIO_PC21B_PWM3    (1u << 21) /**< \brief Pwm signal: PWM3 */
/* ========== Pio definition for SPI peripheral ========== */
#define PIO_PA12A_MISO    (1u << 12) /**< \brief Spi signal: MISO */
#define PIO_PA13A_MOSI    (1u << 13) /**< \brief Spi signal: MOSI */
#define PIO_PA11A_NPCS0   (1u << 11) /**< \brief Spi signal: NPCS0 */
#define PIO_PA9B_NPCS1    (1u << 9)  /**< \brief Spi signal: NPCS1 */
#define PIO_PA31A_NPCS1   (1u << 31) /**< \brief Spi signal: NPCS1 */
#define PIO_PB14A_NPCS1   (1u << 14) /**< \brief Spi signal: NPCS1 */
#define PIO_PC4B_NPCS1    (1u << 4)  /**< \brief Spi signal: NPCS1 */
#define PIO_PA10B_NPCS2   (1u << 10) /**< \brief Spi signal: NPCS2 */
#define PIO_PA30B_NPCS2   (1u << 30) /**< \brief Spi signal: NPCS2 */
#define PIO_PB2B_NPCS2    (1u << 2)  /**< \brief Spi signal: NPCS2 */
#define PIO_PC7B_NPCS2    (1u << 7)  /**< \brief Spi signal: NPCS2 */
#define PIO_PA3B_NPCS3    (1u << 3)  /**< \brief Spi signal: NPCS3 */
#define PIO_PA5B_NPCS3    (1u << 5)  /**< \brief Spi signal: NPCS3 */
#define PIO_PA22B_NPCS3   (1u << 22) /**< \brief Spi signal: NPCS3 */
#define PIO_PA14A_SPCK    (1u << 14) /**< \brief Spi signal: SPCK */
/* ========== Pio definition for TC0 peripheral ========== */
#define PIO_PA4B_TCLK0    (1u << 4)  /**< \brief Tc0 signal: TCLK0 */
#define PIO_PA28B_TCLK1   (1u << 28) /**< \brief Tc0 signal: TCLK1 */
#define PIO_PA29B_TCLK2   (1u << 29) /**< \brief Tc0 signal: TCLK2 */
#define PIO_PA0B_TIOA0    (1u << 0)  /**< \brief Tc0 signal: TIOA0 */
#define PIO_PA15B_TIOA1   (1u << 15) /**< \brief Tc0 signal: TIOA1 */
#define PIO_PA26B_TIOA2   (1u << 26) /**< \brief Tc0 signal: TIOA2 */
#define PIO_PA1B_TIOB0    (1u << 1)  /**< \brief Tc0 signal: TIOB0 */
#define PIO_PA16B_TIOB1   (1u << 16) /**< \brief Tc0 signal: TIOB1 */
#define PIO_PA27B_TIOB2   (1u << 27) /**< \brief Tc0 signal: TIOB2 */
/* ========== Pio definition for TC1 peripheral ========== */
#define PIO_PC25B_TCLK3   (1u << 25) /**< \brief Tc1 signal: TCLK3 */
#define PIO_PC28B_TCLK4   (1u << 28) /**< \brief Tc1 signal: TCLK4 */
#define PIO_PC31B_TCLK5   (1u << 31) /**< \brief Tc1 signal: TCLK5 */
#define PIO_PC23B_TIOA3   (1u << 23) /**< \brief Tc1 signal: TIOA3 */
#define PIO_PC26B_TIOA4   (1u << 26) /**< \brief Tc1 signal: TIOA4 */
#define PIO_PC29B_TIOA5   (1u << 29) /**< \brief Tc1 signal: TIOA5 */
#define PIO_PC24B_TIOB3   (1u << 24) /**< \brief Tc1 signal: TIOB3 */
#define PIO_PC27B_TIOB4   (1u << 27) /**< \brief Tc1 signal: TIOB4 */
#define PIO_PC30B_TIOB5   (1u << 30) /**< \brief Tc1 signal: TIOB5 */
/* ========== Pio definition for TWI0 peripheral ========== */
#define PIO_PA4A_TWCK0    (1u << 4)  /**< \brief Twi0 signal: TWCK0 */
#define PIO_PA3A_TWD0     (1u << 3)  /**< \brief Twi0 signal: TWD0 */
/* ========== Pio definition for TWI1 peripheral ========== */
#define PIO_PB5A_TWCK1    (1u << 5)  /**< \brief Twi1 signal: TWCK1 */
#define PIO_PB4A_TWD1     (1u << 4)  /**< \brief Twi1 signal: TWD1 */
/* ========== Pio definition for UART0 peripheral ========== */
#define PIO_PA9A_URXD0    (1u << 9)  /**< \brief Uart0 signal: URXD0 */
#define PIO_PA10A_UTXD0   (1u << 10) /**< \brief Uart0 signal: UTXD0 */
/* ========== Pio definition for UART1 peripheral ========== */
#define PIO_PB2A_URXD1    (1u << 2)  /**< \brief Uart1 signal: URXD1 */
#define PIO_PB3A_UTXD1    (1u << 3)  /**< \brief Uart1 signal: UTXD1 */
/* ========== Pio definition for USART0 peripheral ========== */
#define PIO_PA8A_CTS0     (1u << 8)  /**< \brief Usart0 signal: CTS0 */
#define PIO_PA7A_RTS0     (1u << 7)  /**< \brief Usart0 signal: RTS0 */
#define PIO_PA5A_RXD0     (1u << 5)  /**< \brief Usart0 signal: RXD0 */
#define PIO_PA2B_SCK0     (1u << 2)  /**< \brief Usart0 signal: SCK0 */
#define PIO_PA6A_TXD0     (1u << 6)  /**< \brief Usart0 signal: TXD0 */
/* ========== Pio definition for USART1 peripheral ========== */
#define PIO_PA25A_CTS1    (1u << 25) /**< \brief Usart1 signal: CTS1 */
#define PIO_PA24A_RTS1    (1u << 24) /**< \brief Usart1 signal: RTS1 */
#define PIO_PA21A_RXD1    (1u << 21) /**< \brief Usart1 signal: RXD1 */
#define PIO_PA23A_SCK1    (1u << 23) /**< \brief Usart1 signal: SCK1 */
#define PIO_PA22A_TXD1    (1u << 22) /**< \brief Usart1 signal: TXD1 */
/* ========== Pio indexes ========== */
#define PIO_PA0_IDX       0
#define PIO_PA1_IDX       1
#define PIO_PA2_IDX       2
#define PIO_PA3_IDX       3
#define PIO_PA4_IDX       4
#define PIO_PA5_IDX       5
#define PIO_PA6_IDX       6
#define PIO_PA7_IDX       7
#define PIO_PA8_IDX       8
#define PIO_PA9_IDX       9
#define PIO_PA10_IDX      10
#define PIO_PA11_IDX      11
#define PIO_PA12_IDX      12
#define PIO_PA13_IDX      13
#define PIO_PA14_IDX      14
#define PIO_PA15_IDX      15
#define PIO_PA16_IDX      16
#define PIO_PA17_IDX      17
#define PIO_PA18_IDX      18
#define PIO_PA19_IDX      19
#define PIO_PA20_IDX      20
#define PIO_PA21_IDX      21
#define PIO_PA22_IDX      22
#define PIO_PA23_IDX      23
#define PIO_PA24_IDX      24
#define PIO_PA25_IDX      25
#define PIO_PA26_IDX      26
#define PIO_PA27_IDX      27
#define PIO_PA28_IDX      28
#define PIO_PA29_IDX      29
#define PIO_PA30_IDX      30
#define PIO_PA31_IDX      31
#define PIO_PB0_IDX       32
#define PIO_PB1_IDX       33
#define PIO_PB2_IDX       34
#define PIO_PB3_IDX       35
#define PIO_PB4_IDX       36
#define PIO_PB5_IDX       37
#define PIO_PB6_IDX       38
#define PIO_PB7_IDX       39
#define PIO_PB8_IDX       40
#define PIO_PB9_IDX       41
#define PIO_PB10_IDX      42
#define PIO_PB11_IDX      43
#define PIO_PB12_IDX      44
#define PIO_PB13_IDX      45
#define PIO_PB14_IDX      46
#define PIO_PC0_IDX       64
#define PIO_PC1_IDX       65
#define PIO_PC2_IDX       66
#define PIO_PC3_IDX       67
#define PIO_PC4_IDX       68
#define PIO_PC5_IDX       69
#define PIO_PC6_IDX       70
#define PIO_PC7_IDX       71
#define PIO_PC8_IDX       72
#define PIO_PC9_IDX       73
#define PIO_PC10_IDX      74
#define PIO_PC11_IDX      75
#define PIO_PC12_IDX      76
#define PIO_PC13_IDX      77
#define PIO_PC14_IDX      78
#define PIO_PC15_IDX      79
#define PIO_PC16_IDX      80
#define PIO_PC17_IDX      81
#define PIO_PC18_IDX      82
#define PIO_PC19_IDX      83
#define PIO_PC20_IDX      84
#define PIO_PC21_IDX      85
#define PIO_PC22_IDX      86
#define PIO_PC23_IDX      87
#define PIO_PC24_IDX      88
#define PIO_PC25_IDX      89
#define PIO_PC26_IDX      90
#define PIO_PC27_IDX      91
#define PIO_PC28_IDX      92
#define PIO_PC29_IDX      93
#define PIO_PC30_IDX      94
#define PIO_PC31_IDX      95

#endif /* _SAM3N_PIO_ */
