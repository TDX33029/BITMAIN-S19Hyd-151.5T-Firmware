// FUN_0077ef00 @ 0077ef00 size=92 calls_out=3 calls_in=4
// strings: 

void FUN_0077ef00(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x1e8);
  if (2 < uVar2) {
    uVar4 = *(undefined4 *)(param_1 + 8);
    FUN_0079574c(uVar4,*(undefined4 *)(param_1 + 4));
    FUN_01af7af8(uVar2,uVar4,8,0xf0);
    return;
  }
  iVar3 = uVar2 + 1;
  iVar1 = param_1 + 8;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_00769584(iVar1);
    iVar1 = iVar1 + 0xf0;
  }
  return;
}

