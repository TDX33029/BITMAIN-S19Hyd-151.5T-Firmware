// FUN_00fd8b60 @ 00fd8b60 size=728 calls_out=1 calls_in=1
// strings: 

void FUN_00fd8b60(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  uVar14 = param_3 / 0xc;
  uVar15 = param_3 / 3;
  if (0xb < param_3) {
    iVar21 = 0;
    puVar12 = (undefined1 *)(param_4 + 0xf);
    do {
      puVar17 = (ushort *)(param_2 + iVar21);
      iVar21 = iVar21 + 0xc;
      uVar9 = puVar17[1];
      bVar1 = *(byte *)((int)puVar17 + 1);
      uVar8 = *puVar17;
      uVar2 = *(undefined1 *)(param_1 + (uint)(byte)*puVar17);
      uVar10 = puVar17[2];
      puVar12[-0xc] = *(undefined1 *)(param_1 + (uint)(byte)((byte)uVar9 >> 2));
      bVar3 = *(byte *)((int)puVar17 + 3);
      puVar12[-0xf] = uVar2;
      uVar2 = *(undefined1 *)(param_1 + ((uVar8 & 0x3fff) >> 6));
      uVar4 = *(undefined1 *)(param_1 + (uint)bVar3);
      puVar12[-0xd] =
           *(undefined1 *)(param_1 + (((uint)bVar1 << 8 | ((byte)uVar9 & 0xf) << 0x10) >> 0xc));
      puVar12[-0xb] = uVar4;
      bVar1 = *(byte *)((int)puVar17 + 5);
      uVar4 = *(undefined1 *)(param_1 + ((CONCAT11((byte)uVar10,bVar3) & 0x3fff) >> 6));
      puVar12[-0xe] = uVar2;
      uVar9 = puVar17[4];
      uVar2 = *(undefined1 *)(param_1 + (uint)(bVar1 >> 2));
      uVar5 = *(undefined1 *)(param_1 + (((uint)(byte)uVar10 << 8 | (bVar1 & 0xf) << 0x10) >> 0xc));
      puVar12[-10] = uVar4;
      puVar12[-9] = uVar5;
      bVar1 = *(byte *)((int)puVar17 + 7);
      uVar8 = puVar17[3];
      bVar3 = *(byte *)((int)puVar17 + 9);
      uVar4 = *(undefined1 *)(param_1 + (uint)(byte)puVar17[3]);
      puVar12[-8] = uVar2;
      puVar12[-7] = uVar4;
      puVar12[-4] = *(undefined1 *)(param_1 + (uint)(byte)((byte)uVar9 >> 2));
      uVar2 = *(undefined1 *)(param_1 + (uint)bVar3);
      uVar4 = *(undefined1 *)(param_1 + ((uVar8 & 0x3fff) >> 6));
      puVar12[-5] = *(undefined1 *)
                     (param_1 + (((uint)bVar1 << 8 | ((byte)uVar9 & 0xf) << 0x10) >> 0xc));
      puVar12[-6] = uVar4;
      uVar4 = *(undefined1 *)(param_1 + ((CONCAT11((byte)puVar17[5],bVar3) & 0x3fff) >> 6));
      uVar5 = *(undefined1 *)(param_1 + (uint)(*(byte *)((int)puVar17 + 0xb) >> 2));
      uVar6 = *(undefined1 *)
               (param_1 +
               (((uint)(byte)puVar17[5] << 8 | (*(byte *)((int)puVar17 + 0xb) & 0xf) << 0x10) >> 0xc
               ));
      puVar12[-3] = uVar2;
      puVar12[-2] = uVar4;
      puVar12[-1] = uVar6;
      *puVar12 = uVar5;
      puVar12 = puVar12 + 0x10;
    } while (uVar14 * 0xc != iVar21);
  }
  uVar18 = uVar15 & 0x3ffffffc;
  if (uVar18 != uVar15) {
    uVar16 = uVar14 * 0xc | 2;
    puVar12 = (undefined1 *)(param_4 + uVar14 * 0x10 + 3);
    do {
      pbVar11 = (byte *)(param_2 + uVar16);
      bVar1 = *pbVar11;
      uVar16 = uVar16 + 3;
      bVar3 = pbVar11[-2];
      uVar2 = *(undefined1 *)(param_1 + (uint)(bVar1 >> 2));
      puVar12[-3] = *(undefined1 *)(param_1 + (uint)bVar3);
      bVar7 = *(byte *)(param_2 + uVar18 * 3 + 1);
      iVar21 = param_4 + uVar18 * 4;
      uVar18 = uVar18 + 1;
      uVar4 = *(undefined1 *)(param_1 + ((CONCAT11(bVar7,bVar3) & 0x3fff) >> 6));
      *(undefined1 *)(iVar21 + 2) =
           *(undefined1 *)(param_1 + (((uint)bVar7 << 8 | (bVar1 & 0xf) << 0x10) >> 0xc));
      *(undefined1 *)(iVar21 + 1) = uVar4;
      *puVar12 = uVar2;
      puVar12 = puVar12 + 4;
    } while (uVar18 < uVar15);
  }
  uVar14 = uVar15 * 3;
  if (param_3 < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar14,param_3,param_3,&DAT_0188151c);
  }
  uVar18 = uVar15 * 4;
  if (param_5 < uVar15 << 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar18,param_5,param_5,&DAT_0188150c);
  }
  uVar20 = 0;
  uVar16 = 0;
  if (param_3 != uVar14) {
    param_3 = param_3 % 3;
    uVar13 = 0;
    pbVar11 = (byte *)(param_2 + uVar14);
    do {
      bVar1 = *pbVar11;
      uVar19 = uVar13 & 0x38;
      uVar22 = uVar19 - 0x20;
      uVar13 = uVar13 + 8;
      uVar14 = (uint)bVar1 << uVar19;
      if (-1 < (int)uVar22) {
        uVar14 = 0;
      }
      uVar20 = uVar14 | uVar20;
      uVar14 = (uint)(bVar1 >> (0x20 - uVar19 & 0xff));
      if (-1 < (int)uVar22) {
        uVar14 = (uint)bVar1 << (uVar22 & 0xff);
      }
      uVar16 = uVar14 | uVar16;
      param_3 = param_3 - 1;
      pbVar11 = pbVar11 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar18) {
    iVar21 = param_5 + uVar15 * -4;
    uVar14 = 0;
    puVar12 = (undefined1 *)(param_4 + uVar18);
    do {
      uVar18 = uVar14 & 0x3e;
      uVar14 = uVar14 + 6;
      uVar15 = uVar20 >> uVar18 | uVar16 << (0x20 - uVar18 & 0xff);
      if (-1 < (int)(uVar18 - 0x20)) {
        uVar15 = uVar16 >> (uVar18 - 0x20 & 0xff);
      }
      iVar21 = iVar21 + -1;
      *puVar12 = *(undefined1 *)(param_1 + (uVar15 & 0xff));
      puVar12 = puVar12 + 1;
    } while (iVar21 != 0);
  }
  return;
}

