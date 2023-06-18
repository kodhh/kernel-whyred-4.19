/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2015, 2018, 2020 The Linux Foundation. All rights reserved.
 */

#ifndef MSM_CSID_3_4_2_HWREG_H
#define MSM_CSID_3_4_2_HWREG_H

#include <sensor/csid/msm_csid.h>

static uint8_t csid_lane_assign_v3_4_2[PHY_LANE_MAX] = {0, 4, 1, 2, 3};
static struct csid_reg_parms_t csid_v3_4_2 = {
	/* MIPI	CSID registers */
	0x0,
	0x4,
	0x8,
	0xC,
	0x10,
	0x14,
	0x18,
	0x1C,
	0x20,
	0x60,
	0x64,
	0x68,
	0x6C,
	0x70,
	0x74,
	0x78,
	0x7C,
	0x80,
	0x84,
	0x88,
	0x8C,
	0x90,
	0x94,
	0x98,
	0xA0,
	0xA4,
	0xAC,
	0xB0,
	0xB4,
	11,
	0x7FFF,
	0x4,
	17,
	0x30040002,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0xFFFFFFFF,
	0x7f010800,
	20,
	0xFFFFFFFF,
	0xFFFFFFFF,
};
#endif
