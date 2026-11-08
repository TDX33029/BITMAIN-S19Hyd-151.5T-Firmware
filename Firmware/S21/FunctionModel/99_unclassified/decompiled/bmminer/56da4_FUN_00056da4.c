// FUN_00056da4 @ 00056da4  size=200  callers=0
// program: bmminer


void FUN_00056da4(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  uVar3 = 0;
  memset(&DAT_008c7aa8,0,0x1000);
  do {
    iVar1 = FUN_0002a6f0(uVar3);
    if (iVar1 != 0) {
      puVar4 = &DAT_008c72a8;
      pfVar6 = (float *)(&DAT_008c7aa8 + uVar3 * 0x100);
      FUN_0005692c(uVar3 & 0xff);
      puVar5 = &DAT_008c76a8;
      FUN_00056b58(uVar3 & 0xff);
      iVar1 = 0;
      while( true ) {
        iVar2 = FUN_0002a514();
        if (iVar2 <= iVar1) break;
        uVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        uVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        fVar8 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
        fVar10 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
        *pfVar6 = (fVar8 - ((fVar10 + fVar8) * 0.5 - 16384.0)) * 0.0309 - 769.25;
        pfVar6 = pfVar6 + 1;
        iVar1 = iVar1 + 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  return;
}

