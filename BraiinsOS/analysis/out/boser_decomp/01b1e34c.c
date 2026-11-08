// FUN_01b1e34c @ 01b1e34c size=148 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b1e34c(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  
  iVar2 = 0;
  do {
    uVar3 = (uint)param_2[2] << 0x10 | (uint)param_2[1] << 8 | (uint)*param_2;
    uVar6 = (uVar3 >> 1 & 0x249249) + (uVar3 >> 2 & 0x249249) + (uVar3 & 0x249249);
    uVar3 = 3;
    psVar5 = (short *)(param_1 + iVar2 * 2);
    do {
      uVar4 = uVar3 - 3;
      uVar1 = uVar3 & 0xff;
      uVar3 = uVar3 + 6;
      *psVar5 = ((ushort)(uVar6 >> (uVar4 & 0xff)) & 7) - ((ushort)(uVar6 >> uVar1) & 7);
      psVar5 = psVar5 + 1;
    } while (uVar3 != 0x1b);
    iVar2 = iVar2 + 4;
    param_2 = param_2 + 3;
  } while (iVar2 != 0x100);
  return 0;
}

