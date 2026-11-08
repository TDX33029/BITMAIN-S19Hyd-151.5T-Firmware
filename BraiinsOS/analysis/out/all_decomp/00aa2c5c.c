// FUN_00aa2c5c @ 00aa2c5c size=124 calls_out=2 calls_in=10
// strings: 

void FUN_00aa2c5c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  FUN_00a8a5dc();
  uVar1 = param_1[2];
  if (uVar1 <= (uint)(iVar4 - param_1[3])) {
    return;
  }
  uVar3 = iVar4 - uVar1;
  uVar2 = param_1[3] - uVar3;
  if ((uVar2 < uVar3) && (uVar2 <= (uint)(*param_1 - iVar4))) {
    FUN_016dd1aa(iVar4 * 0x118 + param_1[1],param_1[1],uVar2 * 0x118);
    return;
  }
  iVar4 = *param_1 - uVar3;
  FUN_016dd52c(iVar4 * 0x118 + param_1[1],uVar1 * 0x118 + param_1[1],uVar3 * 0x118);
  param_1[2] = iVar4;
  return;
}

