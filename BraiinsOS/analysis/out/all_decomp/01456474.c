// FUN_01456474 @ 01456474 size=120 calls_out=2 calls_in=2
// strings: 

void FUN_01456474(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  FUN_01429f6c();
  uVar1 = param_1[2];
  if (uVar1 <= (uint)(iVar3 - param_1[3])) {
    return;
  }
  uVar2 = iVar3 - uVar1;
  uVar4 = param_1[3] - uVar2;
  if ((uVar4 < uVar2) && (uVar4 <= (uint)(*param_1 - iVar3))) {
    FUN_016dd1aa(param_1[1] + iVar3 * 4,param_1[1],uVar4 * 4);
    return;
  }
  iVar3 = *param_1 - uVar2;
  FUN_016dd52c(param_1[1] + iVar3 * 4,param_1[1] + uVar1 * 4,uVar2 * 4);
  param_1[2] = iVar3;
  return;
}

