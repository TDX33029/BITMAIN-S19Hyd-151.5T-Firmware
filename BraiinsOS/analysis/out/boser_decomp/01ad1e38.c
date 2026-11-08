// FUN_01ad1e38 @ 01ad1e38 size=184 calls_out=1 calls_in=1
// strings: internal error: entered unreachable code: empty internal node

void FUN_01ad1e38(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(&DAT_00001028 + param_2);
  if (iVar2 == 0) {
    param_1[1] = param_2;
    param_1[2] = param_3;
    *param_1 = 2;
    return;
  }
  if (*(ushort *)(&DAT_000010b0 + param_2) == 0) {
    if (*(short *)(iVar2 + 0x10b2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: empty internal node",0x7b,
                   &DAT_01d2fef0);
    }
    *param_1 = 1;
    param_1[1] = iVar2;
    param_1[2] = param_3 + 1;
    uVar3 = *(undefined4 *)(iVar2 + 0x10bc);
    param_1[3] = 0;
    param_1[4] = param_2;
    param_1[5] = param_3;
    param_1[6] = uVar3;
  }
  else {
    iVar1 = *(ushort *)(&DAT_000010b0 + param_2) - 1;
    param_1[1] = iVar2;
    param_1[2] = param_3 + 1;
    param_1[3] = iVar1;
    uVar3 = *(undefined4 *)(iVar2 + iVar1 * 4 + 0x10b8);
    *param_1 = 0;
    param_1[4] = uVar3;
    param_1[5] = param_3;
    param_1[6] = param_2;
  }
  param_1[7] = param_3;
  return;
}

