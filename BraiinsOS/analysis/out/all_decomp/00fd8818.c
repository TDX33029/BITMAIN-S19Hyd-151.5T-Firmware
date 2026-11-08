// FUN_00fd8818 @ 00fd8818 size=832 calls_out=1 calls_in=1
// strings: 

void FUN_00fd8818(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  
  uVar13 = param_3 / 10;
  uVar14 = param_3 / 5;
  if (9 < param_3) {
    iVar19 = 0;
    puVar10 = (undefined1 *)(param_4 + 0xf);
    do {
      pbVar16 = (byte *)(param_2 + iVar19);
      bVar1 = *pbVar16;
      iVar19 = iVar19 + 10;
      bVar2 = pbVar16[1];
      bVar3 = pbVar16[2];
      bVar4 = pbVar16[3];
      bVar5 = pbVar16[4];
      puVar10[-0xf] = *(undefined1 *)(param_1 + (uint)(bVar1 >> 3));
      puVar10[-0xe] = *(undefined1 *)(param_1 + ((uint)(bVar2 >> 6) | (bVar1 & 0x3f) << 2));
      puVar10[-0xd] = *(undefined1 *)(param_1 + ((uint)(bVar2 >> 1) | (bVar1 & 1) << 7));
      uVar15 = (uint)bVar3 << 0x10;
      puVar10[-0xc] = *(undefined1 *)(param_1 + (((bVar2 & 0xf) << 0x18 | uVar15) >> 0x14));
      uVar12 = (uint)CONCAT11(bVar4,bVar5);
      uVar6 = *(undefined1 *)(param_1 + ((uVar12 | uVar15 & 0x7fffff) >> 0xf));
      puVar10[-10] = *(undefined1 *)(param_1 + ((uVar12 | uVar15 & 0x3ffff) >> 10));
      puVar10[-0xb] = uVar6;
      bVar1 = pbVar16[6];
      puVar10[-8] = *(undefined1 *)(param_1 + (uint)bVar5);
      bVar2 = pbVar16[5];
      bVar3 = pbVar16[8];
      uVar6 = *(undefined1 *)(param_1 + (uint)(bVar2 >> 3));
      puVar10[-9] = *(undefined1 *)(param_1 + ((uVar12 & 0x1fff) >> 5));
      bVar4 = pbVar16[7];
      puVar10[-7] = uVar6;
      puVar10[-6] = *(undefined1 *)(param_1 + ((uint)(bVar1 >> 6) | (bVar2 & 0x3f) << 2));
      bVar5 = pbVar16[9];
      uVar12 = (uint)CONCAT11(bVar3,bVar5);
      puVar10[-5] = *(undefined1 *)(param_1 + ((uint)(bVar1 >> 1) | (bVar2 & 1) << 7));
      uVar15 = (uint)bVar4 << 0x10;
      uVar6 = *(undefined1 *)(param_1 + ((uVar12 | uVar15 & 0x3ffff) >> 10));
      uVar7 = *(undefined1 *)(param_1 + (((bVar1 & 0xf) << 0x18 | uVar15) >> 0x14));
      puVar10[-3] = *(undefined1 *)(param_1 + ((uVar12 | uVar15 & 0x7fffff) >> 0xf));
      puVar10[-4] = uVar7;
      uVar7 = *(undefined1 *)(param_1 + (uint)bVar5);
      uVar8 = *(undefined1 *)(param_1 + ((uVar12 & 0x1fff) >> 5));
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar8;
      *puVar10 = uVar7;
      puVar10 = puVar10 + 0x10;
    } while (uVar13 * 10 != iVar19);
  }
  uVar15 = uVar14 & 0x1ffffffe;
  if (uVar15 != uVar14) {
    iVar19 = uVar13 * 10 + 4;
    puVar10 = (undefined1 *)(param_4 + uVar13 * 0x10 + 7);
    do {
      pbVar16 = (byte *)(param_2 + iVar19);
      bVar1 = *pbVar16;
      iVar19 = iVar19 + 5;
      bVar2 = pbVar16[-4];
      puVar10[-7] = *(undefined1 *)(param_1 + (uint)(bVar2 >> 3));
      iVar9 = param_2 + uVar15 * 5;
      bVar3 = *(byte *)(iVar9 + 1);
      bVar4 = *(byte *)(iVar9 + 2);
      uVar6 = *(undefined1 *)(iVar9 + 3);
      iVar9 = param_4 + uVar15 * 8;
      uVar15 = uVar15 + 1;
      *(undefined1 *)(iVar9 + 1) =
           *(undefined1 *)(param_1 + ((uint)(bVar3 >> 6) | (bVar2 & 0x3f) << 2));
      *(undefined1 *)(iVar9 + 2) =
           *(undefined1 *)(param_1 + ((uint)(bVar3 >> 1) | (bVar2 & 1) << 7));
      uVar13 = (uint)bVar4 << 0x10;
      *(undefined1 *)(iVar9 + 3) =
           *(undefined1 *)(param_1 + (((bVar3 & 0xf) << 0x18 | uVar13) >> 0x14));
      uVar12 = (uint)CONCAT11(uVar6,bVar1);
      *(undefined1 *)(iVar9 + 6) = *(undefined1 *)(param_1 + ((uVar12 & 0x1fff) >> 5));
      uVar6 = *(undefined1 *)(param_1 + ((uVar12 | uVar13 & 0x7fffff) >> 0xf));
      *(undefined1 *)(iVar9 + 5) = *(undefined1 *)(param_1 + ((uVar12 | uVar13 & 0x3ffff) >> 10));
      *(undefined1 *)(iVar9 + 4) = uVar6;
      *puVar10 = *(undefined1 *)(param_1 + (uint)bVar1);
      puVar10 = puVar10 + 8;
    } while (uVar15 < uVar14);
  }
  uVar13 = uVar14 * 5;
  if (param_3 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar13,param_3,param_3,&DAT_0188151c);
  }
  uVar15 = uVar14 * 8;
  if (param_5 < uVar14 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar15,param_5,param_5,&DAT_0188150c);
  }
  uVar18 = 0;
  uVar12 = 0;
  if (param_3 != uVar13) {
    param_3 = param_3 % 5;
    uVar11 = 0x20;
    pbVar16 = (byte *)(param_2 + uVar13);
    do {
      bVar1 = *pbVar16;
      uVar17 = uVar11 & 0x38;
      uVar20 = uVar17 - 0x20;
      uVar11 = uVar11 - 8;
      uVar13 = (uint)bVar1 << uVar17;
      if (-1 < (int)uVar20) {
        uVar13 = 0;
      }
      uVar18 = uVar13 | uVar18;
      uVar13 = (uint)(bVar1 >> (0x20 - uVar17 & 0xff));
      if (-1 < (int)uVar20) {
        uVar13 = (uint)bVar1 << (uVar20 & 0xff);
      }
      uVar12 = uVar13 | uVar12;
      param_3 = param_3 - 1;
      pbVar16 = pbVar16 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar15) {
    iVar19 = param_5 + uVar14 * -8;
    uVar13 = 0x23;
    puVar10 = (undefined1 *)(param_4 + uVar15);
    do {
      uVar15 = uVar13 & 0x3f;
      uVar13 = uVar13 - 5;
      uVar14 = uVar18 >> uVar15 | uVar12 << (0x20 - uVar15 & 0xff);
      if (-1 < (int)(uVar15 - 0x20)) {
        uVar14 = uVar12 >> (uVar15 - 0x20 & 0xff);
      }
      iVar19 = iVar19 + -1;
      *puVar10 = *(undefined1 *)(param_1 + (uVar14 & 0xff));
      puVar10 = puVar10 + 1;
    } while (iVar19 != 0);
  }
  return;
}

