// FUN_00835bfc @ 00835bfc size=176 calls_out=2 calls_in=29
// strings: 

void FUN_00835bfc(uint *param_1,undefined2 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_3 * 2;
  if ((int)(param_3 | param_3 << 1) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  if (iVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = param_3;
    return;
  }
  uVar2 = thunk_FUN_016d4a50(iVar4);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar4);
  }
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      bVar5 = iVar4 != 0;
      if (bVar5) {
        iVar1 = uVar3 * 2;
        iVar4 = iVar4 + -2;
        uVar3 = uVar3 + 1;
        *(undefined2 *)(uVar2 + iVar1) = *param_2;
        param_2 = param_2 + 1;
      }
    } while (bVar5 && param_3 != uVar3);
  }
  *param_1 = param_3;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  return;
}

