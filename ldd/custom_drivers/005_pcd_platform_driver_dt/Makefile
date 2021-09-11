obj-m := pcd_platform_driver_dt.o
KERN_DIR = /usr/src/linux-headers-4.9.201-tegra-ubuntu18.04_aarch64/kernel-4.9

host:
	make -C $(KERN_DIR) M=$(PWD) modules

clean:
	make -C $(KERN_DIR) M=$(PWD) clean