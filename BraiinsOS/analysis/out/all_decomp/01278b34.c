// FUN_01278b34 @ 01278b34 size=252 calls_out=4 calls_in=1
// strings: Tried to shrink to a larger capacitymax line length exceeded

void FUN_01278b34(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1[2];
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else if (*(int *)(param_1[1] + uVar5 * 4 + -4) == 0) {
    iVar3 = uVar5 << 2;
    uVar2 = uVar5 & 0x3fffffff;
    do {
      uVar4 = uVar2;
      if (iVar3 == 0) {
        uVar4 = 0;
        goto LAB_01278be4;
      }
      piVar1 = (int *)((param_1[1] - 4) + iVar3);
      iVar3 = iVar3 + -4;
      uVar2 = uVar4 - 1;
    } while (*piVar1 == 0);
    if (uVar4 <= uVar5) {
LAB_01278be4:
      param_1[2] = uVar4;
      uVar5 = *param_1;
      if (uVar5 >> 2 <= uVar4) {
        return;
      }
      goto LAB_01278ba0;
    }
  }
  uVar4 = uVar5;
  uVar5 = *param_1;
  if (uVar5 >> 2 <= uVar4) {
    return;
  }
LAB_01278ba0:
  if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,&DAT_018ad594);
  }
  if (uVar5 == 0) {
    return;
  }
  if (uVar4 == 0) {
    thunk_FUN_016d3fb4(param_1[1]);
    *param_1 = 0;
    param_1[1] = 4;
    return;
  }
  uVar5 = thunk_FUN_016d4ea4(param_1[1],uVar4 << 2);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar4 << 2);
  }
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}

