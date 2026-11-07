// FUN_01b1e044 @ 01b1e044 size=112 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1e044(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = 0;
  puVar1 = (undefined1 *)(param_1 + -1);
  do {
    uVar5 = 0;
    uVar4 = 0;
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
    puVar3 = (ushort *)(param_2 + iVar2 * 2);
    do {
      uVar5 = uVar5 | ((uint)*puVar3 * 0x13afb8 + 0x40000000 >> 0x1f) << (uVar4 & 0xff);
      uVar4 = uVar4 + 1;
      *puVar1 = (char)uVar5;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 8);
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0x100);
  return 0;
}

