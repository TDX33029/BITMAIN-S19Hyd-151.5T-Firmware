// FUN_01ad0c8c @ 01ad0c8c size=164 calls_out=1 calls_in=1
// strings: internal error: entered unreachable code: empty internal node

void FUN_01ad0c8c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x318);
  if (iVar1 == 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 2;
    return;
  }
  if (*(ushort *)(param_2 + 0x3a0) == 0) {
    if (*(short *)(iVar1 + 0x3a2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: empty internal node",0x7b,
                   &DAT_01d2fef0);
    }
    *param_1 = 1;
    param_1[1] = iVar1;
    param_1[2] = param_3 + 1;
    param_1[3] = 0;
    uVar2 = *(undefined4 *)(iVar1 + 0x3ac);
    param_1[4] = param_2;
    param_1[5] = param_3;
    param_1[6] = uVar2;
  }
  else {
    iVar3 = *(ushort *)(param_2 + 0x3a0) - 1;
    *param_1 = 0;
    param_1[1] = iVar1;
    param_1[2] = param_3 + 1;
    param_1[3] = iVar3;
    param_1[4] = *(undefined4 *)(iVar1 + iVar3 * 4 + 0x3a8);
    param_1[5] = param_3;
    param_1[6] = param_2;
  }
  param_1[7] = param_3;
  return;
}

