// fpga_mem_mmap @ 0001002c  size=96  callers=0
// program: fpga_mem_driver.ko


undefined4 fpga_mem_mmap(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_2[9];
  param_2[10] = param_2[10] | 0x4044000;
  iVar1 = fpga_mem_offset_addr;
  param_2[9] = uVar3 & 0xffffffc3;
  iVar1 = remap_pfn_range(param_2,*param_2,iVar1 >> 0xc,param_2[1] - *param_2,uVar3 & 0xffffffc3,
                          param_2,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    printk("fpga_mem_mmap error!\n");
    uVar2 = 0xfffffff7;
  }
  return uVar2;
}

