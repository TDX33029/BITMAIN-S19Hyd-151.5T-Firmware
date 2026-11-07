// FUN_0164dafc @ 0164dafc size=216 calls_out=3 calls_in=3
// strings: 

int FUN_0164dafc(uint *param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb7c58(&DAT_018acb90);
  }
  FUN_0184606c(param_1[0xe]);
  if (extraout_r1 != 0) {
    if (param_1[3] == 0) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      iVar1 = FUN_0163bb84(param_2 + 0xa8);
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
  iVar1 = FUN_0163bb84(param_2 + 0xa8);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1[3] == 0) {
    *(undefined4 *)(param_2 + 0x28) = 0;
    return 0;
  }
  uVar3 = param_1[3] - 1;
  uVar4 = param_1[2] + 1;
  iVar1 = *(int *)(param_1[1] + param_1[2] * 4);
  uVar2 = uVar4 - *param_1;
  if (uVar4 < *param_1) {
    uVar2 = uVar4;
  }
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(uint *)(param_2 + 0x28) = uVar3;
  return iVar1;
}

