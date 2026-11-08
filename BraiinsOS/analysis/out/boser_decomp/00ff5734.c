// FUN_00ff5734 @ 00ff5734 size=224 calls_out=5 calls_in=5
// strings: Over `u32::MAX` routes created. If you need this; please file an issue.

void FUN_00ff5734(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  int local_ac;
  int local_a8;
  int local_a4;
  
  uVar2 = FUN_0070d26c(*(undefined1 *)(param_2 + 0x28),param_3,param_4);
  if ((int)uVar2 == 0) {
    iVar1 = *(uint *)(param_2 + 0x24) + 1;
    if (0xfffffffe < *(uint *)(param_2 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Over `u32::MAX` routes created. If you need this, please file an issue.",0x47,
                   &DAT_01d2cca8);
    }
    *(int *)(param_2 + 0x24) = iVar1;
    FUN_00ab26c4(&local_ac,param_2,param_3,param_4,iVar1);
    if (local_ac == -0x80000000) {
      FUN_0070bb70(&local_ac,param_2,iVar1,param_5);
      if (local_ac != 4) {
        FUN_00fedc64(&local_ac);
      }
      *param_1 = -0x7fffffff;
      return;
    }
    *param_1 = local_ac;
    param_1[1] = local_a8;
    param_1[2] = local_a4;
  }
  else {
    *(undefined8 *)(param_1 + 1) = uVar2;
    *param_1 = -0x80000000;
  }
  FUN_00fedc64(param_5);
  return;
}

