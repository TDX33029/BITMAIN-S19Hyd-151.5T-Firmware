// FUN_01ab2128 @ 01ab2128 size=116 calls_out=2 calls_in=2
// strings: 

void FUN_01ab2128(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x148);
  if (uVar3 < 9) {
    iVar2 = uVar3 + 1;
    iVar1 = param_1 + 8;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      FUN_01aae318(iVar1);
      iVar1 = iVar1 + 0x28;
    }
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4) + 1;
  iVar1 = iVar4;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01aae318(iVar1);
    iVar1 = iVar1 + 0x28;
  }
  FUN_0134aee0(uVar3,iVar4,8,0x28);
  return;
}

