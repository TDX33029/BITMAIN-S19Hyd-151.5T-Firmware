// FUN_0001cd50 @ 0001cd50  size=504  callers=1
// program: bmminer


int FUN_0001cd50(undefined4 param_1)

{
  uint param3;
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 extraout_s1;
  double dVar3;
  char local_830 [24];
  undefined4 local_818;
  char acStack_814 [2024];
  
  param3 = FUN_0004f034();
  DAT_000891d8 = param3;
  if (3 < DAT_00087bbc) {
    snprintf(local_830,0x800,"power type version: 0x%04x\n",param3);
    FUN_00032218(3,local_830,0);
  }
  iVar1 = FUN_00020854(param3 & 0xffff);
  if (iVar1 == 0) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_830,"power type version error",0x18);
      local_818 = CONCAT22(local_818._2_2_,10);
      FUN_00032218(3,local_830,0);
      return -1;
    }
  }
  else {
    if (3 < DAT_00087bbc) {
      memcpy(local_830,"Initializing the power, please wait, this may take up to 2 minutes...\n",
             0x47);
      FUN_00032218(3,local_830,0);
    }
    FUN_000479e8();
    sleep(1);
    FUN_0001cba0();
    iVar1 = FUN_0001cc60(param_1);
    if (iVar1 < 0) {
      if (DAT_00087bbc < 4) {
        return iVar1;
      }
      snprintf(local_830,0x800,"%s power iic error.\n","power_init");
      FUN_00032218(3,local_830,0);
      return iVar1;
    }
    FUN_000479b0();
    sleep(1);
    iVar1 = 3;
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    do {
      sleep(1);
      uVar2 = FUN_0001caa8();
      if ((dVar3 * 0.75) / 100.0 <= (double)CONCAT44(extraout_s1,uVar2)) {
        return 0;
      }
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_830,"power voltage can not me",0x18);
        local_818._0_1_ = 'e';
        local_818._1_1_ = 't';
        local_818._2_1_ = ' ';
        local_818._3_1_ = 't';
        builtin_strncpy(acStack_814,"he target",10);
        FUN_00032218(3,local_830,0);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

