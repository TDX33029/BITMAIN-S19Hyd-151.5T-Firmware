// FUN_01561020 @ 01561020 size=136 calls_out=2 calls_in=9
// strings: 

void FUN_01561020(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  FUN_015e0a80();
  uVar1 = param_1[2];
  if (uVar1 <= (uint)(iVar4 - param_1[3])) {
    return;
  }
  uVar2 = iVar4 - uVar1;
  uVar3 = param_1[3] - uVar2;
  if ((uVar3 < uVar2) && (uVar3 <= (uint)(*param_1 - iVar4))) {
    FUN_016dd1aa(param_1[1] + iVar4 * 0xc,param_1[1],uVar3 * 0xc);
    return;
  }
  iVar4 = *param_1 - uVar2;
  FUN_016dd52c(param_1[1] + iVar4 * 0xc,param_1[1] + uVar1 * 0xc,uVar2 * 0xc);
  param_1[2] = iVar4;
  return;
}

