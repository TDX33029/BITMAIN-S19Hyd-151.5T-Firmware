// FUN_01b293d8 @ 01b293d8 size=304 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01b293d8(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  short *psVar10;
  short sVar11;
  uint uVar12;
  
  psVar5 = (short *)(param_1 + -2);
  do {
    psVar5 = psVar5 + 1;
    iVar3 = *psVar5 * 0x5a1;
    *psVar5 = (short)((uint)((short)((short)iVar3 + *psVar5 * -0x2d00) * -0xd01 + iVar3) >> 0x10);
  } while ((short *)(param_1 + 0x1fe) != psVar5);
  uVar12 = 7;
  do {
    iVar3 = 0x100 >> (uVar12 & 0xff);
    psVar5 = (short *)(param_1 + iVar3 * 2);
    psVar10 = (short *)(&DAT_0053ab80 + (2 << (uVar12 & 0xff)));
    uVar6 = 0;
    do {
      psVar10 = psVar10 + -1;
      sVar1 = *psVar10;
      uVar9 = iVar3 + uVar6;
      psVar7 = psVar5;
      psVar8 = (short *)(param_1 + uVar6 * 2);
      do {
        sVar2 = *psVar8;
        uVar6 = uVar6 + 1;
        sVar11 = sVar2 + *psVar7;
        *psVar8 = (short)(sVar11 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01 + sVar11;
        iVar4 = (int)(short)(*psVar7 - sVar2) * (int)sVar1;
        *psVar7 = (short)((uint)((short)((short)iVar4 * -0xcff) * -0xd01 + iVar4) >> 0x10);
        psVar7 = psVar7 + 1;
        psVar8 = psVar8 + 1;
      } while (uVar6 < uVar9);
      uVar6 = iVar3 + uVar9;
      psVar5 = psVar5 + iVar3 * 2;
    } while (uVar6 < 0x100);
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  return 0;
}

