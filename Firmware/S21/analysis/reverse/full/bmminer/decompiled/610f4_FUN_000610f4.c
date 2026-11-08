// FUN_000610f4 @ 000610f4  size=332  callers=1
// program: bmminer


void FUN_000610f4(void)

{
  char local_80c [2048];
  int local_c;
  
  if (DAT_00944cbc != 0) {
    local_c = munmap(DAT_00944cc4,0x1200);
    if (local_c < 0) {
      builtin_strncpy(local_80c,"munmap failed!\n",0x10);
      FUN_0004948c(0,local_80c,0);
    }
    local_c = munmap(DAT_00944ccc,0x1000000);
    if (local_c < 0) {
      builtin_strncpy(local_80c,"munmap fpga_mem_addr_hal failed!\n",0x22);
      FUN_0004948c(0,local_80c,0);
    }
    DAT_00944cbc = 0;
    close(DAT_00944cc0);
    close(DAT_00944cc8);
  }
  return;
}

