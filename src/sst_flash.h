/*
 * 86Box	A hypervisor and IBM PC system emulator that specializes in
 *		running old operating systems and software designed for IBM
 *		PC systems and compatibles from 1981 through fairly recent
 *		system designs based on the PCI bus.
 *
 *		This file is part of the 86Box distribution.
 *
 *		Implementation of an SST flash chip.
 *
 * Version:	@(#)sst_flash.h	1.0.2	2019/06/25
 *
 * Author:	Melissa Goad, <mszoopers@protonmail.com>
 *		Copyright 2020 Melissa Goad.
 */

#if defined(DEV_BRANCH) && defined(USE_SS7)
extern const device_t sst_flash_39sf010_device;
#endif