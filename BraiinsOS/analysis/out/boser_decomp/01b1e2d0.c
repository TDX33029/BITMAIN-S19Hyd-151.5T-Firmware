// FUN_01b1e2d0 @ 01b1e2d0 size=120 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1e2d0(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = (uint *)(param_2 + -4);
  iVar7 = 0;
  do {
    puVar2 = puVar2 + 1;
    uVar6 = 2;
    uVar3 = (*puVar2 >> 1 & 0x55555555) + (*puVar2 & 0x55555555);
    psVar5 = (short *)(param_1 + iVar7 * 2);
    do {
      uVar4 = uVar6 - 2;
      uVar1 = uVar6 & 0xff;
      uVar6 = uVar6 + 4;
      *psVar5 = ((ushort)(uVar3 >> (uVar4 & 0xff)) & 3) - ((ushort)(uVar3 >> uVar1) & 3);
      psVar5 = psVar5 + 1;
    } while (uVar6 != 0x22);
    iVar7 = iVar7 + 8;
  } while (iVar7 != 0x100);
  return 0;
}

