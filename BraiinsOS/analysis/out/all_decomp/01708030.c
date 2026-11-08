// FUN_01708030 @ 01708030 size=320 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01708030(int param_1)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  short sVar8;
  short *psVar9;
  uint uVar10;
  
  iVar4 = param_1 + 0x400;
  do {
    uVar5 = 1;
    sVar8 = -0x2f6;
    while( true ) {
      uVar10 = 0;
      iVar1 = 0x100 >> (uVar5 & 0xff);
      psVar9 = (short *)(&DAT_00428f40 + (2 << (uVar5 - 1 & 0xff)));
      while( true ) {
        psVar6 = (short *)(param_1 + iVar1 * 2 + -2 + uVar10 * 2);
        uVar7 = iVar1 + uVar10;
        psVar3 = (short *)(param_1 + uVar10 * 2);
        do {
          psVar6 = psVar6 + 1;
          uVar10 = uVar10 + 1;
          sVar2 = (short)((uint)((short)((short)((int)*psVar6 * (int)sVar8) * -0xcff) * -0xd01 +
                                (int)*psVar6 * (int)sVar8) >> 0x10);
          *psVar6 = *psVar3 - sVar2;
          *psVar3 = sVar2 + *psVar3;
          psVar3 = psVar3 + 1;
        } while (uVar10 < uVar7);
        uVar10 = iVar1 + uVar7;
        if (0xff < uVar10) break;
        psVar9 = psVar9 + 1;
        sVar8 = *psVar9;
      }
      if (uVar5 == 7) break;
      uVar10 = uVar5 & 0xff;
      uVar5 = uVar5 + 1;
      sVar8 = *(short *)(&DAT_00428f40 + (1 << uVar10) * 2);
    }
    param_1 = param_1 + 0x200;
  } while (iVar4 != param_1);
  return 0;
}

