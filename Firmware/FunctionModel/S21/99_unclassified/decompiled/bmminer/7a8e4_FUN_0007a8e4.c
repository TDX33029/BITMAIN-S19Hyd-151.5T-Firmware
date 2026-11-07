// FUN_0007a8e4 @ 0007a8e4  size=260  callers=2
// program: bmminer


undefined4 FUN_0007a8e4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  
  *param_1 = 0;
  param_1[2] = 3;
  uVar1 = FUN_0007d8a0(8 << (param_1[2] & 0xff));
  param_1[1] = uVar1;
  if (param_1[1] == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_0007a2e4(param_1 + 3);
    FUN_0007a2e4(param_1 + 5);
    for (local_c = 0; local_c < (uint)(1 << (param_1[2] & 0xff)); local_c = local_c + 1) {
      iVar2 = param_1[1] + local_c * 8;
      *(undefined4 **)(iVar2 + 4) = param_1 + 3;
      *(undefined4 *)(param_1[1] + local_c * 8) = *(undefined4 *)(iVar2 + 4);
    }
    uVar1 = 0;
  }
  return uVar1;
}

