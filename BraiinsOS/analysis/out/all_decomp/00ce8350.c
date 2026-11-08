// FUN_00ce8350 @ 00ce8350 size=224 calls_out=3 calls_in=1
// strings: 

void FUN_00ce8350(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_1c;
  
  uVar4 = param_3 - param_2;
  uVar5 = 0;
  if (0x7ffffffc < uVar4) {
LAB_00ce8368:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,uVar4);
  }
  if (param_3 == param_2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  if (uVar4 < 4) {
    local_1c = 0;
    uVar5 = 4;
    iVar2 = FUN_016d51b0(&local_1c,4,uVar4);
    if (iVar2 != 0) goto LAB_00ce8368;
    uVar1 = local_1c;
  }
  else {
    uVar1 = thunk_FUN_016d4a50(uVar4);
  }
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,uVar4);
  }
  uVar3 = 0;
  do {
    *(undefined4 *)(uVar1 + uVar3 * 4) = *(undefined4 *)(*(int *)(param_2 + uVar3 * 4) + 0x38c);
    uVar3 = uVar3 + 1;
  } while (uVar4 >> 2 != uVar3);
  *param_1 = uVar4 >> 2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  return;
}

