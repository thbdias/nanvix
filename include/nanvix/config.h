/*
 * Copyright (C) 2011-2013 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 *
 * config.h - Kernel configuration
 */

#ifndef CONFIG_H_
#define CONFIG_H_
	
	/* Machine configuration. */
	#define CPU              i386 /* Cpu model.                 */
	#define MEMORY_SIZE 0x1000000 /* Memory size (in bytes).    */
	#define HDD_SIZE    0x2000000 /* Hard disk size (in bytes). */
	#define SWP_SIZE    0x1000000 /* Swap disk size (in bytes). */
	
	/* Kernel configuration. */
	#define PROC_MAX              64 /* Maximum number of process.      */
	#define PROC_SIZE_MAX  0x4000000 /* Maximum process size.           */
	#define RAMDISK_SIZE    0x400000 /* RAM disks size.                 */
	#define INITRD_SIZE      0x80000 /* Init RAM disk size.             */
	#define NR_INODES           1024 /* Number of in-core inodes.       */
	#define NR_SUPERBLOCKS         4 /* Number of in-core super blocks. */
	#define ROOT_DEV          0x0101 /* Root device number.             */
	#define SWAP_DEV          0x0101 /* Swap device number.             */
	#define NR_FILES             256 /* Number of opened files.         */
	#define NR_REGIONS           128 /* Number of memory regions.       */
	#define NR_BUFFERS           256 /* Number of block buffers.        */
	
#endif /* CONFIG_H_ */
