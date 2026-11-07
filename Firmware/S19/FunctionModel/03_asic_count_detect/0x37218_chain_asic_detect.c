// FUN_00037218 @ 00037218  size=500
// callers: [FUN_000388ec]

undefined4 FUN_00037218(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint param3;
  uint uVar4;
  undefined4 local_82c;
  char acStack_828 [2052];
  
  param3 = 0;
  local_82c = 0;
  do {
    iVar1 = FUN_000201d8(param3);
    if (iVar1 != 0) {
      uVar4 = param3 & 0xff;
      iVar1 = 0;
      do {
        FUN_0004b29c(param3);
        sleep(3);
        thunk_FUN_0004c050(uVar4);
        FUN_00034a5c(1000);
        if (DAT_0008a844 != '\0') {
          if (3 < DAT_00087bbc) {
            snprintf(acStack_828,0x800,"pic enabled for chain %d, press anykey to continue...",
                     param3);
            FUN_00032218(3,acStack_828,0);
          }
          _IO_getc(stdin);
        }
        FUN_0004b2e4(param3);
        FUN_00034a5c(200);
        FUN_0004b29c(param3);
        sleep(1);
        FUN_0004b2e4(param3);
        FUN_00034a5c(200);
        FUN_0002f808(param3,0);
        iVar2 = FUN_000205b4(param3);
        if (3 < DAT_00087bbc) {
          snprintf(acStack_828,0x800,"Chain[%d]: find %d asic, times %d\n",param3,iVar2,iVar1);
          FUN_00032218(3,acStack_828,0);
        }
        iVar3 = FUN_0002002c();
        iVar1 = iVar1 + 1;
      } while ((iVar2 != iVar3) && (thunk_FUN_0004c224(uVar4), iVar1 != 3));
      iVar1 = FUN_000205b4(param3);
      iVar2 = FUN_0002002c();
      if (iVar2 != iVar1) {
        if (3 < DAT_00087bbc) {
          snprintf(acStack_828,0x800,"Chain %d only find %d asic, will power off hash board %d\n",
                   param3,iVar1,param3);
          FUN_00032218(3,acStack_828,0);
        }
        local_82c = 0xffffffff;
        thunk_FUN_0004c224(uVar4);
        FUN_0002013c(param3,0);
      }
    }
    param3 = param3 + 1;
  } while (param3 != 4);
  return local_82c;
}


