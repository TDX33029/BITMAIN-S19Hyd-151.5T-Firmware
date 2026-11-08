// FUN_0007928c @ 0007928c  size=212  callers=4
// program: bmminer


undefined4 FUN_0007928c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 auStack_28 [28];
  undefined4 local_c;
  
  if ((((param_4 & 0x200) == 0) && ((param_1 == (int *)0x0 || (*param_1 != 1)))) &&
     ((param_1 == (int *)0x0 || (*param_1 != 0)))) {
    local_c = 0xffffffff;
  }
  else {
    iVar1 = FUN_0007a8e4(auStack_28);
    if (iVar1 == 0) {
      local_c = FUN_00078704(param_1,param_4,0,auStack_28,param_2,param_3);
      FUN_0007a9e8(auStack_28);
    }
    else {
      local_c = 0xffffffff;
    }
  }
  return local_c;
}

