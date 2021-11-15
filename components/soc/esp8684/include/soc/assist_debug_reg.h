/**
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** ASSIST_DEBUG_CORE_0_INTR_ENA_REG register
 *  core0 monitor enable configuration register
 */
#define ASSIST_DEBUG_CORE_0_INTR_ENA_REG (DR_REG_ASSIST_DEBUG_BASE + 0x0)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA : R/W; bitpos: [0]; default: 0;
 *  enbale sp underlow monitor
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_ENA_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA : R/W; bitpos: [1]; default: 0;
 *  enbale sp overflow monitor
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_ENA_S  1

/** ASSIST_DEBUG_CORE_0_INTR_RAW_REG register
 *  core0 monitor interrupt status register
 */
#define ASSIST_DEBUG_CORE_0_INTR_RAW_REG (DR_REG_ASSIST_DEBUG_BASE + 0x4)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW : RO; bitpos: [0]; default: 0;
 *  sp underlow monitor interrupt status register
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RAW_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW : RO; bitpos: [1]; default: 0;
 *  sp overflow monitor interupt status register
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RAW_S  1

/** ASSIST_DEBUG_CORE_0_INTR_RLS_REG register
 *  core0 monitor interrupt enable register
 */
#define ASSIST_DEBUG_CORE_0_INTR_RLS_REG (DR_REG_ASSIST_DEBUG_BASE + 0x8)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS : R/W; bitpos: [0]; default: 0;
 *  enbale sp underlow monitor interrupt
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_RLS_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS : R/W; bitpos: [1]; default: 0;
 *  enbale sp overflow monitor interrupt
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_RLS_S  1

/** ASSIST_DEBUG_CORE_0_INTR_CLR_REG register
 *  core0 monitor interrupt clr register
 */
#define ASSIST_DEBUG_CORE_0_INTR_CLR_REG (DR_REG_ASSIST_DEBUG_BASE + 0xc)
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR : WT; bitpos: [0]; default: 0;
 *  clr sp underlow monitor interrupt
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR    (BIT(0))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_RD_CLR_S  0
/** ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR : WT; bitpos: [1]; default: 0;
 *  clr sp overflow monitor interrupt
 */
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR    (BIT(1))
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_M  (ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_V << ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_S)
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_AREA_DRAM0_0_WR_CLR_S  1

/** ASSIST_DEBUG_CORE_0_SP_MIN_REG register
 *  stack min value
 */
#define ASSIST_DEBUG_CORE_0_SP_MIN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x10)
/** ASSIST_DEBUG_CORE_0_SP_MIN : R/W; bitpos: [31:0]; default: 0;
 *  core0 sp region configuration regsiter
 */
#define ASSIST_DEBUG_CORE_0_SP_MIN    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MIN_M  (ASSIST_DEBUG_CORE_0_SP_MIN_V << ASSIST_DEBUG_CORE_0_SP_MIN_S)
#define ASSIST_DEBUG_CORE_0_SP_MIN_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MIN_S  0

/** ASSIST_DEBUG_CORE_0_SP_MAX_REG register
 *  stack max value
 */
#define ASSIST_DEBUG_CORE_0_SP_MAX_REG (DR_REG_ASSIST_DEBUG_BASE + 0x14)
/** ASSIST_DEBUG_CORE_0_SP_MAX : R/W; bitpos: [31:0]; default: 4294967295;
 *  core0 sp pc status register
 */
#define ASSIST_DEBUG_CORE_0_SP_MAX    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MAX_M  (ASSIST_DEBUG_CORE_0_SP_MAX_V << ASSIST_DEBUG_CORE_0_SP_MAX_S)
#define ASSIST_DEBUG_CORE_0_SP_MAX_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_MAX_S  0

/** ASSIST_DEBUG_CORE_0_SP_PC_REG register
 *  stack monitor pc status register
 */
#define ASSIST_DEBUG_CORE_0_SP_PC_REG (DR_REG_ASSIST_DEBUG_BASE + 0x18)
/** ASSIST_DEBUG_CORE_0_SP_PC : RO; bitpos: [31:0]; default: 0;
 *  This regsiter stores the PC when trigger stack monitor.
 */
#define ASSIST_DEBUG_CORE_0_SP_PC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_PC_M  (ASSIST_DEBUG_CORE_0_SP_PC_V << ASSIST_DEBUG_CORE_0_SP_PC_S)
#define ASSIST_DEBUG_CORE_0_SP_PC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_SP_PC_S  0

/** ASSIST_DEBUG_CORE_0_RCD_EN_REG register
 *  record enable configuration register
 */
#define ASSIST_DEBUG_CORE_0_RCD_EN_REG (DR_REG_ASSIST_DEBUG_BASE + 0x1c)
/** ASSIST_DEBUG_CORE_0_RCD_RECORDEN : R/W; bitpos: [0]; default: 0;
 *  Set 1 to enable record PC
 */
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN    (BIT(0))
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN_M  (ASSIST_DEBUG_CORE_0_RCD_RECORDEN_V << ASSIST_DEBUG_CORE_0_RCD_RECORDEN_S)
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_RCD_RECORDEN_S  0
/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN : R/W; bitpos: [1]; default: 0;
 *  Set 1 to enable cpu pdebug function, must set this bit can get cpu PC
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN    (BIT(1))
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_M  (ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_V << ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_S)
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGEN_S  1

/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_REG register
 *  record status regsiter
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_REG (DR_REG_ASSIST_DEBUG_BASE + 0x20)
/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC : RO; bitpos: [31:0]; default: 0;
 *  recorded PC
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_M  (ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_V << ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_S)
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGPC_S  0

/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_REG register
 *  record status regsiter
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_REG (DR_REG_ASSIST_DEBUG_BASE + 0x24)
/** ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP : RO; bitpos: [31:0]; default: 0;
 *  recorded sp
 */
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_M  (ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_V << ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_S)
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_RCD_PDEBUGSP_S  0

/** ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXCEPTION_REG register
 *  cpu status register
 */
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXCEPTION_REG (DR_REG_ASSIST_DEBUG_BASE + 0x28)
/** ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC : RO; bitpos: [31:0]; default: 0;
 *  cpu's lastpc before exception
 */
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC    0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_M  (ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_V << ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_S)
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_V  0xFFFFFFFFU
#define ASSIST_DEBUG_CORE_0_LASTPC_BEFORE_EXC_S  0

/** ASSIST_DEBUG_CORE_0_DEBUG_MODE_REG register
 *  cpu status register
 */
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x2c)
/** ASSIST_DEBUG_CORE_0_DEBUG_MODE : RO; bitpos: [0]; default: 0;
 *  cpu debug mode status, 1 means cpu enter debug mode.
 */
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE    (BIT(0))
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_M  (ASSIST_DEBUG_CORE_0_DEBUG_MODE_V << ASSIST_DEBUG_CORE_0_DEBUG_MODE_S)
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_DEBUG_MODE_S  0
/** ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE : RO; bitpos: [1]; default: 0;
 *  cpu debug_module active status
 */
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE    (BIT(1))
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_M  (ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_V << ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_S)
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_V  0x00000001U
#define ASSIST_DEBUG_CORE_0_DEBUG_MODULE_ACTIVE_S  1

/** ASSIST_DEBUG_CLOCK_GATE_REG register
 *  clock gate register
 */
#define ASSIST_DEBUG_CLOCK_GATE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x30)
/** ASSIST_DEBUG_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  clock gate register
 */
#define ASSIST_DEBUG_CLK_EN    (BIT(0))
#define ASSIST_DEBUG_CLK_EN_M  (ASSIST_DEBUG_CLK_EN_V << ASSIST_DEBUG_CLK_EN_S)
#define ASSIST_DEBUG_CLK_EN_V  0x00000001U
#define ASSIST_DEBUG_CLK_EN_S  0

/** ASSIST_DEBUG_DATE_REG register
 *  version register
 */
#define ASSIST_DEBUG_DATE_REG (DR_REG_ASSIST_DEBUG_BASE + 0x1fc)
/** ASSIST_DEBUG_DATE : R/W; bitpos: [27:0]; default: 34627616;
 *  version register
 */
#define ASSIST_DEBUG_DATE    0x0FFFFFFFU
#define ASSIST_DEBUG_DATE_M  (ASSIST_DEBUG_DATE_V << ASSIST_DEBUG_DATE_S)
#define ASSIST_DEBUG_DATE_V  0x0FFFFFFFU
#define ASSIST_DEBUG_DATE_S  0

#ifdef __cplusplus
}
#endif
