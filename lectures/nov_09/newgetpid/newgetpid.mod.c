#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x46279cad, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3ec24b49, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xe5684fc0, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x93c7b8b6, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xa5e4de87, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xe13dea99, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc295a11e, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1A645A8097557AA43E12696");
