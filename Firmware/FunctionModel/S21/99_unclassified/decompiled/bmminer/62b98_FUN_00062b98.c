// FUN_00062b98 @ 00062b98  size=272  callers=1
// program: bmminer


int FUN_00062b98(uint param_1,undefined4 param_2)

{
  int iVar1;
  char local_808 [8];
  undefined4 local_800;
  char acStack_7fc [2036];
  
  if (DAT_00944b90 == 0) {
    builtin_strncpy(local_808,"please i",8);
    local_800._0_1_ = 'n';
    local_800._1_1_ = 'i';
    local_800._2_1_ = 't';
    local_800._3_1_ = ' ';
    builtin_strncpy(acStack_7fc,"platform first!!\n",0x12);
    FUN_0004948c(0,local_808,0);
    iVar1 = -2;
  }
  else if (param_1 < 2) {
    *(undefined4 *)(&DAT_00944d28 + param_1 * 8) = param_2;
    (&DAT_00944d2c)[param_1 * 8] = 1;
    iVar1 = param_1 + 1;
  }
  else {
    builtin_strncpy(local_808,"bad para",8);
    local_800 = CONCAT13(local_800._3_1_,0xa6d);
    FUN_0004948c(0,local_808,0);
    iVar1 = -3;
  }
  return iVar1;
}

