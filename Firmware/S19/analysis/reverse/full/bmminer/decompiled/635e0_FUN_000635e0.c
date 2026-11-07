// FUN_000635e0 @ 000635e0  size=88  callers=1
// program: bmminer


undefined4 FUN_000635e0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x187c) != FUN_00060ed4 && *(code **)(param_1 + 0x187c) != FUN_000615e8)
  {
    return 0;
  }
  iVar1 = FUN_00065368(param_2,param_1 + 0x1880);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2084) = *(undefined4 *)(iVar1 + 0x404);
  }
  return 0;
}

