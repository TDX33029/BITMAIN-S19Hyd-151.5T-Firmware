// axi_fpga_dev_mmap @ 0001002c  size=88  callers=0
// program: bitmain_axi.ko


undefined4 axi_fpga_dev_mmap(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_2[9];
  param_2[10] = param_2[10] | 0x4044000;
  param_2[9] = uVar3 & 0xffffffc3;
  iVar1 = remap_pfn_range(param_2,*param_2,0x40000,param_2[1] - *param_2,uVar3 & 0xffffffc3,param_2,
                          param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    printk("axi_fpga_dev_mmap error!\n");
    uVar2 = 0xfffffff5;
  }
  return uVar2;
}

