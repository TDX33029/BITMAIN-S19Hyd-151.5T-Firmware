// FUN_01b2926c @ 01b2926c size=200 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b2926c(int param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  short *psVar10;
  
  uVar4 = 1;
  do {
    iVar1 = 0x100 >> (uVar4 & 0xff);
    psVar7 = (short *)(param_1 + iVar1 * 2);
    uVar5 = 0;
    psVar10 = (short *)(&DAT_0053ab80 + (2 << (uVar4 - 1 & 0xff)));
    do {
      sVar2 = *psVar10;
      uVar9 = iVar1 + uVar5;
      psVar6 = (short *)(param_1 + uVar5 * 2);
      psVar8 = psVar7;
      do {
        uVar5 = uVar5 + 1;
        sVar3 = (short)((uint)((short)((short)((int)*psVar8 * (int)sVar2) * -0xcff) * -0xd01 +
                              (int)*psVar8 * (int)sVar2) >> 0x10);
        *psVar8 = *psVar6 - sVar3;
        *psVar6 = *psVar6 + sVar3;
        psVar6 = psVar6 + 1;
        psVar8 = psVar8 + 1;
      } while (uVar5 < uVar9);
      uVar5 = iVar1 + uVar9;
      psVar7 = psVar7 + iVar1 * 2;
      psVar10 = psVar10 + 1;
    } while (uVar5 < 0x100);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  return 0;
}

