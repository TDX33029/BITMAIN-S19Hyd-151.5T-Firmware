// FUN_00fd84c8 @ 00fd84c8 size=840 calls_out=1 calls_in=1
// strings: 

void FUN_00fd84c8(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  
  uVar15 = param_3 / 10;
  uVar16 = param_3 / 5;
  if (9 < param_3) {
    iVar22 = 0;
    puVar13 = (undefined1 *)(param_4 + 0xf);
    do {
      puVar19 = (ushort *)(param_2 + iVar22);
      iVar22 = iVar22 + 10;
      uVar8 = *puVar19;
      uVar9 = puVar19[1];
      bVar1 = *(byte *)((int)puVar19 + 3);
      bVar6 = (byte)puVar19[2];
      uVar17 = (uint)*(byte *)((int)puVar19 + 1) << 8;
      puVar13[-0xf] = *(undefined1 *)(param_1 + (uint)(byte)*puVar19);
      uVar18 = (uint)(byte)uVar9 << 0x10;
      puVar13[-0xe] = *(undefined1 *)(param_1 + ((uVar8 & 0x1fff) >> 5));
      puVar13[-0xd] = *(undefined1 *)(param_1 + ((uVar17 | uVar18 & 0x3ffff) >> 10));
      uVar2 = *(undefined1 *)(param_1 + ((uint)(bVar1 >> 1) | (bVar6 & 1) << 7));
      uVar3 = *(undefined1 *)
               (param_1 + (((bVar1 & 0xf) << 0x18 | (uint)(byte)uVar9 << 0x10) >> 0x14));
      puVar13[-9] = *(undefined1 *)(param_1 + ((uint)(bVar1 >> 6) | (bVar6 & 0x3f) << 2));
      puVar13[-0xb] = uVar3;
      bVar1 = *(byte *)((int)puVar19 + 5);
      uVar9 = puVar19[3];
      uVar8 = *(ushort *)((int)puVar19 + 5);
      uVar3 = *(undefined1 *)(param_1 + (uint)(bVar6 >> 3));
      puVar13[-0xc] = *(undefined1 *)(param_1 + ((uVar17 | uVar18 & 0x7fffff) >> 0xf));
      uVar4 = *(undefined1 *)(param_1 + (uint)bVar1);
      puVar13[-10] = uVar2;
      bVar1 = *(byte *)((int)puVar19 + 7);
      bVar6 = (byte)puVar19[4];
      puVar13[-7] = uVar4;
      puVar13[-8] = uVar3;
      puVar13[-6] = *(undefined1 *)(param_1 + ((uVar8 & 0x1fff) >> 5));
      uVar17 = (uint)(byte)uVar9 << 8;
      uVar18 = (uint)bVar1 << 0x10;
      bVar5 = *(byte *)((int)puVar19 + 9);
      puVar13[-5] = *(undefined1 *)(param_1 + ((uVar17 | uVar18 & 0x3ffff) >> 10));
      uVar2 = *(undefined1 *)(param_1 + ((uint)(bVar6 >> 1) | (bVar5 & 1) << 7));
      uVar3 = *(undefined1 *)(param_1 + ((uVar17 | uVar18 & 0x7fffff) >> 0xf));
      puVar13[-3] = *(undefined1 *)
                     (param_1 + (((bVar6 & 0xf) << 0x18 | (uint)bVar1 << 0x10) >> 0x14));
      puVar13[-4] = uVar3;
      uVar3 = *(undefined1 *)(param_1 + (uint)(bVar5 >> 3));
      puVar13[-2] = uVar2;
      *puVar13 = uVar3;
      puVar13[-1] = *(undefined1 *)(param_1 + ((uint)(bVar6 >> 6) | (bVar5 & 0x3f) << 2));
      puVar13 = puVar13 + 0x10;
    } while (uVar15 * 10 != iVar22);
  }
  uVar17 = uVar16 & 0x1ffffffe;
  if (uVar17 != uVar16) {
    iVar22 = uVar15 * 10 + 4;
    puVar13 = (undefined1 *)(param_4 + uVar15 * 0x10 + 7);
    do {
      pbVar10 = (byte *)(param_2 + iVar22);
      bVar1 = *pbVar10;
      iVar22 = iVar22 + 5;
      bVar6 = pbVar10[-4];
      puVar13[-7] = *(undefined1 *)(param_1 + (uint)bVar6);
      iVar12 = param_2 + uVar17 * 5;
      bVar5 = *(byte *)(iVar12 + 2);
      bVar7 = *(byte *)(iVar12 + 3);
      uVar15 = (uint)*(byte *)(iVar12 + 1) << 8;
      uVar18 = (uint)bVar5 << 0x10;
      iVar11 = param_4 + uVar17 * 8;
      uVar17 = uVar17 + 1;
      *(undefined1 *)(iVar11 + 1) =
           *(undefined1 *)(param_1 + ((CONCAT11(*(byte *)(iVar12 + 1),bVar6) & 0x1fff) >> 5));
      *(undefined1 *)(iVar11 + 2) = *(undefined1 *)(param_1 + ((uVar15 | uVar18 & 0x3ffff) >> 10));
      *(undefined1 *)(iVar11 + 3) = *(undefined1 *)(param_1 + ((uVar15 | uVar18 & 0x7fffff) >> 0xf))
      ;
      *(undefined1 *)(iVar11 + 4) =
           *(undefined1 *)(param_1 + (((bVar7 & 0xf) << 0x18 | (uint)bVar5 << 0x10) >> 0x14));
      *(undefined1 *)(iVar11 + 6) =
           *(undefined1 *)(param_1 + ((uint)(bVar7 >> 6) | (bVar1 & 0x3f) << 2));
      *(undefined1 *)(iVar11 + 5) =
           *(undefined1 *)(param_1 + ((uint)(bVar7 >> 1) | (bVar1 & 1) << 7));
      *puVar13 = *(undefined1 *)(param_1 + (uint)(bVar1 >> 3));
      puVar13 = puVar13 + 8;
    } while (uVar17 < uVar16);
  }
  uVar15 = uVar16 * 5;
  if (param_3 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar15,param_3,param_3,&DAT_0188151c);
  }
  uVar17 = uVar16 * 8;
  if (param_5 < uVar16 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar17,param_5,param_5,&DAT_0188150c);
  }
  uVar21 = 0;
  uVar18 = 0;
  if (param_3 != uVar15) {
    param_3 = param_3 % 5;
    uVar14 = 0;
    pbVar10 = (byte *)(param_2 + uVar15);
    do {
      bVar1 = *pbVar10;
      uVar20 = uVar14 & 0x38;
      uVar23 = uVar20 - 0x20;
      uVar14 = uVar14 + 8;
      uVar15 = (uint)bVar1 << uVar20;
      if (-1 < (int)uVar23) {
        uVar15 = 0;
      }
      uVar21 = uVar15 | uVar21;
      uVar15 = (uint)(bVar1 >> (0x20 - uVar20 & 0xff));
      if (-1 < (int)uVar23) {
        uVar15 = (uint)bVar1 << (uVar23 & 0xff);
      }
      uVar18 = uVar15 | uVar18;
      param_3 = param_3 - 1;
      pbVar10 = pbVar10 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar17) {
    iVar22 = param_5 + uVar16 * -8;
    uVar15 = 0;
    puVar13 = (undefined1 *)(param_4 + uVar17);
    do {
      uVar17 = uVar15 & 0x3f;
      uVar15 = uVar15 + 5;
      uVar16 = uVar21 >> uVar17 | uVar18 << (0x20 - uVar17 & 0xff);
      if (-1 < (int)(uVar17 - 0x20)) {
        uVar16 = uVar18 >> (uVar17 - 0x20 & 0xff);
      }
      iVar22 = iVar22 + -1;
      *puVar13 = *(undefined1 *)(param_1 + (uVar16 & 0xff));
      puVar13 = puVar13 + 1;
    } while (iVar22 != 0);
  }
  return;
}

