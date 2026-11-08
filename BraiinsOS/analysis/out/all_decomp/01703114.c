// FUN_01703114 @ 01703114 size=388 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01703114(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  short *local_30;
  
  psVar4 = (short *)(param_1 + -2);
  do {
    psVar4 = psVar4 + 1;
    iVar2 = *psVar4 * 0x5a1;
    *psVar4 = (short)((uint)((short)((short)iVar2 + *psVar4 * -0x2d00) * -0xd01 + iVar2) >> 0x10);
  } while ((short *)(param_1 + 0x1fe) != psVar4);
  sVar10 = 0x65c;
  uVar7 = 7;
  while( true ) {
    uVar9 = 0;
    iVar2 = 0x100 >> (uVar7 & 0xff);
    local_30 = (short *)(&DAT_00428f3e + (2 << (uVar7 & 0xff)));
    while( true ) {
      uVar8 = iVar2 + uVar9;
      psVar5 = (short *)(param_1 + iVar2 * 2 + -2 + uVar9 * 2);
      psVar4 = (short *)(param_1 + uVar9 * 2);
      do {
        sVar1 = *psVar4;
        uVar9 = uVar9 + 1;
        psVar5 = psVar5 + 1;
        sVar6 = sVar1 + *psVar5;
        *psVar4 = sVar6 + (short)(sVar6 * 0x4ebf + 0x2000000 >> 0x1a) * -0xd01;
        iVar3 = (int)(short)(*psVar5 - sVar1) * (int)sVar10;
        *psVar5 = (short)((uint)((short)((short)iVar3 * -0xcff) * -0xd01 + iVar3) >> 0x10);
        psVar4 = psVar4 + 1;
      } while (uVar9 < uVar8);
      uVar9 = iVar2 + uVar8;
      if (0xff < uVar9) break;
      local_30 = local_30 + -1;
      sVar10 = *local_30;
    }
    uVar7 = uVar7 - 1;
    if (uVar7 == 0) break;
    sVar10 = *(short *)(&DAT_00428f3e + (1 << (uVar7 & 0xff)) * 2);
  }
  return 0;
}

