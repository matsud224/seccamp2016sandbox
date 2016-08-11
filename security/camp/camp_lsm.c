/*
 *  Simplified MAC Kernel (camp) security module
 *
 *  Authors:
 *	Daiki Matsunaga <matsu.d.224@icloud.com>
 *
 *  Copyright (C) 2016 Daiki Matsunaga <matsu.d.224@icloud.com>
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2,
 *      as published by the Free Software Foundation.
 */


#include <linux/security.h>


static __init int camp_init(void){
	printk(KERN_INFO "camp: hello,lsm!");
	return 0;
}

security_initcall(camp_init);
