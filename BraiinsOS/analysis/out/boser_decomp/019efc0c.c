// FUN_019efc0c @ 019efc0c size=120 calls_out=2 calls_in=1
// strings: 

void FUN_019efc0c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  FUN_012671ec();
  uVar1 = param_1[2];
  if (uVar1 <= (uint)(iVar3 - param_1[3])) {
    return;
  }
  uVar2 = iVar3 - uVar1;
  uVar4 = param_1[3] - uVar2;
  if ((uVar4 < uVar2) && (uVar4 <= (uint)(*param_1 - iVar3))) {
    FUN_01bed4e2(param_1[1] + iVar3 * 8,param_1[1],uVar4 * 8);
    return;
  }
  iVar3 = *param_1 - uVar2;
  FUN_01bed864(param_1[1] + iVar3 * 8,param_1[1] + uVar1 * 8,uVar2 * 8);
  param_1[2] = iVar3;
  return;
}

