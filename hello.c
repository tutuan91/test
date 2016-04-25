/*
* hello.c - The simplest kernel module.
*/
#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */
int init_module(void)
{
 printk(KERN_INFO "CSE190G: Hello world.\n");
 return 0;
}
void cleanup_module(void)
{
 printk(KERN_INFO "CSE190G: Goodbye world.\n");
}