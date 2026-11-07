// FUN_00045624 @ 00045624  size=236  callers=1
// program: bmminer


undefined4 FUN_00045624(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_818 [2052];
  
  if (DAT_0050f5e0 == 0) {
    iVar1 = FUN_00045ad8();
    if (iVar1 == 0) {
      iVar1 = FUN_00045cfc();
      if (iVar1 == 0) {
        memset(&DAT_0050f4b8,0,0x124);
        FUN_00045408();
        DAT_0050f5e0 = 1;
        FUN_000457ac();
        FUN_00047f44();
        FUN_00047288();
        return 0;
      }
      uVar2 = 0xfffffffe;
      builtin_strncpy(local_818,"gpio init failed\n",0x12);
      FUN_00032218(0,local_818,0);
    }
    else {
      uVar2 = 0xffffffff;
      builtin_strncpy(local_818,"fpga init failed\n",0x12);
      FUN_00032218(0,local_818,0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

