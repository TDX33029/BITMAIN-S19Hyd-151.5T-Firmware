// FUN_00fd805c @ 00fd805c size=436 calls_out=1 calls_in=1
// strings: 

void FUN_00fd805c(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  
  uVar6 = param_3 / 3;
  if (2 < param_3) {
    puVar18 = (undefined1 *)(param_4 + 7);
    iVar10 = 0;
    iVar16 = 2;
    do {
      pbVar7 = (byte *)(param_2 + iVar16);
      bVar1 = *pbVar7;
      iVar16 = iVar16 + 3;
      uVar14 = (uint)pbVar7[-2];
      uVar2 = *(undefined1 *)(param_1 + (uint)(bVar1 >> 2));
      puVar18[-7] = *(undefined1 *)(param_1 + uVar14);
      iVar8 = param_4 + iVar10 * -8;
      *(undefined1 *)(iVar8 + 6) = uVar2;
      iVar5 = iVar10 * -3;
      iVar10 = iVar10 + -1;
      uVar12 = (uint)*(byte *)(param_2 + iVar5 + 1) << 8;
      uVar13 = (uint)bVar1 << 0x10;
      *(undefined1 *)(iVar8 + 3) = *(undefined1 *)(param_1 + ((uVar12 | uVar13 & 0x1ffff) >> 9));
      *(undefined1 *)(iVar8 + 4) = *(undefined1 *)(param_1 + ((uVar12 | uVar13 & 0xfffff) >> 0xc));
      uVar2 = *(undefined1 *)(param_1 + ((uVar12 & 0x3fff | uVar14) >> 6));
      uVar3 = *(undefined1 *)(param_1 + (uint)(bVar1 >> 5));
      uVar4 = *(undefined1 *)(param_1 + ((uVar12 | uVar13 & 0x7fffff) >> 0xf));
      *(undefined1 *)(iVar8 + 1) = *(undefined1 *)(param_1 + ((uVar12 & 0x7ff | uVar14) >> 3));
      *(undefined1 *)(iVar8 + 5) = uVar4;
      *(undefined1 *)(iVar8 + 2) = uVar2;
      *puVar18 = uVar3;
      puVar18 = puVar18 + 8;
    } while (-iVar10 != uVar6);
  }
  uVar12 = uVar6 * 3;
  if (param_3 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar12,param_3,param_3,&DAT_0188151c);
  }
  uVar13 = uVar6 * 8;
  if (param_5 < uVar6 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar13,param_5,param_5,&DAT_0188150c);
  }
  uVar14 = 0;
  uVar15 = 0;
  if (param_3 != uVar12) {
    param_3 = param_3 % 3;
    uVar9 = 0;
    pbVar7 = (byte *)(param_2 + uVar12);
    do {
      bVar1 = *pbVar7;
      uVar11 = uVar9 & 0x38;
      uVar17 = uVar11 - 0x20;
      uVar9 = uVar9 + 8;
      uVar12 = (uint)bVar1 << uVar11;
      if (-1 < (int)uVar17) {
        uVar12 = 0;
      }
      uVar14 = uVar12 | uVar14;
      uVar12 = (uint)(bVar1 >> (0x20 - uVar11 & 0xff));
      if (-1 < (int)uVar17) {
        uVar12 = (uint)bVar1 << (uVar17 & 0xff);
      }
      uVar15 = uVar12 | uVar15;
      param_3 = param_3 - 1;
      pbVar7 = pbVar7 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar13) {
    iVar10 = param_5 + uVar6 * -8;
    uVar6 = 0;
    puVar18 = (undefined1 *)(param_4 + uVar13);
    do {
      uVar13 = uVar6 & 0x3f;
      uVar6 = uVar6 + 3;
      uVar12 = uVar14 >> uVar13 | uVar15 << (0x20 - uVar13 & 0xff);
      if (-1 < (int)(uVar13 - 0x20)) {
        uVar12 = uVar15 >> (uVar13 - 0x20 & 0xff);
      }
      iVar10 = iVar10 + -1;
      *puVar18 = *(undefined1 *)(param_1 + (uVar12 & 0xff));
      puVar18 = puVar18 + 1;
    } while (iVar10 != 0);
  }
  return;
}

