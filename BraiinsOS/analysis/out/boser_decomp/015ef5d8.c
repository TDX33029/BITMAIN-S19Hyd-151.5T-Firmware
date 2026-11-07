// FUN_015ef5d8 @ 015ef5d8 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_015ef5d8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  FUN_018faa08();
  uVar4 = param_1[2];
  if ((uint)(iVar3 - param_1[3]) < uVar4) {
    uVar1 = iVar3 - uVar4;
    uVar2 = param_1[3] - uVar1;
    if ((uVar2 < uVar1) && (uVar2 <= (uint)(*param_1 - iVar3))) {
      FUN_01bed4e2(param_1[1] + iVar3,param_1[1],uVar2);
      return;
    }
    iVar3 = *param_1 - uVar1;
    FUN_01bed864(param_1[1] + iVar3,param_1[1] + uVar4);
    param_1[2] = iVar3;
  }
  return;
}

