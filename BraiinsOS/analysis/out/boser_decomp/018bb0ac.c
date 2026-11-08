// FUN_018bb0ac @ 018bb0ac size=136 calls_out=2 calls_in=2
// strings: 

void FUN_018bb0ac(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  FUN_0161d664();
  uVar1 = param_1[2];
  if (uVar1 <= (uint)(iVar4 - param_1[3])) {
    return;
  }
  uVar2 = iVar4 - uVar1;
  uVar3 = param_1[3] - uVar2;
  if ((uVar3 < uVar2) && (uVar3 <= (uint)(*param_1 - iVar4))) {
    FUN_01bed4e2(param_1[1] + iVar4 * 0x14,param_1[1],uVar3 * 0x14);
    return;
  }
  iVar4 = *param_1 - uVar2;
  FUN_01bed864(param_1[1] + iVar4 * 0x14,param_1[1] + uVar1 * 0x14,uVar2 * 0x14);
  param_1[2] = iVar4;
  return;
}

