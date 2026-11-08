// FUN_00fd8218 @ 00fd8218 size=416 calls_out=1 calls_in=1
// strings: 

void FUN_00fd8218(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  
  uVar8 = param_3 / 3;
  if (2 < param_3) {
    puVar20 = (undefined1 *)(param_4 + 7);
    iVar12 = 0;
    iVar18 = 2;
    do {
      pbVar9 = (byte *)(param_2 + iVar18);
      bVar1 = *pbVar9;
      iVar18 = iVar18 + 3;
      bVar2 = pbVar9[-2];
      uVar3 = *(undefined1 *)(param_1 + (uint)(bVar2 >> 2));
      puVar20[-7] = *(undefined1 *)(param_1 + (uint)(bVar2 >> 5));
      iVar10 = param_4 + iVar12 * -8;
      *(undefined1 *)(iVar10 + 1) = uVar3;
      iVar6 = iVar12 * -3;
      iVar12 = iVar12 + -1;
      uVar7 = CONCAT11(*(undefined1 *)(param_2 + iVar6 + 1),bVar1);
      *(undefined1 *)(iVar10 + 5) = *(undefined1 *)(param_1 + ((uVar7 & 0x3fff) >> 6));
      *(undefined1 *)(iVar10 + 6) = *(undefined1 *)(param_1 + ((uVar7 & 0x7ff) >> 3));
      uVar14 = (uint)CONCAT12(bVar2,uVar7);
      uVar3 = *(undefined1 *)(param_1 + ((uVar14 & 0x1ffff) >> 9));
      uVar4 = *(undefined1 *)(param_1 + (uint)bVar1);
      uVar5 = *(undefined1 *)(param_1 + ((uVar14 & 0x7fffff) >> 0xf));
      *(undefined1 *)(iVar10 + 3) = *(undefined1 *)(param_1 + ((uVar14 & 0xfffff) >> 0xc));
      *(undefined1 *)(iVar10 + 2) = uVar5;
      *(undefined1 *)(iVar10 + 4) = uVar3;
      *puVar20 = uVar4;
      puVar20 = puVar20 + 8;
    } while (-iVar12 != uVar8);
  }
  uVar14 = uVar8 * 3;
  if (param_3 < uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar14,param_3,param_3,&DAT_0188151c);
  }
  uVar15 = uVar8 * 8;
  if (param_5 < uVar8 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar15,param_5,param_5,&DAT_0188150c);
  }
  uVar16 = 0;
  uVar17 = 0;
  if (param_3 != uVar14) {
    param_3 = param_3 % 3;
    uVar11 = 0x10;
    pbVar9 = (byte *)(param_2 + uVar14);
    do {
      bVar1 = *pbVar9;
      uVar13 = uVar11 & 0x38;
      uVar19 = uVar13 - 0x20;
      uVar11 = uVar11 - 8;
      uVar14 = (uint)bVar1 << uVar13;
      if (-1 < (int)uVar19) {
        uVar14 = 0;
      }
      uVar16 = uVar14 | uVar16;
      uVar14 = (uint)(bVar1 >> (0x20 - uVar13 & 0xff));
      if (-1 < (int)uVar19) {
        uVar14 = (uint)bVar1 << (uVar19 & 0xff);
      }
      uVar17 = uVar14 | uVar17;
      param_3 = param_3 - 1;
      pbVar9 = pbVar9 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar15) {
    iVar12 = param_5 + uVar8 * -8;
    uVar8 = 0x15;
    puVar20 = (undefined1 *)(param_4 + uVar15);
    do {
      uVar15 = uVar8 & 0x3f;
      uVar8 = uVar8 - 3;
      uVar14 = uVar16 >> uVar15 | uVar17 << (0x20 - uVar15 & 0xff);
      if (-1 < (int)(uVar15 - 0x20)) {
        uVar14 = uVar17 >> (uVar15 - 0x20 & 0xff);
      }
      iVar12 = iVar12 + -1;
      *puVar20 = *(undefined1 *)(param_1 + (uVar14 & 0xff));
      puVar20 = puVar20 + 1;
    } while (iVar12 != 0);
  }
  return;
}

