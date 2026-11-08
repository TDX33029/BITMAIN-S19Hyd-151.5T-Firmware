// FUN_013b1198 @ 013b1198 size=96 calls_out=2 calls_in=7
// strings: assertion failed: cnt <= self.limit

void FUN_013b1198(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uStack_18;
  uint uStack_14;
  
  if ((uint)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: cnt <= self.limit",0x23,&DAT_01cef71c);
  }
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 4);
  uStack_14 = *(int *)(iVar1 + 8) - iVar2;
  if (uStack_14 < param_2) {
    uStack_18 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&uStack_18);
  }
  param_1[1] = param_1[1] - param_2;
  *(uint *)(iVar1 + 4) = iVar2 + param_2;
  return;
}

