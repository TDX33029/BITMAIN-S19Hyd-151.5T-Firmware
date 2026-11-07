// FUN_019e61ac @ 019e61ac size=212 calls_out=3 calls_in=4
// strings: 

int FUN_019e61ac(uint *param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013079d0(&DAT_01d29174);
  }
  FUN_01bf0fd4(param_1[0xe]);
  if (extraout_r1 != 0) {
    if (param_1[3] == 0) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      iVar1 = FUN_019ed788(param_2 + 0xa8);
      return iVar1;
    }
    uVar4 = param_1[3] - 1;
    uVar3 = param_1[2] + 1;
    iVar1 = *(int *)(param_1[1] + param_1[2] * 4);
    uVar2 = uVar3 - *param_1;
    if (uVar3 < *param_1) {
      uVar2 = uVar3;
    }
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    *(uint *)(param_2 + 0x28) = uVar4;
    return iVar1;
  }
  iVar1 = FUN_019ed788(param_2 + 0xa8);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1[3] == 0) {
    uVar2 = 0;
    iVar1 = 0;
  }
  else {
    uVar2 = param_1[3] - 1;
    uVar4 = param_1[2] + 1;
    iVar1 = *(int *)(param_1[1] + param_1[2] * 4);
    uVar3 = uVar4 - *param_1;
    if (uVar4 < *param_1) {
      uVar3 = uVar4;
    }
    param_1[2] = uVar3;
    param_1[3] = uVar2;
  }
  *(uint *)(param_2 + 0x28) = uVar2;
  return iVar1;
}

