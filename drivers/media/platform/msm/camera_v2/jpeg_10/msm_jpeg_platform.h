/* SPDX-License-Identifier: GPL-2.0-only */
/* Copyright (c) 2012-2016, 2018, 2020 The Linux Foundation. All rights reserved.
 */

#ifndef MSM_JPEG_PLATFORM_H
#define MSM_JPEG_PLATFORM_H

#include <linux/interrupt.h>
#include <linux/platform_device.h>
#include <linux/ion.h>
#include "msm_jpeg_sync.h"
#define JPEG_CLK_RATE 266670000

int msm_jpeg_platform_set_clk_rate(struct msm_jpeg_device *pgmn_dev,
		long clk_rate);
void msm_jpeg_platform_p2v(int iommu_hdl, int fd);
uint32_t msm_jpeg_platform_v2p(struct msm_jpeg_device *pgmn_dev, int fd,
		uint32_t len, int iommu_hdl);

int msm_jpeg_platform_clk_enable(void);
int msm_jpeg_platform_clk_disable(void);

int msm_jpeg_platform_init(irqreturn_t (*handler)(int, void *),
	void *context);
int msm_jpeg_platform_release(void *context);
int msm_jpeg_platform_set_dt_config(struct msm_jpeg_device *pgmn_dev);
int msm_jpeg_platform_setup(struct msm_jpeg_device *pgmn_dev);
void msm_jpeg_platform_cleanup(struct msm_jpeg_device *pgmn_dev);

#endif /* MSM_JPEG_PLATFORM_H */
