// FUN_01ab20b8 @ 01ab20b8 size=112 calls_out=3 calls_in=1
// strings: 

void FUN_01ab20b8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  if (uVar1 < 9) {
    param_1 = param_1 + 4;
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      FUN_01ab0798(param_1);
      param_1 = param_1 + 0x1c;
    }
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = iVar4;
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_01ab1564(iVar2);
    iVar2 = iVar2 + 0x1c;
  }
  FUN_0134aee0(uVar1,iVar4,4,0x1c);
  return;
}

