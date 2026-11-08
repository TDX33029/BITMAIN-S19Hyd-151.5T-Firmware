// FUN_01b1dfe0 @ 01b1dfe0 size=100 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1dfe0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  iVar2 = 0;
  do {
    uVar3 = 0;
    puVar4 = (ushort *)(param_1 + iVar2 * 0x10);
    do {
      uVar1 = uVar3 & 0xff;
      uVar3 = uVar3 + 1;
      *puVar4 = (ushort)(-(1 << uVar1 & (uint)*(byte *)(param_2 + iVar2)) >> 0x10) & 0x681;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x20);
  return 0;
}

