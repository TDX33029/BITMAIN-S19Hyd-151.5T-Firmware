// FUN_016f1920 @ 016f1920 size=84 calls_out=1 calls_in=4
// strings: 

void FUN_016f1920(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  iVar2 = param_1[4];
  *param_1 = 4;
  param_1[1] = 4;
  if (iVar2 != 0) {
    iVar4 = param_1[2];
    iVar3 = *(int *)(iVar4 + 8);
    if (param_1[3] != iVar3) {
      FUN_01bed864(*(int *)(iVar4 + 4) + iVar3 * 8,*(int *)(iVar4 + 4) + param_1[3] * 8,iVar2 << 3,
                   uVar1);
    }
    *(int *)(iVar4 + 8) = iVar2 + iVar3;
  }
  return;
}

