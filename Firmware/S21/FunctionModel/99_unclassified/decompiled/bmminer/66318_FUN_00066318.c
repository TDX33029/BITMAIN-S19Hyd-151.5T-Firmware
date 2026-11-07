// FUN_00066318 @ 00066318  size=292  callers=1
// program: bmminer


int FUN_00066318(char *param_1)

{
  int iVar1;
  char local_808 [8];
  undefined4 local_800;
  char acStack_7fc [2036];
  
  if (DAT_0094507c == 0) {
    if (param_1 == (char *)0x0) {
      builtin_strncpy(local_808,"bad para",8);
      local_800 = CONCAT13(local_800._3_1_,0xa6d);
      FUN_0004948c(0,local_808,0);
      iVar1 = -3;
    }
    else {
      iVar1 = open(param_1,0x802);
      DAT_00945078 = iVar1;
      if (iVar1 < 0) {
        builtin_strncpy(local_808,"open lcd",8);
        local_800._0_1_ = ' ';
        local_800._1_1_ = 'f';
        local_800._2_1_ = 'a';
        local_800._3_1_ = 'i';
        builtin_strncpy(acStack_7fc,"led!!!\n",8);
        FUN_0004948c(0,local_808,0);
        iVar1 = -1;
      }
      else {
        DAT_0094507c = 1;
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

