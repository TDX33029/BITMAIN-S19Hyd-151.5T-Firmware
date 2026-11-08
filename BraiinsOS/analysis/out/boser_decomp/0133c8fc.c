// FUN_0133c8fc @ 0133c8fc size=112 calls_out=1 calls_in=2
// strings: 

byte FUN_0133c8fc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = 9;
  bVar4 = 0;
  uVar3 = **(uint **)(param_1 + 0xc);
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 ^ 0x80000000;
  }
  if (uVar2 == 4) {
    iVar6 = *(int *)(param_1 + 4);
    iVar5 = *(int *)(param_1 + 8) * 0x24;
    do {
      if (iVar5 == 0) {
        bVar4 = 1;
        break;
      }
      iVar1 = FUN_0133c8fc(iVar6);
      iVar5 = iVar5 + -0x24;
      iVar6 = iVar6 + 0x24;
    } while (iVar1 != 0);
  }
  else if (uVar2 == 3) {
    bVar4 = (byte)(*(uint **)(param_1 + 0xc))[4] ^ 1;
  }
  return bVar4 & 1;
}

