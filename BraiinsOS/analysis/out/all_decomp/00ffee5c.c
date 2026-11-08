// FUN_00ffee5c @ 00ffee5c size=124 calls_out=1 calls_in=2
// strings: 

byte FUN_00ffee5c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 9;
  uVar3 = **(uint **)(param_1 + 0xc);
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 ^ 0x80000000;
  }
  if (uVar2 == 4) {
    iVar5 = *(int *)(param_1 + 4);
    iVar4 = *(int *)(param_1 + 8) * 0x24;
    do {
      if (iVar4 == 0) {
        return 1;
      }
      iVar1 = FUN_00ffee5c(iVar5);
      iVar4 = iVar4 + -0x24;
      iVar5 = iVar5 + 0x24;
    } while (iVar1 != 0);
  }
  else if (uVar2 == 3) {
    return ((byte)(*(uint **)(param_1 + 0xc))[4] ^ 1) & 1;
  }
  return 0;
}

