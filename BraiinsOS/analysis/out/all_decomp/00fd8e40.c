// FUN_00fd8e40 @ 00fd8e40 size=736 calls_out=1 calls_in=1
// strings: 

void FUN_00fd8e40(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  
  uVar12 = param_3 / 0xc;
  uVar13 = param_3 / 3;
  if (0xb < param_3) {
    iVar20 = 0;
    puVar10 = (undefined1 *)(param_4 + 0xf);
    do {
      pbVar15 = (byte *)(param_2 + iVar20);
      bVar1 = *pbVar15;
      iVar20 = iVar20 + 0xc;
      bVar2 = pbVar15[4];
      bVar3 = pbVar15[3];
      bVar4 = pbVar15[2];
      bVar5 = pbVar15[1];
      uVar6 = *(undefined1 *)(param_1 + (uint)bVar4);
      puVar10[-0xf] = *(undefined1 *)(param_1 + (uint)(bVar1 >> 2));
      puVar10[-0xc] = uVar6;
      uVar6 = *(undefined1 *)(param_1 + (((uint)bVar2 << 8 | (bVar3 & 0xf) << 0x10) >> 0xc));
      uVar7 = *(undefined1 *)(param_1 + (((uint)bVar5 << 8 | (bVar1 & 0xf) << 0x10) >> 0xc));
      uVar8 = *(undefined1 *)(param_1 + ((CONCAT11(bVar5,bVar4) & 0x3fff) >> 6));
      puVar10[-0xb] = *(undefined1 *)(param_1 + (uint)(bVar3 >> 2));
      bVar1 = pbVar15[5];
      puVar10[-0xe] = uVar7;
      puVar10[-0xd] = uVar8;
      bVar3 = pbVar15[8];
      uVar7 = *(undefined1 *)(param_1 + ((CONCAT11(bVar2,bVar1) & 0x3fff) >> 6));
      puVar10[-8] = *(undefined1 *)(param_1 + (uint)bVar1);
      puVar10[-9] = uVar7;
      bVar1 = pbVar15[6];
      bVar2 = pbVar15[7];
      puVar10[-10] = uVar6;
      bVar4 = pbVar15[9];
      puVar10[-7] = *(undefined1 *)(param_1 + (uint)(bVar1 >> 2));
      puVar10[-4] = *(undefined1 *)(param_1 + (uint)bVar3);
      uVar6 = *(undefined1 *)(param_1 + (uint)(bVar4 >> 2));
      bVar5 = pbVar15[0xb];
      puVar10[-6] = *(undefined1 *)(param_1 + (((uint)bVar2 << 8 | (bVar1 & 0xf) << 0x10) >> 0xc));
      bVar1 = pbVar15[10];
      puVar10[-5] = *(undefined1 *)(param_1 + ((CONCAT11(bVar2,bVar3) & 0x3fff) >> 6));
      uVar7 = *(undefined1 *)(param_1 + (((uint)bVar1 << 8 | (bVar4 & 0xf) << 0x10) >> 0xc));
      uVar8 = *(undefined1 *)(param_1 + (uint)bVar5);
      uVar9 = *(undefined1 *)(param_1 + ((CONCAT11(bVar1,bVar5) & 0x3fff) >> 6));
      puVar10[-3] = uVar6;
      puVar10[-1] = uVar9;
      puVar10[-2] = uVar7;
      *puVar10 = uVar8;
      puVar10 = puVar10 + 0x10;
    } while (uVar12 * 0xc != iVar20);
  }
  uVar16 = uVar13 & 0x3ffffffc;
  if (uVar16 != uVar13) {
    uVar14 = uVar12 * 0xc | 2;
    puVar10 = (undefined1 *)(param_4 + uVar12 * 0x10 + 3);
    do {
      pbVar15 = (byte *)(param_2 + uVar14);
      bVar1 = *pbVar15;
      uVar14 = uVar14 + 3;
      bVar2 = pbVar15[-2];
      uVar6 = *(undefined1 *)(param_1 + (uint)bVar1);
      puVar10[-3] = *(undefined1 *)(param_1 + (uint)(bVar2 >> 2));
      bVar3 = *(byte *)(param_2 + uVar16 * 3 + 1);
      iVar20 = param_4 + uVar16 * 4;
      uVar16 = uVar16 + 1;
      uVar7 = *(undefined1 *)(param_1 + (((uint)bVar3 << 8 | (bVar2 & 0xf) << 0x10) >> 0xc));
      *(undefined1 *)(iVar20 + 2) =
           *(undefined1 *)(param_1 + ((CONCAT11(bVar3,bVar1) & 0x3fff) >> 6));
      *(undefined1 *)(iVar20 + 1) = uVar7;
      *puVar10 = uVar6;
      puVar10 = puVar10 + 4;
    } while (uVar16 < uVar13);
  }
  uVar12 = uVar13 * 3;
  if (param_3 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar12,param_3,param_3,&DAT_0188151c);
  }
  uVar16 = uVar13 * 4;
  if (param_5 < uVar13 << 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar16,param_5,param_5,&DAT_0188150c);
  }
  uVar18 = 0;
  uVar14 = 0;
  if (param_3 != uVar12) {
    param_3 = param_3 % 3;
    uVar11 = 0x10;
    pbVar15 = (byte *)(param_2 + uVar12);
    do {
      bVar1 = *pbVar15;
      uVar17 = uVar11 & 0x38;
      uVar19 = uVar17 - 0x20;
      uVar11 = uVar11 - 8;
      uVar12 = (uint)bVar1 << uVar17;
      if (-1 < (int)uVar19) {
        uVar12 = 0;
      }
      uVar18 = uVar12 | uVar18;
      uVar12 = (uint)(bVar1 >> (0x20 - uVar17 & 0xff));
      if (-1 < (int)uVar19) {
        uVar12 = (uint)bVar1 << (uVar19 & 0xff);
      }
      uVar14 = uVar12 | uVar14;
      param_3 = param_3 - 1;
      pbVar15 = pbVar15 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar16) {
    iVar20 = param_5 + uVar13 * -4;
    uVar12 = 0x12;
    puVar10 = (undefined1 *)(param_4 + uVar16);
    do {
      uVar16 = uVar12 & 0x3e;
      uVar12 = uVar12 - 6;
      uVar13 = uVar18 >> uVar16 | uVar14 << (0x20 - uVar16 & 0xff);
      if (-1 < (int)(uVar16 - 0x20)) {
        uVar13 = uVar14 >> (uVar16 - 0x20 & 0xff);
      }
      iVar20 = iVar20 + -1;
      *puVar10 = *(undefined1 *)(param_1 + (uVar13 & 0xff));
      puVar10 = puVar10 + 1;
    } while (iVar20 != 0);
  }
  return;
}

