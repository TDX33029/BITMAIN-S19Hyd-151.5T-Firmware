// FUN_015ef848 @ 015ef848 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_015ef848(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  FUN_015f5b78();
  uVar1 = param_1[2];
  if (uVar1 <= (uint)(iVar3 - param_1[3])) {
    return;
  }
  uVar2 = iVar3 - uVar1;
  uVar4 = param_1[3] - uVar2;
  if ((uVar4 < uVar2) && (uVar4 <= (uint)(*param_1 - iVar3))) {
    FUN_01bed4e2(param_1[1] + iVar3 * 0x10,param_1[1],uVar4 * 0x10);
    return;
  }
  iVar3 = *param_1 - uVar2;
  FUN_01bed864(param_1[1] + iVar3 * 0x10,param_1[1] + uVar1 * 0x10,uVar2 * 0x10);
  param_1[2] = iVar3;
  return;
}

