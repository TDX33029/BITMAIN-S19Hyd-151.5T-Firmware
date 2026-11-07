// FUN_0007ad04 @ 0007ad04  size=192  callers=1
// program: bmminer


void FUN_0007ad04(undefined4 *param_1)

{
  int iVar1;
  uint local_c;
  
  FUN_0007a6e0(param_1);
  for (local_c = 0; local_c < (uint)(1 << (param_1[2] & 0xff)); local_c = local_c + 1) {
    iVar1 = param_1[1] + local_c * 8;
    *(undefined4 **)(iVar1 + 4) = param_1 + 3;
    *(undefined4 *)(param_1[1] + local_c * 8) = *(undefined4 *)(iVar1 + 4);
  }
  FUN_0007a2e4(param_1 + 3);
  FUN_0007a2e4(param_1 + 5);
  *param_1 = 0;
  return;
}

