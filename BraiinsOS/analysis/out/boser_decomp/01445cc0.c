// FUN_01445cc0 @ 01445cc0 size=84 calls_out=1 calls_in=11
// strings: 

void FUN_01445cc0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  iVar2 = param_1[4];
  *param_1 = 1;
  param_1[1] = 1;
  if (iVar2 != 0) {
    iVar4 = param_1[2];
    iVar3 = *(int *)(iVar4 + 8);
    if (param_1[3] != iVar3) {
      FUN_01bed864(*(int *)(iVar4 + 4) + iVar3,*(int *)(iVar4 + 4) + param_1[3],iVar2,uVar1);
    }
    *(int *)(iVar4 + 8) = iVar3 + iVar2;
  }
  return;
}

