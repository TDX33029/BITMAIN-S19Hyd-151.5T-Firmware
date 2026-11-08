// FUN_0007fd3c @ 0007fd3c  size=164  callers=0
// program: bmminer


undefined4 FUN_0007fd3c(int *param_1)

{
  undefined4 uVar1;
  uint local_c;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_c = 0; local_c < (uint)param_1[3]; local_c = local_c + 1) {
      FUN_0007e8e0(*(undefined4 *)(param_1[4] + local_c * 4));
    }
    param_1[3] = 0;
    uVar1 = 0;
  }
  return uVar1;
}

