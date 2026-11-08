// FUN_0154805c @ 0154805c size=92 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0154805c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_01596a18(*(undefined1 *)(param_1 + 0x2c));
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x28) * 0x18;
    do {
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = FUN_01578ae8(param_2,iVar4);
      iVar1 = iVar1 + -0x18;
      iVar4 = iVar4 + 0x18;
    } while (iVar2 == 0);
    uVar3 = 1;
  }
  return uVar3;
}

