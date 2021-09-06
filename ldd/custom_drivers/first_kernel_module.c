#include <linux/module.h>

static int __init helloworld_init(void)
{
    pr_info("Hello World\n");
    return 0;
}

static void __exit helloworld_exit(void)
{
    pr_info("Good bye World\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ME");
MODULE_DESCRIPTION("A kernel module to print some messages");
MODULE_INFO(board, "NVIDIA Jetson");