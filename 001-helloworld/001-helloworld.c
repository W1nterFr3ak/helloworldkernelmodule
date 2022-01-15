#include<linux/module.h>
#include<linux/init.h>


static int __init lkm_init(void){ 
	//first initialisation routine that runs when kernel module is loaded
	pr_info("Hellow world!\n");//internally usess printk and sets log level to info and the string is stored in the kernel messages logs
	return 0;

}


module_init(lkm_init);
