// FUN_000468cc @ 000468cc  size=160  callers=1
// program: bmminer


int FUN_000468cc(uint param_1)

{
  int iVar1;
  char local_808 [8];
  undefined4 uStack_800;
  char acStack_7fc [2036];
  
  if (DAT_0050f5e0 == 0) {
    builtin_strncpy(local_808,"please i",8);
    uStack_800._0_1_ = 'n';
    uStack_800._1_1_ = 'i';
    uStack_800._2_1_ = 't';
    uStack_800._3_1_ = ' ';
    builtin_strncpy(acStack_7fc,"platform first!!\n",0x12);
    FUN_00032218(0,local_808,0);
    iVar1 = -2;
  }
  else if (param_1 < 2) {
    iVar1 = param_1 + 1;
  }
  else {
    builtin_strncpy(local_808,"bad para",8);
    uStack_800 = CONCAT13(uStack_800._3_1_,0xa6d);
    FUN_00032218(0,local_808);
    iVar1 = -3;
  }
  return iVar1;
}

