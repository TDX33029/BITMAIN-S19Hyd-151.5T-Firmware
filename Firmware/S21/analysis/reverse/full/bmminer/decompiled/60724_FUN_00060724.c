// FUN_00060724 @ 00060724  size=304  callers=1
// program: bmminer


undefined4 FUN_00060724(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_808 [2048];
  
  if (DAT_00944b90 == 0) {
    iVar1 = FUN_00060dc8();
    if (iVar1 == 0) {
      iVar1 = FUN_00061578();
      if (iVar1 == 0) {
        memset(&DAT_00944b98,0,0x124);
        FUN_00060218(&DAT_00944b98);
        FUN_00060174(&DAT_00944b98);
        DAT_00944b90 = 1;
        FUN_00060ae8();
        FUN_00065320();
        FUN_00063afc();
        uVar2 = 0;
      }
      else {
        builtin_strncpy(local_808,"gpio init failed\n",0x12);
        FUN_0004948c(0,local_808,0);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      builtin_strncpy(local_808,"fpga init failed\n",0x12);
      FUN_0004948c(0,local_808,0);
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

