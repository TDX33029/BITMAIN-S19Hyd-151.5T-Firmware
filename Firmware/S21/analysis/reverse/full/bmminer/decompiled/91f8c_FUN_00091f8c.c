// FUN_00091f8c @ 00091f8c  size=156  callers=2
// program: bmminer


undefined4 FUN_00091f8c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((*(code **)(param_1 + 0x187c) == FUN_0008fa98) ||
      (*(code **)(param_1 + 0x187c) == FUN_0008fbe8)) &&
     (iVar1 = FUN_000952d0(param_2,param_1 + 0x1880), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x2084) = *(undefined4 *)(iVar1 + 0x404);
  }
  return 0;
}

