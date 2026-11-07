// FUN_01ab22d8 @ 01ab22d8 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_01ab22d8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x144);
  if (8 < uVar2) {
    uVar4 = *(undefined4 *)(param_1 + 8);
    FUN_01ab0b64(uVar4,*(undefined4 *)(param_1 + 4));
    FUN_0134aee0(uVar2,uVar4,4,0x28);
    return;
  }
  iVar3 = uVar2 + 1;
  iVar1 = param_1 + 4;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_01ab0534(iVar1);
    iVar1 = iVar1 + 0x28;
  }
  return;
}

