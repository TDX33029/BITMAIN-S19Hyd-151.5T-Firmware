// FUN_00048518 @ 00048518  size=196  callers=0
// program: bmminer


int FUN_00048518(char *param_1)

{
  int iVar1;
  char local_810 [8];
  undefined4 uStack_808;
  char acStack_804 [2040];
  
  if (DAT_0050f978 == 0) {
    if (param_1 == (char *)0x0) {
      builtin_strncpy(local_810,"bad para",8);
      uStack_808 = CONCAT13(uStack_808._3_1_,0xa6d);
      FUN_00032218(0,local_810,0);
      iVar1 = -3;
    }
    else {
      iVar1 = open64(param_1,0x802);
      DAT_0050f97c = iVar1;
      if (iVar1 < 0) {
        builtin_strncpy(local_810,"open lcd",8);
        uStack_808._0_1_ = ' ';
        uStack_808._1_1_ = 'f';
        uStack_808._2_1_ = 'a';
        uStack_808._3_1_ = 'i';
        builtin_strncpy(acStack_804,"led!!!\n",8);
        FUN_00032218(0,local_810,0);
        iVar1 = -1;
      }
      else {
        DAT_0050f978 = 1;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

